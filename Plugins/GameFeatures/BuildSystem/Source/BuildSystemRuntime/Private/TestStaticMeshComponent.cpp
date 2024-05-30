// Fill out your copyright notice in the Description page of Project Settings.


#include "TestStaticMeshComponent.h"

#include "FrameworkSample/Macro/GameFeatureHelperMacro.h"

UTestStaticMeshComponent::UTestStaticMeshComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

FString UTestStaticMeshComponent::GetLuaFilePath_Implementation() const
{
	return CONSTRUCT_GAME_FEATURE_LUA_PATH(BuildSystem);
}
