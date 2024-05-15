#pragma once
#include "Log.h"
#include "slua_unreal/Public/lua/lua.hpp"

/**
 * Log打印工具类
 */
class LogUtils
{
public:
	/**
	 * @brief 打印Log
	 * @param L 状态机指针引用
	 * @return 
	 */
	static int32 PrintLog(NS_SLUA::lua_State* L)
	{
		FString Str;
		size_t Len;
		const char* S = luaL_tolstring(L, 1, &Len);
		if (S) Str += UTF8_TO_TCHAR(S);
		NS_SLUA::Log::Log("PrintLog %s", TCHAR_TO_UTF8(*Str));
		return 0;
	}
};
