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

	/**
	 * @brief 加载Lua文件
	 * @param InFn Lua对象的LuaFilePath 
	 * @param OutFilePath Lua脚本的绝对路径 
	 * @return LuaContent 
	 */
	static TArray<uint8> LoadLuaFile(const char* InFn, FString& OutFilePath)
	{
		// TODO::Platform related, need remove?
		// IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

		// 文件名, 即LuaFilePath
		FString Filename = UTF8_TO_TCHAR(InFn);
		// 获取LuaFilePath前缀, 并根据前缀判断是否为插件或GameFeature
		const auto& FirstMask = Filename[0];
		FString Path;
		// 项目内的Lua脚本(不带有$标识前缀)
		if (FirstMask != '$')
		{
			Path = FPaths::ProjectContentDir() /= TEXT("Lua");
		}
		// 插件/GameFeature(带有$标识前缀)
		else
		{
			// 移除标识
			Filename.RemoveAt(0);
			Path = FPaths::ProjectPluginsDir();
		}
		// 路径拼接
		Path /= Filename.Replace(TEXT("."), TEXT("/"));
		
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
				OutFilePath = FullPath;
				return MoveTemp(Content);
			}
		}

		return MoveTemp(Content);
	}
};
