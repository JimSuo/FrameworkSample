// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaStaticMeshComponent.h"
#include "FrameworkSample/Macro/GameFeatureHelperMacro.h"
#include "TestStaticMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class BUILDSYSTEMRUNTIME_API UTestStaticMeshComponent : public ULuaStaticMeshComponent
{
	GENERATED_BODY()

public:
	UTestStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintNativeEvent)
	void LuaCallTest();

	void LuaCallCppFuncTest();
	
	GET_GAME_FEATURE_LUA_PATH(BuildSystem)
};
