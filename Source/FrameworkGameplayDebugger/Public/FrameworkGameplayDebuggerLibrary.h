// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FrameworkGameplayDebuggerLibrary.generated.h"

// GameplayDebug进行时执行的事件
DECLARE_DYNAMIC_DELEGATE_RetVal(TArray<FString>, FOnGameplayDebug);

/**
 * 
 */
UCLASS()
class FRAMEWORKGAMEPLAYDEBUGGER_API UFrameworkGameplayDebuggerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// 从蓝图方法库添加的Lambda绑定的统一LambdaTag
	static const FName FrameworkGameplayDebuggerLibraryLambdaTag;
	
	// 添加自定义GameplayDebugger信息
	UFUNCTION(BlueprintCallable, Category="Framework | GameplayDebugger", meta=(DisplayName = "Add Custom Gameplay Debugger"))
	static void AddCustomGameplayDebugger(UObject* InObject, FOnGameplayDebug OnGameplayDebugDo, bool& OutResult);
	// 移除自定义GameplayDebugger信息
	UFUNCTION(BlueprintCallable, Category="Framework | GameplayDebugger", meta=(DisplayName = "Remove Custom Gameplay Debugger"))
	static void RemoveCustomGameplayDebugger(UObject* InObject, bool& OutResult);
};
