// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/LLatent.h"

#ifdef LQUICKFRAME_LLatent_generated_h
#error "LLatent.generated.h already included, missing '#pragma once' in LLatent.h"
#endif
#define LQUICKFRAME_LLatent_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EasternEraMod_Plugins_LQuickFrame_Source_LQuickFrame_Misc_LLatent_h

// ********** Begin Enum ELatentRespOne ************************************************************
#define FOREACH_ENUM_ELATENTRESPONE(op) \
	op(ELatentRespOne::ELR_None) \
	op(ELatentRespOne::Exec) 

enum class ELatentRespOne : uint8;
template<> struct TIsUEnumClass<ELatentRespOne> { enum { Value = true }; };
template<> LQUICKFRAME_API UEnum* StaticEnum<ELatentRespOne>();
// ********** End Enum ELatentRespOne **************************************************************

// ********** Begin Enum ELatentRespTwo ************************************************************
#define FOREACH_ENUM_ELATENTRESPTWO(op) \
	op(ELatentRespTwo::ELR_None) \
	op(ELatentRespTwo::Success) \
	op(ELatentRespTwo::Faild) 

enum class ELatentRespTwo : uint8;
template<> struct TIsUEnumClass<ELatentRespTwo> { enum { Value = true }; };
template<> LQUICKFRAME_API UEnum* StaticEnum<ELatentRespTwo>();
// ********** End Enum ELatentRespTwo **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
