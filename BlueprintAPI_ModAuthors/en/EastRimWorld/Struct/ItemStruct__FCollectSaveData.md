# `struct` `FCollectSaveData`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> Collect Save Data data structure.

## Blueprint-exposed variables

### Property `InventoryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FName InventoryID;` |

**Notes:**

> 采集物id

---

### Property `CurHealth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHealth = 0.0f;` |

**Notes:**

> 当前健康值

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Notes:**

> Guid

---

### Property `SubstituteGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid SubstituteGuid;` |

**Notes:**

> 替身Actor的Guid

---

### Property `ItemTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame,Category = "Common") FTransform ItemTransform;` |

**Notes:**

> 物品在世界中的位置

---

### Property `bOperationMark`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") bool bOperationMark = false;` |

**Notes:**

> 是否被操作标记

---

### Property `bSelectState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") bool bSelectState = false;` |

**Notes:**

> 是否是选中状态

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Notes:**

> 相关按钮的状态 是否选中

---

### Property `InventoryItemStateType`

| Field | Details |
|------|------|
| C++ type | [EInventoryItemStateType](ItemStruct__EInventoryItemStateType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**Notes:**

> 物品状态

---

### Property `bSuspendGrow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) bool bSuspendGrow = false;` |

**Notes:**

> 是否暂停生长

---

### Property `CurGrowStage`

| Field | Details |
|------|------|
| C++ type | [EGrowStageType](ItemStruct__EGrowStageType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) EGrowStageType CurGrowStage = EGrowStageType::None;` |

**Notes:**

> 当前的阶段

---

### Property `CurGrowTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurGrowTime = {0.f};` |

**Notes:**

> Cur Grow Time field.

---

### Property `CurHarvestTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHarvestTime = {0.f};` |

**Notes:**

> 总收成时间 如果会结果

---

### Property `CurStageGrowTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurStageGrowTime = {0.f};` |

**Notes:**

> 阶段生长时间

---

### Property `FellDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int FellDurability { -1 };` |

**Notes:**

> 砍伐耐久度

---

### Property `HarvestDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int HarvestDurability { -1 };` |

**Notes:**

> 收割耐久度

---

### Property `MiningDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int MiningDurability { -1 };` |

**Notes:**

> 开采耐久度

---

### Property `ExplorationTime`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int ExplorationTime { -1 };` |

**Notes:**

> Exploration Time field.

---
