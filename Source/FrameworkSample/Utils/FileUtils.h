#pragma once

/**
 * 文件工具类
 */
class FileUtils
{
public:
	/**
	 * @brief 读取文件内容
	 * @param PlatformFile 文件读写的接口引用
	 * @param path 路径
	 * @param len 长度
	 * @return 结果缓冲区
	 */
	static uint8* ReadFile(IPlatformFile& PlatformFile, FString path, uint32& len)
	{
		IFileHandle* FileHandle = PlatformFile.OpenRead(*path);
		if (FileHandle != nullptr)
		{
			len = static_cast<uint32>(FileHandle->Size());
			uint8* buf = new uint8[len];

			FileHandle->Read(buf, len);

			// Close the file again
			delete FileHandle;

			return buf;
		}

		return nullptr;
	}

	// Set scan path
	static TArray<uint8> SetScanPath(const char* Fn, FString& FilePath)
	{
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
 		FString Path;
		FString Filename = UTF8_TO_TCHAR(Fn);
		// 获取LuaFilePath前缀, 并根据前缀判断是否为插件或GameFeature
		const auto& FirstMask = Filename[0];
		if (FirstMask != '$' && FirstMask != '#')
		{
			Path = FPaths::ProjectContentDir() /= TEXT("Lua");
			Path /= Filename.Replace(TEXT("."), TEXT("/"));	
		}
		// 插件(带有$标识前缀)
		else if (FirstMask == '$')
		{
			// 移除标识
			Filename.RemoveAt(0);
			Path = FPaths::ProjectPluginsDir();
			Path /= Filename.Replace(TEXT("."), TEXT("/"));
		}
		// GameFeature(带有#标识前缀)
		else if (FirstMask == '#')
		{
			// 移除标识
			Filename.RemoveAt(0);
			Path = FPaths::ProjectPluginsDir() /= TEXT("GameFeatures");
			Path /= Filename.Replace(TEXT("."), TEXT("/"));
		}

		TArray<uint8> Content;

		// 遍历添加 .lua & .luac 后缀
		TArray<FString> LuaExts = {UTF8_TO_TCHAR(".lua"), UTF8_TO_TCHAR(".luac")};
		for (auto& It : LuaExts)
		{
			auto FullPath = Path + *It;

			// 将文件内容加载到content中
			FFileHelper::LoadFileToArray(Content, *FullPath);
			if (Content.Num() > 0)
			{
				FilePath = FullPath;
				return MoveTemp(Content);
			}
		}

		return MoveTemp(Content);
	}
};
