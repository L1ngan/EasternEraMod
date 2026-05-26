// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BinkMediaTexture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBinkMediaTexture() {}

// ********** Begin Cross Module References ********************************************************
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture();
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBinkMediaTexture Function Clear *****************************************
struct Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears this texture to transparent-black.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears this texture to transparent-black." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaTexture, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBinkMediaTexture_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaTexture::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UBinkMediaTexture Function Clear *******************************************

// ********** Begin Class UBinkMediaTexture Function SetMediaPlayer ********************************
struct Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics
{
	struct BinkMediaTexture_eventSetMediaPlayer_Parms
	{
		UBinkMediaPlayer* InMediaPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the media player asset to be used for this texture.\n\x09 *\n\x09 * @param InMediaPlayer The asset to set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the media player asset to be used for this texture.\n\n@param InMediaPlayer The asset to set." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::NewProp_InMediaPlayer = { "InMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BinkMediaTexture_eventSetMediaPlayer_Parms, InMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::NewProp_InMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBinkMediaTexture, nullptr, "SetMediaPlayer", Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::BinkMediaTexture_eventSetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::BinkMediaTexture_eventSetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBinkMediaTexture::execSetMediaPlayer)
{
	P_GET_OBJECT(UBinkMediaPlayer,Z_Param_InMediaPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaPlayer(Z_Param_InMediaPlayer);
	P_NATIVE_END;
}
// ********** End Class UBinkMediaTexture Function SetMediaPlayer **********************************

// ********** Begin Class UBinkMediaTexture ********************************************************
void UBinkMediaTexture::StaticRegisterNativesUBinkMediaTexture()
{
	UClass* Class = UBinkMediaTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Clear", &UBinkMediaTexture::execClear },
		{ "SetMediaPlayer", &UBinkMediaTexture::execSetMediaPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBinkMediaTexture;
UClass* UBinkMediaTexture::GetPrivateStaticClass()
{
	using TClass = UBinkMediaTexture;
	if (!Z_Registration_Info_UClass_UBinkMediaTexture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BinkMediaTexture"),
			Z_Registration_Info_UClass_UBinkMediaTexture.InnerSingleton,
			StaticRegisterNativesUBinkMediaTexture,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBinkMediaTexture.InnerSingleton;
}
UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister()
{
	return UBinkMediaTexture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBinkMediaTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a texture asset for rendering video tracks from UBinkMediaPlayer assets.\n * \n * note: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n *    maybe should have been UTexture2DDynamic?\n */" },
#endif
		{ "HideCategories", "Compression LevelOfDetail Object" },
		{ "IncludePath", "BinkMediaTexture.h" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a texture asset for rendering video tracks from UBinkMediaPlayer assets.\n\nnote: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n   maybe should have been UTexture2DDynamic?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "MediaTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The addressing mode to use for the X axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "MediaTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The addressing mode to use for the Y axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The MediaPlayer asset to stream video from. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The MediaPlayer asset to stream video from." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Pixel Format for the texture. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Pixel Format for the texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tonemap_MetaData[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to enable tonemaping for the video. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to enable tonemaping for the video." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNits_MetaData[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When tonemapping, set this for to desired output nits capability for the current display. Typically 80 for SDR, or 2000 for HDR. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When tonemapping, set this for to desired output nits capability for the current display. Typically 80 for SDR, or 2000 for HDR." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** alpha_value is just a constant blend value for entire video frame. 1 (default) opaque, 0 fully transparent. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "alpha_value is just a constant blend value for entire video frame. 1 (default) opaque, 0 fully transparent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecodeSRGB_MetaData[] = {
		{ "Category", "MediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable decoding of sRGB to Linear inside Bink when drawing to this texture. You could use this when rendering to a texture format which doesn't support sRGB for example. */" },
#endif
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable decoding of sRGB to Linear inside Bink when drawing to this texture. You could use this when rendering to a texture format which doesn't support sRGB for example." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat;
	static void NewProp_Tonemap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Tonemap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputNits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static void NewProp_DecodeSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DecodeSRGB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinkMediaTexture_Clear, "Clear" }, // 478120696
		{ &Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer, "SetMediaPlayer" }, // 2518537809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTexture, MediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTexture, PixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelFormat_MetaData), NewProp_PixelFormat_MetaData) }; // 2051073252
void Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_SetBit(void* Obj)
{
	((UBinkMediaTexture*)Obj)->Tonemap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap = { "Tonemap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBinkMediaTexture), &Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tonemap_MetaData), NewProp_Tonemap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits = { "OutputNits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTexture, OutputNits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNits_MetaData), NewProp_OutputNits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBinkMediaTexture, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
void Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_SetBit(void* Obj)
{
	((UBinkMediaTexture*)Obj)->DecodeSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB = { "DecodeSRGB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBinkMediaTexture), &Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecodeSRGB_MetaData), NewProp_DecodeSRGB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBinkMediaTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaTexture_Statics::ClassParams = {
	&UBinkMediaTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UBinkMediaTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBinkMediaTexture()
{
	if (!Z_Registration_Info_UClass_UBinkMediaTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaTexture.OuterSingleton, Z_Construct_UClass_UBinkMediaTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBinkMediaTexture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaTexture);
// ********** End Class UBinkMediaTexture **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h__Script_BinkMediaPlayer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaTexture, UBinkMediaTexture::StaticClass, TEXT("UBinkMediaTexture"), &Z_Registration_Info_UClass_UBinkMediaTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaTexture), 2909037770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h__Script_BinkMediaPlayer_719958545(TEXT("/Script/BinkMediaPlayer"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h__Script_BinkMediaPlayer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h__Script_BinkMediaPlayer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
