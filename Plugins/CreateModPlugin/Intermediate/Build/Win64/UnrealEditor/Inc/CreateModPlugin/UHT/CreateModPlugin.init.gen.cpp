// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateModPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CreateModPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CreateModPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_CreateModPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CreateModPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEEF24461,
				0xE02153E2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CreateModPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CreateModPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CreateModPlugin(Z_Construct_UPackage__Script_CreateModPlugin, TEXT("/Script/CreateModPlugin"), Z_Registration_Info_UPackage__Script_CreateModPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEEF24461, 0xE02153E2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
