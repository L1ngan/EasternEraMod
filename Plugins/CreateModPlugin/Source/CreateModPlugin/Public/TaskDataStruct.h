#pragma once

#include "CoreMinimal.h"
#include "BaseDataStruct.h"
#include "GameplayTagContainer.h"
#include "TaskDataStruct.generated.h"

// 任务条件类型
UENUM(BlueprintType)
enum class EModCommonTaskConditionType : uint8
{
	None,
	CharacterNumber,
	UnlockTechnology,
	CharacterPracticeLevel,
	OpenedDantianCharactersNum,
	HaveBuilding,
	HaveBuildingNumberToTeam,
	HaveCombinationBuilding,
	ForceReputation,
	ForceMasterRealmLevel,
	OwnedCenterCityNum,
	OwnedStationNum,
	OwnedResourcePointNum,
	CameraTranslate,
	CameraScroll,
	CameraRotate,
	TimePause,
	TimePlay,
	TimeSpeed,
	CharacterChoose,
	CharacterSwitch,
	CharacterSwitchTab,
	ClickCommonButton,
	SelectResource,
	CollectionDone,
	OutputWorkloadDone,
	ConstructBuilding,
	OpenBuildMenu,
	OpenWorkMenu,
	OpenScheduleMenu,
	OpenTechnologyMenu,
	SelectBuilding,
	ClickBuilding,
	ClickBuildCommonButton,
	CookSetting,
	SelectFormula,
	Fabricate,
	PlantFarmland,
	AdjustWorkPriority,
	AdjustCustomWorkPriority,
	SwitchWorkPriorityMode,
	SelectWorkSchedule,
	ChangeWorkSchedule,
	AddNewWorkSchedule,
	TransferToWorkSchedule,
	ClickWeaponIcon,
	EquipmentWeapon,
	SelectAnimal,
	ButcherFinished,
	PlaceLordRealmLevel,
	PlaceLordGrowUpAttribute,
	ConstructRoom,
	CallupRightMove,
	AddWishList,
	RoleDeadbyId,
	GiveFoodForApprentice,
	CreatePlayerForce,
	SubmitItemToTask,
	FinishTask,
	AcceptTask,
	WealthPoints,
	EnemyForceNum,
	SpecificForceFavorability,
	ForceMoney,
	ForceLevel,
	AssignInnerHallMaster,
	RescuitNewDisciple,
	MartialArtsTournamentSetting,
	ParticipateMartialArtsTournament,
	ActivateBreakthroughRoom,
	DiscipleBreakthroughSuccess,
	ExchangeMartialArtsWin,
	CompleteTaskTimes,
	ConstructRoom49,
	ConstructBuilding49,
	CompleteOrFinishTask,
	InWorldPlace,
	FixedCurrentValueCondition,
	WorldPlaceOccupiedByPlayerTimes,
	EscortArrived,
	EscortFailed,
	GuardSucceeded,
	GuardFailed,
	RandomDiscipleDeadByConfigID,
};

// 任务完成状态
UENUM(BlueprintType)
enum class EModCompleteState : uint8
{
	Unfinished,
	Finished,
};

// 任务执行状态
UENUM(BlueprintType)
enum class EModCommonTaskExecuteState : uint8
{
	None,
	PreparationState,
	PostState,
	Executing,
	Finished,
	NotFindBuilding,
	NoVacancy,
	UnselectedProductionItem,
	ResourceDeficiency,
	UnselectedProductionNumber,
	WarehouseAlreadyFull,
	UnselectedSeed,
	StopGrowing,
	UnselectedExpendItem,
	SelectedItemDeficiency,
};

// 任务类型
UENUM(BlueprintType)
enum class EModCommonTaskType : uint8
{
	None,
	BeginnerGuid,
	PostStationTask,
	WorldTask,
};

// 新手引导解锁类型
UENUM(BlueprintType)
enum class EModBeginnerGuideUnlockType : uint8
{
	Building,
	FunctionalityUI,
};

// 新手引导任务开始事件类型
UENUM(BlueprintType)
enum class EModBeginnerGuideEventType : uint8
{
	None,
	AddMonster,
	AddNewRecruit,
};

