// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DecorationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BUILDSYSTEMRUNTIME_DecorationComponent_generated_h
#error "DecorationComponent.generated.h already included, missing '#pragma once' in DecorationComponent.h"
#endif
#define BUILDSYSTEMRUNTIME_DecorationComponent_generated_h

#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRotateDecoration); \
	DECLARE_FUNCTION(execReleaseHandleDecoration); \
	DECLARE_FUNCTION(execSetHandleDecoration);


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecorationComponent(); \
	friend struct Z_Construct_UClass_UDecorationComponent_Statics; \
public: \
	DECLARE_CLASS(UDecorationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildSystemRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDecorationComponent)


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDecorationComponent(UDecorationComponent&&); \
	UDecorationComponent(const UDecorationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecorationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecorationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDecorationComponent) \
	NO_API virtual ~UDecorationComponent();


#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_10_PROLOG
#define FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<class UDecorationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
