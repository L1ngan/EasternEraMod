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

**Notes:**

> Mod加载事件

---

### Property `OnModUnloaded`

| Field | Details |
|------|------|
| C++ type | `FOnModUnloaded` |
| Reflection specifiers | BlueprintAssignable, Category="Mod System" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModUnloaded OnModUnloaded;` |

**Notes:**

> Mod卸载事件

---

### Property `OnModLoadFailed`

| Field | Details |
|------|------|
| C++ type | `FOnModLoadFailed` |
| Reflection specifiers | BlueprintAssignable, Category="Mod System" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModLoadFailed OnModLoadFailed;` |

**Notes:**

> Mod加载失败事件

---

### Property `OnSaveModCompatibilityIssues`

| Field | Details |
|------|------|
| C++ type | `FOnSaveModCompatibilityIssues` |
| Reflection specifiers | BlueprintAssignable, Category="Mod System" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnSaveModCompatibilityIssues OnSaveModCompatibilityIssues;` |

**Notes:**

> 读档发现 Mod 缺失或未启用时广播，UI 绑定后向玩家弹确认提示

---

### Property `ModsIconPath`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FString>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName, FString> ModsIconPath;` |

**Notes:**

> Map of mod icon paths (Mod ID to icon file path)

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

> 启用/禁用Mod
> 注意：写的是全局存档（CurrencySaveSlot）里的 EnabledModIds，只改内存、要另外 SaveCurrencyObject 才落盘；
> 游戏实际加载哪些 Mod 看的是 Mod 管理页写的 GameSetting 存档的 SteamUgcEnable，不是这份，所以调它不影响实际加载

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

> 按依赖顺序加载所有启用的Mod 是否是加载新游戏mod
> 注意：按全局存档（CurrencySaveSlot）里的 EnabledModIds 加载，调了会真的加载；这份列表与 Mod 管理页的启用设置
> （GameSetting 存档的 SteamUgcEnable）不是同一份，游戏自己的加载流程不调用本函数

---

### Function `UnloadAllMods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") void UnloadAllMods();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 卸载所有Mod

---

### Function `LoadAndApplyModConfigFromJson`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModInfo` | [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| `bNewGameLoad` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool LoadAndApplyModConfigFromJson(UModRuntimeInfo* ModInfo, bool bNewGameLoad);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从 ModInfo.json 记录的 JSON 配置加载并应用（不依赖 Cook 后的 DataTable/DataAsset）

---

### Function `GetLoadedModRecords`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | TArray<[FModSaveRecord](ModInfo__FModSaveRecord.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<FModSaveRecord> GetLoadedModRecords() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前已加载 Mod 的存档记录（存档时由 SaveGameDataActor 同步进档）

---

### Function `CheckSaveModCompatibility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SaveRecords` | const TArray<[FModSaveRecord](ModInfo__FModSaveRecord.md)>& |
| `EnabledModIds` | `const TArray<FName>&` |
| `OutIssues` | TArray<[FModCompatibilityIssue](ModInfo__FModCompatibilityIssue.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool CheckSaveModCompatibility(const TArray<FModSaveRecord>& SaveRecords, const TArray<FName>& EnabledModIds, TArray<FModCompatibilityIssue>& OutIssues) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 对比存档 Mod 记录与当前启用列表，输出缺失/未启用/版本不符清单；返回 true 表示完全兼容

---

### Function `CheckSaviorSlotModLoadIssues`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SaviorSlot` | `USavior*` |
| `EnabledModIds` | `const TArray<FName>&` |
| `OutIssues` | TArray<[FModCompatibilityIssue](ModInfo__FModCompatibilityIssue.md)>& |
| `OutWarningMessage` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool CheckSaviorSlotModLoadIssues(USavior* SaviorSlot, const TArray<FName>& EnabledModIds, TArray<FModCompatibilityIssue>& OutIssues, FText& OutWarningMessage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读取指定存档槽的 Mod 清单，仅返回缺失或未启用问题；返回 true 时应在真正读档前提示玩家

---

### Function `GetLastSaveModCompatibilityIssues`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | TArray<[FModCompatibilityIssue](ModInfo__FModCompatibilityIssue.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<FModCompatibilityIssue> GetLastSaveModCompatibilityIssues() const { return LastSaveModCompatibilityIssues; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 最近一次读档兼容检查发现的问题（UI 可在绑定委托之外随时查询）

---

### Function `GetModSettingDefs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Settings" |
| Return type | TArray<[FModSettingDef](ModInfo__FModSettingDef.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Settings") TArray<FModSettingDef> GetModSettingDefs(const FName& ModId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Settings declared by a mod in ModInfo.json (for the settings panel and console).

---

### Function `GetModSettingValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Settings" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `Key` | `const FString&` |
| `OutValue` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Settings") bool GetModSettingValue(const FName& ModId, const FString& Key, FString& OutValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Current value (as text) of a mod setting; false when not declared.

---

### Function `SetModSettingValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Settings" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `Key` | `const FString&` |
| `Value` | `const FString&` |
| `OutError` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|Settings") bool SetModSettingValue(const FName& ModId, const FString& Key, const FString& Value, FString& OutError);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Change a mod setting with validation; writes and broadcasts OnModSettingChanged only when the value changes. The failure reason is returned in OutError.

---
