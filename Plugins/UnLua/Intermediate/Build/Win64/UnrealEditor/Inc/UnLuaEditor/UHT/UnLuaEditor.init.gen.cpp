// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnLuaEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnLuaEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_UnLuaEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnLuaEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x3A6DAA56,
				0xBA6835F2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnLuaEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnLuaEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnLuaEditor(Z_Construct_UPackage__Script_UnLuaEditor, TEXT("/Script/UnLuaEditor"), Z_Registration_Info_UPackage__Script_UnLuaEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3A6DAA56, 0xBA6835F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
