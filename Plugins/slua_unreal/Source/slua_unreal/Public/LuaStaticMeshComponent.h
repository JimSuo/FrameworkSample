// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaNetSerialization.h"
#include "LuaOverriderInterface.h"
#include "Components/StaticMeshComponent.h"
#include "LuaStaticMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class SLUA_UNREAL_API ULuaStaticMeshComponent : public UStaticMeshComponent, public ILuaOverriderInterface
{
	GENERATED_BODY()
public:
	ULuaStaticMeshComponent(const FObjectInitializer& ObjectInitializer);
	
	FString GetLuaFilePath_Implementation() const override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(Blueprintcallable)
	void RegistLuaTick(float TickInterval);

	UFUNCTION(Blueprintcallable)
	void UnRegistLuaTick();

	virtual void InitializeComponent() override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated)
	FLuaNetSerialization LuaNetSerialization;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "slua")
	FString LuaFilePath;

private:
	bool EnableLuaTick;
};
