// Copyright Epic Games, Inc. All Rights Reserved.

#include "Messaging/CommonGameDialog.h"

#include "Messaging/CommonMessagingSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(CommonGameDialog)

#define LOCTEXT_NAMESPACE "Messaging"

UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationOk(const FText& Header, const FText& Body)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = LOCTEXT("Ok", "Ok");

	Descriptor->ButtonActions.Add(ConfirmAction);

	return Descriptor;
}

UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationOkButtonLabel(const FText& Header, const FText& Body, const FText& OKText)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = OKText;

	Descriptor->ButtonActions.Add(ConfirmAction);

	return Descriptor;
}

UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationOkCancel(const FText& Header, const FText& Body)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = LOCTEXT("Ok", "Ok");

	FConfirmationDialogAction CancelAction;
	CancelAction.Result = ECommonMessagingResult::Cancelled;
	CancelAction.OptionalDisplayText = LOCTEXT("Cancel", "Cancel");

	Descriptor->ButtonActions.Add(ConfirmAction);
	Descriptor->ButtonActions.Add(CancelAction);

	return Descriptor;
}

UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationOkCancelButtonLabel(const FText& Header, const FText& Body, const FText& OKText, const FText& CancelText)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = OKText;

	FConfirmationDialogAction CancelAction;
	CancelAction.Result = ECommonMessagingResult::Cancelled;
	CancelAction.OptionalDisplayText = CancelText;

	Descriptor->ButtonActions.Add(ConfirmAction);
	Descriptor->ButtonActions.Add(CancelAction);

	return Descriptor;
}

UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationYesNo(const FText& Header, const FText& Body)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = LOCTEXT("Yes", "Yes");

	FConfirmationDialogAction DeclineAction;
	DeclineAction.Result = ECommonMessagingResult::Declined;
	DeclineAction.OptionalDisplayText = LOCTEXT("No", "No");

	Descriptor->ButtonActions.Add(ConfirmAction);
	Descriptor->ButtonActions.Add(DeclineAction);

	return Descriptor;
}

UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationYesNoLabel(const FText& Header, const FText& Body, const FText& YesLabel, const FText& NoLabel)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = YesLabel;

	FConfirmationDialogAction DeclineAction;
	DeclineAction.Result = ECommonMessagingResult::Declined;
	DeclineAction.OptionalDisplayText = NoLabel;

	Descriptor->ButtonActions.Add(ConfirmAction);
	Descriptor->ButtonActions.Add(DeclineAction);

	return Descriptor;
}


UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::CreateConfirmationYesNoCancel(const FText& Header, const FText& Body)
{
	UCommonGameDialogDescriptor* Descriptor = NewObject<UCommonGameDialogDescriptor>();
	Descriptor->Header = Header;
	Descriptor->Body = Body;

	FConfirmationDialogAction ConfirmAction;
	ConfirmAction.Result = ECommonMessagingResult::Confirmed;
	ConfirmAction.OptionalDisplayText = LOCTEXT("Yes", "Yes");

	FConfirmationDialogAction DeclineAction;
	DeclineAction.Result = ECommonMessagingResult::Declined;
	DeclineAction.OptionalDisplayText = LOCTEXT("No", "No");

	FConfirmationDialogAction CancelAction;
	CancelAction.Result = ECommonMessagingResult::Cancelled;
	CancelAction.OptionalDisplayText = LOCTEXT("Cancel", "Cancel");

	Descriptor->ButtonActions.Add(ConfirmAction);
	Descriptor->ButtonActions.Add(DeclineAction);
	Descriptor->ButtonActions.Add(CancelAction);

	return Descriptor;
}

UCommonGameDialog::UCommonGameDialog()
{

}

void UCommonGameDialog::SetupDialog(UCommonGameDialogDescriptor* Descriptor, FCommonMessagingResultDelegate ResultCallback)
{

}

void UCommonGameDialog::KillDialog()
{

}

#undef LOCTEXT_NAMESPACE
