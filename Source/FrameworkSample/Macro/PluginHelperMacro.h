#pragma once

/// 构造基于Plugin的Lua文件相对路径
/// @param plugin_name plugin名称
#define GET_PLUGIN_LUA_PATH(plugin_name)\
	virtual FString GetGameFeatureLuaFilePath_Implementation() override\
	{\
		if (!LuaFilePath.IsEmpty())\
		{\
			return TEXT("$")#plugin_name"/Content/Lua/" + LuaFilePath;\
		}\
		return LuaFilePath;\
	}
