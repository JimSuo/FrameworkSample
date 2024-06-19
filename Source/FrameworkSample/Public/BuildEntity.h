// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"
#include "GameFramework/Actor.h"
#include "BuildEntity.generated.h"

UCLASS()
class FRAMEWORKSAMPLE_API ABuildEntity : public ALuaActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuildEntity();

protected:
	// virtual TArray<FString> OnGameplayDebugger_Implementation() override;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	TArray<FString> TestDebugFunc();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
