# `struct` `FMonsterNestInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Monster Nest Info 数据结构。

## 蓝图暴露变量

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**说明:**

> 阵营ID

---

### 属性 `NestLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform NestLocation;` |

**说明:**

> 巢穴的位置

---

### 属性 `NestName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText NestName;` |

**说明:**

> 巢穴的名字

---

### 属性 `MonsterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterGeneration;` |

**说明:**

> 此巢穴的所有生成怪物设置 读取MonsterGenerationConfig 配置表

---

### 属性 `BuildingPreset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FPresetBuilding> BuildingPreset;` |

**说明:**

> 此巢穴拥有的建筑物

---

### 属性 `MonsterAttackSetting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterAttackSetting](WorldStruct__FMonsterAttackSetting.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FMonsterAttackSetting> MonsterAttackSetting;` |

**说明:**

> 怪物的攻击设置

---

### 属性 `MonsterNestActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AMonsterNestActor](../System/MonsterNest/MonsterNestActor__AMonsterNestActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AMonsterNestActor> MonsterNestActorClass;` |

**说明:**

> 怪物巢穴管理Actor

---

### 属性 `MovingRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MovingRange = 0.f;` |

**说明:**

> 移动范围

---
