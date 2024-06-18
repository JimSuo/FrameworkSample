// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildSystemRuntime/Public/BuildActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildActor() {}

// Begin Cross Module References
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_ABuildActor();
BUILDSYSTEMRUNTIME_API UClass* Z_Construct_UClass_ABuildActor_NoRegister();
SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaActor();
UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime();
// End Cross Module References

// Begin Class ABuildActor
void ABuildActor::StaticRegisterNativesABuildActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildActor);
UClass* Z_Construct_UClass_ABuildActor_NoRegister()
{
	return ABuildActor::StaticClass();
}
struct Z_Construct_UClass_ABuildActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BuildActor.h" },
		{ "ModuleRelativePath", "Public/BuildActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuildActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALuaActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BuildSystemRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildActor_Statics::ClassParams = {
	&ABuildActor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuildActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuildActor()
{
	if (!Z_Registration_Info_UClass_ABuildActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildActor.OuterSingleton, Z_Construct_UClass_ABuildActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuildActor.OuterSingleton;
}
template<> BUILDSYSTEMRUNTIME_API UClass* StaticClass<ABuildActor>()
{
	return ABuildActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildActor);
ABuildActor::~ABuildActor() {}
// End Class ABuildActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuildActor, ABuildActor::StaticClass, TEXT("ABuildActor"), &Z_Registration_Info_UClass_ABuildActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildActor), 3357480324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_2139631584(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_BuildActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
