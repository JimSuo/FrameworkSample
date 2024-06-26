// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/WidgetComponent.h"

#include "FrameworkWidgetComponent.generated.h"

/**
 * 框架的WidgetComponent
 * TODO::3DUI的优先级低于2D
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FRAMEWORKUMG_API UFrameworkWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFrameworkWidgetComponent(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
