// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingScreenSettings.h"
#include "Fonts/SlateFontInfo.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLoadingScreenSettings() {}

// ********** Begin Cross Module References ********************************************************
ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings();
ASYNCLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister();
ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout();
ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType();
ASYNCLOADINGSCREEN_API UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FALoadingScreenSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FBackgroundSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FCenterLayoutSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FCircularThrobberSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FClassicLayoutSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FImageSequenceSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLetterboxLayoutSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingWidgetSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FSidebarLayoutSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FTextAppearance();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FThrobberSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FTipSettings();
ASYNCLOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAlignment();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MOVIEPLAYER_API UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UPackage* Z_Construct_UPackage__Script_AsyncLoadingScreen();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAsyncLoadingScreenLayout *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout;
static UEnum* EAsyncLoadingScreenLayout_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("EAsyncLoadingScreenLayout"));
	}
	return Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<EAsyncLoadingScreenLayout>()
{
	return EAsyncLoadingScreenLayout_StaticEnum();
}
struct Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ALSL_Center.Comment", "/** \n\x09 * The loading widget is at the center of the screen, tip widget can be at the bottom or top.\n\x09 * The Center layout is a good choice if your loading icon is the main design.\n\x09 */" },
		{ "ALSL_Center.DisplayName", "Center" },
		{ "ALSL_Center.Name", "EAsyncLoadingScreenLayout::ALSL_Center" },
		{ "ALSL_Center.ToolTip", "The loading widget is at the center of the screen, tip widget can be at the bottom or top.\nThe Center layout is a good choice if your loading icon is the main design." },
		{ "ALSL_Classic.Comment", "/**\n\x09 * The Classic is a simple, generic layout and fits well with many designs.\n\x09 * Loading and tip widgets can be at the bottom or top.\n\x09 */" },
		{ "ALSL_Classic.DisplayName", "Classic" },
		{ "ALSL_Classic.Name", "EAsyncLoadingScreenLayout::ALSL_Classic" },
		{ "ALSL_Classic.ToolTip", "The Classic is a simple, generic layout and fits well with many designs.\nLoading and tip widgets can be at the bottom or top." },
		{ "ALSL_DualSidebar.Comment", "/**\n\x09 * Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\n\x09 * The Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ALSL_DualSidebar.DisplayName", "Dual Sidebar" },
		{ "ALSL_DualSidebar.Name", "EAsyncLoadingScreenLayout::ALSL_DualSidebar" },
		{ "ALSL_DualSidebar.ToolTip", "Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\nThe Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget." },
		{ "ALSL_Letterbox.Comment", "/**\n\x09 * The Letterbox layout has two borders on top and bottom of the screen. Loading widget \n\x09 * can be on the top and the tip is at the bottom of the screen, or vice versa.\n\x09 */" },
		{ "ALSL_Letterbox.DisplayName", "Letterbox" },
		{ "ALSL_Letterbox.Name", "EAsyncLoadingScreenLayout::ALSL_Letterbox" },
		{ "ALSL_Letterbox.ToolTip", "The Letterbox layout has two borders on top and bottom of the screen. Loading widget\ncan be on the top and the tip is at the bottom of the screen, or vice versa." },
		{ "ALSL_Sidebar.Comment", "/**\n\x09 * The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar \n\x09 * is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
		{ "ALSL_Sidebar.DisplayName", "Sidebar" },
		{ "ALSL_Sidebar.Name", "EAsyncLoadingScreenLayout::ALSL_Sidebar" },
		{ "ALSL_Sidebar.ToolTip", "The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar\nis suitable for storytelling, long paragraphs due to the height of the tip widget." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Asynce Loading Screen Layouts\n */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynce Loading Screen Layouts" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAsyncLoadingScreenLayout::ALSL_Classic", (int64)EAsyncLoadingScreenLayout::ALSL_Classic },
		{ "EAsyncLoadingScreenLayout::ALSL_Center", (int64)EAsyncLoadingScreenLayout::ALSL_Center },
		{ "EAsyncLoadingScreenLayout::ALSL_Letterbox", (int64)EAsyncLoadingScreenLayout::ALSL_Letterbox },
		{ "EAsyncLoadingScreenLayout::ALSL_Sidebar", (int64)EAsyncLoadingScreenLayout::ALSL_Sidebar },
		{ "EAsyncLoadingScreenLayout::ALSL_DualSidebar", (int64)EAsyncLoadingScreenLayout::ALSL_DualSidebar },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	"EAsyncLoadingScreenLayout",
	"EAsyncLoadingScreenLayout",
	Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout()
{
	if (!Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.InnerSingleton, Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout.InnerSingleton;
}
// ********** End Enum EAsyncLoadingScreenLayout ***************************************************

// ********** Begin Enum ELoadingIconType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadingIconType;
static UEnum* ELoadingIconType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadingIconType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadingIconType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ELoadingIconType"));
	}
	return Z_Registration_Info_UEnum_ELoadingIconType.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<ELoadingIconType>()
{
	return ELoadingIconType_StaticEnum();
}
struct Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loading Icon Type*/" },
#endif
		{ "LIT_CircularThrobber.Comment", "/** SCircularThrobber widget */" },
		{ "LIT_CircularThrobber.DisplayName", "Circular Throbber" },
		{ "LIT_CircularThrobber.Name", "ELoadingIconType::LIT_CircularThrobber" },
		{ "LIT_CircularThrobber.ToolTip", "SCircularThrobber widget" },
		{ "LIT_ImageSequence.Comment", "/** Animated images */" },
		{ "LIT_ImageSequence.DisplayName", "Image Sequence" },
		{ "LIT_ImageSequence.Name", "ELoadingIconType::LIT_ImageSequence" },
		{ "LIT_ImageSequence.ToolTip", "Animated images" },
		{ "LIT_Throbber.Comment", "/** SThrobber widget */" },
		{ "LIT_Throbber.DisplayName", "Throbber" },
		{ "LIT_Throbber.Name", "ELoadingIconType::LIT_Throbber" },
		{ "LIT_Throbber.ToolTip", "SThrobber widget" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading Icon Type" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadingIconType::LIT_Throbber", (int64)ELoadingIconType::LIT_Throbber },
		{ "ELoadingIconType::LIT_CircularThrobber", (int64)ELoadingIconType::LIT_CircularThrobber },
		{ "ELoadingIconType::LIT_ImageSequence", (int64)ELoadingIconType::LIT_ImageSequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	"ELoadingIconType",
	"ELoadingIconType",
	Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType()
{
	if (!Z_Registration_Info_UEnum_ELoadingIconType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadingIconType.InnerSingleton, Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadingIconType.InnerSingleton;
}
// ********** End Enum ELoadingIconType ************************************************************

// ********** Begin Enum ELoadingWidgetType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadingWidgetType;
static UEnum* ELoadingWidgetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELoadingWidgetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELoadingWidgetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ELoadingWidgetType"));
	}
	return Z_Registration_Info_UEnum_ELoadingWidgetType.OuterSingleton;
}
template<> ASYNCLOADINGSCREEN_API UEnum* StaticEnum<ELoadingWidgetType>()
{
	return ELoadingWidgetType_StaticEnum();
}
struct Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loading Widget type */" },
#endif
		{ "LWT_Horizontal.Comment", "/** Horizontal alignment */" },
		{ "LWT_Horizontal.DisplayName", "Horizontal" },
		{ "LWT_Horizontal.Name", "ELoadingWidgetType::LWT_Horizontal" },
		{ "LWT_Horizontal.ToolTip", "Horizontal alignment" },
		{ "LWT_Vertical.Comment", "/** Vertical alignment */" },
		{ "LWT_Vertical.DisplayName", "Vertical" },
		{ "LWT_Vertical.Name", "ELoadingWidgetType::LWT_Vertical" },
		{ "LWT_Vertical.ToolTip", "Vertical alignment" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading Widget type" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELoadingWidgetType::LWT_Horizontal", (int64)ELoadingWidgetType::LWT_Horizontal },
		{ "ELoadingWidgetType::LWT_Vertical", (int64)ELoadingWidgetType::LWT_Vertical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	"ELoadingWidgetType",
	"ELoadingWidgetType",
	Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType()
{
	if (!Z_Registration_Info_UEnum_ELoadingWidgetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadingWidgetType.InnerSingleton, Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELoadingWidgetType.InnerSingleton;
}
// ********** End Enum ELoadingWidgetType **********************************************************

// ********** Begin ScriptStruct FWidgetAlignment **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWidgetAlignment;
class UScriptStruct* FWidgetAlignment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetAlignment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWidgetAlignment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAlignment, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("WidgetAlignment"));
	}
	return Z_Registration_Info_UScriptStruct_FWidgetAlignment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWidgetAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Alignment for widget*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alignment for widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Alignment Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The horizontal alignment of the widget.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal alignment of the widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Alignment Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the widget.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the widget." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAlignment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAlignment, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAlignment, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAlignment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"WidgetAlignment",
	Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::PropPointers),
	sizeof(FWidgetAlignment),
	alignof(FWidgetAlignment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetAlignment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetAlignment()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWidgetAlignment.InnerSingleton, Z_Construct_UScriptStruct_FWidgetAlignment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWidgetAlignment.InnerSingleton;
}
// ********** End ScriptStruct FWidgetAlignment ****************************************************

