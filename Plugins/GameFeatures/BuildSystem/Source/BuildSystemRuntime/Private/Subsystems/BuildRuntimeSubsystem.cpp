// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/BuildRuntimeSubsystem.h"

int32 UBuildRuntimeSubsystem::Test = 1234;

UBuildRuntimeSubsystem::UBuildRuntimeSubsystem()
{
	LuaFilePath = "BuildRuntimeSubsystem";
	REG_EXTENSION_METHOD(UBuildRuntimeSubsystem, "StartBuild", &UBuildRuntimeSubsystem::StartBuild)
}

void UBuildRuntimeSubsystem::OnInitialize()
{
	Super::OnInitialize();
	UE_LOG(LogTemp, Warning, TEXT("BuildSubsystem has been initialize"));
}

void UBuildRuntimeSubsystem::OnDeinitialize()
{
	Super::OnDeinitialize();
}

void UBuildRuntimeSubsystem::StartBuild()
{
	UE_LOG(LogTemp, Warning, TEXT("Start buiuld with lua!!!"));
}
