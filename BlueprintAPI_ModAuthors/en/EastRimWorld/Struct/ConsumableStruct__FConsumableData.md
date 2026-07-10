# `struct` `FConsumableData`

**Source header:** `EastRimWorld/Struct/ConsumableStruct.h`

---

## Functional description (from header comments)

> 耗材

## Blueprint-exposed variables

### Property `MainEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Consumable" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> MainEffects;` |

**Notes:**

> 主效果（耗材效果表ID 使用时全部生效）

---

### Property `BonusEffects`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Consumable" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TMap<FName,int32> BonusEffects;` |

**Notes:**

> 带权重的附加效果（key=耗材效果表ID 可配置为None视为不触发任何效果 value=权重 使用时按权重随机一条）

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Consumable" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> Conditions;` |

**Notes:**

> 使用条件（耗材条件表ID 需全部满足才能使用）

---

### Property `TriggerOnActionStart`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Consumable" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> TriggerOnActionStart;` |

**Notes:**

> 哪些行为开始时可以触发（GOAP行为配置表ID）

---

### Property `TriggerOnActionEnd`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Consumable" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> TriggerOnActionEnd;` |

**Notes:**

> 哪些行为结束时可以触发（GOAP行为配置表ID）

---
