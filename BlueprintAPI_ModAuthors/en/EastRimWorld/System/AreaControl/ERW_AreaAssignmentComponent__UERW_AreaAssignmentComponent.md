# `class` `UERW_AreaAssignmentComponent`

**Source header:** `EastRimWorld/System/AreaControl/ERW_AreaAssignmentComponent.h`

---

## Functional description (from header comments)

> RW Area Assignment Component UObject type.

## Blueprint-exposed variables

### Property `CurrentAreaId`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="ERW|Area" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "ERW|Area") FGuid CurrentAreaId;` |

**Notes:**

> —— 持久字段（值随 FCharacterSaveData 采集/复原，C2 接入）——

---

### Property `bHungerCrossEnabled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="ERW|Area" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ERW|Area") bool bHungerCrossEnabled = true;` |

**Notes:**

> 饥饿越区开关（默认开，R3）

---

## Blueprint-exposed functions

### Function `AssignToArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AreaId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") void AssignToArea(const FGuid& AreaId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> —— 归属（单弟子单区硬约束）——

---

### Function `ClearAssignment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Area" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") void ClearAssignment();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Clear Assignment operation.

---

### Function `GetCurrentAreaId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | `FGuid` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area") FGuid GetCurrentAreaId() const { return CurrentAreaId; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Current Area Id.

---

### Function `GetHungerState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | [EAreaHungerState](AreaControlTypes__EAreaHungerState.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area") EAreaHungerState GetHungerState() const { return HungerState; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Hunger State.

---

### Function `GetCurrentAreaDisplayText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Area" |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Area") FText GetCurrentAreaDisplayText() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> UI：当前活动区显示名（通用 / 旗丢失 → "通用"）

---
