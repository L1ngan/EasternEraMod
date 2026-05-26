// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLoadingScreenLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncLoadingScreenLibrary() {}

// ********** Begin Cross Module References ********************************************************
ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary();
ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AsyncLoadingScreen();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncLoadingScreenLibrary Function GetIsEnableLoadingScreen *************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics
{
	struct AsyncLoadingScreenLibrary_eventGetIsEnableLoadingScreen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get enable/disable the loading screen for next levels\n\x09 *\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get enable/disable the loading screen for next levels" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncLoadingScreenLibrary_eventGetIsEnableLoadingScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncLoadingScreenLibrary_eventGetIsEnableLoadingScreen_Parms), &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "GetIsEnableLoadingScreen", Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::AsyncLoadingScreenLibrary_eventGetIsEnableLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::AsyncLoadingScreenLibrary_eventGetIsEnableLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execGetIsEnableLoadingScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAsyncLoadingScreenLibrary::GetIsEnableLoadingScreen();
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function GetIsEnableLoadingScreen ***************

// ********** Begin Class UAsyncLoadingScreenLibrary Function PlayLoadingScreen ********************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "PlayLoadingScreen", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execPlayLoadingScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::PlayLoadingScreen();
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function PlayLoadingScreen **********************

// ********** Begin Class UAsyncLoadingScreenLibrary Function PreloadBackgroundImages **************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load all background images into memory\n\x09 * \n\x09 * Only use this function when: \n\x09 * \"bPreloadBackgroundImages\" option is checked, \n\x09 * and you called \"RemovePreloadedBackgroundImages\" before.\n\x09 * \n\x09 * You don't need to use this if you never call\n\x09 * \"RemovePreloadedBackgroundImages\" function,\n\x09 * since the background images are still in the memory\n\x09 * \n\x09 * Note: Call this function before calling \"OpenLevel\" node.\n\x09 * \n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load all background images into memory\n\nOnly use this function when:\n\"bPreloadBackgroundImages\" option is checked,\nand you called \"RemovePreloadedBackgroundImages\" before.\n\nYou don't need to use this if you never call\n\"RemovePreloadedBackgroundImages\" function,\nsince the background images are still in the memory\n\nNote: Call this function before calling \"OpenLevel\" node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "PreloadBackgroundImages", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execPreloadBackgroundImages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::PreloadBackgroundImages();
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function PreloadBackgroundImages ****************

// ********** Begin Class UAsyncLoadingScreenLibrary Function RemovePreloadedBackgroundImages ******
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove all preloaded background images\n\x09 * \n\x09 * Only need to use this function when \n\x09 * \"bPreloadBackgroundImages\" is checked.\n\x09 * \n\x09 * You need to call \"PreloadBackgroundImages\" \n\x09 * to manually load all background images again.\n\x09 * \n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all preloaded background images\n\nOnly need to use this function when\n\"bPreloadBackgroundImages\" is checked.\n\nYou need to call \"PreloadBackgroundImages\"\nto manually load all background images again." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "RemovePreloadedBackgroundImages", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execRemovePreloadedBackgroundImages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::RemovePreloadedBackgroundImages();
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function RemovePreloadedBackgroundImages ********

// ********** Begin Class UAsyncLoadingScreenLibrary Function SetDisplayBackgroundIndex ************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics
{
	struct AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms
	{
		int32 BackgroundIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set which background will be displayed on the loading screen by index. The \"SetDisplayBackgroundManually\" option in Background setting needs to be \"true\" to use this function.\n\x09 * \n\x09 * @param BackgroundIndex Valid index of the Background in \"Images\" array in Background setting. If the index is not valid, then it will display random background instead.\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set which background will be displayed on the loading screen by index. The \"SetDisplayBackgroundManually\" option in Background setting needs to be \"true\" to use this function.\n\n@param BackgroundIndex Valid index of the Background in \"Images\" array in Background setting. If the index is not valid, then it will display random background instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BackgroundIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::NewProp_BackgroundIndex = { "BackgroundIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms, BackgroundIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::NewProp_BackgroundIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetDisplayBackgroundIndex", Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::AsyncLoadingScreenLibrary_eventSetDisplayBackgroundIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetDisplayBackgroundIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BackgroundIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::SetDisplayBackgroundIndex(Z_Param_BackgroundIndex);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function SetDisplayBackgroundIndex **************

// ********** Begin Class UAsyncLoadingScreenLibrary Function SetDisplayMovieIndex *****************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics
{
	struct AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms
	{
		int32 MovieIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set which movie will be displayed on the loading screen by index. The \"SetDisplayMovieIndexManually\" option needs to be \"true\" to use this function.\n\x09 *\n\x09 * @param MovieIndex Valid index of the movie in \"MoviePaths\" array.\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set which movie will be displayed on the loading screen by index. The \"SetDisplayMovieIndexManually\" option needs to be \"true\" to use this function.\n\n@param MovieIndex Valid index of the movie in \"MoviePaths\" array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovieIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::NewProp_MovieIndex = { "MovieIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms, MovieIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::NewProp_MovieIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetDisplayMovieIndex", Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::AsyncLoadingScreenLibrary_eventSetDisplayMovieIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetDisplayMovieIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MovieIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::SetDisplayMovieIndex(Z_Param_MovieIndex);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function SetDisplayMovieIndex *******************

// ********** Begin Class UAsyncLoadingScreenLibrary Function SetDisplayTipTextIndex ***************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics
{
	struct AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms
	{
		int32 TipTextIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set which text will be displayed on the loading screen by index. The \"SetDisplayTipTextManually\" option in Tip Widget setting needs to be \"true\" to use this function.\n\x09 *\n\x09 * @param TipTextIndex Valid index of the text in \"TipText\" array in Tip Widget setting. If the index is not valid, then it will display random text instead.\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set which text will be displayed on the loading screen by index. The \"SetDisplayTipTextManually\" option in Tip Widget setting needs to be \"true\" to use this function.\n\n@param TipTextIndex Valid index of the text in \"TipText\" array in Tip Widget setting. If the index is not valid, then it will display random text instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TipTextIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::NewProp_TipTextIndex = { "TipTextIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms, TipTextIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::NewProp_TipTextIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetDisplayTipTextIndex", Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::AsyncLoadingScreenLibrary_eventSetDisplayTipTextIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetDisplayTipTextIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TipTextIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::SetDisplayTipTextIndex(Z_Param_TipTextIndex);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function SetDisplayTipTextIndex *****************

// ********** Begin Class UAsyncLoadingScreenLibrary Function SetEnableLoadingScreen ***************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics
{
	struct AsyncLoadingScreenLibrary_eventSetEnableLoadingScreen_Parms
	{
		bool bIsEnableLoadingScreen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set enable/disable the loading screen for next levels\n\x09 *\n\x09 * @param bIsEnableLoadingScreen Should we enable the loading screen for next level?\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set enable/disable the loading screen for next levels\n\n@param bIsEnableLoadingScreen Should we enable the loading screen for next level?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnableLoadingScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnableLoadingScreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::NewProp_bIsEnableLoadingScreen_SetBit(void* Obj)
{
	((AsyncLoadingScreenLibrary_eventSetEnableLoadingScreen_Parms*)Obj)->bIsEnableLoadingScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::NewProp_bIsEnableLoadingScreen = { "bIsEnableLoadingScreen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncLoadingScreenLibrary_eventSetEnableLoadingScreen_Parms), &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::NewProp_bIsEnableLoadingScreen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::NewProp_bIsEnableLoadingScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "SetEnableLoadingScreen", Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::AsyncLoadingScreenLibrary_eventSetEnableLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::AsyncLoadingScreenLibrary_eventSetEnableLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execSetEnableLoadingScreen)
{
	P_GET_UBOOL(Z_Param_bIsEnableLoadingScreen);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::SetEnableLoadingScreen(Z_Param_bIsEnableLoadingScreen);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function SetEnableLoadingScreen *****************

// ********** Begin Class UAsyncLoadingScreenLibrary Function StopLoadingScreen ********************
struct Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the loading screen. To use this function, you must enable the \"bAllowEngineTick\" option.\n\x09 * Call this function in BeginPlay event to stop the Loading Screen (works with Delay node).\n\x09 *\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the loading screen. To use this function, you must enable the \"bAllowEngineTick\" option.\nCall this function in BeginPlay event to stop the Loading Screen (works with Delay node)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadingScreenLibrary, nullptr, "StopLoadingScreen", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadingScreenLibrary::execStopLoadingScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncLoadingScreenLibrary::StopLoadingScreen();
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadingScreenLibrary Function StopLoadingScreen **********************

// ********** Begin Class UAsyncLoadingScreenLibrary ***********************************************
void UAsyncLoadingScreenLibrary::StaticRegisterNativesUAsyncLoadingScreenLibrary()
{
	UClass* Class = UAsyncLoadingScreenLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsEnableLoadingScreen", &UAsyncLoadingScreenLibrary::execGetIsEnableLoadingScreen },
		{ "PlayLoadingScreen", &UAsyncLoadingScreenLibrary::execPlayLoadingScreen },
		{ "PreloadBackgroundImages", &UAsyncLoadingScreenLibrary::execPreloadBackgroundImages },
		{ "RemovePreloadedBackgroundImages", &UAsyncLoadingScreenLibrary::execRemovePreloadedBackgroundImages },
		{ "SetDisplayBackgroundIndex", &UAsyncLoadingScreenLibrary::execSetDisplayBackgroundIndex },
		{ "SetDisplayMovieIndex", &UAsyncLoadingScreenLibrary::execSetDisplayMovieIndex },
		{ "SetDisplayTipTextIndex", &UAsyncLoadingScreenLibrary::execSetDisplayTipTextIndex },
		{ "SetEnableLoadingScreen", &UAsyncLoadingScreenLibrary::execSetEnableLoadingScreen },
		{ "StopLoadingScreen", &UAsyncLoadingScreenLibrary::execStopLoadingScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary;
UClass* UAsyncLoadingScreenLibrary::GetPrivateStaticClass()
{
	using TClass = UAsyncLoadingScreenLibrary;
	if (!Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoadingScreenLibrary"),
			Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary.InnerSingleton,
			StaticRegisterNativesUAsyncLoadingScreenLibrary,
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
	return Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary_NoRegister()
{
	return UAsyncLoadingScreenLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Async Loading Screen Function Library\n */" },
#endif
		{ "IncludePath", "AsyncLoadingScreenLibrary.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadingScreenLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async Loading Screen Function Library" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_GetIsEnableLoadingScreen, "GetIsEnableLoadingScreen" }, // 692153807
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PlayLoadingScreen, "PlayLoadingScreen" }, // 298834586
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_PreloadBackgroundImages, "PreloadBackgroundImages" }, // 676559544
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_RemovePreloadedBackgroundImages, "RemovePreloadedBackgroundImages" }, // 1813397544
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex, "SetDisplayBackgroundIndex" }, // 1476081984
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayMovieIndex, "SetDisplayMovieIndex" }, // 1331893957
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex, "SetDisplayTipTextIndex" }, // 3711416379
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_SetEnableLoadingScreen, "SetEnableLoadingScreen" }, // 1136255622
		{ &Z_Construct_UFunction_UAsyncLoadingScreenLibrary_StopLoadingScreen, "StopLoadingScreen" }, // 2525804127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadingScreenLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::ClassParams = {
	&UAsyncLoadingScreenLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadingScreenLibrary()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary.OuterSingleton, Z_Construct_UClass_UAsyncLoadingScreenLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary.OuterSingleton;
}
UAsyncLoadingScreenLibrary::UAsyncLoadingScreenLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadingScreenLibrary);
UAsyncLoadingScreenLibrary::~UAsyncLoadingScreenLibrary() {}
// ********** End Class UAsyncLoadingScreenLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_AsyncLoadingScreenLibrary_h__Script_AsyncLoadingScreen_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLoadingScreenLibrary, UAsyncLoadingScreenLibrary::StaticClass, TEXT("UAsyncLoadingScreenLibrary"), &Z_Registration_Info_UClass_UAsyncLoadingScreenLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadingScreenLibrary), 763261628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_AsyncLoadingScreenLibrary_h__Script_AsyncLoadingScreen_3818333002(TEXT("/Script/AsyncLoadingScreen"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_AsyncLoadingScreenLibrary_h__Script_AsyncLoadingScreen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_AsyncLoadingScreenLibrary_h__Script_AsyncLoadingScreen_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
