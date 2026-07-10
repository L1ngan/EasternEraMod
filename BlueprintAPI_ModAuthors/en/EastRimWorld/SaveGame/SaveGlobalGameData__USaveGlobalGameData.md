# `class` `USaveGlobalGameData`

**Source header:** `EastRimWorld/SaveGame/SaveGlobalGameData.h`

---

## Functional description (from header comments)

> 保存游戏内全局的数据

## Blueprint-exposed variables

### Property `ResourceCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) int32 ResourceCoin = 100;` |

**Notes:**

> 物资积分

---

### Property `StoryCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) int32 StoryCoin = 100;` |

**Notes:**

> 剧情积分

---

### Property `SaveSlotName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) FString SaveSlotName;` |

**Notes:**

> 存档名称

---

### Property `EnabledModIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) TArray<FName> EnabledModIds;` |

**Notes:**

> 启用的MOD

---

## Blueprint-exposed functions

### Function `SetModEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `bEnabled` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetModEnabled(const FName& ModId, bool bEnabled);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 启用/禁用Mod

---
