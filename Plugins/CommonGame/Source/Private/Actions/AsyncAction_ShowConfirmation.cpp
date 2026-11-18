// Copyright Epic Games, Inc. All Rights Reserved.

#include "Actions/AsyncAction_ShowConfirmation.h"

#include "Engine/GameInstance.h"
#include "Messaging/CommonGameDialog.h"
#include "Messaging/CommonMessagingSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AsyncAction_ShowConfirmation)

UAsyncAction_ShowConfirmation::UAsyncAction_ShowConfirmation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationYesNo(UObject* InWorldContextObject, FText Title, FText Message)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationYesNo(Title, Message);
	Action->WidghtType = EWidghtType::NormalWidght;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationYesNoLabel(UObject* InWorldContextObject, FText Title, FText Message, FText YesLabel, FText NoLabel)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationYesNoLabel(Title, Message,YesLabel, NoLabel);
	Action->WidghtType = EWidghtType::NormalWidght;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowSetName(UObject* InWorldContextObject, FText Title, FText Message, FText YesLabel, FText NoLabel, const TArray<FText>& OtherTextArr)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateSetName(Title, Message, YesLabel, NoLabel, OtherTextArr);
	Action->WidghtType = EWidghtType::SetName;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkButtonLabel(UObject* InWorldContextObject, FText Title, FText Message, FText OKLabel)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationOkButtonLabel(Title, Message,OKLabel);
	Action->WidghtType = EWidghtType::NormalWidght;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancel(UObject* InWorldContextObject, FText Title, FText Message)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationOkCancel(Title, Message);
	Action->WidghtType = EWidghtType::NormalWidght;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancelButtonLabel(UObject* InWorldContextObject, FText Title, FText Message, FText OKLabel, FText CancelLabel)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationOkCancelButtonLabel(Title, Message,OKLabel, CancelLabel);
	Action->WidghtType = EWidghtType::NormalWidght;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationCustom(UObject* InWorldContextObject, UCommonGameDialogDescriptor* Descriptor)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = Descriptor;
	Action->WidghtType = EWidghtType::NormalWidght;
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

void UAsyncAction_ShowConfirmation::Activate()
{
	if (WorldContextObject && !TargetLocalPlayer)
	{
		if (UUserWidget* UserWidget = Cast<UUserWidget>(WorldContextObject))
		{
			TargetLocalPlayer = UserWidget->GetOwningLocalPlayer<ULocalPlayer>();
		}
		else if (APlayerController* PC = Cast<APlayerController>(WorldContextObject))
		{
			TargetLocalPlayer = PC->GetLocalPlayer();
		}
		else if (UWorld* World = WorldContextObject->GetWorld())
		{
			if (UGameInstance* GameInstance = World->GetGameInstance<UGameInstance>())
			{
				TargetLocalPlayer = GameInstance->GetPrimaryPlayerController(false)->GetLocalPlayer();
			}
		}
	}

	if (TargetLocalPlayer)
	{
		if (UCommonMessagingSubsystem* Messaging = TargetLocalPlayer->GetSubsystem<UCommonMessagingSubsystem>())
		{
			FCommonMessagingResultDelegate ResultCallback;
			switch (WidghtType)
			{
			case EWidghtType::NormalWidght:
				ResultCallback = FCommonMessagingResultDelegate::CreateUObject(this, &UAsyncAction_ShowConfirmation::HandleConfirmationResult);
				Messaging->ShowConfirmation(Descriptor, ResultCallback);
				// 不要在此立即调 HandleConfirmationResult：它会马上 SetReadyToDestroy 解除本节点的 GC 引用，
				// 而弹框只持弱引用(CreateUObject)续不了命；下一次 GC(挂机约 60s 必触发)后用户再点击即回调空转。
				// 真结果由弹框关闭(含静默兜底 Killed)经 ResultCallback 回传时才交付并销毁。
				break;
			case EWidghtType::SetName:
				ResultCallback = FCommonMessagingResultDelegate::CreateUObject(this, &UAsyncAction_ShowConfirmation::HandleConfirmationResult);
				Messaging->ShowSetName(Descriptor, ResultCallback);
				break;
			default:
				// 未知类型：没有真正弹出弹框，立即收尾，避免节点永远挂着不发结果/泄漏
				HandleConfirmationResult(ECommonMessagingResult::Unknown, Descriptor ? Descriptor->OtherTextArr : TArray<FText>());
				break;
			}
			return;
		}
	}

	// 拿不到 LocalPlayer / Messaging：弹框没能显示，发一次 Unknown 并销毁，
	// 避免节点泄漏、且让 BP 的 OnResult 不会永久等待
	HandleConfirmationResult(ECommonMessagingResult::Unknown, Descriptor ? Descriptor->OtherTextArr : TArray<FText>());
}

void UAsyncAction_ShowConfirmation::HandleConfirmationResult(ECommonMessagingResult ConfirmationResult, TArray<FText> OtherText)
{
	OnResult.Broadcast(ConfirmationResult, OtherText);

	SetReadyToDestroy();
}



