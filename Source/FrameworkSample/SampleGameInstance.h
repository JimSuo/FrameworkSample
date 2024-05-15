// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/GameInstance.h"
#include "LuaState.h"

#include "SampleGameInstance.generated.h"

/**
 * 实例游戏单例
 */
UCLASS()
class FRAMEWORKSAMPLE_API USampleGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	USampleGameInstance();
	
    virtual void Init() override;
	virtual void Shutdown() override;

private:
	// 创建Lua虚拟机
	void CreateLuaState();
	// 关闭Lua虚拟机
	void CloseLuaState();

	// Lua初始化回调
	void LuaStateInitCallback(NS_SLUA::lua_State* L);
	
	// Lua虚拟机对象
	NS_SLUA::LuaState* LuaState;
};
