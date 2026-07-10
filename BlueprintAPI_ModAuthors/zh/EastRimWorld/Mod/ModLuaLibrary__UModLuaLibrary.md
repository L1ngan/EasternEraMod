# `class` `UModLuaLibrary`

**源码头文件:** `EastRimWorld/Mod/ModLuaLibrary.h`

---

## 功能说明（来自头文件注释）

> Mod Lua函数库
> 提供从Lua调用C++功能的接口

## 蓝图暴露函数

### 函数 `GetModSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | class [UModSubsystem](ModSubsystem__UModSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModSubsystem* GetModSubsystem(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取Mod子系统

---

### 函数 `IsModLoaded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool IsModLoaded(const UObject* WorldContextObject, const FName& ModId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查Mod是否已加载

---

### 函数 `GetModInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | class [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModRuntimeInfo* GetModInfo(const UObject* WorldContextObject, const FName& ModId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取Mod信息

---

### 函数 `ModLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `Message` | `const FString&` |
| `（匿名/仅类型）` | `const FString& ModLogLevel = TEXT("Log")` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System", meta = (CallInEditor = "true")) static void ModLog(const FName& ModId, const FString& Message, const FString& ModLogLevel = TEXT("Log"));`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 日志输出

---

### 函数 `RegisterModCommand`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ModId` | `const FName&` |
| `CommandName` | `const FString&` |
| `Description` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static void RegisterModCommand(const FName& ModId, const FString& CommandName, const FString& Description);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 注册控制台命令（旧接口：无回调只打日志，保留兼容；Lua 侧请改用 RegisterModConsoleCommand）

---

### 函数 `LoadAndApplyModConfigFromJson`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |
| `bNewGameLoad` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool LoadAndApplyModConfigFromJson(const UObject* WorldContextObject, const FName& ModId, bool bNewGameLoad);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从 Mod 目录 JSON 配置加载并应用（ModInfo.json 中 DataTableConfigs / DataAssetConfigs）

---
