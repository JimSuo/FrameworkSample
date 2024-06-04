// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaOverriderInterface.h"
#include "Subsystems/WorldSubsystem.h"
using namespace slua;
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

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnInitialize();
	UFUNCTION(BlueprintImplementableEvent)
	void OnDeinitialize();
	
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "slua")
	FString LuaFilePath;

	// REG_EXTENSION_METHOD(ULuaWorldSubsystem, "initialize", &ULuaWorldSubsystem::Initialize)
};
