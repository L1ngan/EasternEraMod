// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLQuickFrame_init() {}
	LQUICKFRAME_API UFunction* Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature();
	LQUICKFRAME_API UFunction* Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature();
	LQUICKFRAME_API UFunction* Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LQuickFrame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LQuickFrame()
	{
		if (!Z_Registration_Info_UPackage__Script_LQuickFrame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LQuickFrame_OnRegistedRoleChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LQuickFrame_OnUpdateGamePlaySpeed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULAsyncFile_LLoadObjectCall__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LQuickFrame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDD76F3CE,
				0xB29E0EE3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LQuickFrame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LQuickFrame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LQuickFrame(Z_Construct_UPackage__Script_LQuickFrame, TEXT("/Script/LQuickFrame"), Z_Registration_Info_UPackage__Script_LQuickFrame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDD76F3CE, 0xB29E0EE3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
