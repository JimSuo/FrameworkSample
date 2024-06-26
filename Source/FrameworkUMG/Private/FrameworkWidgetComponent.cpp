// Fill out your copyright notice in the Description page of Project Settings.


#include "FrameworkWidgetComponent.h"

UFrameworkWidgetComponent::UFrameworkWidgetComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UFrameworkWidgetComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFrameworkWidgetComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                              FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

