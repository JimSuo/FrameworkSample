#pragma once

/// 获取基于GameFeature的Lua文件相对路径
/// @param game_feature_name GameFeature名称
#define GET_GAME_FEATURE_LUA_PATH(game_feature_name)\
	virtual FString GetGameFeatureLuaFilePath_Implementation() override\
	{\
		if (!LuaFilePath.IsEmpty())\
		{\
			return TEXT("$GameFeatures/")#game_feature_name"/Content/Lua/" + LuaFilePath;\
		}\
		return LuaFilePath;\
	}
