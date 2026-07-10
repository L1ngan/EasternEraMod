# `struct` `FThreatPoolInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 威胁池信息

## 蓝图暴露变量

### 属性 `ThreatPoolName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ThreatPoolName;` |

**说明:**

> 威胁名称

---

### 属性 `ThreatPoolDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ThreatPoolDesc;` |

**说明:**

> 威胁描述

---

### 属性 `ThreatPoolType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EThreatType](WorldStruct__EThreatType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EThreatType ThreatPoolType = EThreatType::None;` |

**说明:**

> 威胁类型

---

### 属性 `ConditionIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> ConditionIDs;` |

**说明:**

> 威胁条件 DT_CommonTaskCondition 配置表

---

### 属性 `RaidPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 RaidPoints = 0;` |

**说明:**

> 袭击点数(必须为整数，随机有用)

---

### 属性 `CooldownTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float CooldownTime = 9600.f;` |

**说明:**

> 冷却时间(秒)

---

### 属性 `MonsterGenerationIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterGenerationIDs;` |

**说明:**

> （废弃）

---

### 属性 `GenerationIDsMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FNameIDArray> GenerationIDsMap;` |

**说明:**

> 创建生成的配置ID<地图名称,生成配置ID数组>创建怪物IDs(调用 DT_MonsterGenerationConfig ) /敌对势力袭击IDs （调用 DT_EnemyAttackGenerationConfig）

---

### 属性 `BuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> BuffIDs;` |

**说明:**

> 触发Buff(调用 DT_CommonBuff )

---

### 属性 `SetModEnabled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool SetModEnabled = true;` |

**说明:**

> 是否启用此威胁

---
