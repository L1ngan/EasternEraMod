// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonModuleBase.h"

void UCommonModuleBase::InitModuleInfo_Implementation(const FInstancedStruct  & InInputModuleInfo)
{
	InputModuleInfo = InInputModuleInfo;
	UpdateModuleInfo();
}

void UCommonModuleBase::InitModuleInfoByObject_Implementation(UObject* InObject)
{
	InputObject = InObject;
	UpdateModuleInfo();
}
