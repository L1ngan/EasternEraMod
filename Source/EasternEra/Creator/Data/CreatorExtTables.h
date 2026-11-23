#pragma once

// SDK 精简版：只保留 Mod 往游戏表里加行要用的类型（ModInfo.json 的 ConfigType = CreatorGarmentDye / CreatorFacePatterns / CreatorFaceAnchors），
// 让 StructName "/Script/EastRimWorld.CreatorGarmentDyeRow" 等在 SDK 里能解析（打包校验、在编辑器里建表）。字段与游戏版逐一对应。

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

// ---- 花钿 / 面靥（ConfigType = CreatorFacePatterns / CreatorFaceAnchors）----

// 面部锚点：额心 / 眉心 / 太阳穴 L R / 面靥 L R / 唇角 L R / 下巴（L / R 为角色自身左右）
UENUM(BlueprintType)
enum class ECEFaceAnchor : uint8 { Forehead, BrowCenter, TempleL, TempleR, DimpleL, DimpleR, LipCornerL, LipCornerR, Chin };

// 两个可同时存在的贴花槽：花钿（额 / 眉心类）与面靥（面靥、斜红等）
UENUM(BlueprintType)
enum class ECEFacePatternSlot : uint8 { Huadian, Mianye };

// 花钿质感：Paint = 朱砂 / 胭脂（哑光）；Jade = 玉；Gold = 金
UENUM(BlueprintType)
enum class ECEFacePatternMaterial : uint8 { Paint, Jade, Gold };

// 图案表的一行：行名 = 图案 ID（只含字母、数字、_、-，不超过 128 个字符；存档里记它，发布后不要改）。只能加新行，不能和官方或别的 Mod 的行同名
USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FCreatorFacePatternRow : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly) ECEFacePatternSlot Slot = ECEFacePatternSlot::Huadian;
	// 图案贴图（必填；透明底，白色图案，颜色由游戏染）。导入设置用默认压缩、sRGB 开、带 alpha。
	// 资产名不要用 T_FaceDecal_<官方图案 ID>：游戏会按这个名字套官方的质感和法线图
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UTexture2D> Pattern;
	// 游戏不读（官方行用它查字符表）；Mod 在自己的界面里用自己的文字显示图案名
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName DisplayNameKey;
	// 默认锚点（SetCharacterDecal 的 AnchorId 不填时用）
	UPROPERTY(EditAnywhere, BlueprintReadOnly) ECEFaceAnchor Anchor = ECEFaceAnchor::BrowCenter;
	// 默认颜色（sRGB 字节色；SetCharacterDecal 的 bUseDefaultColor 为 true 时用）
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor DefaultColor = FColor(196, 32, 44);
	// 默认大小（SetCharacterDecal 的 SizeCm ≤ 0 时用）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0.2", ClampMax = "20")) float DefaultSizeCm = 1.6f;
	// 默认角度：SetCharacterDecal 不会自动套用，从 GetDecalPatterns 读出 DefaultRotationDegrees 自己传
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float RotationDegrees = 0.f;
	// 金箔量 0~1（不勾质感覆盖时 ≥0.5 按金质感渲染）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", ClampMax = "1")) float Gold = 0.f;
	// 默认浓度：同上，SetCharacterDecal 不会自动套用，读出 DefaultOpacity 自己传
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", ClampMax = "1")) float DefaultOpacity = 1.f;
	// 粗糙度（只对朱砂类质感生效）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", ClampMax = "1")) float Roughness = 0.45f;
	// 成对图案：放在分左右的锚点上时另一侧自动镜像贴一份
	UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bPairedLR = false;
	// 游戏不读（官方界面的缩略图）
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UTexture2D> Thumbnail;
	// GetDecalPatterns 里的列举顺序
	UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SortOrder = 0;
	// 法线图（可选；按法线贴图导入。不填按平的，前提是 Pattern 的资产名没撞官方图案名）
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UTexture2D> NormalTexture;
	// 质感覆盖（可选；不勾按金箔量判，前提同上。要确定质感就勾上）
	UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bOverrideMaterial = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "bOverrideMaterial")) ECEFacePatternMaterial MaterialOverride = ECEFacePatternMaterial::Paint;
};

USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FCreatorFaceAnchorPoint
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly) ECEFaceAnchor Anchor = ECEFaceAnchor::BrowCenter;
	// 头网格参考姿态组件空间（cm），贴花中心放在这里，沿 -Normal 投射
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Location = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Normal = FVector(0, 1, 0);
};

// 锚点表的一行：给一颗头网格登记锚点位置。HeadMesh 必填，只能给官方和别的 Mod 都没登记过的头加行。
// 没登记的头由游戏估算：按眼球骨骼；没有眼球骨骼时按 head 骨的固定偏移（可能不准）
USTRUCT(BlueprintType)
struct EASTRIMWORLD_API FCreatorFaceAnchorRow : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<USkeletalMesh> HeadMesh;
	// 贴花跟随的骨骼名（默认 head）；建议填头网格骨架里有的骨骼，没有时贴花挂在头部组件上、不跟骨骼
	UPROPERTY(EditAnywhere, BlueprintReadOnly) FName AttachBone = TEXT("head");
	UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FCreatorFaceAnchorPoint> Anchors;
};
