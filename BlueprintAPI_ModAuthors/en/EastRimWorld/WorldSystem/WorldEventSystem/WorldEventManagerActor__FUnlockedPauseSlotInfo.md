# `struct` `FUnlockedPauseSlotInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

---

## Functional description (from header comments)

> 解锁暂停插槽的信息

## Blueprint-exposed variables

### Property `SlotIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int SlotIndex;` |

**Notes:**

> 槽位的下标 0 开始

---

### Property `UnlockConditionArray`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockConditionArray;` |

**Notes:**

> 解锁条件id 通用任务条件

---

### Property `ConsumeStone`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int ConsumeStone = 0;` |

**Notes:**

> 消耗灵石的数量

---

### Property `UnlockedDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText UnlockedDescribe;` |

**Notes:**

> 解锁的描述

---
