#pragma once

/// 构造基于GameFeature的Lua文件相对路径
/// @param game_feature_name GameFeature名称
#define CONSTRUCT_GAME_FEATURE_LUA_PATH(game_feature_name)\
	TEXT("$GameFeatures/")#game_feature_name"/Content/Lua/" + Super::GetLuaFilePath_Implementation()
