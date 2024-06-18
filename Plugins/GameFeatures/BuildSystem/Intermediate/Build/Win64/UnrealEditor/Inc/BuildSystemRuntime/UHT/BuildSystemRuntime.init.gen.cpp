// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildSystemRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BuildSystemRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BuildSystemRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_BuildSystemRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BuildSystemRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x262906A1,
				0xD74672C9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BuildSystemRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BuildSystemRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BuildSystemRuntime(Z_Construct_UPackage__Script_BuildSystemRuntime, TEXT("/Script/BuildSystemRuntime"), Z_Registration_Info_UPackage__Script_BuildSystemRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x262906A1, 0xD74672C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
