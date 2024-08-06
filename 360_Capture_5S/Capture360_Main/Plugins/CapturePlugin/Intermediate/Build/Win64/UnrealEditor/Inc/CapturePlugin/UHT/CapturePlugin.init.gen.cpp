// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapturePlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CapturePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CapturePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_CapturePlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CapturePlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2BCA705A,
				0x70F65261,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CapturePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CapturePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CapturePlugin(Z_Construct_UPackage__Script_CapturePlugin, TEXT("/Script/CapturePlugin"), Z_Registration_Info_UPackage__Script_CapturePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2BCA705A, 0x70F65261));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
