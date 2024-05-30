// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActorComponent.h"
#include "BuildRuntimeComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BUILDSYSTEMRUNTIME_API UBuildRuntimeComponent : public ULuaActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBuildRuntimeComponent(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
