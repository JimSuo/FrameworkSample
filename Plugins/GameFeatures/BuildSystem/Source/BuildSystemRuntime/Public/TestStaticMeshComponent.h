// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaStaticMeshComponent.h"
#include "TestStaticMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class BUILDSYSTEMRUNTIME_API UTestStaticMeshComponent : public ULuaStaticMeshComponent
{
	GENERATED_BODY()
	
	UTestStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

	virtual FString GetLuaFilePath_Implementation() const override;
};
