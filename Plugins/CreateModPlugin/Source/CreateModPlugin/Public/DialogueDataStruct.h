#pragma once

#include "CoreMinimal.h"
#include "AbilityEnum.h"
#include "BaseDataStruct.h"
#include "TaskDataStruct.h"
#include "DialogueDataStruct.generated.h"

// 对话角色信息显示类型
UENUM(BlueprintType)
enum class EModDialogueCharacterInfoType : uint8
{
	None,
	DialogueInitiator,
	DialogueTarget,
	Fixed,
};

// 对话发起者或目标类型
UENUM(BlueprintType)
enum class EModDialogueActorType : uint8
{
	None,
	Character,
	WorldForce,
};

// 对话选项类型
UENUM(BlueprintType)
enum class EModDialogueOptionType : uint8
{
	None,
	SubmitItem,
	AcceptTask,
	TourRegister,
	TourCancelRegister,
	TourHideInfo,
	TourPropagandaStrength,
	TourDefamation,
	Trade,
	ExchangeMartialArts,
	TourPreview,
	EventMartialArtsCompetition,
};

// 对话触发功能类型
UENUM(BlueprintType)
enum class EModDialogueTriggerFunctionType : uint8
{
	None,
	Task,
	AddPlayerMoney,
	CompleteTask,
	AddPlayerForceReputation,
	Recruit,
	RemoveCompletedTaskRecord,
	AddForceFavorability,
	StartEventDuel,
	StartEscortTask,
	StartGuardTask,
	RequestAidDisciple,
	ResetTask,
};

// 对话组中的单个入口
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModDialogueGroupItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StartDialogueID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ConditionID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FModCommonTaskCondition> Conditions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TriggerCount = -1;
};

// 对话组
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModDialogueGroup : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FModDialogueGroupItem> GroupItem;
};

// 对话随机选项权重
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModDialogueRandOptions
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> DialogueOptionWeight;
};

// 对话信息
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModDialogueInfo : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DialogueText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> DialogueOptions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FModDialogueRandOptions> RandOptions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClickSpacePass = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextDialogueID = NAME_None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModDialogueCharacterInfoType DialogueCharacterInfoType = EModDialogueCharacterInfoType::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath OverrideAvatar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText OverrideFirstName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText OverrideName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText OverrideTitle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName MaleVoiceID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName FemaleVoiceID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModDialogueRandOptions ForceCommonRandOptions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FModDialogueRandOptions> ForceSpecialRandOptions;
};

// 对话选项成功后的附加功能
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModDialogueTriggerFunctionData : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModDialogueTriggerFunctionType FunctionType = EModDialogueTriggerFunctionType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int32> IntParams;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> NameParams;
};

// 对话选项
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModDialogueOption : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText OptionText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NextDialogueID = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName TriggeredTaskID = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName TriggeredStationTaskID = NAME_None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName TriggeredEvent = NAME_None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FModCommonTaskCondition> Conditions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FModCommonTaskCondition> ClickConditions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FModDialogueTriggerFunctionData> TriggerFunctions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModDialogueOptionType DialogueOptionType = EModDialogueOptionType::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SubmitItemToTask;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TaskNPCId;
};
