# `struct` `FGOAP_Action`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> GOAP行动数据

## Blueprint-exposed variables

### Property `ActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ActionID;` |

**Notes:**

> 行动配置表ID

---

### Property `ItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ItemID;` |

**Notes:**

> 对应的物品ID

---

### Property `ItemNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 ItemNum { 0 };` |

**Notes:**

> Action需要的物品数量

---

### Property `CarryNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 CarryNum { 0 };` |

**Notes:**

> 实际搬运数量

---

### Property `Tag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayTag Tag;` |

**Notes:**

> 标签

---

### Property `SelectableTags`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FGameplayTag> SelectableTags;` |

**Notes:**

> 可选标签

---

### Property `OwnerData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FUObjectData OwnerData;` |

**Notes:**

> Owner的数据

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

### Property `Location`

| Field | Details |
|------|------|
| C++ type | [FVectorData](../ERW_CommonTypes__FVectorData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FVectorData Location;` |

**Notes:**

> Owner的位置

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

### Property `SpecifiedGoal`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName SpecifiedGoal;` |

**Notes:**

> 角色指定Action对应的GOAP目标

---

### Property `Batch`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 Batch { INDEX_NONE };` |

**Notes:**

> 在批量处理的Action中的批次

---

### Property `PlayAnimSection`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName PlayAnimSection;` |

**Notes:**

> 播放的动画片段

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

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FGOAP_Condition](GOAP_Data__FGOAP_Condition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FGOAP_Condition> Conditions;` |

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

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FString Desc;` |

**Notes:**

> 行动描述

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

> 行为会添加的buff(行为结束会被移除)

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

### Property `bCanPassCondition`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) bool bCanPassCondition;` |

**Notes:**

> 能否跳过前置条件

---

### Property `SpecificExecutorData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FUObjectData SpecificExecutorData;` |

**Notes:**

> 特定执行人的数据

---
