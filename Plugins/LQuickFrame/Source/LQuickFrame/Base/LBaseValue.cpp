// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LBaseValue.h"

#pragma region  --- FLUniValue ---
FLUniValue operator-(const FLUniValue& Other)
{
	FLUniValue Uni = Other;
	switch (Uni.ValType) {
		case ELUniType::Bool: {Uni.BoolVal = !Uni.BoolVal; break; }
		case ELUniType::Int: {Uni.IntVal = -Uni.IntVal; break; }
		case ELUniType::Float: {Uni.FloatVal = -Uni.FloatVal; break; }
	}
	return Uni;
}

FLUniValue FLUniValue::operator+(const FLUniValue& Other)
{
	FLUniValue Uni;
	Uni = *this;
	Uni += Other;
	return Uni;
}

void FLUniValue::operator+=(const FLUniValue& Other)
{
	checkf(ValType == Other.ValType, TEXT("类型不一致!"));
	switch (ValType) {
		case ELUniType::Int: {IntVal += Other.IntVal; break; }
		case ELUniType::Bool: {BoolVal = Other.BoolVal; break; }
		case ELUniType::Float: {FloatVal += Other.FloatVal; break; }
	}
}

#define LUniCompare(a,b,Query,bTrue) \
	switch(Query){ \
		case IsEqualTo: { bTrue = (a == b); break; } \
		case IsNotEqualTo: { bTrue = (a != b); break; } \
		case IsLessThan: { bTrue = (a < b); break; } \
		case IsLessThanOrEqualTo: { bTrue = (a <= b); break; } \
		case IsGreaterThan: { bTrue = (a > b); break; } \
		default: { bTrue = (a >= b); break; } \
	} 

bool FLUniValue::Compare(const FLUniValue& Other, ELUniQuery Query) const 
{
	bool bTrue;
	checkf(ValType == Other.ValType, TEXT("类型不一致!"));
	switch (ValType) {
		case ELUniType::Bool: {LUniCompare(BoolVal, Other.BoolVal, Query, bTrue); break; }
		case ELUniType::Int: {LUniCompare(IntVal, Other.IntVal, Query, bTrue); break; }
		default: {LUniCompare(FloatVal, Other.FloatVal, Query, bTrue); break; }
	}
	return bTrue;
}
#pragma endregion

#pragma region  --- ULBaseLibrary ---
FString ULBaseLibrary::DebugFlag("");
void ULBaseLibrary::SetDebugFlag(const FString& Flag)
{
	DebugFlag = Flag;
}

bool ULBaseLibrary::UniCompare(const FLUniValue& Val1, const FLUniValue& Val2, ELUniQuery Query)
{
	return Val1.Compare(Val2, Query);
}

#pragma endregion