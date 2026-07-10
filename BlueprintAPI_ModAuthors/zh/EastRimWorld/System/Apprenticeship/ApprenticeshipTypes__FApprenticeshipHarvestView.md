# `struct` `FApprenticeshipHarvestView`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 详情-总收获(按奖励类型分组)

## 蓝图暴露变量

### 属性 `ExpEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipExpEntry](ApprenticeshipTypes__FApprenticeshipExpEntry.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipExpEntry> ExpEntries;` |

**说明:**

> Exp Entries 字段。

---

### 属性 `Items`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FItemSimpleData> Items;` |

**说明:**

> Items 字段。

---

### 属性 `Relationships`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipRelationEntry](ApprenticeshipTypes__FApprenticeshipRelationEntry.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipRelationEntry> Relationships;` |

**说明:**

> Relationships 字段。

---

### 属性 `GrantedBuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FName> GrantedBuffIDs;` |

**说明:**

> Granted Buff I Ds 字段。

---

### 属性 `GrantedInjuries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipGrantedInjury](ApprenticeshipTypes__FApprenticeshipGrantedInjury.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipGrantedInjury> GrantedInjuries;` |

**说明:**

> Granted Injuries 字段。

---

### 属性 `RumorCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 RumorCount = 0;` |

**说明:**

> Rumor Count 字段。

---

### 属性 `RumorIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FName> RumorIDs;` |

**说明:**

> Rumor I Ds 字段。

---

### 属性 `TrainingPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 TrainingPoints = 0;` |

**说明:**

> Training Points 字段。

---

### 属性 `RetracePoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 RetracePoints = 0;` |

**说明:**

> Retrace Points 字段。

---

### 属性 `FamiliarityGained`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 FamiliarityGained = 0;` |

**说明:**

> Familiarity Gained 字段。

---

### 属性 `GrantedRewardIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FName> GrantedRewardIDs;` |

**说明:**

> 本次命中的奖励行 ID(玩家/NPC 通用)

---

### 属性 `NPCScoreTotal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 NPCScoreTotal = 0;` |

**说明:**

> NPC 弟子累计折算的成长积分(玩家弟子为 0)

---
