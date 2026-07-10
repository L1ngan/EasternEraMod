# `struct` `FWarReportRow`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

---

## Functional description (from header comments)

> DT_WarReports 的每行数据。继承 FTableRowBase（UE DataTable 行基类）。
> ID 用 RowName（如 WR_001），无需单独字段。
> 文案占位符（runtime 替换后广播）：
>   {AttackerName}  = 攻方势力名称
>   {PlaceName}     = 目标据点名称

## Blueprint-exposed variables

### Property `Phase`

| Field | Details |
|------|------|
| C++ type | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| Reflection specifiers | BlueprintReadWrite, Category="WarReport" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") ETimedBattlePhase Phase = ETimedBattlePhase::Muster;` |

**Notes:**

> 适用阶段：集结期/交战期/僵持期/决战期

---

### Property `Trigger`

| Field | Details |
|------|------|
| C++ type | [EWarReportTrigger](WorldBattleReportStruct__EWarReportTrigger.md) |
| Reflection specifiers | BlueprintReadWrite, Category="WarReport" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") EWarReportTrigger Trigger = EWarReportTrigger::Any;` |

**Notes:**

> 适用态势：任意/攻方占优/守方占优/势均力敌

---

### Property `Text`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="WarReport" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") FText Text;` |

**Notes:**

> 战报文案，含占位符 {AttackerName} / {DefenderName} / {PlaceName} / {PhaseName}。
> 示例："「{AttackerName}」铁骑已兵临「{PlaceName}」城下，「{DefenderName}」严阵以待（{PhaseName}）。"

---

### Property `RequiredForceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="WarReport" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") TArray<FName> RequiredForceIDs;` |

**Notes:**

> （可选）仅当攻方势力的配置 ID（WorldForceID，FName）在此数组内时才选用本条。
>   空数组 = 不限势力，对所有势力通用。
>   非空 = 仅当攻方 WorldForceID 命中数组中任一项时本条才进入候选。
> 直接填写势力配置 ID（来自 DT_WorldForceInfoConfig 的 RowName / WorldForceID），
> 不再需要在势力配置里另加 GameplayTag。

---
