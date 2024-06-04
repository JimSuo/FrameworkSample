// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/Subsystems/BuildSerializationSubsystem.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildSerializationSubsystem() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UBuildSerializationSubsystem();
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UBuildSerializationSubsystem_NoRegister();
SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin Class UBuildSerializationSubsystem
void UBuildSerializationSubsystem::StaticRegisterNativesUBuildSerializationSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildSerializationSubsystem);
UClass* Z_Construct_UClass_UBuildSerializationSubsystem_NoRegister()
{
	return UBuildSerializationSubsystem::StaticClass();
}
struct Z_Construct_UClass_UBuildSerializationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystems/BuildSerializationSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/BuildSerializationSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildSerializationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuildSerializationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULuaWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildSerializationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildSerializationSubsystem_Statics::ClassParams = {
	&UBuildSerializationSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildSerializationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildSerializationSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildSerializationSubsystem()
{
	if (!Z_Registration_Info_UClass_UBuildSerializationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildSerializationSubsystem.OuterSingleton, Z_Construct_UClass_UBuildSerializationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildSerializationSubsystem.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<UBuildSerializationSubsystem>()
{
	return UBuildSerializationSubsystem::StaticClass();
}
UBuildSerializationSubsystem::UBuildSerializationSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildSerializationSubsystem);
UBuildSerializationSubsystem::~UBuildSerializationSubsystem() {}
// End Class UBuildSerializationSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildSerializationSubsystem, UBuildSerializationSubsystem::StaticClass, TEXT("UBuildSerializationSubsystem"), &Z_Registration_Info_UClass_UBuildSerializationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildSerializationSubsystem), 340362035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_202526914(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_Subsystems_BuildSerializationSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
