// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleGameInstance.h"

#include "Utils/FileUtils.h"
#include "Utils/LogUtils.h"

USampleGameInstance::USampleGameInstance() : LuaState(nullptr)
{
	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		CreateLuaState();
	}
}

void USampleGameInstance::Init()
{
	Super::Init();
}

void USampleGameInstance::Shutdown()
{
	CloseLuaState();
	
	Super::Shutdown();
}

slua::LuaState* USampleGameInstance::GetLuaState() const
{
	return LuaState;
}

void USampleGameInstance::CreateLuaState()
{
	NS_SLUA::LuaState::onInitEvent.AddUObject(this, &USampleGameInstance::LuaStateInitCallback);
	// 确保LuaState为未初始化状态
	CloseLuaState();
	// 创建Lua虚拟机
	LuaState = new NS_SLUA::LuaState("SLuaMainState", this);
	// Core lua file
	LuaState->setLoadFileDelegate(FileUtils::LoadLuaFile);
	LuaState->init();	
}

void USampleGameInstance::CloseLuaState()
{
	if (LuaState != nullptr)
	{
		LuaState->close();
		delete LuaState;
		LuaState = nullptr;
	}
}

void USampleGameInstance::LuaStateInitCallback(slua::lua_State* L)
{
 	lua_pushcfunction(L, LogUtils::PrintLog);
	slua::lua_setglobal(L, "LogUtils::PrintLog");
}
