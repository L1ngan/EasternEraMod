// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaTestSuite_init() {}
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature();
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnLuaTestSuite;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite()
	{
		if (!Z_Registration_Info_UPackage__Script_UnLuaTestSuite.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue304Event__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue362Delegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue566Delegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_Issule294Event__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestComplexHandler__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnLuaTestSuite_UnLuaTestSimpleHandler__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnLuaTestSuite",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x826DDE1E,
				0x3423454F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnLuaTestSuite.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnLuaTestSuite.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnLuaTestSuite(Z_Construct_UPackage__Script_UnLuaTestSuite, TEXT("/Script/UnLuaTestSuite"), Z_Registration_Info_UPackage__Script_UnLuaTestSuite, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x826DDE1E, 0x3423454F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
