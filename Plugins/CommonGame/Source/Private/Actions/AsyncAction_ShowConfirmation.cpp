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
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationYesNoLabel(UObject* InWorldContextObject, FText Title, FText Message, FText YesLabel, FText NoLabel)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationYesNoLabel(Title, Message,YesLabel, NoLabel);
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkButtonLabel(UObject* InWorldContextObject, FText Title, FText Message, FText OKLabel)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationOkButtonLabel(Title, Message,OKLabel);
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancel(UObject* InWorldContextObject, FText Title, FText Message)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationOkCancel(Title, Message);
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancelButtonLabel(UObject* InWorldContextObject, FText Title, FText Message, FText OKLabel, FText CancelLabel)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = UCommonGameDialogDescriptor::CreateConfirmationOkCancelButtonLabel(Title, Message,OKLabel, CancelLabel);
	Action->RegisterWithGameInstance(InWorldContextObject);

	return Action;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationCustom(UObject* InWorldContextObject, UCommonGameDialogDescriptor* Descriptor)
{
	UAsyncAction_ShowConfirmation* Action = NewObject<UAsyncAction_ShowConfirmation>();
	Action->WorldContextObject = InWorldContextObject;
	Action->Descriptor = Descriptor;
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
			FCommonMessagingResultDelegate ResultCallback = FCommonMessagingResultDelegate::CreateUObject(this, &UAsyncAction_ShowConfirmation::HandleConfirmationResult);
			Messaging->ShowConfirmation(Descriptor, ResultCallback);
			return;
		}
	}
	
	// If we couldn't make the confirmation, just handle an unknown result and broadcast nothing
	HandleConfirmationResult(ECommonMessagingResult::Unknown);
}

void UAsyncAction_ShowConfirmation::HandleConfirmationResult(ECommonMessagingResult ConfirmationResult)
{
	OnResult.Broadcast(ConfirmationResult);

	SetReadyToDestroy();
}


