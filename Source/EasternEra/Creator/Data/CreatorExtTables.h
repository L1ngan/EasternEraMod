#pragma once

// SDK 精简版：只保留 Mod 登记服饰染色（ModInfo.json 的 ConfigType = CreatorGarmentDye）要用的类型，
// 让 StructName "/Script/EastRimWorld.CreatorGarmentDyeRow" 在 SDK 里能解析（打包校验、在编辑器里建表）。字段与游戏版逐一对应。

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreatorExtTables.generated.h"

class USkeletalMesh;
class UTexture2D;
class UMaterialInterface;

// 染色母材质家族：BuLiao = M_BuLiao（棉布），Build = M_Build（麻），Cloth = M_Cloth_Char（丝）
UENUM(BlueprintType)
enum class ECEDyeParent : uint8 { BuLiao, Build, Cloth };

// 网格上一个可染色的材质槽：遮罩红、绿、蓝三个通道各一个可染区（不给遮罩、只填 R 区 = 整槽一个区）
USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FCreatorGarmentMaterialSlot
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName MaterialSlotName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDyeable = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) ECEDyeParent Parent = ECEDyeParent::BuLiao;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UTexture2D> Mask;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SlotIdR;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SlotIdG;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SlotIdB;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName DisplayNameKeyR;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName DisplayNameKeyG;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName DisplayNameKeyB;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float RefLumR = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float RefLumG = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float RefLumB = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor DefaultR = FLinearColor::White;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor DefaultG = FLinearColor::White;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor DefaultB = FLinearColor::White;
	// 门派制式色：玩家不能改这一区
	UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSectLockedR = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSectLockedG = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSectLockedB = false;
	// 官方用的预制染色材质，Mod 不填
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UMaterialInterface> DyeMaterial;
};

// 服饰染色登记表的一行：行名 = 衣件 ID（存档里记它，发布后不要改）；一个网格只登记一行
USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FCreatorGarmentDyeRow : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
	// 部位：Top / Bottom / Feet / Head
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName EquipSlotId;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FCreatorGarmentMaterialSlot> MaterialSlots;
};
