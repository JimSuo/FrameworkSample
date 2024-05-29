// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaWorldSubsystem.h"

ULuaWorldSubsystem::ULuaWorldSubsystem()
{
	
}

FString ULuaWorldSubsystem::GetLuaFilePath_Implementation() const
{
	return LuaFilePath;
}
