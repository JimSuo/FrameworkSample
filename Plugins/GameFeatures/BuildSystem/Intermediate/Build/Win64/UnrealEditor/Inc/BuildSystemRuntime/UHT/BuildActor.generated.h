// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDSYSTEMRUNTIME_BuildActor_generated_h
#error "BuildActor.generated.h already included, missing '#pragma once' in BuildActor.h"
#endif
#define BUILDSYSTEMRUNTIME_BuildActor_generated_h

#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildActor(); \
	friend struct Z_Construct_UClass_ABuildActor_Statics; \
public: \
	DECLARE_CLASS(ABuildActor, ALuaActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(ABuildActor)


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABuildActor(ABuildActor&&); \
	ABuildActor(const ABuildActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildActor) \
	NO_API virtual ~ABuildActor();


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_10_PROLOG
#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<class ABuildActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
