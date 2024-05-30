// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildRuntimeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDSYSTEMRUNTIME_BuildRuntimeComponent_generated_h
#error "BuildRuntimeComponent.generated.h already included, missing '#pragma once' in BuildRuntimeComponent.h"
#endif
#define BUILDSYSTEMRUNTIME_BuildRuntimeComponent_generated_h

#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildRuntimeComponent(); \
	friend struct Z_Construct_UClass_UBuildRuntimeComponent_Statics; \
public: \
	DECLARE_CLASS(UBuildRuntimeComponent, ULuaActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBuildRuntimeComponent)


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuildRuntimeComponent(UBuildRuntimeComponent&&); \
	UBuildRuntimeComponent(const UBuildRuntimeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildRuntimeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildRuntimeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildRuntimeComponent) \
	NO_API virtual ~UBuildRuntimeComponent();


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_10_PROLOG
#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<class UBuildRuntimeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
