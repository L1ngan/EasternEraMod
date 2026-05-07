// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityEnum.h"

#ifdef GASFRAMEWORK_AbilityEnum_generated_h
#error "AbilityEnum.generated.h already included, missing '#pragma once' in AbilityEnum.h"
#endif
#define GASFRAMEWORK_AbilityEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFormatText *******************************************************
#define FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFormatText_Statics; \
	GASFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FFormatText;
// ********** End ScriptStruct FFormatText *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModProject_Plugins_GASFramework_Source_GASFramework_Public_AbilityEnum_h

// ********** Begin Enum EItemQuality **************************************************************
#define FOREACH_ENUM_EITEMQUALITY(op) \
	op(EItemQuality::None) \
	op(EItemQuality::White) \
	op(EItemQuality::Green) \
	op(EItemQuality::Blue) \
	op(EItemQuality::Purple) \
	op(EItemQuality::Orange) \
	op(EItemQuality::Golden) \
	op(EItemQuality::Red) \
	op(EItemQuality::Colorful) 

enum class EItemQuality : uint8;
template<> struct TIsUEnumClass<EItemQuality> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EItemQuality>();
// ********** End Enum EItemQuality ****************************************************************

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::None) \
	op(EWeaponType::Bow) \
	op(EWeaponType::Sword) \
	op(EWeaponType::Blade) \
	op(EWeaponType::Spear) \
	op(EWeaponType::Ax) \
	op(EWeaponType::Hammer) \
	op(EWeaponType::Fist) \
	op(EWeaponType::HiddenWeapon) \
	op(EWeaponType::Firearm) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> GASFRAMEWORK_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
