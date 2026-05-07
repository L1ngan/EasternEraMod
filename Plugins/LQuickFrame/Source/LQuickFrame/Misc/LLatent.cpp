// Copyright 2024 liwei, Inc. All Rights Reserved.

#include "LLatent.h"

FSimpleLatentAction::FSimpleLatentAction(int8* InState,const FLatentActionInfo& InInfo):State(InState), Info(InInfo)
{
	*State = 0; 
	GWorld->GetLatentActionManager().AddNewAction(InInfo.CallbackTarget, InInfo.UUID, this);
}

void FSimpleLatentAction::UpdateOperation(FLatentResponse& Response)
{
	checkf(IsValid(Info.CallbackTarget),TEXT("对象已释放,是否切换了关卡?"));
	if((*State) & 4) {
		*State = (*State) ^ 4;
		Response.FinishAndTriggerIf(true, Info.ExecutionFunction, Info.Linkage, Info.CallbackTarget);
		State = NULL;
	}else if((*State)>0){
		UFunction* Func = Info.CallbackTarget->FindFunctionChecked(Info.ExecutionFunction);
		Info.CallbackTarget->ProcessEvent(Func, &(Info.Linkage));
		*State = 0;
	}
}

TArray<TSharedPtr<FSimpleLatentAction>> FLatentMng::latents_;
template<typename T> int32 FLatentMng::CreateLatent(T* State, const FLatentActionInfo& InInfo)
{
	check(!GWorld->GetLatentActionManager().FindExistingAction<FSimpleLatentAction>(InInfo.CallbackTarget, InInfo.UUID));
	int32 idx = -1;
	for (int32 i = 0; i < latents_.Num(); i++) {
		if (latents_[i]->State == NULL) {
			idx = i; break;
		}
	}
	if (idx == -1) {
		idx = latents_.Emplace(MakeShared<FSimpleLatentAction>((int8*)State,InInfo));
	}else {
		new (latents_[idx].Get()) FSimpleLatentAction((int8*)State,InInfo);
	}
	return idx;
}
template int32 FLatentMng::CreateLatent<ELatentRespOne>(ELatentRespOne* State, const FLatentActionInfo& InInfo);
template int32 FLatentMng::CreateLatent<ELatentRespTwo>(ELatentRespTwo* State, const FLatentActionInfo& InInfo);

void FLatentMng::TriggerLatentOne(int32& LatentId, bool bFinish)
{
	if(LatentId == -1) return;
	check(LatentId<latents_.Num());
	if (bFinish) {
		*latents_[LatentId]->State = 5;
		LatentId = -1;
	}else {
		*latents_[LatentId]->State = 1;
	}
}

void FLatentMng::TriggerLatentTwo(int32& LatentId, bool bSuccess, bool bFinish)
{
	if(LatentId == -1) return;
	check(LatentId<latents_.Num());
	if (bFinish) {
		*latents_[LatentId]->State = bSuccess ? 5 : 6;
		LatentId = -1;
	}else {
		*latents_[LatentId]->State = bSuccess ? 1 : 2;
	}
}

void FLatentMng::Remove(int32& LatentId)
{
	if(LatentId < 0) return;
	check(LatentId < latents_.Num());
	latents_[LatentId]->State = NULL;
	LatentId = -1;
}

void FLatentMng::Clear()
{
	latents_.Reset();
}