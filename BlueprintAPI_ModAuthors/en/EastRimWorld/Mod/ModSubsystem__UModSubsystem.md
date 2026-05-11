# `class` `UModSubsystem`

**Source header:** `EastRimWorld/Mod/ModSubsystem.h`

---

## Functional description (from header comments)

> Mod子系统
> 负责管理所有Mod的加载、卸载和生命周期

## Blueprint-exposed variables

### Property `OnModLoaded`

| Field | Details |
|------|------|
| C++ type | `FOnModLoaded` |
| Reflection specifiers | BlueprintAssignable, Category="Mod System" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModLoaded OnModLoaded;` |

**Source comments:**

> Mod加载事件

---

### Property `OnModUnloaded`

| Field | Details |
|------|------|
| C++ type | `FOnModUnloaded` |
| Reflection specifiers | BlueprintAssignable, Category="Mod System" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModUnloaded OnModUnloaded;` |

**Source comments:**

> Mod卸载事件

---

### Property `OnModLoadFailed`

| Field | Details |
|------|------|
| C++ type | `FOnModLoadFailed` |
| Reflection specifiers | BlueprintAssignable, Category="Mod System" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModLoadFailed OnModLoadFailed;` |

**Source comments:**

> Mod加载失败事件

---

### Property `ModsIconPath`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FString>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName, FString> ModsIconPath;` |

---

## Blueprint-exposed functions

### Function `GetModSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | [UModSubsystem](ModSubsystem__UModSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static UModSubsystem* GetModSubsystem(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取Mod子系统单例

---

### Function `DiscoverMods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") void DiscoverMods();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 扫描并发现所有可用的Mod

---

### Function `LoadMod`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `bNewGameLoad` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool LoadMod(const FName& ModId,bool bNewGameLoad);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加载指定Mod

---

### Function `UnloadMod`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool UnloadMod(const FName& ModId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 卸载指定Mod

---

### Function `SetModEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `bEnabled` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool SetModEnabled(const FName& ModId, bool bEnabled);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 启用/禁用Mod

---

### Function `GetModInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") UModRuntimeInfo* GetModInfo(const FName& ModId) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取Mod信息

---

### Function `GetAllLoadedMods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | TArray<[UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)*> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<UModRuntimeInfo*> GetAllLoadedMods() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有已加载的Mod

---

### Function `GetAllDiscoveredMods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | TArray<[UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)*> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<UModRuntimeInfo*> GetAllDiscoveredMods() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有发现的Mod（包括未加载的）

---

### Function `IsModLoaded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") bool IsModLoaded(const FName& ModId) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查Mod是否已加载

---

### Function `CheckModGameVersion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `OutErrorMessage` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") bool CheckModGameVersion(const FName& ModId, FString& OutErrorMessage) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查Mod是否符合游戏版本要求

---

### Function `CheckModToolVersion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `OutErrorMessage` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") bool CheckModToolVersion(const FName& ModId, FString& OutErrorMessage) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查Mod工具版本号是否兼容

---

### Function `GetCurrentModToolVersion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | `FString` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") static FString GetCurrentModToolVersion();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前游戏的Mod工具版本号

---

### Function `CheckModDependencies`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `OutMissingDependencies` | `TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool CheckModDependencies(const FName& ModId, TArray<FName>& OutMissingDependencies) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查Mod依赖是否满足

---

### Function `LoadAllEnabledMods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bNewGameLoad` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") void LoadAllEnabledMods(bool bNewGameLoad);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 按依赖顺序加载所有启用的Mod 是否是加载新游戏mod

---

### Function `UnloadAllMods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") void UnloadAllMods();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 卸载所有Mod

---

### Function `LoadAndApplyModInformationAssetByPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AssetPath` | `const FString&` |
| `bNewGameLoad` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool LoadAndApplyModInformationAssetByPath(const FString& AssetPath,bool bNewGameLoad);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过路径加载并应用UModInformationAsset（供Lua调用）

---
