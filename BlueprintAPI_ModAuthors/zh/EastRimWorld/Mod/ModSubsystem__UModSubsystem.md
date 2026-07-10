# `class` `UModSubsystem`

**源码头文件:** `EastRimWorld/Mod/ModSubsystem.h`

---

## 功能说明（来自头文件注释）

> Mod子系统
> 负责管理所有Mod的加载、卸载和生命周期

## 蓝图暴露变量

### 属性 `OnModLoaded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnModLoaded` |
| 反射说明符 | BlueprintAssignable, Category="Mod System" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModLoaded OnModLoaded;` |

**说明:**

> Mod加载事件

---

### 属性 `OnModUnloaded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnModUnloaded` |
| 反射说明符 | BlueprintAssignable, Category="Mod System" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModUnloaded OnModUnloaded;` |

**说明:**

> Mod卸载事件

---

### 属性 `OnModLoadFailed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnModLoadFailed` |
| 反射说明符 | BlueprintAssignable, Category="Mod System" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnModLoadFailed OnModLoadFailed;` |

**说明:**

> Mod加载失败事件

---

### 属性 `OnSaveModCompatibilityIssues`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSaveModCompatibilityIssues` |
| 反射说明符 | BlueprintAssignable, Category="Mod System" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Mod System") FOnSaveModCompatibilityIssues OnSaveModCompatibilityIssues;` |

**说明:**

> 读档发现 Mod 兼容问题时广播（缺失/未启用/版本不符），UI 绑定后向玩家弹确认提示

---

### 属性 `ModsIconPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FString>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName, FString> ModsIconPath;` |

**说明:**

> Mod 图标路径映射（Mod ID → 图标文件路径）

---

## 蓝图暴露函数

### 函数 `GetModSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | [UModSubsystem](ModSubsystem__UModSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static UModSubsystem* GetModSubsystem(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取Mod子系统单例

---

### 函数 `DiscoverMods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") void DiscoverMods();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 扫描并发现所有可用的Mod

---

### 函数 `LoadMod`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `bNewGameLoad` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool LoadMod(const FName& ModId,bool bNewGameLoad);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载指定Mod

---

### 函数 `UnloadMod`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool UnloadMod(const FName& ModId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 卸载指定Mod

---

### 函数 `SetModEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `bEnabled` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool SetModEnabled(const FName& ModId, bool bEnabled);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 启用/禁用Mod

---

### 函数 `GetModInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") UModRuntimeInfo* GetModInfo(const FName& ModId) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取Mod信息

---

### 函数 `GetAllLoadedMods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | TArray<[UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)*> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<UModRuntimeInfo*> GetAllLoadedMods() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有已加载的Mod

---

### 函数 `GetAllDiscoveredMods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | TArray<[UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)*> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<UModRuntimeInfo*> GetAllDiscoveredMods() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有发现的Mod（包括未加载的）

---

### 函数 `IsModLoaded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") bool IsModLoaded(const FName& ModId) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查Mod是否已加载

---

### 函数 `CheckModGameVersion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `OutErrorMessage` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") bool CheckModGameVersion(const FName& ModId, FString& OutErrorMessage) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查Mod是否符合游戏版本要求

---

### 函数 `CheckModToolVersion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `OutErrorMessage` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") bool CheckModToolVersion(const FName& ModId, FString& OutErrorMessage) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查Mod工具版本号是否兼容

---

### 函数 `GetCurrentModToolVersion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | `FString` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") static FString GetCurrentModToolVersion();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前游戏的Mod工具版本号

---

### 函数 `CheckModDependencies`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `OutMissingDependencies` | `TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool CheckModDependencies(const FName& ModId, TArray<FName>& OutMissingDependencies) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查Mod依赖是否满足

---

### 函数 `LoadAllEnabledMods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bNewGameLoad` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") void LoadAllEnabledMods(bool bNewGameLoad);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按依赖顺序加载所有启用的Mod 是否是加载新游戏mod

---

### 函数 `UnloadAllMods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") void UnloadAllMods();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 卸载所有Mod

---

### 函数 `LoadAndApplyModConfigFromJson`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModInfo` | [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| `bNewGameLoad` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool LoadAndApplyModConfigFromJson(UModRuntimeInfo* ModInfo, bool bNewGameLoad);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从 ModInfo.json 记录的 JSON 配置加载并应用（不依赖 Cook 后的 DataTable/DataAsset）

---

### 函数 `GetLoadedModRecords`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | TArray<[FModSaveRecord](ModInfo__FModSaveRecord.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<FModSaveRecord> GetLoadedModRecords() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前已加载 Mod 的存档记录（存档时由 SaveGameDataActor 同步进档）

---

### 函数 `CheckSaveModCompatibility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SaveRecords` | const TArray<[FModSaveRecord](ModInfo__FModSaveRecord.md)>& |
| `OutIssues` | TArray<[FModCompatibilityIssue](ModInfo__FModCompatibilityIssue.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") bool CheckSaveModCompatibility(const TArray<FModSaveRecord>& SaveRecords, TArray<FModCompatibilityIssue>& OutIssues) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 对比存档 Mod 记录与当前 Mod 环境，输出缺失/未启用/版本不符清单；返回 true 表示完全兼容

---

### 函数 `GetLastSaveModCompatibilityIssues`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | TArray<[FModCompatibilityIssue](ModInfo__FModCompatibilityIssue.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") TArray<FModCompatibilityIssue> GetLastSaveModCompatibilityIssues() const { return LastSaveModCompatibilityIssues; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 最近一次读档兼容检查发现的问题（UI 可在绑定委托之外随时查询）

---
