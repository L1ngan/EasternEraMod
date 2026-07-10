# `class` `USkillTestConfigAsset`

**Source header:** `EastRimWorld/SkillTest/SkillTestConfigAsset.h`

---

## Functional description (from header comments)

> 技能/武学测试沙盒配置资产 — 仿 UApprenticeshipConfigAsset。
> 获取:AERW_GameModeBase::GetSkillTestConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::SkillTestConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_SkillTestConfig 软引用)。
> 集中测试沙盒的默认木桩、主测试角色类、以及各类按钮的默认可选ID列表。

## Blueprint-exposed variables

### Property `MainCharacterClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|主角色" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|主角色") TSoftClassPtr<AEastRimWorldCharacter_Human> MainCharacterClass;` |

**Notes:**

> [可选]固定主测试角色的生成BP(必须是带 AIControllerClass 的人物角色BP)。
> 留空(默认)则用"源角色自己配置的原有BP"生成——蓝图里的各种功能都在,推荐留空。

---

### Property `MainCharacterSpawnOffset`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|主角色" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|主角色") FTransform MainCharacterSpawnOffset = FTransform::Identity;` |

**Notes:**

> 主测试角色生成位置(相对 SkillTestManager 的偏移)。调用方未显式给位置(identity)时生效。

---

### Property `DefaultDummies`

| Field | Details |
|------|------|
| C++ type | TArray<[FTestDummyConfig](SkillTestConfigAsset__FTestDummyConfig.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|木桩" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|木桩") TArray<FTestDummyConfig> DefaultDummies;` |

**Notes:**

> 进入子关卡时默认生成的木桩列表

---

### Property `SelectableHumanIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") TArray<FName> SelectableHumanIDs;` |

**Notes:**

> 按钮可选的人物ID列表(UI用)

---

### Property `SelectableAnimalIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") TArray<FName> SelectableAnimalIDs;` |

**Notes:**

> 按钮可选的动物ID列表(UI用)

---

### Property `SelectableSummonsIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") TArray<FName> SelectableSummonsIDs;` |

**Notes:**

> 按钮可选的召唤物ID列表(UI用)

---

### Property `DefaultSpawnAnchor`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") FTransform DefaultSpawnAnchor = FTransform::Identity;` |

**Notes:**

> 按钮生成角色的默认锚点(相对 SkillTestManager 的偏移)。UI 按钮未给位置(identity)时,生成位置=本锚点×管理器变换。

---

### Property `SpawnScatterSpacing`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") float SpawnScatterSpacing = 150.f;` |

**Notes:**

> 按钮连续生成时的网格散开间距(cm),避免多个角色叠在同一点。<=0 则不散开。

---

### Property `SpawnScatterColumns`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|按钮生成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SkillTest|按钮生成") int32 SpawnScatterColumns = 5;` |

**Notes:**

> 散开网格每行个数

---
