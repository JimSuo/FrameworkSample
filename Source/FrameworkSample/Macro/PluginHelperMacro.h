#pragma once

/// 构造基于Plugin的Lua文件相对路径
/// @param plugin_name plugin名称
#define CONSTRUCT_PLUGIN_LUA_PATH(plugin_name)\
	#plugin_name"/Content/Lua/" + Super::GetLuaFilePath_Implementation()
