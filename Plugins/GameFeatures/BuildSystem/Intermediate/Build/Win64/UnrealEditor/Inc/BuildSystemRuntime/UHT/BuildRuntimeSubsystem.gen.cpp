// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/Subsystems/BuildRuntimeSubsystem.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildRuntimeSubsystem() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UBuildRuntimeSubsystem();
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UBuildRuntimeSubsystem_NoRegister();
SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin Class UBuildRuntimeSubsystem
void UBuildRuntimeSubsystem::StaticRegisterNativesUBuildRuntimeSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildRuntimeSubsystem);
UClass* Z_Construct_UClass_UBuildRuntimeSubsystem_NoRegister()
{
	return UBuildRuntimeSubsystem::StaticClass();
}
struct Z_Construct_UClass_UBuildRuntimeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\xb4\x9f\xe8\xb4\xa3\xe5\xa4\x84\xe7\x90\x86\xe7\xbc\x96\xe8\xbe\x91\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe7\x9a\x84\xe4\xb8\x80\xe5\x88\x87\xe9\x80\xbb\xe8\xbe\x91\n */" },
#endif
		{ "IncludePath", "Subsystems/BuildRuntimeSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/BuildRuntimeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb4\x9f\xe8\xb4\xa3\xe5\xa4\x84\xe7\x90\x86\xe7\xbc\x96\xe8\xbe\x91\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe7\x9a\x84\xe4\xb8\x80\xe5\x88\x87\xe9\x80\xbb\xe8\xbe\x91" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildRuntimeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuildRuntimeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULuaWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildRuntimeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildRuntimeSubsystem_Statics::ClassParams = {
	&UBuildRuntimeSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildRuntimeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildRuntimeSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildRuntimeSubsystem()
{
	if (!Z_Registration_Info_UClass_UBuildRuntimeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildRuntimeSubsystem.OuterSingleton, Z_Construct_UClass_UBuildRuntimeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildRuntimeSubsystem.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<UBuildRuntimeSubsystem>()
{
	return UBuildRuntimeSubsystem::StaticClass();
}
UBuildRuntimeSubsystem::UBuildRuntimeSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildRuntimeSubsystem);
UBuildRuntimeSubsystem::~UBuildRuntimeSubsystem() {}
// End Class UBuildRuntimeSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildRuntimeSubsystem, UBuildRuntimeSubsystem::StaticClass, TEXT("UBuildRuntimeSubsystem"), &Z_Registration_Info_UClass_UBuildRuntimeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildRuntimeSubsystem), 4225889647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_2833970003(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildRuntimeSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
