# `struct` `FMonsterNestInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**源码注释:**

> 阵营ID

---

### 属性 `NestLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform NestLocation;` |

**源码注释:**

> 巢穴的位置

---

### 属性 `NestName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText NestName;` |

**源码注释:**

> 巢穴的名字

---

### 属性 `MonsterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterGeneration;` |

**源码注释:**

> 此巢穴的所有生成怪物设置 读取MonsterGenerationConfig 配置表

---

### 属性 `BuildingPreset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FPresetBuilding> BuildingPreset;` |

**源码注释:**

> 此巢穴拥有的建筑物

---

### 属性 `MonsterAttackSetting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterAttackSetting](WorldStruct__FMonsterAttackSetting.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FMonsterAttackSetting> MonsterAttackSetting;` |

**源码注释:**

> 怪物的攻击设置

---

### 属性 `MonsterNestActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AMonsterNestActor](../System/MonsterNest/MonsterNestActor__AMonsterNestActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AMonsterNestActor> MonsterNestActorClass;` |

**源码注释:**

> 怪物巢穴管理Actor

---

### 属性 `MovingRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MovingRange = 0.f;` |

**源码注释:**

> 移动范围

---
