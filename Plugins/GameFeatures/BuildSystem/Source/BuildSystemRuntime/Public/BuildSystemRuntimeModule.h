// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FBuildSystemRuntimeModule : public IModuleInterface
{
public:
#if WITH_GAMEPLAY_DEBUGGER
	static const FName GameplayDebuggerName;
#endif
	//~IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//~End of IModuleInterface
};
