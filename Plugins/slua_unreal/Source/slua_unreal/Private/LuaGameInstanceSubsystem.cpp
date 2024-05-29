// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaGameInstanceSubsystem.h"

ULuaGameInstanceSubsystem::ULuaGameInstanceSubsystem()
{
}

FString ULuaGameInstanceSubsystem::GetLuaFilePath_Implementation() const
{
	return LuaFilePath;
}