// 任务奖励物品类型
UENUM(BlueprintType)
enum class EModAwardType : uint8
{
	None,
	Resource,
	Book,
	Reputation,
	Favorability,
	Armor,
	Weapon,
};

// 任务发布者类型
UENUM(BlueprintType)
enum class EModPublisherType : uint8
{
	None,
	Force,
	Character,
};

// 任务触发功能类型
UENUM(BlueprintType)
enum class EModTriggerFunctionType : uint8
{
	None,
	Task,
	GenerateMonsters,
	AddForceFavorability,
	AddPlayerForceReputation,
	TransportToTaskPlaceUI,
	ReturnToPlayerMainPlace,
	Dialogue,
	TriggerRequireTaskColdDown,
	TriggerRequireHelpColdDown,
	AddPublisherForceFavorability,
};

// 任务触发时机
UENUM(BlueprintType)
enum class EModTriggerTimingType : uint8
{
	None,
	Start,
	End,
	Complete,
	Timeout,
	GiveUp,
	Dialogue,
	TaskPlace,
};

// 条件数值更新类型
UENUM(BlueprintType)
enum class EModConditionValueUpdateType : uint8
{
	None,
	Override,
	Addition,
	CompareByMax,
	CompareByMin,
};

// 条件数值比较类型
UENUM(BlueprintType)
enum class EModConditionValueCompareType : uint8
{
	GreatThanOrEqualTo,
	GreatThan,
	EqualTo,
	LessThanOrEqualTo,
	LessThan,
};

// 任务条件
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModCommonTaskCondition : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Describe;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FText> SubDescribes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> SubConditionIDs;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName CoverTipsID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModCommonTaskConditionType CommonTaskConditionType = EModCommonTaskConditionType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName RequiredID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 RequiredValue = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentValue = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModConditionValueUpdateType ConditionValueUpdateType = EModConditionValueUpdateType::Addition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModConditionValueCompareType ConditionValueCompareType = EModConditionValueCompareType::GreatThanOrEqualTo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModCompleteState ConditionState = EModCompleteState::Unfinished;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ConditionSchedule = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 BuildingType = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 FiltrateTypeID = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDynamicCondition = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ExecuteStateTips;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ExtraParam1 = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText FailedTipText;
};

// 任务物品简要数据
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModItemSimpleData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Id;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModGroundInventoryType Type = EModGroundInventoryType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Num = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRandomAttribute = false;
};

// 任务触发功能
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModTriggerFunction : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName OriginTaskID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGuid OriginTaskGUID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModTriggerFunctionType TriggerFunctionType = EModTriggerFunctionType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModTriggerTimingType TriggerTimingType = EModTriggerTimingType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DelayTime = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FIntPoint TriggerPeriod = FIntPoint(0, 23);
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> NameParams;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int32> IntParams;
};

// 任务可选奖励
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModTaskSelectableAward
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FModItemSimpleData ItemData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ConsumeFavor = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModItemSimpleData> ConsumeItems;
};

// 世界任务
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModCommonTaskInfo : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText HeadLine;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Describe;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModCommonTaskCondition> TriggerCondition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> ConditionID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> RepelTask;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> PreTask;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> PostTask;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> WorldPlaceIDs;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAutoComplete = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, int32> TaskAward;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModItemSimpleData> TaskAwards;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModTaskSelectableAward> SelectableAwards;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxCanSelectAwardNum = 999;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxRandAwardSetNum = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, float> RandAwardSetsWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName DialogueID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName PopupID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName PopupTipsID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FName, EModBeginnerGuideUnlockType> UnlockIDs;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModCommonTaskType TaskType = EModCommonTaskType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<EModBeginnerGuideEventType, FName> TaskBeingEvent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DelayTime = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ExecuteStateTips;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 TaskGrouping = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRepetition = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Priority = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Parameter = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSoftObjectPath TaskIcon;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRemoveAfterCompletion = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 TaskTimeOut = INDEX_NONE;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanGiveUp = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModTriggerFunction> TriggerFunction;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModPublisherType PublisherType = EModPublisherType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModCommonTaskCondition> Condition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FModItemSimpleData> SubmitItems;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FGameplayTag, int32> SubmitItemTags;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 TaskPlaceTimeLimit = -1;
};
