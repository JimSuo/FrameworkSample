// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"

#include "BuildActor.generated.h"

UCLASS()
class BUILDSYSTEMRUNTIME_API ABuildActor : public ALuaActor
{
	GENERATED_BODY()

public:
	ABuildActor(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
