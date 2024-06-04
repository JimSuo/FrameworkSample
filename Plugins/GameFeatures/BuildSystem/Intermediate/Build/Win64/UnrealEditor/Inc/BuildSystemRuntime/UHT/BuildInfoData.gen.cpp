// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/BuildInfoData.h"
#include "BuildSystemRuntime/Public/BuildDisplayInfoData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildInfoData() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildDisplayInfoData();
BUILDSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildInfoData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin ScriptStruct FBuildInfoData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildInfoData;
class UScriptStruct* FBuildInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildInfoData, (UObject*)Z_Construct_UPackage__Script_BuildSystemRuntime(), TEXT("BuildInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildInfoData.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FBuildInfoData>()
{
	return FBuildInfoData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildInfoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbb\xba\xe9\x80\xa0Info\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildInfoData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0Info\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeTag_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildCheckTypeTag_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildClass_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayInfo_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildInfoData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildCheckTypeTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuildClass_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildClass_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BuildClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayInfo_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayInfo_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildInfoData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_TypeTag = { "TypeTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildInfoData, TypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeTag_MetaData), NewProp_TypeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildCheckTypeTag = { "BuildCheckTypeTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildInfoData, BuildCheckTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildCheckTypeTag_MetaData), NewProp_BuildCheckTypeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildClass_ValueProp = { "BuildClass", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildClass_Key_KeyProp = { "BuildClass_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildClass = { "BuildClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildInfoData, BuildClass), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildClass_MetaData), NewProp_BuildClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_DisplayInfo_ValueProp = { "DisplayInfo", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBuildDisplayInfoData, METADATA_PARAMS(0, nullptr) }; // 2240486322
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_DisplayInfo_Key_KeyProp = { "DisplayInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_DisplayInfo = { "DisplayInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildInfoData, DisplayInfo), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayInfo_MetaData), NewProp_DisplayInfo_MetaData) }; // 2240486322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_TypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildCheckTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildClass_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildClass_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_BuildClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_DisplayInfo_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_DisplayInfo_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewProp_DisplayInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildInfoData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
	nullptr,
	&NewStructOps,
	"BuildInfoData",
	Z_Construct_UScriptStruct_FBuildInfoData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildInfoData_Statics::PropPointers),
	sizeof(FBuildInfoData),
	alignof(FBuildInfoData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildInfoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildInfoData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildInfoData()
{
	if (!Z_Registration_Info_UScriptStruct_BuildInfoData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildInfoData.InnerSingleton, Z_Construct_UScriptStruct_FBuildInfoData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildInfoData.InnerSingleton;
}
// End ScriptStruct FBuildInfoData

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildInfoData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuildInfoData::StaticStruct, Z_Construct_UScriptStruct_FBuildInfoData_Statics::NewStructOps, TEXT("BuildInfoData"), &Z_Registration_Info_UScriptStruct_BuildInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildInfoData), 120248539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildInfoData_h_3925092783(TEXT("/Script/BuildSystemRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildInfoData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildInfoData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
