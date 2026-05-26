// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLua_init() {}
	UNLUA_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector();
	UNLUA_API UFunction* Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnLua;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnLua()
	{
		if (!Z_Registration_Info_UPackage__Script_UnLua.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UScriptStruct_FPropertyCollector,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLua_UnLuaLatentActionCallback__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnLua",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC1D804BD,
				0xA08CF32B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnLua.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnLua.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnLua(Z_Construct_UPackage__Script_UnLua, TEXT("/Script/UnLua"), Z_Registration_Info_UPackage__Script_UnLua, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1D804BD, 0xA08CF32B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
