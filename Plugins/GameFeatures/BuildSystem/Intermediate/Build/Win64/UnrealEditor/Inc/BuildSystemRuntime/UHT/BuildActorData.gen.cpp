// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/BuildActorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildActorData() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildActorData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin ScriptStruct FBuildActorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildActorData;
class UScriptStruct* FBuildActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildActorData, (UObject*)Z_Construct_UPackage__Script_BuildSystemRuntime(), TEXT("BuildActorData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildActorData.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FBuildActorData>()
{
	return FBuildActorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildActorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbb\xba\xe9\x80\xa0""Actor\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildActorData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0""Actor\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildActorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildActorData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildActorData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildActorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuildActorData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildActorData, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildActorData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildActorData, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildActorData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildActorData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildActorData_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildActorData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildActorData_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildActorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
	nullptr,
	&NewStructOps,
	"BuildActorData",
	Z_Construct_UScriptStruct_FBuildActorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildActorData_Statics::PropPointers),
	sizeof(FBuildActorData),
	alignof(FBuildActorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildActorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildActorData()
{
	if (!Z_Registration_Info_UScriptStruct_BuildActorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildActorData.InnerSingleton, Z_Construct_UScriptStruct_FBuildActorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildActorData.InnerSingleton;
}
// End ScriptStruct FBuildActorData

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActorData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuildActorData::StaticStruct, Z_Construct_UScriptStruct_FBuildActorData_Statics::NewStructOps, TEXT("BuildActorData"), &Z_Registration_Info_UScriptStruct_BuildActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildActorData), 3567080784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActorData_h_3327672047(TEXT("/Script/BuildSystemRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActorData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActorData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
