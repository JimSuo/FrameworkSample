// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuildSystemRuntimeModule.h"

#include "GameplayDebugger.h"
#include "GameplayDebuggerCategory_BuildSystem.h"

#define LOCTEXT_NAMESPACE "FBuildSystemRuntimeModule"

const FName FBuildSystemRuntimeModule::GameplayDebuggerName = FName(TEXT("GameFeature.BuildSystem"));

void FBuildSystemRuntimeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory;
	// the exact timing is specified in the .uplugin file per-module
#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
	GameplayDebuggerModule.RegisterCategory(FBuildSystemRuntimeModule::GameplayDebuggerName,
	                                        IGameplayDebugger::FOnGetCategory::CreateStatic(
		                                        &FGameplayDebuggerCategory_BuildSystem::MakeInstance),
	                                        EGameplayDebuggerCategoryState::EnabledInGameAndSimulate);
#endif
}

void FBuildSystemRuntimeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.
	// For modules that support dynamic reloading, we call this function before unloading the module.
#if WITH_GAMEPLAY_DEBUGGER
	IGameplayDebugger& GameplayDebuggerModule = IGameplayDebugger::Get();
	GameplayDebuggerModule.UnregisterCategory(FBuildSystemRuntimeModule::GameplayDebuggerName);
#endif
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBuildSystemRuntimeModule, BuildSystemRuntime)
