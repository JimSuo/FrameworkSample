// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleGameInstance.h"

#include "Utils.h"
#include "Utils/LogUtils.h"

USampleGameInstance::USampleGameInstance() : LuaState(nullptr)
{
	if (HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
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
	Super::Shutdown();
	
}

void USampleGameInstance::CreateLuaState()
{
	NS_SLUA::LuaState::onInitEvent.AddUObject(this, &USampleGameInstance::LuaStateInitCallback);
	// 确保LuaState为未初始化状态
	CloseLuaState();
	LuaState = new NS_SLUA::LuaState("SLuaMainState", this);
	LuaState->setLoadFileDelegate([](const char* fn, FString& filepath)->TArray<uint8> {

		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		FString path = FPaths::ProjectContentDir();
		FString filename = UTF8_TO_TCHAR(fn);
		path /= "Lua";
		path /= filename.Replace(TEXT("."), TEXT("/"));

		TArray<uint8> Content;
		TArray<FString> luaExts = { UTF8_TO_TCHAR(".lua"), UTF8_TO_TCHAR(".luac") };
		for (auto& it : luaExts) {
			auto fullPath = path + *it;

			FFileHelper::LoadFileToArray(Content, *fullPath);
			if (Content.Num() > 0) {
				filepath = fullPath;
				return MoveTemp(Content);
			}
		}

		return MoveTemp(Content);
	});
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