// ********** Begin ScriptStruct FTextAppearance ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTextAppearance;
class UScriptStruct* FTextAppearance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTextAppearance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTextAppearance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextAppearance, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("TextAppearance"));
	}
	return Z_Registration_Info_UScriptStruct_FTextAppearance.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTextAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text appearance settings\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text appearance settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Text Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Text color and opacity */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text color and opacity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Text Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The font to render the text with.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The font to render the text with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Text Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drop shadow offset in pixels */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drop shadow offset in pixels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Text Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shadow color and opacity */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shadow color and opacity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "Category", "Text Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How the text should be aligned with the margin. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the text should be aligned with the margin." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextAppearance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) }; // 811347535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowOffset_MetaData), NewProp_ShadowOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData), NewProp_ShadowColorAndOpacity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextAppearance, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 3082493381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_ShadowColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextAppearance_Statics::NewProp_Justification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextAppearance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"TextAppearance",
	Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::PropPointers),
	sizeof(FTextAppearance),
	alignof(FTextAppearance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextAppearance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextAppearance()
{
	if (!Z_Registration_Info_UScriptStruct_FTextAppearance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTextAppearance.InnerSingleton, Z_Construct_UScriptStruct_FTextAppearance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTextAppearance.InnerSingleton;
}
// ********** End ScriptStruct FTextAppearance *****************************************************

// ********** Begin ScriptStruct FThrobberSettings *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FThrobberSettings;
class UScriptStruct* FThrobberSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FThrobberSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FThrobberSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThrobberSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ThrobberSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FThrobberSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FThrobberSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many pieces there are */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many pieces there are" },
#endif
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateHorizontally_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the pieces animate horizontally? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the pieces animate horizontally?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateVertically_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the pieces animate vertically? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the pieces animate vertically?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateOpacity_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the pieces animate their opacity? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the pieces animate their opacity?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Image to use for each segment of the throbber */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Image to use for each segment of the throbber" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
	static void NewProp_bAnimateHorizontally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateHorizontally;
	static void NewProp_bAnimateVertically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateVertically;
	static void NewProp_bAnimateOpacity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateOpacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThrobberSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThrobberSettings, NumberOfPieces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPieces_MetaData), NewProp_NumberOfPieces_MetaData) };
