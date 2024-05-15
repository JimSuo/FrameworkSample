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
};
