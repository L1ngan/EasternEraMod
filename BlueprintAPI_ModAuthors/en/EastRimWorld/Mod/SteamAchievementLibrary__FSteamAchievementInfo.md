# `struct` `FSteamAchievementInfo`

**Source header:** `EastRimWorld/Mod/SteamAchievementLibrary.h`

---

## Functional description (from header comments)

> 成就信息结构体

## Blueprint-exposed variables

### Property `AchievementName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Achievement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") FString AchievementName;` |

**Source comments:**

> 成就名称（API名称）

---

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Achievement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") FString DisplayName;` |

**Source comments:**

> 成就显示名称

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Achievement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") FString Description;` |

**Source comments:**

> 成就描述

---

### Property `bUnlocked`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Achievement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") bool bUnlocked = false;` |

**Source comments:**

> 是否已解锁

---

### Property `UnlockTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Achievement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") int32 UnlockTime = 0;` |

**Source comments:**

> 解锁时间戳（Unix时间戳，如果未解锁则为0）

---
