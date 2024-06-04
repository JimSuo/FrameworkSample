// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FrameworkSample/Macro/GameFeatureHelperMacro.h"
#include "Subsystems/WorldSubsystem.h"
#include "LuaWorldSubsystem.h"
#include "CoreMinimal.h"

#include "BuildRuntimeSubsystem.generated.h"

/**
 * 负责处理编辑系统运行时的一切逻辑
 */
UCLASS()
class BUILDSYSTEMRUNTIME_API UBuildRuntimeSubsystem : public ULuaWorldSubsystem
{
	GENERATED_BODY()

public:
	void StartBuild();
	
	GET_GAME_FEATURE_LUA_PATH(BuildSystem)
};
