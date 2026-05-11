# `class` `UWorldEventData`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `WorldEventDetailTable`

| Field | Details |
|------|------|
| C++ type | `UDataTable*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* WorldEventDetailTable = nullptr;` |

**Source comments:**

> 世界事件详细信息配置表

---

### Property `WorldEventInfoTable`

| Field | Details |
|------|------|
| C++ type | `UDataTable*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* WorldEventInfoTable = nullptr;` |

**Source comments:**

> 世界事件信息配置表

---

### Property `WorldEventSpawnConfig`

| Field | Details |
|------|------|
| C++ type | `UDataTable*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* WorldEventSpawnConfig = nullptr;` |

**Source comments:**

> 世界事件生成配置表

---

### Property `UnlockedPauseSlotInfo`

| Field | Details |
|------|------|
| C++ type | `UDataTable*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* UnlockedPauseSlotInfo = nullptr;` |

**Source comments:**

> 解锁固化槽的信息

---

### Property `WorldEventGroup`

| Field | Details |
|------|------|
| C++ type | `TMap<int,int>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,int> WorldEventGroup;` |

**Source comments:**

> 世界事件分组 0 为无限制

---

### Property `bOpenWorldEvent`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bOpenWorldEvent = false;` |

**Source comments:**

> 是否开启世界事件

---

### Property `MaxPauseSlotNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int MaxPauseSlotNumber = 3;` |

**Source comments:**

> 最大的固化槽数量

---
