// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/BuildDisplayInfoData.h"
#include "BuildSystemRuntime/Public/BuildMaterialInfoData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildDisplayInfoData() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildDisplayInfoData();
BUILDSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildMaterialInfoData();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin ScriptStruct FBuildDisplayInfoData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildDisplayInfoData;
class UScriptStruct* FBuildDisplayInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildDisplayInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildDisplayInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildDisplayInfoData, (UObject*)Z_Construct_UPackage__Script_BuildSystemRuntime(), TEXT("BuildDisplayInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildDisplayInfoData.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FBuildDisplayInfoData>()
{
	return FBuildDisplayInfoData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbb\xba\xe9\x80\xa0\xe6\x98\xbe\xe7\xa4\xbaInfo\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildDisplayInfoData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0\xe6\x98\xbe\xe7\xa4\xbaInfo\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTips_MetaData[] = {
		{ "Category", "BuildDisplayInfoData" },
		{ "ModuleRelativePath", "Public/BuildDisplayInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "BuildDisplayInfoData" },
		{ "ModuleRelativePath", "Public/BuildDisplayInfoData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTips;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Material_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildDisplayInfoData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_ToolTips = { "ToolTips", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildDisplayInfoData, ToolTips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTips_MetaData), NewProp_ToolTips_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_Material_ValueProp = { "Material", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBuildMaterialInfoData, METADATA_PARAMS(0, nullptr) }; // 1854312797
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_Material_Key_KeyProp = { "Material_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildDisplayInfoData, Material), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 1854312797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_ToolTips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_Material_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_Material_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
	nullptr,
	&NewStructOps,
	"BuildDisplayInfoData",
	Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::PropPointers),
	sizeof(FBuildDisplayInfoData),
	alignof(FBuildDisplayInfoData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildDisplayInfoData()
{
	if (!Z_Registration_Info_UScriptStruct_BuildDisplayInfoData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildDisplayInfoData.InnerSingleton, Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildDisplayInfoData.InnerSingleton;
}
// End ScriptStruct FBuildDisplayInfoData

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildDisplayInfoData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuildDisplayInfoData::StaticStruct, Z_Construct_UScriptStruct_FBuildDisplayInfoData_Statics::NewStructOps, TEXT("BuildDisplayInfoData"), &Z_Registration_Info_UScriptStruct_BuildDisplayInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildDisplayInfoData), 2240486322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildDisplayInfoData_h_3552457591(TEXT("/Script/BuildSystemRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildDisplayInfoData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildDisplayInfoData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
