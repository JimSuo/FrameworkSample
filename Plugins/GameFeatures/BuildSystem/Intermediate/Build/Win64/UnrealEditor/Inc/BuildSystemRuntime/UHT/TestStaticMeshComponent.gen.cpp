// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/TestStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestStaticMeshComponent() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UTestStaticMeshComponent();
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_UTestStaticMeshComponent_NoRegister();
SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaStaticMeshComponent();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin Class UTestStaticMeshComponent
void UTestStaticMeshComponent::StaticRegisterNativesUTestStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestStaticMeshComponent);
UClass* Z_Construct_UClass_UTestStaticMeshComponent_NoRegister()
{
	return UTestStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UTestStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TestStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/TestStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTestStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULuaStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestStaticMeshComponent_Statics::ClassParams = {
	&UTestStaticMeshComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UTestStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UTestStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestStaticMeshComponent.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<UTestStaticMeshComponent>()
{
	return UTestStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestStaticMeshComponent);
UTestStaticMeshComponent::~UTestStaticMeshComponent() {}
// End Class UTestStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestStaticMeshComponent, UTestStaticMeshComponent::StaticClass, TEXT("UTestStaticMeshComponent"), &Z_Registration_Info_UClass_UTestStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestStaticMeshComponent), 3135843492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_2054640792(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