void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_SetBit(void* Obj)
{
	((FThrobberSettings*)Obj)->bAnimateHorizontally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally = { "bAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateHorizontally_MetaData), NewProp_bAnimateHorizontally_MetaData) };
void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_SetBit(void* Obj)
{
	((FThrobberSettings*)Obj)->bAnimateVertically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically = { "bAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateVertically_MetaData), NewProp_bAnimateVertically_MetaData) };
void Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_SetBit(void* Obj)
{
	((FThrobberSettings*)Obj)->bAnimateOpacity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity = { "bAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FThrobberSettings), &Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimateOpacity_MetaData), NewProp_bAnimateOpacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThrobberSettings, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_NumberOfPieces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateHorizontally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateVertically,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_bAnimateOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewProp_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThrobberSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"ThrobberSettings",
	Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::PropPointers),
	sizeof(FThrobberSettings),
	alignof(FThrobberSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThrobberSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FThrobberSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FThrobberSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FThrobberSettings.InnerSingleton, Z_Construct_UScriptStruct_FThrobberSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FThrobberSettings.InnerSingleton;
}
// ********** End ScriptStruct FThrobberSettings ***************************************************

// ********** Begin ScriptStruct FCircularThrobberSettings *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCircularThrobberSettings;
class UScriptStruct* FCircularThrobberSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCircularThrobberSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCircularThrobberSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircularThrobberSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("CircularThrobberSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCircularThrobberSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many pieces there are */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many pieces there are" },
#endif
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount of time for a full circle (in seconds) */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time for a full circle (in seconds)" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Image to use for each segment of the throbber */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Image to use for each segment of the throbber" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircularThrobberSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, NumberOfPieces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPieces_MetaData), NewProp_NumberOfPieces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCircularThrobberSettings, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_NumberOfPieces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewProp_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"CircularThrobberSettings",
	Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::PropPointers),
	sizeof(FCircularThrobberSettings),
	alignof(FCircularThrobberSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCircularThrobberSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCircularThrobberSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCircularThrobberSettings.InnerSingleton, Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCircularThrobberSettings.InnerSingleton;
}
// ********** End ScriptStruct FCircularThrobberSettings *******************************************

// ********** Begin ScriptStruct FImageSequenceSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FImageSequenceSettings;
class UScriptStruct* FImageSequenceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FImageSequenceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FImageSequenceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageSequenceSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ImageSequenceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FImageSequenceSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FImageSequenceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An array of images for animating the loading icon.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of images for animating the loading icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale of the images.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale of the images." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Time in second to update the images, the smaller value the faster of the animation. A zero value will update the images every frame.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in second to update the images, the smaller value the faster of the animation. A zero value will update the images every frame." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayReverse_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Play the image sequence in reverse.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play the image sequence in reverse." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Images_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static void NewProp_bPlayReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayReverse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageSequenceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageSequenceSettings, Images), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Images_MetaData), NewProp_Images_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageSequenceSettings, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageSequenceSettings, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interval_MetaData), NewProp_Interval_MetaData) };
void Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_SetBit(void* Obj)
{
	((FImageSequenceSettings*)Obj)->bPlayReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse = { "bPlayReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageSequenceSettings), &Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayReverse_MetaData), NewProp_bPlayReverse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Images,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_Interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewProp_bPlayReverse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"ImageSequenceSettings",
	Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::PropPointers),
	sizeof(FImageSequenceSettings),
	alignof(FImageSequenceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageSequenceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FImageSequenceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FImageSequenceSettings.InnerSingleton, Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FImageSequenceSettings.InnerSingleton;
}
// ********** End ScriptStruct FImageSequenceSettings **********************************************

// ********** Begin ScriptStruct FBackgroundSettings ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBackgroundSettings;
class UScriptStruct* FBackgroundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBackgroundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBackgroundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBackgroundSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("BackgroundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FBackgroundSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBackgroundSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Background widget for the widget loading screen\n */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background widget for the widget loading screen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPlate_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatePadding_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlateColor_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlateStretch_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Background" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The images randomly display while in the loading screen on top of the movie \n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The images randomly display while in the loading screen on top of the movie" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageStretch_MetaData[] = {
		{ "Category", "Background" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The scaling type to apply to images.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scaling type to apply to images." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Background" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding area between the border and the image it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding area between the border and the image it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The border's background color if there is any image defined. If padding = 0 you will not see the border color.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The border's background color if there is any image defined. If padding = 0 you will not see the border color." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayBackgroundManually_MetaData[] = {
		{ "Category", "Background" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, you will have to manually set which background index you want to display on the loading screen by calling \"SetDisplayBackgroundIndex\" function\n\x09 * in your Blueprint before opening a new level. If the index you set is not valid, then it will display random background in the \"Images\" array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, you will have to manually set which background index you want to display on the loading screen by calling \"SetDisplayBackgroundIndex\" function\nin your Blueprint before opening a new level. If the index you set is not valid, then it will display random background in the \"Images\" array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPlate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatePadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlateColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlateStretch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageStretch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static void NewProp_bSetDisplayBackgroundManually_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayBackgroundManually;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBackgroundSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundPlate = { "BackgroundPlate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, BackgroundPlate), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundPlate_MetaData), NewProp_BackgroundPlate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_PlatePadding = { "PlatePadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, PlatePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatePadding_MetaData), NewProp_PlatePadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_PlateColor = { "PlateColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, PlateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlateColor_MetaData), NewProp_PlateColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_PlateStretch = { "PlateStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, PlateStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlateStretch_MetaData), NewProp_PlateStretch_MetaData) }; // 1637697150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, Images), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Images_MetaData), NewProp_Images_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch = { "ImageStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, ImageStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageStretch_MetaData), NewProp_ImageStretch_MetaData) }; // 1637697150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBackgroundSettings, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
void Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_SetBit(void* Obj)
{
	((FBackgroundSettings*)Obj)->bSetDisplayBackgroundManually = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually = { "bSetDisplayBackgroundManually", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBackgroundSettings), &Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDisplayBackgroundManually_MetaData), NewProp_bSetDisplayBackgroundManually_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundPlate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_PlatePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_PlateColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_PlateStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Images,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_ImageStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewProp_bSetDisplayBackgroundManually,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBackgroundSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"BackgroundSettings",
	Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::PropPointers),
	sizeof(FBackgroundSettings),
	alignof(FBackgroundSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBackgroundSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBackgroundSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FBackgroundSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBackgroundSettings.InnerSingleton, Z_Construct_UScriptStruct_FBackgroundSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBackgroundSettings.InnerSingleton;
}
// ********** End ScriptStruct FBackgroundSettings *************************************************

// ********** Begin ScriptStruct FLoadingWidgetSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings;
class UScriptStruct* FLoadingWidgetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingWidgetSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LoadingWidgetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Loading widget settings\n */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading widget settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingIconType_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loading icon type*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading icon type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetType_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loading Widget type*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading Widget type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformTranslation_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Render transform translation of the loading icon.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render transform translation of the loading icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Render transform scale of the loading icon, a negative value will flip the icon.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render transform scale of the loading icon, a negative value will flip the icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformPivot_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Render transform pivot of the loading icon (in normalized local space).*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render transform pivot of the loading icon (in normalized local space)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text displayed beside the animated icon\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text displayed beside the animated icon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadingTextRightPosition_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is Loading Text on the right of the loading icon? Ignore this if you don't choose Loading Widget Type = Horizontal.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Loading Text on the right of the loading icon? Ignore this if you don't choose Loading Widget Type = Horizontal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadingTextTopPosition_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is Loading Text on the top of the loading icon? Ignore this if you don't choose Loading Widget Type = Vertical.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Loading Text on the top of the loading icon? Ignore this if you don't choose Loading Widget Type = Vertical." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[] = {
		{ "Category", "Tip Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loading text appearance settings\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading text appearance settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrobberSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throbber settings. Ignore this if you don't choose the 'Throbber' icon type*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throbber settings. Ignore this if you don't choose the 'Throbber' icon type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircularThrobberSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Circular Throbber settings. Ignore this if you don't choose the 'Circular Throbber' icon type*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Circular Throbber settings. Ignore this if you don't choose the 'Circular Throbber' icon type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageSequenceSettings_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Image Sequence settings. Ignore this if you don't choose the 'Image Sequence' icon type*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Image Sequence settings. Ignore this if you don't choose the 'Image Sequence' icon type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextAlignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the loading text.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the loading text." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingIconAlignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the loading icon. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the loading icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Empty space between the loading text and the loading icon */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empty space between the loading text and the loading icon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideLoadingWidgetWhenCompletes_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hide the loading widget when the level loading is complete*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hide the loading widget when the level loading is complete" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingIconType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingIconType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingWidgetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingWidgetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformPivot;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingText;
	static void NewProp_bLoadingTextRightPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadingTextRightPosition;
	static void NewProp_bLoadingTextTopPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadingTextTopPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Appearance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrobberSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircularThrobberSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSequenceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingIconAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
	static void NewProp_bHideLoadingWidgetWhenCompletes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLoadingWidgetWhenCompletes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingWidgetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType = { "LoadingIconType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingIconType), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingIconType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingIconType_MetaData), NewProp_LoadingIconType_MetaData) }; // 1252965477
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType = { "LoadingWidgetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingWidgetType), Z_Construct_UEnum_AsyncLoadingScreen_ELoadingWidgetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingWidgetType_MetaData), NewProp_LoadingWidgetType_MetaData) }; // 3444560743
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation = { "TransformTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformTranslation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformTranslation_MetaData), NewProp_TransformTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformScale_MetaData), NewProp_TransformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot = { "TransformPivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TransformPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformPivot_MetaData), NewProp_TransformPivot_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText = { "LoadingText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingText_MetaData), NewProp_LoadingText_MetaData) };
void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_SetBit(void* Obj)
{
	((FLoadingWidgetSettings*)Obj)->bLoadingTextRightPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition = { "bLoadingTextRightPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadingTextRightPosition_MetaData), NewProp_bLoadingTextRightPosition_MetaData) };
void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_SetBit(void* Obj)
{
	((FLoadingWidgetSettings*)Obj)->bLoadingTextTopPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition = { "bLoadingTextTopPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadingTextTopPosition_MetaData), NewProp_bLoadingTextTopPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Appearance_MetaData), NewProp_Appearance_MetaData) }; // 325557233
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings = { "ThrobberSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, ThrobberSettings), Z_Construct_UScriptStruct_FThrobberSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrobberSettings_MetaData), NewProp_ThrobberSettings_MetaData) }; // 2257127751
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings = { "CircularThrobberSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, CircularThrobberSettings), Z_Construct_UScriptStruct_FCircularThrobberSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircularThrobberSettings_MetaData), NewProp_CircularThrobberSettings_MetaData) }; // 2663559695
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings = { "ImageSequenceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, ImageSequenceSettings), Z_Construct_UScriptStruct_FImageSequenceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageSequenceSettings_MetaData), NewProp_ImageSequenceSettings_MetaData) }; // 2286968538
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment = { "TextAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, TextAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextAlignment_MetaData), NewProp_TextAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment = { "LoadingIconAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, LoadingIconAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingIconAlignment_MetaData), NewProp_LoadingIconAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingWidgetSettings, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_SetBit(void* Obj)
{
	((FLoadingWidgetSettings*)Obj)->bHideLoadingWidgetWhenCompletes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes = { "bHideLoadingWidgetWhenCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingWidgetSettings), &Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideLoadingWidgetWhenCompletes_MetaData), NewProp_bHideLoadingWidgetWhenCompletes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingWidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TransformPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextRightPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bLoadingTextTopPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Appearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ThrobberSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_CircularThrobberSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_ImageSequenceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_TextAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_LoadingIconAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewProp_bHideLoadingWidgetWhenCompletes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"LoadingWidgetSettings",
	Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::PropPointers),
	sizeof(FLoadingWidgetSettings),
	alignof(FLoadingWidgetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoadingWidgetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings.InnerSingleton, Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings.InnerSingleton;
}
// ********** End ScriptStruct FLoadingWidgetSettings **********************************************

// ********** Begin ScriptStruct FTipSettings ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTipSettings;
class UScriptStruct* FTipSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTipSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTipSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTipSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("TipSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FTipSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTipSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tips text settings\n */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tips text settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipText_MetaData[] = {
		{ "Category", "Tip Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The tip text randomly display in the loading screen.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tip text randomly display in the loading screen." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[] = {
		{ "Category", "Tip Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tip text appearance settings\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tip text appearance settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipWrapAt_MetaData[] = {
		{ "Category", "Tip Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The size of the tip before it's wrapped to the next line\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the tip before it's wrapped to the next line" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayTipTextManually_MetaData[] = {
		{ "Category", "Background" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, you will have to manually set which TipText index you want to display on the loading screen by calling \"SetDisplayTipTextIndex\" function\n\x09 * in your Blueprint before opening a new level. If the index you set is not valid, then it will display random Tip in the \"TipText\" array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, you will have to manually set which TipText index you want to display on the loading screen by calling \"SetDisplayTipTextIndex\" function\nin your Blueprint before opening a new level. If the index you set is not valid, then it will display random Tip in the \"TipText\" array." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TipText_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TipText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Appearance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TipWrapAt;
	static void NewProp_bSetDisplayTipTextManually_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayTipTextManually;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTipSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_Inner = { "TipText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText = { "TipText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipSettings, TipText), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipText_MetaData), NewProp_TipText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Appearance_MetaData), NewProp_Appearance_MetaData) }; // 325557233
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt = { "TipWrapAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTipSettings, TipWrapAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipWrapAt_MetaData), NewProp_TipWrapAt_MetaData) };
void Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_SetBit(void* Obj)
{
	((FTipSettings*)Obj)->bSetDisplayTipTextManually = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually = { "bSetDisplayTipTextManually", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTipSettings), &Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDisplayTipTextManually_MetaData), NewProp_bSetDisplayTipTextManually_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_Appearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_TipWrapAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTipSettings_Statics::NewProp_bSetDisplayTipTextManually,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTipSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"TipSettings",
	Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::PropPointers),
	sizeof(FTipSettings),
	alignof(FTipSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTipSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTipSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FTipSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTipSettings.InnerSingleton, Z_Construct_UScriptStruct_FTipSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTipSettings.InnerSingleton;
}
// ********** End ScriptStruct FTipSettings ********************************************************

// ********** Begin ScriptStruct FLoadingCompleteTextSettings **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings;
class UScriptStruct* FLoadingCompleteTextSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LoadingCompleteTextSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The text that displayed when loading is complete. Ignore this if you don't set \"bShowLoadingCompletedText\" = true\n */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text that displayed when loading is complete. Ignore this if you don't set \"bShowLoadingCompletedText\" = true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingCompleteText_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The text that shows up when level loading is done.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text that shows up when level loading is done." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text appearance settings\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text appearance settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Loading Widget Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the text.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the text." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Text padding. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text padding." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFadeInOutAnim_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animate the text?\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animate the text?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "Loading Complete Text Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Animation speed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation speed" },
#endif
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingCompleteText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Appearance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static void NewProp_bFadeInOutAnim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeInOutAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingCompleteTextSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText = { "LoadingCompleteText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, LoadingCompleteText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingCompleteText_MetaData), NewProp_LoadingCompleteText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Appearance), Z_Construct_UScriptStruct_FTextAppearance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Appearance_MetaData), NewProp_Appearance_MetaData) }; // 325557233
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Alignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 3363527339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 1262192159
void Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_SetBit(void* Obj)
{
	((FLoadingCompleteTextSettings*)Obj)->bFadeInOutAnim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim = { "bFadeInOutAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadingCompleteTextSettings), &Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFadeInOutAnim_MetaData), NewProp_bFadeInOutAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadingCompleteTextSettings, AnimationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSpeed_MetaData), NewProp_AnimationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_LoadingCompleteText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Appearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_bFadeInOutAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewProp_AnimationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"LoadingCompleteTextSettings",
	Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::PropPointers),
	sizeof(FLoadingCompleteTextSettings),
	alignof(FLoadingCompleteTextSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoadingCompleteTextSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings.InnerSingleton, Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings.InnerSingleton;
}
// ********** End ScriptStruct FLoadingCompleteTextSettings ****************************************

// ********** Begin ScriptStruct FALoadingScreenSettings *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FALoadingScreenSettings;
class UScriptStruct* FALoadingScreenSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FALoadingScreenSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FALoadingScreenSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FALoadingScreenSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ALoadingScreenSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FALoadingScreenSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Loading Screen Settings\n */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading Screen Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLoadingScreenDisplayTime_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The minimum time that a loading screen should be opened for, -1 if there is no minimum time. I recommend set it to -1.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum time that a loading screen should be opened for, -1 if there is no minimum time. I recommend set it to -1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompleteWhenLoadingCompletes_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the loading screen will disappear as soon as loading is done.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the loading screen will disappear as soon as loading is done." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, movies can be skipped by clicking the loading screen as long as loading is done.\n" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, movies can be skipped by clicking the loading screen as long as loading is done." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForManualStop_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * If true, movie playback continue until Stop is called.\n\x09 * \n\x09 * NOTE: If set \"Minimum Loading Screen Display Time\" = -1, it will allow players to press any key to stop the loading screen.\n\x09 * If \"Minimum Loading Screen Display Time\" >= 0, you have to call \"StopLoadingScreen\" in the BeginPlay event \n\x09 * of your GameInstance, GameMode, or PlayerController blueprint to stop the loading screen (\"bAllowEngineTick\" must be true)\n\x09 **/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, movie playback continue until Stop is called.\n\nNOTE: If set \"Minimum Loading Screen Display Time\" = -1, it will allow players to press any key to stop the loading screen.\nIf \"Minimum Loading Screen Display Time\" >= 0, you have to call \"StopLoadingScreen\" in the BeginPlay event\nof your GameInstance, GameMode, or PlayerController blueprint to stop the loading screen (\"bAllowEngineTick\" must be true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInEarlyStartup_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true loading screens here cannot have any uobjects of any kind or use any engine features at all. This will start the movies very early as a result on platforms that support it */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true loading screens here cannot have any uobjects of any kind or use any engine features at all. This will start the movies very early as a result on platforms that support it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEngineTick_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this will call the engine tick while the game thread is stalled waiting for a loading movie to finish. This only works for post-startup load screens and is potentially unsafe */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this will call the engine tick while the game thread is stalled waiting for a loading movie to finish. This only works for post-startup load screens and is potentially unsafe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackType_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we just play back, loop, etc.  NOTE: if the playback type is MT_LoopLast, then bAutoCompleteWhenLoadingCompletes will be togged on when the last movie is hit*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we just play back, loop, etc.  NOTE: if the playback type is MT_LoopLast, then bAutoCompleteWhenLoadingCompletes will be togged on when the last movie is hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoviePaths_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All movie files must be locate at Content/Movies/ directory. Suggested format: MPEG-4 Movie (mp4). Enter file path/name without the extension.\n\x09 * E.g., if you have a movie name my_movie.mp4 in the 'Content/Movies' folder, then enter my_movie in the input field.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All movie files must be locate at Content/Movies/ directory. Suggested format: MPEG-4 Movie (mp4). Enter file path/name without the extension.\nE.g., if you have a movie name my_movie.mp4 in the 'Content/Movies' folder, then enter my_movie in the input field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShuffle_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, shuffle the movies list before playing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, shuffle the movies list before playing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDisplayMovieIndexManually_MetaData[] = {
		{ "Category", "Movies Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the \"Shuffle\" option will be ignored, and you will have to manually set which Movie index you want to display on the loading screen \n\x09 * by calling \"SetDisplayMovieIndex\" function in your Blueprint before opening a new level.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the \"Shuffle\" option will be ignored, and you will have to manually set which Movie index you want to display on the loading screen\nby calling \"SetDisplayMovieIndex\" function in your Blueprint before opening a new level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetOverlay_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Should we show the loading screen widgets (background/tips/loading widget)? Generally you'll want to set this to false if you just want to show a movie.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we show the loading screen widgets (background/tips/loading widget)? Generally you'll want to set this to false if you just want to show a movie." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLoadingCompleteText_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true show a text when level loading is completed. Ignore this if you choose \"Show Widget Overlay\" = false\n\x09 *\n\x09 * NOTE: To enable this option properly, you need to set \"Wait For Manual Stop\" = true, and \"Minimum Loading Screen Display Time\" = -1.\n\x09 * This also allows players press any button to stop the Loading Screen.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true show a text when level loading is completed. Ignore this if you choose \"Show Widget Overlay\" = false\n\nNOTE: To enable this option properly, you need to set \"Wait For Manual Stop\" = true, and \"Minimum Loading Screen Display Time\" = -1.\nThis also allows players press any button to stop the Loading Screen." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingCompleteTextSettings_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The text that displayed when loading is complete. Ignore this if you set \"Show Loading Complete Text\" = false.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text that displayed when loading is complete. Ignore this if you set \"Show Loading Complete Text\" = false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipWidget_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tip widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tip widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loading widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\" */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading widget for the loading screen. Ignore this if you choose \"Show Widget Overlay = false\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "Loading Screen Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Select async loading screen Layout. Ignore this if you choose \"Show Widget Overlay = false\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select async loading screen Layout. Ignore this if you choose \"Show Widget Overlay = false\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLoadingScreenDisplayTime;
	static void NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompleteWhenLoadingCompletes;
	static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
	static void NewProp_bWaitForManualStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForManualStop;
	static void NewProp_bAllowInEarlyStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInEarlyStartup;
	static void NewProp_bAllowEngineTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEngineTick;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MoviePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MoviePaths;
	static void NewProp_bShuffle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffle;
	static void NewProp_bSetDisplayMovieIndexManually_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDisplayMovieIndexManually;
	static void NewProp_bShowWidgetOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetOverlay;
	static void NewProp_bShowLoadingCompleteText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingCompleteText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingCompleteTextSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Background;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingWidget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layout_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FALoadingScreenSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime = { "MinimumLoadingScreenDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, MinimumLoadingScreenDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLoadingScreenDisplayTime_MetaData), NewProp_MinimumLoadingScreenDisplayTime_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bAutoCompleteWhenLoadingCompletes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes = { "bAutoCompleteWhenLoadingCompletes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCompleteWhenLoadingCompletes_MetaData), NewProp_bAutoCompleteWhenLoadingCompletes_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bMoviesAreSkippable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable = { "bMoviesAreSkippable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoviesAreSkippable_MetaData), NewProp_bMoviesAreSkippable_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bWaitForManualStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop = { "bWaitForManualStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForManualStop_MetaData), NewProp_bWaitForManualStop_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bAllowInEarlyStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup = { "bAllowInEarlyStartup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInEarlyStartup_MetaData), NewProp_bAllowInEarlyStartup_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bAllowEngineTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick = { "bAllowEngineTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowEngineTick_MetaData), NewProp_bAllowEngineTick_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType = { "PlaybackType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, PlaybackType), Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackType_MetaData), NewProp_PlaybackType_MetaData) }; // 1577109635
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_Inner = { "MoviePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths = { "MoviePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, MoviePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoviePaths_MetaData), NewProp_MoviePaths_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bShuffle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle = { "bShuffle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShuffle_MetaData), NewProp_bShuffle_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bSetDisplayMovieIndexManually = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually = { "bSetDisplayMovieIndexManually", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDisplayMovieIndexManually_MetaData), NewProp_bSetDisplayMovieIndexManually_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bShowWidgetOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay = { "bShowWidgetOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWidgetOverlay_MetaData), NewProp_bShowWidgetOverlay_MetaData) };
void Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_SetBit(void* Obj)
{
	((FALoadingScreenSettings*)Obj)->bShowLoadingCompleteText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText = { "bShowLoadingCompleteText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FALoadingScreenSettings), &Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLoadingCompleteText_MetaData), NewProp_bShowLoadingCompleteText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings = { "LoadingCompleteTextSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, LoadingCompleteTextSettings), Z_Construct_UScriptStruct_FLoadingCompleteTextSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingCompleteTextSettings_MetaData), NewProp_LoadingCompleteTextSettings_MetaData) }; // 1646353650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, Background), Z_Construct_UScriptStruct_FBackgroundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) }; // 1817431589
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget = { "TipWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, TipWidget), Z_Construct_UScriptStruct_FTipSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipWidget_MetaData), NewProp_TipWidget_MetaData) }; // 998486075
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, LoadingWidget), Z_Construct_UScriptStruct_FLoadingWidgetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingWidget_MetaData), NewProp_LoadingWidget_MetaData) }; // 4158482141
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FALoadingScreenSettings, Layout), Z_Construct_UEnum_AsyncLoadingScreen_EAsyncLoadingScreenLayout, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 2492976519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAutoCompleteWhenLoadingCompletes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bMoviesAreSkippable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bWaitForManualStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowInEarlyStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bAllowEngineTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_PlaybackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_MoviePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShuffle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bSetDisplayMovieIndexManually,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowWidgetOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_bShowLoadingCompleteText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingCompleteTextSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_TipWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_LoadingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewProp_Layout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"ALoadingScreenSettings",
	Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::PropPointers),
	sizeof(FALoadingScreenSettings),
	alignof(FALoadingScreenSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FALoadingScreenSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FALoadingScreenSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FALoadingScreenSettings.InnerSingleton, Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FALoadingScreenSettings.InnerSingleton;
}
// ********** End ScriptStruct FALoadingScreenSettings *********************************************

// ********** Begin ScriptStruct FClassicLayoutSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClassicLayoutSettings;
class UScriptStruct* FClassicLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FClassicLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FClassicLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassicLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("ClassicLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FClassicLayoutSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Classic Layout settings*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classic Layout settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetAtBottom_MetaData[] = {
		{ "Category", "Classic Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the border that contains loading and tip widget located at the bottom or top? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the border that contains loading and tip widget located at the bottom or top?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtLeft_MetaData[] = {
		{ "Category", "Classic Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is loading widget on the left of the tip? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is loading widget on the left of the tip?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Classic Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The empty space between loading widget and the tip.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The empty space between loading widget and the tip." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Classic Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the tips. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the tips." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The horizontal alignment of the border background.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal alignment of the border background." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Classic Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding area between the border and the widget it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding area between the border and the widget it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Classic Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for the border widget */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for the border widget" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWidgetAtBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetAtBottom;
	static void NewProp_bIsLoadingWidgetAtLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BorderHorizontalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassicLayoutSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_SetBit(void* Obj)
{
	((FClassicLayoutSettings*)Obj)->bIsWidgetAtBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom = { "bIsWidgetAtBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClassicLayoutSettings), &Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWidgetAtBottom_MetaData), NewProp_bIsWidgetAtBottom_MetaData) };
void Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_SetBit(void* Obj)
{
	((FClassicLayoutSettings*)Obj)->bIsLoadingWidgetAtLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft = { "bIsLoadingWidgetAtLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClassicLayoutSettings), &Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadingWidgetAtLeft_MetaData), NewProp_bIsLoadingWidgetAtLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipAlignment_MetaData), NewProp_TipAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment = { "BorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderHorizontalAlignment_MetaData), NewProp_BorderHorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderPadding_MetaData), NewProp_BorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassicLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackground_MetaData), NewProp_BorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsWidgetAtBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_TipAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewProp_BorderBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"ClassicLayoutSettings",
	Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::PropPointers),
	sizeof(FClassicLayoutSettings),
	alignof(FClassicLayoutSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassicLayoutSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FClassicLayoutSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClassicLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FClassicLayoutSettings.InnerSingleton;
}
// ********** End ScriptStruct FClassicLayoutSettings **********************************************

// ********** Begin ScriptStruct FCenterLayoutSettings *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCenterLayoutSettings;
class UScriptStruct* FCenterLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCenterLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCenterLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCenterLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("CenterLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FCenterLayoutSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Center Layout settings*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Center Layout settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTipAtBottom_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is tip located at the bottom or top? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is tip located at the bottom or top?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the tips. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the tips." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The horizontal alignment of the border.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal alignment of the border." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderVerticalOffset_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset to bottom or top of the screen depending on the tip located at the bottom or top position.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to bottom or top of the screen depending on the tip located at the bottom or top position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding area between the border and the tips it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding area between the border and the tips it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Center Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for tip area */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for tip area" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsTipAtBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTipAtBottom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BorderHorizontalAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderVerticalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCenterLayoutSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_SetBit(void* Obj)
{
	((FCenterLayoutSettings*)Obj)->bIsTipAtBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom = { "bIsTipAtBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCenterLayoutSettings), &Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTipAtBottom_MetaData), NewProp_bIsTipAtBottom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipAlignment_MetaData), NewProp_TipAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment = { "BorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderHorizontalAlignment_MetaData), NewProp_BorderHorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset = { "BorderVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderVerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderVerticalOffset_MetaData), NewProp_BorderVerticalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderPadding_MetaData), NewProp_BorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCenterLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackground_MetaData), NewProp_BorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_bIsTipAtBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_TipAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderVerticalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewProp_BorderBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"CenterLayoutSettings",
	Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::PropPointers),
	sizeof(FCenterLayoutSettings),
	alignof(FCenterLayoutSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCenterLayoutSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FCenterLayoutSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCenterLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCenterLayoutSettings.InnerSingleton;
}
// ********** End ScriptStruct FCenterLayoutSettings ***********************************************

// ********** Begin ScriptStruct FLetterboxLayoutSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings;
class UScriptStruct* FLetterboxLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLetterboxLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("LetterboxLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Letterbox Layout settings*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Letterbox Layout settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtTop_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is loading widget located at the bottom or top? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is loading widget located at the bottom or top?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the tips. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the tips." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the loading widget. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the loading widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopBorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The horizontal alignment of the top border.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal alignment of the top border." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomBorderHorizontalAlignment_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The horizontal alignment of the bottom border.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal alignment of the bottom border." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopBorderPadding_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The top padding area between the border and the widget it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The top padding area between the border and the widget it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomBorderPadding_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The bottom padding area between the border and the widget it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bottom padding area between the border and the widget it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopBorderBackground_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for top border */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for top border" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomBorderBackground_MetaData[] = {
		{ "Category", "Letterbox Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for bottom border */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for bottom border" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtTop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingWidgetAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TopBorderHorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BottomBorderHorizontalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopBorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomBorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopBorderBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomBorderBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLetterboxLayoutSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj)
{
	((FLetterboxLayoutSettings*)Obj)->bIsLoadingWidgetAtTop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop = { "bIsLoadingWidgetAtTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLetterboxLayoutSettings), &Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadingWidgetAtTop_MetaData), NewProp_bIsLoadingWidgetAtTop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipAlignment_MetaData), NewProp_TipAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment = { "LoadingWidgetAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, LoadingWidgetAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingWidgetAlignment_MetaData), NewProp_LoadingWidgetAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment = { "TopBorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopBorderHorizontalAlignment_MetaData), NewProp_TopBorderHorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment = { "BottomBorderHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomBorderHorizontalAlignment_MetaData), NewProp_BottomBorderHorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding = { "TopBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopBorderPadding_MetaData), NewProp_TopBorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding = { "BottomBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomBorderPadding_MetaData), NewProp_BottomBorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground = { "TopBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, TopBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopBorderBackground_MetaData), NewProp_TopBorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground = { "BottomBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLetterboxLayoutSettings, BottomBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomBorderBackground_MetaData), NewProp_BottomBorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TipAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_LoadingWidgetAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_TopBorderBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewProp_BottomBorderBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"LetterboxLayoutSettings",
	Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::PropPointers),
	sizeof(FLetterboxLayoutSettings),
	alignof(FLetterboxLayoutSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLetterboxLayoutSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings.InnerSingleton;
}
// ********** End ScriptStruct FLetterboxLayoutSettings ********************************************

// ********** Begin ScriptStruct FSidebarLayoutSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings;
class UScriptStruct* FSidebarLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidebarLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("SidebarLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sidebar Layout settings*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sidebar Layout settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetAtRight_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the border that contains loading and tip widgets located at the right or left? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the border that contains loading and tip widgets located at the right or left?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtTop_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is loading widget on the top of the tip? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is loading widget on the top of the tip?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The empty space between loading widget and the tip.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The empty space between loading widget and the tip." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the vertical box that contains loading/tip widgets. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the vertical box that contains loading/tip widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the loading widget. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the loading widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The alignment of the tips. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alignment of the tips." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderVerticalAlignment_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the border background that contains all widgets. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the border background that contains all widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderHorizontalOffset_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset to left or right of the screen depending on the border that contains loading and tip widgets located at the left or right position.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to left or right of the screen depending on the border that contains loading and tip widgets located at the left or right position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding area between the border and the widget it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding area between the border and the widget it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackground_MetaData[] = {
		{ "Category", "Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for the border widget */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for the border widget" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWidgetAtRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetAtRight;
	static void NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtTop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Space;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingWidgetAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TipAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BorderVerticalAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderHorizontalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidebarLayoutSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_SetBit(void* Obj)
{
	((FSidebarLayoutSettings*)Obj)->bIsWidgetAtRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight = { "bIsWidgetAtRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarLayoutSettings), &Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWidgetAtRight_MetaData), NewProp_bIsWidgetAtRight_MetaData) };
void Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit(void* Obj)
{
	((FSidebarLayoutSettings*)Obj)->bIsLoadingWidgetAtTop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop = { "bIsLoadingWidgetAtTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidebarLayoutSettings), &Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadingWidgetAtTop_MetaData), NewProp_bIsLoadingWidgetAtTop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment = { "LoadingWidgetAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, LoadingWidgetAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingWidgetAlignment_MetaData), NewProp_LoadingWidgetAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment = { "TipAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, TipAlignment), Z_Construct_UScriptStruct_FWidgetAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipAlignment_MetaData), NewProp_TipAlignment_MetaData) }; // 3363527339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment = { "BorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderVerticalAlignment_MetaData), NewProp_BorderVerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset = { "BorderHorizontalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderHorizontalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderHorizontalOffset_MetaData), NewProp_BorderHorizontalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderPadding_MetaData), NewProp_BorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground = { "BorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSidebarLayoutSettings, BorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackground_MetaData), NewProp_BorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsWidgetAtRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_LoadingWidgetAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_TipAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderVerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderHorizontalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewProp_BorderBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"SidebarLayoutSettings",
	Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::PropPointers),
	sizeof(FSidebarLayoutSettings),
	alignof(FSidebarLayoutSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSidebarLayoutSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings.InnerSingleton;
}
// ********** End ScriptStruct FSidebarLayoutSettings **********************************************

// ********** Begin ScriptStruct FDualSidebarLayoutSettings ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings;
class UScriptStruct* FDualSidebarLayoutSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings, (UObject*)Z_Construct_UPackage__Script_AsyncLoadingScreen(), TEXT("DualSidebarLayoutSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dual Sidebar Layout settings*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dual Sidebar Layout settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingWidgetAtRight_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is loading widget on the right or left border? */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is loading widget on the right or left border?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the left widget. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the left widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the right widget. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the right widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftBorderVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the left border background that contains all widgets. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the left border background that contains all widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightBorderVerticalAlignment_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The vertical alignment of the right border background that contains all widgets. */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The vertical alignment of the right border background that contains all widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftBorderPadding_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding area between the left border and the widget it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding area between the left border and the widget it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightBorderPadding_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding area between the right border and the widget it contains.*/" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding area between the right border and the widget it contains." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftBorderBackground_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for the left border widget */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for the left border widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightBorderBackground_MetaData[] = {
		{ "Category", "Dual Sidebar Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Background appearance settings for the right border widget */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Background appearance settings for the right border widget" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsLoadingWidgetAtRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingWidgetAtRight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftVerticalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightVerticalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftBorderVerticalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightBorderVerticalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightBorderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBorderBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightBorderBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDualSidebarLayoutSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_SetBit(void* Obj)
{
	((FDualSidebarLayoutSettings*)Obj)->bIsLoadingWidgetAtRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight = { "bIsLoadingWidgetAtRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDualSidebarLayoutSettings), &Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadingWidgetAtRight_MetaData), NewProp_bIsLoadingWidgetAtRight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment = { "LeftVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftVerticalAlignment_MetaData), NewProp_LeftVerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment = { "RightVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightVerticalAlignment_MetaData), NewProp_RightVerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment = { "LeftBorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftBorderVerticalAlignment_MetaData), NewProp_LeftBorderVerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment = { "RightBorderVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightBorderVerticalAlignment_MetaData), NewProp_RightBorderVerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding = { "LeftBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftBorderPadding_MetaData), NewProp_LeftBorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding = { "RightBorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightBorderPadding_MetaData), NewProp_RightBorderPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground = { "LeftBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, LeftBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftBorderBackground_MetaData), NewProp_LeftBorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground = { "RightBorderBackground", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDualSidebarLayoutSettings, RightBorderBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightBorderBackground_MetaData), NewProp_RightBorderBackground_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_bIsLoadingWidgetAtRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftVerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightVerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderVerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderVerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_LeftBorderBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewProp_RightBorderBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
	nullptr,
	&NewStructOps,
	"DualSidebarLayoutSettings",
	Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::PropPointers),
	sizeof(FDualSidebarLayoutSettings),
	alignof(FDualSidebarLayoutSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDualSidebarLayoutSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings.InnerSingleton, Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings.InnerSingleton;
}
// ********** End ScriptStruct FDualSidebarLayoutSettings ******************************************

// ********** Begin Class ULoadingScreenSettings ***************************************************
void ULoadingScreenSettings::StaticRegisterNativesULoadingScreenSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULoadingScreenSettings;
UClass* ULoadingScreenSettings::GetPrivateStaticClass()
{
	using TClass = ULoadingScreenSettings;
	if (!Z_Registration_Info_UClass_ULoadingScreenSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LoadingScreenSettings"),
			Z_Registration_Info_UClass_ULoadingScreenSettings.InnerSingleton,
			StaticRegisterNativesULoadingScreenSettings,
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
	return Z_Registration_Info_UClass_ULoadingScreenSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister()
{
	return ULoadingScreenSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULoadingScreenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Async Loading Screen Settings \n */" },
#endif
		{ "DisplayName", "Async Loading Screen" },
		{ "IncludePath", "LoadingScreenSettings.h" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async Loading Screen Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadBackgroundImages_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, load all background images at the start of the game.\n\x09 * \n\x09 * This is a workaround for the issue when the background image \n\x09 * is loaded too late with the wrong image scaling. \n\x09 * \n\x09 * This issue only happens in the Standalone or Launch mode.\n\x09 * The packaged game should work fine.\n\x09 * \n\x09 * If you don't encounter this issue when developing, don't enable \n\x09 * this option, since it will keep the background images in the \n\x09 * memory all the time, therefore consumes memory resources.\n\x09 * \n\x09 * However, you can manually remove all the preloaded background\n\x09 * images by calling the Blueprint function \n\x09 * \"RemovePreloadedBackgroundImages\"\n\x09 * \n\x09 * You will need to re-load all background images by calling \n\x09 * the Blueprint function \"PreloadBackgroundImages\"\n\x09 * \n\x09 * Note: Call \"PreloadBackgroundImages\" before the \"OpenLevel\"\n\x09 * \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, load all background images at the start of the game.\n\nThis is a workaround for the issue when the background image\nis loaded too late with the wrong image scaling.\n\nThis issue only happens in the Standalone or Launch mode.\nThe packaged game should work fine.\n\nIf you don't encounter this issue when developing, don't enable\nthis option, since it will keep the background images in the\nmemory all the time, therefore consumes memory resources.\n\nHowever, you can manually remove all the preloaded background\nimages by calling the Blueprint function\n\"RemovePreloadedBackgroundImages\"\n\nYou will need to re-load all background images by calling\nthe Blueprint function \"PreloadBackgroundImages\"\n\nNote: Call \"PreloadBackgroundImages\" before the \"OpenLevel\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupLoadingScreen_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The startup loading screen when you first open the game. Setup any studio logo movies here.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The startup loading screen when you first open the game. Setup any studio logo movies here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLoadingScreen_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The default loading screen that shows up whenever you open a new level.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default loading screen that shows up whenever you open a new level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Classic_MetaData[] = {
		{ "Category", "Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Classic Layout settings.\n\x09 * The Classic is a simple, generic layout and fits well with many designs.\n\x09 * A border that contains loading and tip widgets can be at the bottom or top.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classic Layout settings.\nThe Classic is a simple, generic layout and fits well with many designs.\nA border that contains loading and tip widgets can be at the bottom or top." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Center Layout settings.\n\x09 * The loading widget is at the center of the screen, tip widget can be at the bottom or top.\n\x09 * The Center layout is a good choice if your loading icon is the main design.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Center Layout settings.\nThe loading widget is at the center of the screen, tip widget can be at the bottom or top.\nThe Center layout is a good choice if your loading icon is the main design." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Letterbox_MetaData[] = {
		{ "Category", "Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Letterbox Layout settings.\n\x09 * The Letterbox layout has two borders on top and bottom of the screen. Loading widget\n\x09 * can be on the top and the tip is at the bottom of the screen, or vice versa.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Letterbox Layout settings.\nThe Letterbox layout has two borders on top and bottom of the screen. Loading widget\ncan be on the top and the tip is at the bottom of the screen, or vice versa." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sidebar_MetaData[] = {
		{ "Category", "Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sidebar Layout settings.\n\x09 * The Sidebar layout has a vertical border on the left or right of the screen. The Sidebar \n\x09 * is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sidebar Layout settings.\nThe Sidebar layout has a vertical border on the left or right of the screen. The Sidebar\nis suitable for storytelling, long paragraphs due to the height of the tip widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DualSidebar_MetaData[] = {
		{ "Category", "Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dual Sidebar Layout settings\n\x09 * Similar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\n\x09 * The Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dual Sidebar Layout settings\nSimilar to Sidebar layout but Dual Sidebar layout has two vertical borders on both left and right of the screen.\nThe Dual Sidebar layout is suitable for storytelling, long paragraphs due to the height of the tip widget." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPreloadBackgroundImages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadBackgroundImages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartupLoadingScreen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLoadingScreen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Classic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Letterbox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sidebar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DualSidebar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_SetBit(void* Obj)
{
	((ULoadingScreenSettings*)Obj)->bPreloadBackgroundImages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages = { "bPreloadBackgroundImages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULoadingScreenSettings), &Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreloadBackgroundImages_MetaData), NewProp_bPreloadBackgroundImages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen = { "StartupLoadingScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, StartupLoadingScreen), Z_Construct_UScriptStruct_FALoadingScreenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupLoadingScreen_MetaData), NewProp_StartupLoadingScreen_MetaData) }; // 417803788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen = { "DefaultLoadingScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, DefaultLoadingScreen), Z_Construct_UScriptStruct_FALoadingScreenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLoadingScreen_MetaData), NewProp_DefaultLoadingScreen_MetaData) }; // 417803788
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic = { "Classic", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Classic), Z_Construct_UScriptStruct_FClassicLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Classic_MetaData), NewProp_Classic_MetaData) }; // 895700988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Center), Z_Construct_UScriptStruct_FCenterLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) }; // 2022162913
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox = { "Letterbox", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Letterbox), Z_Construct_UScriptStruct_FLetterboxLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Letterbox_MetaData), NewProp_Letterbox_MetaData) }; // 3064115814
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar = { "Sidebar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, Sidebar), Z_Construct_UScriptStruct_FSidebarLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sidebar_MetaData), NewProp_Sidebar_MetaData) }; // 838042332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar = { "DualSidebar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadingScreenSettings, DualSidebar), Z_Construct_UScriptStruct_FDualSidebarLayoutSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DualSidebar_MetaData), NewProp_DualSidebar_MetaData) }; // 2225280355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_bPreloadBackgroundImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupLoadingScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultLoadingScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Classic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Letterbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Sidebar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DualSidebar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncLoadingScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams = {
	&ULoadingScreenSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingScreenSettings()
{
	if (!Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton, Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingScreenSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSettings);
ULoadingScreenSettings::~ULoadingScreenSettings() {}
// ********** End Class ULoadingScreenSettings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAsyncLoadingScreenLayout_StaticEnum, TEXT("EAsyncLoadingScreenLayout"), &Z_Registration_Info_UEnum_EAsyncLoadingScreenLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2492976519U) },
		{ ELoadingIconType_StaticEnum, TEXT("ELoadingIconType"), &Z_Registration_Info_UEnum_ELoadingIconType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1252965477U) },
		{ ELoadingWidgetType_StaticEnum, TEXT("ELoadingWidgetType"), &Z_Registration_Info_UEnum_ELoadingWidgetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444560743U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetAlignment::StaticStruct, Z_Construct_UScriptStruct_FWidgetAlignment_Statics::NewStructOps, TEXT("WidgetAlignment"), &Z_Registration_Info_UScriptStruct_FWidgetAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetAlignment), 3363527339U) },
		{ FTextAppearance::StaticStruct, Z_Construct_UScriptStruct_FTextAppearance_Statics::NewStructOps, TEXT("TextAppearance"), &Z_Registration_Info_UScriptStruct_FTextAppearance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextAppearance), 325557233U) },
		{ FThrobberSettings::StaticStruct, Z_Construct_UScriptStruct_FThrobberSettings_Statics::NewStructOps, TEXT("ThrobberSettings"), &Z_Registration_Info_UScriptStruct_FThrobberSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThrobberSettings), 2257127751U) },
		{ FCircularThrobberSettings::StaticStruct, Z_Construct_UScriptStruct_FCircularThrobberSettings_Statics::NewStructOps, TEXT("CircularThrobberSettings"), &Z_Registration_Info_UScriptStruct_FCircularThrobberSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCircularThrobberSettings), 2663559695U) },
		{ FImageSequenceSettings::StaticStruct, Z_Construct_UScriptStruct_FImageSequenceSettings_Statics::NewStructOps, TEXT("ImageSequenceSettings"), &Z_Registration_Info_UScriptStruct_FImageSequenceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageSequenceSettings), 2286968538U) },
		{ FBackgroundSettings::StaticStruct, Z_Construct_UScriptStruct_FBackgroundSettings_Statics::NewStructOps, TEXT("BackgroundSettings"), &Z_Registration_Info_UScriptStruct_FBackgroundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBackgroundSettings), 1817431589U) },
		{ FLoadingWidgetSettings::StaticStruct, Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewStructOps, TEXT("LoadingWidgetSettings"), &Z_Registration_Info_UScriptStruct_FLoadingWidgetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadingWidgetSettings), 4158482141U) },
		{ FTipSettings::StaticStruct, Z_Construct_UScriptStruct_FTipSettings_Statics::NewStructOps, TEXT("TipSettings"), &Z_Registration_Info_UScriptStruct_FTipSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTipSettings), 998486075U) },
		{ FLoadingCompleteTextSettings::StaticStruct, Z_Construct_UScriptStruct_FLoadingCompleteTextSettings_Statics::NewStructOps, TEXT("LoadingCompleteTextSettings"), &Z_Registration_Info_UScriptStruct_FLoadingCompleteTextSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadingCompleteTextSettings), 1646353650U) },
		{ FALoadingScreenSettings::StaticStruct, Z_Construct_UScriptStruct_FALoadingScreenSettings_Statics::NewStructOps, TEXT("ALoadingScreenSettings"), &Z_Registration_Info_UScriptStruct_FALoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FALoadingScreenSettings), 417803788U) },
		{ FClassicLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FClassicLayoutSettings_Statics::NewStructOps, TEXT("ClassicLayoutSettings"), &Z_Registration_Info_UScriptStruct_FClassicLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassicLayoutSettings), 895700988U) },
		{ FCenterLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FCenterLayoutSettings_Statics::NewStructOps, TEXT("CenterLayoutSettings"), &Z_Registration_Info_UScriptStruct_FCenterLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCenterLayoutSettings), 2022162913U) },
		{ FLetterboxLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FLetterboxLayoutSettings_Statics::NewStructOps, TEXT("LetterboxLayoutSettings"), &Z_Registration_Info_UScriptStruct_FLetterboxLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLetterboxLayoutSettings), 3064115814U) },
		{ FSidebarLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FSidebarLayoutSettings_Statics::NewStructOps, TEXT("SidebarLayoutSettings"), &Z_Registration_Info_UScriptStruct_FSidebarLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSidebarLayoutSettings), 838042332U) },
		{ FDualSidebarLayoutSettings::StaticStruct, Z_Construct_UScriptStruct_FDualSidebarLayoutSettings_Statics::NewStructOps, TEXT("DualSidebarLayoutSettings"), &Z_Registration_Info_UScriptStruct_FDualSidebarLayoutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDualSidebarLayoutSettings), 2225280355U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenSettings, ULoadingScreenSettings::StaticClass, TEXT("ULoadingScreenSettings"), &Z_Registration_Info_UClass_ULoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenSettings), 2132084515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_1182317732(TEXT("/Script/AsyncLoadingScreen"),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EasternEraMod_Plugins_AsyncLoadingScreen_Source_AsyncLoadingScreen_Public_LoadingScreenSettings_h__Script_AsyncLoadingScreen_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
