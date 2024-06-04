// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/BuildSerializationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDSYSTEMRUNTIME_BuildSerializationSubsystem_generated_h
#error "BuildSerializationSubsystem.generated.h already included, missing '#pragma once' in BuildSerializationSubsystem.h"
#endif
#define BUILDSYSTEMRUNTIME_BuildSerializationSubsystem_generated_h

#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildSerializationSubsystem(); \
	friend struct Z_Construct_UClass_UBuildSerializationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBuildSerializationSubsystem, ULuaWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBuildSerializationSubsystem)


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildSerializationSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuildSerializationSubsystem(UBuildSerializationSubsystem&&); \
	UBuildSerializationSubsystem(const UBuildSerializationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildSerializationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildSerializationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuildSerializationSubsystem) \
	NO_API virtual ~UBuildSerializationSubsystem();


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_14_PROLOG
#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<class UBuildSerializationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
