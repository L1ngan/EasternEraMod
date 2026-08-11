#pragma once

#include "CoreMinimal.h"
#include "AbilityStruct.h"
#include "BaseDataStruct.h"
#include "ItemDataStruct.h"
#include "MartialArtsDataStruct.generated.h"

// 武学主修大类
UENUM(BlueprintType)
enum class EModMartialArtsMajorCategories : uint8
{
	None,
	InternalPower,
	Moves,
	Passive,
	All,
};

// 武学使用方式
UENUM(BlueprintType)
enum class EModMartialArtsMajorUsageType : uint8
{
	None,
	Active,
	Trigger,
	Passive,
};

// 武学书籍顶层类型
UENUM(BlueprintType)
enum class EModMartialArtsBookType : uint8
{
	None,
	Sword,
	Blade,
	FistPalm,
	Polearm,
	HiddenWeapon,
	Internal,
	Movement,
	Special,
};

// 书籍分类
UENUM(BlueprintType)
enum class EModBookClassificationType : uint8
{
	None,
	MartialArts,
	Knowledge,
	Insight,
};

// 武学属性分类
UENUM(BlueprintType)
enum class EModMartialArtsAttributeClassification : uint8
{
	None,
	Yin,
	Neutral,
	Positive,
	LightSkill,
	HardSkill,
	InternalStrength,
	BladeStabs,
	SpearAndHalberd,
	Swords,
	AxeClubs,
	FistsAndPalms,
	HammersAndMaces,
	HiddenWeapons,
	LongRange,
};

// 书籍基础信息
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModBookInfo : public FModInventoryGeneralData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	EModBookClassificationType BookClassificationType = EModBookClassificationType::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	TMap<FGameplayAttribute, float> Attributes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	bool bCanReadRepeatedly = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	int32 RealmLevel = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	float ReadingTime = 60.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	TMap<FGameplayAttribute, float> ReadAddExpAttribute;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	float CopyTime = 60.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	int32 MaxCopyNum = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BookInfo")
	FName UnlockFormulaID;
};

// 武学大类信息
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModMartialArtsCategoryInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FText MajorCatName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	TSoftObjectPtr<UTexture2D> MajorCatIcon;
};

// 武学词条触发效果
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModAbilityTargetEntriesEffect
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	FGameplayTag AbilityClassifyTag;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	TMap<FGameplayTag, FAbilityProjectileStruct> AnimationSpawnProjectiles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	TArray<FGameplayTag> AttributesTag;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	FGameplayTag ClassifyTag;
};

// 武学词条冷却配置
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModReduceCoolDownConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown")
	FGameplayTag TargetAbilityTag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown")
	float ReduceTime = 0.f;
};

// 武学词条
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModMartialArtsEntries : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	TArray<TSubclassOf<UGameplayEffect>> EffectiveAfterEquippingGameplayEffects;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	TArray<FName> EffectiveAfterEquippingGameplayAttributes;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	TArray<FModAbilityTargetEntriesEffect> AbilityTargetEntriesEffects;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	FGameplayTagContainer SelfGameplayTags;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	TArray<FName> GiveAbility;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown")
	TArray<FModReduceCoolDownConfig> ReduceCooldown;
};

// 武学等级
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModMartialArtsLevel
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	int32 Level = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<FName> MartialArtsEntries;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FText EntriesDescribe;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FModFormatText FormatEntriesDescribe;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FText LevelName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<FGameplayTag> DescribeTag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<float> DescribeValue;
};

// 武学等级经验配置
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModMartialArtsLevelConfig : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<int32> Score;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<int32> Experience;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArtsLevel")
	TArray<int32> MovesSlotNumber;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArtsLevel")
	TArray<int32> PassiveSlotNumber;
};

// 武学等级对应的词条池
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModLevelSkillEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	int32 Level = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	TArray<FName> SkillEntryPools;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FModFormatText FormatEntryDescribe;
};

// 武学书籍分类
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModMartialArtsBookCategoryData : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base")
	FText CategoryName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	TArray<FName> MartialArtsBooks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	EModMartialArtsBookType BookType = EModMartialArtsBookType::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	FName BookQuality;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	FName CollectPrize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	FText BookDesc;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	FText Founder;
};

// 武学书籍
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModMartialArtsBookData : public FModBookInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	EModMartialArtsMajorCategories MajorCategories = EModMartialArtsMajorCategories::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	EModMartialArtsAttributeClassification AttributeClassification = EModMartialArtsAttributeClassification::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	EModMartialArtsMajorUsageType UsageType = EModMartialArtsMajorUsageType::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	TArray<EWeaponType> NeedWeaponTypes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	TMap<int32, FModMartialArtsLevel> MartialArtsLevels;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FDataTableRowHandle LevelConfig;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	float CoolDownTime = 36.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	FGameplayTagContainer CoolDownTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	FText SkillEntryTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	FModFormatText FormatSkillEntryTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	TSoftObjectPtr<UTexture2D> MartialArtsIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts")
	TSubclassOf<UGameplayEffect> LevelGameplayEffect;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	TArray<FName> GiveAbility;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries")
	FName BaseAbility;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MartialArts")
	TMap<int32, FModLevelSkillEntry> LevelSkillEntry;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts|参悟")
	int32 ComprehendCost = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts|兑换")
	TMap<EItemQuality, int32> ExchangeFragmentCost;
};

// 境界数据
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModRealmData : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel")
	FText LevelName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Realm")
	int32 MartialArtsScore = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Realm")
	int32 RealmLevel = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Realm")
	TArray<FName> Characteristic;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Realm")
	TMap<EModMartialArtsMajorCategories, int32> SlotNumber;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force")
	float AddReputation = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force")
	float AddGrowScore = 0.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Force")
	bool bBreakThrough = false;
};

// 突破技能池
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModSkillPoolConfig : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> SkillIDs;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 RandomSkillNumber = 2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 RequiredBreakThroughPoints = 100;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FName> BehaviorLoopSections;
};

// 天赋类型
UENUM(BlueprintType)
enum class EModTalentType : uint8
{
	PropertyTalent,
	PassiveTalent,
};

// 突破天赋特性
USTRUCT(BlueprintType)
struct CREATEMODPLUGIN_API FModCharacteristicInfo : public FModDataBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	FText CharacteristicName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	TSoftObjectPtr<UTexture2D> Icon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	FLinearColor TextColor = FLinearColor::Black;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	FText Describe;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	FModFormatText FormatDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	TArray<FName> BuffID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	bool IsShowBuffText = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Characteristic")
	int32 Priority = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Characteristic")
	EItemQuality Quality = EItemQuality::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Characteristic")
	TArray<FName> ConflictCharacteristicID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Characteristic")
	int32 Weight = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic")
	TArray<FName> CharacteristicAbility;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EModTalentType TalentType = EModTalentType::PropertyTalent;
};

