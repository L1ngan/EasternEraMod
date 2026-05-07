// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LGameRoleMng.h"
#include "GameFramework/Controller.h"

void ULGameRoleMng::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	RoleMap.Empty();
	Super::EndPlay(EndPlayReason);
}

void ULGameRoleMng::RegistRole(AController* AI, FGuid ID)
{
	RoleMap.Add(ID, AI);
	if(OnRegistedRoleChange.IsBound())
	{
		OnRegistedRoleChange.Broadcast(ID,true);
	}
}

void ULGameRoleMng::UnRegistRole(FGuid ID)
{
	RoleMap.Remove(ID);
	if(OnRegistedRoleChange.IsBound())
	{
		OnRegistedRoleChange.Broadcast(ID,false);
	}
}

AController* ULGameRoleMng::FindRole(FGuid ID, TSubclassOf<AController> Class)
{
	AController** aip = RoleMap.Find(ID);
	if(aip && (*aip)) return TSubClassOfCastTo(*aip, Class);
	return NULL;
}

TArray<AController*> ULGameRoleMng::GetAllRoles(TSubclassOf<AController> Class)
{
	TArray<AController*> ary;
	ary.Empty(RoleMap.Num()); 
	UClass* AIClass = Class.Get();
	for(TMap<FGuid, AController*>::TIterator iter(RoleMap); iter; ++iter){
		if(iter->Value == NULL) continue;
		if (AIClass) {
			if(iter->Value->IsA(AIClass)) ary.Add(iter->Value);
		}else {
			ary.Add(iter->Value);
		}
	}
	return ary;
}