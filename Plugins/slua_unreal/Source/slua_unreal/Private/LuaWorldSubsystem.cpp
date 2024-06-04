// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaWorldSubsystem.h"

ULuaWorldSubsystem::ULuaWorldSubsystem()
{
	
}

FString ULuaWorldSubsystem::GetLuaFilePath_Implementation() const
{
	return LuaFilePath;
}

void ULuaWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	OnInitialize();
}

void ULuaWorldSubsystem::Deinitialize()
{
	Super::Deinitialize();
	OnDeinitialize();
}
