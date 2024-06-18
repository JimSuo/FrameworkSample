// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaWorldSubsystem.h"
#include "FrameworkSample/Macro/GameFeatureHelperMacro.h"
#include "Subsystems/WorldSubsystem.h"
#include "BuildSerializationSubsystem.generated.h"

/**
 * 建造序列化子系统
 */
UCLASS()
class BUILDSYSTEMRUNTIME_API UBuildSerializationSubsystem : public ULuaWorldSubsystem
{
	GENERATED_BODY()

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	GET_GAME_FEATURE_LUA_PATH(BuildSystem)
};
