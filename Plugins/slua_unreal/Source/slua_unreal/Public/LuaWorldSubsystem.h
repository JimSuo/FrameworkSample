// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaOverriderInterface.h"
#include "Subsystems/WorldSubsystem.h"
#include "LuaWorldSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SLUA_UNREAL_API ULuaWorldSubsystem : public ULocalPlayerSubsystem, public ILuaOverriderInterface
{
	GENERATED_BODY()

public:
	ULuaWorldSubsystem();
	FString GetLuaFilePath_Implementation() const override;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "slua")
	FString LuaFilePath;
};
