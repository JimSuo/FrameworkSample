// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildRuntimeComponent.h"

#include "FrameworkSample/Macro/GameFeatureHelperMacro.h"


// Sets default values for this component's properties
UBuildRuntimeComponent::UBuildRuntimeComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

FString UBuildRuntimeComponent::GetLuaFilePath_Implementation() const
{
	return CONSTRUCT_GAME_FEATURE_LUA_PATH(BuildSystem);
}


// Called when the game starts
void UBuildRuntimeComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UBuildRuntimeComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

