// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaWorldSubsystem.h"

ULuaWorldSubsystem::ULuaWorldSubsystem()
{
	
}

FString ULuaWorldSubsystem::GetLuaFilePath_Implementation() const
{
	return LuaFilePath;
}

bool ULuaWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	// Lua函数拓展
	// REG_EXTENSION_METHOD(ULuaWorldSubsystem, "initialize", &ULuaWorldSubsystem::OnInitialize)
	// REG_EXTENSION_METHOD(ULuaWorldSubsystem, "deinitialize", &ULuaWorldSubsystem::OnDeinitialize)

	// 给UObjectWidget增加名为RemoveWidget函数，自己实现
	
	return Super::ShouldCreateSubsystem(Outer);
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
