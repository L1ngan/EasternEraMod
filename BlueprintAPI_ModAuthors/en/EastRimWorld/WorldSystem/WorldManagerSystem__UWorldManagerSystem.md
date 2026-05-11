# `class` `UWorldManagerSystem`

**Source header:** `EastRimWorld/WorldSystem/WorldManagerSystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `bInitializationGameComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bInitializationGameComplete = false;` |

**Source comments:**

> 初始化完成

---

## Blueprint-exposed functions

### Function `InitWorldManagerSystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitWorldManagerSystem();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StartNewGame`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartNewGame();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> *****************************加载初始化 Start*****************************
> 开始新游戏

---

### Function `StartLoadGame`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartLoadGame();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读档

---

### Function `InitObjectComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Object` | `UObject *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitObjectComplete(UObject * Object);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新注册的Object状态

---

### Function `OnLoadGameWorldComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnLoadGameWorldComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加载游戏世界成功

---

### Function `OnLoadSubLevelComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnLoadSubLevelComplete(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加载子关成功

---

### Function `OnCloseSubLevelComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnCloseSubLevelComplete(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 关闭子关卡成功

---

### Function `SubLevelInitializationComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SubLevelInitializationComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 子关卡初始化完成

---

### Function `CheckInitializationComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckInitializationComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否初始化完成

---

### Function `CheckAllObjectInit`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckAllObjectInit();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查所有需要初始化的Object是否初始化完毕

---

### Function `LoadCurSubLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LoadCurSubLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加载当前子关卡

---
