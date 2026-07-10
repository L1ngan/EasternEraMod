# `struct` `FApprenticeshipHarvestView`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 详情-总收获(按奖励类型分组)

## Blueprint-exposed variables

### Property `ExpEntries`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipExpEntry](ApprenticeshipTypes__FApprenticeshipExpEntry.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipExpEntry> ExpEntries;` |

**Notes:**

> Exp Entries field.

---

### Property `Items`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FItemSimpleData> Items;` |

**Notes:**

> Items field.

---

### Property `Relationships`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipRelationEntry](ApprenticeshipTypes__FApprenticeshipRelationEntry.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipRelationEntry> Relationships;` |

**Notes:**

> Relationships field.

---

### Property `GrantedBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FName> GrantedBuffIDs;` |

**Notes:**

> Granted Buff I Ds field.

---

### Property `GrantedInjuries`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipGrantedInjury](ApprenticeshipTypes__FApprenticeshipGrantedInjury.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipGrantedInjury> GrantedInjuries;` |

**Notes:**

> Granted Injuries field.

---

### Property `RumorCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 RumorCount = 0;` |

**Notes:**

> Rumor Count field.

---

### Property `RumorIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FName> RumorIDs;` |

**Notes:**

> Rumor I Ds field.

---

### Property `TrainingPoints`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 TrainingPoints = 0;` |

**Notes:**

> Training Points field.

---

### Property `RetracePoints`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 RetracePoints = 0;` |

**Notes:**

> Retrace Points field.

---

### Property `FamiliarityGained`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 FamiliarityGained = 0;` |

**Notes:**

> Familiarity Gained field.

---

### Property `GrantedRewardIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FName> GrantedRewardIDs;` |

**Notes:**

> 本次命中的奖励行 ID(玩家/NPC 通用)

---

### Property `NPCScoreTotal`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 NPCScoreTotal = 0;` |

**Notes:**

> NPC 弟子累计折算的成长积分(玩家弟子为 0)

---
