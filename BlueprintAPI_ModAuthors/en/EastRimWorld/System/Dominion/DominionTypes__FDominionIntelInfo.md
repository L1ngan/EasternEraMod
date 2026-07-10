# `struct` `FDominionIntelInfo`

**Source header:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## Functional description (from header comments)

> 交流-索取情报返回的城市情报快照(不存档)

## Blueprint-exposed variables

### Property `LordForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid LordForceGuid;` |

**Notes:**

> 城主势力Guid

---

### Property `LordForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText LordForceName;` |

**Notes:**

> 城主势力名

---

### Property `DefenderCombat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float DefenderCombat = 0.f;` |

**Notes:**

> 城市总守备战力(驻扎弟子+附属门派守备贡献,=攻城时实际面对的 De)

---

### Property `ResidentCombat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float ResidentCombat = 0.f;` |

**Notes:**

> 其中附属门派守备贡献部分(已包含在 DefenderCombat 内,供拆分展示)

---

### Property `ResidentSectCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 ResidentSectCount = 0;` |

**Notes:**

> 城内附属门派数量

---

### Property `SectCapacity`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 SectCapacity = 0;` |

**Notes:**

> 城市门派容量上限

---

### Property `CityLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 CityLevel = 1;` |

**Notes:**

> 城市等级

---

### Property `Prosperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float Prosperity = 0.f;` |

**Notes:**

> 城市繁荣度

---
