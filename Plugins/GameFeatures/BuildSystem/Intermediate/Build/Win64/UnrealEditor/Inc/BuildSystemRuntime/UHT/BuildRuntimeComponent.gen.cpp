// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/BuildRuntimeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildRuntimeComponent() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UBuildRuntimeComponent();
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UBuildRuntimeComponent_NoRegister();
SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin Class UBuildRuntimeComponent
void UBuildRuntimeComponent::StaticRegisterNativesUBuildRuntimeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildRuntimeComponent);
UClass* Z_Construct_UClass_UBuildRuntimeComponent_NoRegister()
{
	return UBuildRuntimeComponent::StaticClass();
}
struct Z_Construct_UClass_UBuildRuntimeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BuildRuntimeComponent.h" },
		{ "ModuleRelativePath", "Public/BuildRuntimeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildRuntimeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuildRuntimeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULuaActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildRuntimeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildRuntimeComponent_Statics::ClassParams = {
	&UBuildRuntimeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildRuntimeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildRuntimeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildRuntimeComponent()
{
	if (!Z_Registration_Info_UClass_UBuildRuntimeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildRuntimeComponent.OuterSingleton, Z_Construct_UClass_UBuildRuntimeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildRuntimeComponent.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<UBuildRuntimeComponent>()
{
	return UBuildRuntimeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildRuntimeComponent);
UBuildRuntimeComponent::~UBuildRuntimeComponent() {}
// End Class UBuildRuntimeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildRuntimeComponent, UBuildRuntimeComponent::StaticClass, TEXT("UBuildRuntimeComponent"), &Z_Registration_Info_UClass_UBuildRuntimeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildRuntimeComponent), 2787426129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_40210673(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildRuntimeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
