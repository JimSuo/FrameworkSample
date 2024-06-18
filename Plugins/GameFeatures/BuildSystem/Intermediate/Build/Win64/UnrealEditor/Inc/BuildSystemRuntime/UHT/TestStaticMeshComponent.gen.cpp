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

// Begin Class UTestStaticMeshComponent Function LuaCallTest
static FName NAME_UTestStaticMeshComponent_LuaCallTest = FName(TEXT("LuaCallTest"));
void UTestStaticMeshComponent::LuaCallTest()
{
	ProcessEvent(FindFunctionChecked(NAME_UTestStaticMeshComponent_LuaCallTest),NULL);
}
struct Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestStaticMeshComponent, nullptr, "LuaCallTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestStaticMeshComponent::execLuaCallTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LuaCallTest_Implementation();
	P_NATIVE_END;
}
// End Class UTestStaticMeshComponent Function LuaCallTest

// Begin Class UTestStaticMeshComponent
void UTestStaticMeshComponent::StaticRegisterNativesUTestStaticMeshComponent()
{
	UClass* Class = UTestStaticMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LuaCallTest", &UTestStaticMeshComponent::execLuaCallTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestStaticMeshComponent_LuaCallTest, "LuaCallTest" }, // 2124599936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UTestStaticMeshComponent, UTestStaticMeshComponent::StaticClass, TEXT("UTestStaticMeshComponent"), &Z_Registration_Info_UClass_UTestStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestStaticMeshComponent), 1706405147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_1194781551(TEXT("/Script/BuildSystemRuntime"),
	Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrameworkSample_Plugins_GameFeatures_BuildSystem_Source_BuildSystemRuntime_Public_TestStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
