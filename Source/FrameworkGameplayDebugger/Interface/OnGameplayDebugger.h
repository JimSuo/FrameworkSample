// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnGameplayDebugger.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UOnGameplayDebugger : public UInterface
{
	GENERATED_BODY()
};

/**
 * 向FrameworkGameplayDebugger动态添加信息函数的接口
 */
class FRAMEWORKGAMEPLAYDEBUGGER_API IOnGameplayDebugger
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent)
	TArray<FString> OnGameplayDebugger();
};
