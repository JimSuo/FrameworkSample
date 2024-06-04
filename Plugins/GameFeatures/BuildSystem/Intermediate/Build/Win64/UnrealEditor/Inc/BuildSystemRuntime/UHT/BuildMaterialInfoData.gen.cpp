// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/BuildMaterialInfoData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildMaterialInfoData() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildMaterialInfoData();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin ScriptStruct FBuildMaterialInfoData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildMaterialInfoData;
class UScriptStruct* FBuildMaterialInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildMaterialInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildMaterialInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildMaterialInfoData, (UObject*)Z_Construct_UPackage__Script_BuildSystemRuntime(), TEXT("BuildMaterialInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildMaterialInfoData.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UScriptStruct* StaticStruct<FBuildMaterialInfoData>()
{
	return FBuildMaterialInfoData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbb\xba\xe9\x80\xa0\xe6\x9d\x90\xe8\xb4\xa8Info\xe6\x95\xb0\xe6\x8d\xae\n */" },
#endif
		{ "ModuleRelativePath", "Public/BuildMaterialInfoData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xba\xe9\x80\xa0\xe6\x9d\x90\xe8\xb4\xa8Info\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildMaterialInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildMaterialInfoData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "BuildSystem" },
		{ "ModuleRelativePath", "Public/BuildMaterialInfoData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Material;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildMaterialInfoData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildMaterialInfoData, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildMaterialInfoData, Material), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildMaterialInfoData, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
	nullptr,
	&NewStructOps,
	"BuildMaterialInfoData",
	Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::PropPointers),
	sizeof(FBuildMaterialInfoData),
	alignof(FBuildMaterialInfoData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuildMaterialInfoData()
{
	if (!Z_Registration_Info_UScriptStruct_BuildMaterialInfoData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildMaterialInfoData.InnerSingleton, Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuildMaterialInfoData.InnerSingleton;
}
// End ScriptStruct FBuildMaterialInfoData

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildMaterialInfoData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuildMaterialInfoData::StaticStruct, Z_Construct_UScriptStruct_FBuildMaterialInfoData_Statics::NewStructOps, TEXT("BuildMaterialInfoData"), &Z_Registration_Info_UScriptStruct_BuildMaterialInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildMaterialInfoData), 1854312797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildMaterialInfoData_h_3130009774(TEXT("/Script/BuildSystemRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildMaterialInfoData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildMaterialInfoData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
