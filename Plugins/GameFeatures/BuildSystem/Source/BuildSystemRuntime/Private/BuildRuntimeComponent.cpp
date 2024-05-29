// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildRuntimeComponent.h"


// Sets default values for this component's properties
UBuildRuntimeComponent::UBuildRuntimeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBuildRuntimeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	NS_SLUA::LuaState* ls = NS_SLUA::LuaState::get(GetWorld()->GetGameInstance());
}


// Called every frame
void UBuildRuntimeComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

