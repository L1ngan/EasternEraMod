# `struct` `FWarReportRow`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

---

## 功能说明（来自头文件注释）

> DT_WarReports 的每行数据。继承 FTableRowBase（UE DataTable 行基类）。
> ID 用 RowName（如 WR_001），无需单独字段。
> 文案占位符（runtime 替换后广播）：
>   {AttackerName}  = 攻方势力名称
>   {PlaceName}     = 目标据点名称

## 蓝图暴露变量

### 属性 `Phase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| 反射说明符 | BlueprintReadWrite, Category="WarReport" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") ETimedBattlePhase Phase = ETimedBattlePhase::Muster;` |

**说明:**

> 适用阶段：集结期/交战期/僵持期/决战期

---

### 属性 `Trigger`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWarReportTrigger](WorldBattleReportStruct__EWarReportTrigger.md) |
| 反射说明符 | BlueprintReadWrite, Category="WarReport" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") EWarReportTrigger Trigger = EWarReportTrigger::Any;` |

**说明:**

> 适用态势：任意/攻方占优/守方占优/势均力敌

---

### 属性 `Text`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="WarReport" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") FText Text;` |

**说明:**

> 战报文案，含占位符 {AttackerName} / {DefenderName} / {PlaceName} / {PhaseName}。
> 示例："「{AttackerName}」铁骑已兵临「{PlaceName}」城下，「{DefenderName}」严阵以待（{PhaseName}）。"

---

### 属性 `RequiredForceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="WarReport" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WarReport") TArray<FName> RequiredForceIDs;` |

**说明:**

> （可选）仅当攻方势力的配置 ID（WorldForceID，FName）在此数组内时才选用本条。
>   空数组 = 不限势力，对所有势力通用。
>   非空 = 仅当攻方 WorldForceID 命中数组中任一项时本条才进入候选。
> 直接填写势力配置 ID（来自 DT_WorldForceInfoConfig 的 RowName / WorldForceID），
> 不再需要在势力配置里另加 GameplayTag。

---
