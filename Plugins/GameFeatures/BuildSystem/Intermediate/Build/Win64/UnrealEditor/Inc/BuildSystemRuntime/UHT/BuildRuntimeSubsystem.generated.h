// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/BuildRuntimeSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDSYSTEMRUNTIME_BuildRuntimeSubsystem_generated_h
#error "BuildRuntimeSubsystem.generated.h already included, missing '#pragma once' in BuildRuntimeSubsystem.h"
#endif
#define BUILDSYSTEMRUNTIME_BuildRuntimeSubsystem_generated_h

#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildRuntimeSubsystem(); \
	friend struct Z_Construct_UClass_UBuildRuntimeSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBuildRuntimeSubsystem, ULuaWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBuildRuntimeSubsystem)


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildRuntimeSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuildRuntimeSubsystem(UBuildRuntimeSubsystem&&); \
	UBuildRuntimeSubsystem(const UBuildRuntimeSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildRuntimeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildRuntimeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuildRuntimeSubsystem) \
	NO_API virtual ~UBuildRuntimeSubsystem();


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_15_PROLOG
#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<class UBuildRuntimeSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
