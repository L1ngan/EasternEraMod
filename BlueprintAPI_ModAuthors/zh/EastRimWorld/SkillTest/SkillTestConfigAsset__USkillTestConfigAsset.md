# `class` `USkillTestConfigAsset`

**源码头文件:** `EastRimWorld/SkillTest/SkillTestConfigAsset.h`

---

## 功能说明（来自头文件注释）

> 技能/武学测试沙盒配置资产 — 仿 UApprenticeshipConfigAsset。
> 获取:AERW_GameModeBase::GetSkillTestConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::SkillTestConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_SkillTestConfig 软引用)。
> 集中测试沙盒的默认木桩、主测试角色类、以及各类按钮的默认可选ID列表。

## 蓝图暴露变量

### 属性 `MainCharacterClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)> |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|主角色" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|主角色") TSoftClassPtr<AEastRimWorldCharacter_Human> MainCharacterClass;` |

**说明:**

> [可选]固定主测试角色的生成BP(必须是带 AIControllerClass 的人物角色BP)。
> 留空(默认)则用"源角色自己配置的原有BP"生成——蓝图里的各种功能都在,推荐留空。

---

### 属性 `MainCharacterSpawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|主角色" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|主角色") FTransform MainCharacterSpawnOffset = FTransform::Identity;` |

**说明:**

> 主测试角色生成位置(相对 SkillTestManager 的偏移)。调用方未显式给位置(identity)时生效。

---

### 属性 `DefaultDummies`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTestDummyConfig](SkillTestConfigAsset__FTestDummyConfig.md)> |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|木桩" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|木桩") TArray<FTestDummyConfig> DefaultDummies;` |

**说明:**

> 进入子关卡时默认生成的木桩列表

---

### 属性 `SelectableHumanIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") TArray<FName> SelectableHumanIDs;` |

**说明:**

> 按钮可选的人物ID列表(UI用)

---

### 属性 `SelectableAnimalIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") TArray<FName> SelectableAnimalIDs;` |

**说明:**

> 按钮可选的动物ID列表(UI用)

---

### 属性 `SelectableSummonsIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") TArray<FName> SelectableSummonsIDs;` |

**说明:**

> 按钮可选的召唤物ID列表(UI用)

---

### 属性 `DefaultSpawnAnchor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") FTransform DefaultSpawnAnchor = FTransform::Identity;` |

**说明:**

> 按钮生成角色的默认锚点(相对 SkillTestManager 的偏移)。UI 按钮未给位置(identity)时,生成位置=本锚点×管理器变换。

---

### 属性 `SpawnScatterSpacing`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") float SpawnScatterSpacing = 150.f;` |

**说明:**

> 按钮连续生成时的网格散开间距(cm),避免多个角色叠在同一点。<=0 则不散开。

---

### 属性 `SpawnScatterColumns`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") int32 SpawnScatterColumns = 5;` |

**说明:**

> 散开网格每行个数

---
