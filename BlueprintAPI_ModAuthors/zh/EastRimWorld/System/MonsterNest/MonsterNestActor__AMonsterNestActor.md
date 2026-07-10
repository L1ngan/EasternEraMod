# `class` `AMonsterNestActor`

**源码头文件:** `EastRimWorld/System/MonsterNest/MonsterNestActor.h`

---

## 功能说明（来自头文件注释）

> Monster Nest Actor Actor 类型。

## 蓝图暴露变量

### 属性 `GenerateCharacterComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEventGenerateCharacterComponent](../EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**说明:**

> 事件生成角色组件

---

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**说明:**

> Scene Component 字段。

---

### 属性 `AllMonsters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,AEastRimWorldCharacter*> AllMonsters;` |

**说明:**

> All Monsters 字段。

---

### 属性 `MonsterNestInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FMonsterNestInfo](../../WorldSystem/WorldStruct__FMonsterNestInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FMonsterNestInfo MonsterNestInfo;` |

**说明:**

> 怪物巢穴信息

---

### 属性 `AllWaitAttackMonsters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> AllWaitAttackMonsters;` |

**说明:**

> 所有生成的怪物且没有发动攻击的怪物

---

### 属性 `bMonsterNestInit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bMonsterNestInit = false;` |

**说明:**

> 是否 Monster Nest Init 的布尔标记。

---

### 属性 `AllAttackMonsters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> AllAttackMonsters;` |

**说明:**

> 已经发动攻击的怪物

---

## 蓝图暴露函数

### 函数 `GetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGenericTeamId` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ~IEastRimWorldTeamAgentInterface interface

---

### 函数 `SetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTeamID` | `const FGenericTeamId&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Generic Team Id 操作。

---

### 函数 `RemoveGenerationActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGenerationActor(AActor * Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除生成记录的单位

---
