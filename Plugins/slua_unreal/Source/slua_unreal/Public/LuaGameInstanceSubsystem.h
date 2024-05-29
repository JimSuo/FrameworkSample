// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaOverriderInterface.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LuaGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SLUA_UNREAL_API ULuaGameInstanceSubsystem : public UGameInstanceSubsystem, public ILuaOverriderInterface
{
	GENERATED_BODY()

public:
	ULuaGameInstanceSubsystem();
	FString GetLuaFilePath_Implementation() const override;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "slua")
	FString LuaFilePath;
};
