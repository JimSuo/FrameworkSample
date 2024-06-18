// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Private/DecorationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecorationComponent() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UDecorationComponent();
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UDecorationComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin Class UDecorationComponent Function ReleaseHandleDecoration
struct Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x87\x8a\xe6\x94\xbe\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x8a\xe6\x94\xbe\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecorationComponent, nullptr, "ReleaseHandleDecoration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecorationComponent::execReleaseHandleDecoration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseHandleDecoration();
	P_NATIVE_END;
}
// End Class UDecorationComponent Function ReleaseHandleDecoration

// Begin Class UDecorationComponent Function RotateDecoration
struct Z_Construct_UFunction_UDecorationComponent_RotateDecoration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x97\x8b\xe8\xbd\xac\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\x8b\xe8\xbd\xac\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecorationComponent_RotateDecoration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecorationComponent, nullptr, "RotateDecoration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecorationComponent_RotateDecoration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecorationComponent_RotateDecoration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDecorationComponent_RotateDecoration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecorationComponent_RotateDecoration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecorationComponent::execRotateDecoration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateDecoration();
	P_NATIVE_END;
}
// End Class UDecorationComponent Function RotateDecoration

// Begin Class UDecorationComponent Function SetHandleDecoration
struct Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics
{
	struct DecorationComponent_eventSetHandleDecoration_Parms
	{
		AActor* InDecoration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDecoration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::NewProp_InDecoration = { "InDecoration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DecorationComponent_eventSetHandleDecoration_Parms, InDecoration), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::NewProp_InDecoration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecorationComponent, nullptr, "SetHandleDecoration", nullptr, nullptr, Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::DecorationComponent_eventSetHandleDecoration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::DecorationComponent_eventSetHandleDecoration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDecorationComponent::execSetHandleDecoration)
{
	P_GET_OBJECT(AActor,Z_Param_InDecoration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandleDecoration(Z_Param_InDecoration);
	P_NATIVE_END;
}
// End Class UDecorationComponent Function SetHandleDecoration

// Begin Class UDecorationComponent
void UDecorationComponent::StaticRegisterNativesUDecorationComponent()
{
	UClass* Class = UDecorationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReleaseHandleDecoration", &UDecorationComponent::execReleaseHandleDecoration },
		{ "RotateDecoration", &UDecorationComponent::execRotateDecoration },
		{ "SetHandleDecoration", &UDecorationComponent::execSetHandleDecoration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDecorationComponent);
UClass* Z_Construct_UClass_UDecorationComponent_NoRegister()
{
	return UDecorationComponent::StaticClass();
}
struct Z_Construct_UClass_UDecorationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DecorationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\xb5\x8b\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckDistance_MetaData[] = {
		{ "Category", "Build" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\xb5\x8b\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleDecoration_MetaData[] = {
		{ "Category", "DecorationComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8c\x81\xe6\x9c\x89\xe7\x9a\x84\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Private/DecorationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x81\xe6\x9c\x89\xe7\x9a\x84\xe8\xa3\x85\xe9\xa5\xb0\xe7\x89\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckDistance;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HandleDecoration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecorationComponent_ReleaseHandleDecoration, "ReleaseHandleDecoration" }, // 2827829263
		{ &Z_Construct_UFunction_UDecorationComponent_RotateDecoration, "RotateDecoration" }, // 1487701691
		{ &Z_Construct_UFunction_UDecorationComponent_SetHandleDecoration, "SetHandleDecoration" }, // 1247436971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecorationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDecorationComponent_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDecorationComponent_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecorationComponent, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceObjectTypes_MetaData), NewProp_TraceObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDecorationComponent_Statics::NewProp_CheckDistance = { "CheckDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecorationComponent, CheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckDistance_MetaData), NewProp_CheckDistance_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDecorationComponent_Statics::NewProp_HandleDecoration = { "HandleDecoration", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDecorationComponent, HandleDecoration), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleDecoration_MetaData), NewProp_HandleDecoration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecorationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecorationComponent_Statics::NewProp_TraceObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecorationComponent_Statics::NewProp_TraceObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecorationComponent_Statics::NewProp_CheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecorationComponent_Statics::NewProp_HandleDecoration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecorationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDecorationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecorationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDecorationComponent_Statics::ClassParams = {
	&UDecorationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDecorationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDecorationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDecorationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDecorationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDecorationComponent()
{
	if (!Z_Registration_Info_UClass_UDecorationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDecorationComponent.OuterSingleton, Z_Construct_UClass_UDecorationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDecorationComponent.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<UDecorationComponent>()
{
	return UDecorationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDecorationComponent);
UDecorationComponent::~UDecorationComponent() {}
// End Class UDecorationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDecorationComponent, UDecorationComponent::StaticClass, TEXT("UDecorationComponent"), &Z_Registration_Info_UClass_UDecorationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDecorationComponent), 1202026723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_2263300184(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Private_DecorationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
