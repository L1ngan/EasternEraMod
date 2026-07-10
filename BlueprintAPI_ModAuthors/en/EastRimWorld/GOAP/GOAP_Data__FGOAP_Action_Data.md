# `struct` `FGOAP_Action_Data`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> GOAP行为信息

## Blueprint-exposed variables

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FText Desc;` |

**Notes:**

> 行动描述

---

### Property `GoalID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName GoalID;` |

**Notes:**

> Action对应的GOAP目标(GOAP目标配置表ID)

---

### Property `Cost`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) float Cost { 0.f };` |

**Notes:**

> 行动消耗

---

### Property `NeedMoveAway`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) bool NeedMoveAway { false };` |

**Notes:**

> 执行该行为是否需要离开原地

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> Conditions;` |

**Notes:**

> 前置条件

---

### Property `MaxUserNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 MaxUserNum { 1 };` |

**Notes:**

> 最大执行人数

---

### Property `ActionAbility`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ActionAbility;` |

**Notes:**

> 对应 DT_CharacterActionAbility的id

---

### Property `WorkExperience`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TMap<FGameplayAttribute,float> WorkExperience;` |

**Notes:**

> 工作增加的经验

---

### Property `AddWorkExperienceEffect`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TSoftClassPtr<UGameplayEffect> AddWorkExperienceEffect;` |

**Notes:**

> 增加工作经验的GE

---

### Property `ExtaOutputAttribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayAttribute ExtaOutputAttribute;` |

**Notes:**

> 影响产出的属性

---

### Property `RealmLevelLimit`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 RealmLevelLimit = 0;` |

**Notes:**

> 境界限制

---

### Property `TrainingPointProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) float TrainingPointProbability;` |

**Notes:**

> 获得历练点概率

---

### Property `AddTrainingPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 AddTrainingPoint;` |

**Notes:**

> 获得历练点数

---

### Property `RetracePointProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) float RetracePointProbability;` |

**Notes:**

> 获得回溯点概率

---

### Property `AddRetracePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 AddRetracePoint;` |

**Notes:**

> 获得回溯点数

---

### Property `CharacterBehaviorState`

| Field | Details |
|------|------|
| C++ type | [ECharacterBehaviorState](../Struct/CommonEnum__ECharacterBehaviorState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite , SaveGame) ECharacterBehaviorState CharacterBehaviorState = ECharacterBehaviorState::None;` |

**Notes:**

> 行为的类型

---

### Property `ActionBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> ActionBuff;` |

**Notes:**

> 行为会添加的buff

---

### Property `ActionEndBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> ActionEndBuff;` |

**Notes:**

> 行为结束会添加的buff

---

### Property `InteractiveTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayTag InteractiveTag;` |

**Notes:**

> 指定交互配置中插槽的Tag

---

### Property `AgentCharacterTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayTag AgentCharacterTag;` |

**Notes:**

> 此Action会给执行行为的角色添加这个标签

---

### Property `bCanPassCondition`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) bool bCanPassCondition = false;` |

**Notes:**

> 能否跳过前置条件

---
