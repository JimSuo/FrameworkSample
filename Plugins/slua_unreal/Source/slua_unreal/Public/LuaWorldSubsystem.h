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
UCLASS(Abstract)
class SLUA_UNREAL_API ULuaWorldSubsystem : public UWorldSubsystem, public ILuaOverriderInterface
{
	GENERATED_BODY()

public:
	ULuaWorldSubsystem();
	FString GetLuaFilePath_Implementation() const override;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;


protected:
	UFUNCTION(BlueprintCallable)
	virtual void OnInitialize() { ; }
	UFUNCTION(BlueprintCallable)
	virtual void OnDeinitialize() { ; }
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "slua")
	FString LuaFilePath;
};
