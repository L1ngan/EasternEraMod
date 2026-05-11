# `class` `UModLuaLibrary`

**Source header:** `EastRimWorld/Mod/ModLuaLibrary.h`

---

## Functional description (from header comments)

> Mod Lua函数库
> 提供从Lua调用C++功能的接口

## Blueprint-exposed functions

### Function `GetModSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | class [UModSubsystem](ModSubsystem__UModSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModSubsystem* GetModSubsystem(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取Mod子系统

---

### Function `IsModLoaded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool IsModLoaded(const UObject* WorldContextObject, const FName& ModId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查Mod是否已加载

---

### Function `GetModInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | class [UModRuntimeInfo](ModInfo__UModRuntimeInfo.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `ModId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static class UModRuntimeInfo* GetModInfo(const UObject* WorldContextObject, const FName& ModId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取Mod信息

---

### Function `ModLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `Message` | `const FString&` |
| `(unnamed / type only)` | `const FString& ModLogLevel = TEXT("Log")` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System", meta = (CallInEditor = "true")) static void ModLog(const FName& ModId, const FString& Message, const FString& ModLogLevel = TEXT("Log"));`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 日志输出

---

### Function `RegisterModCommand`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ModId` | `const FName&` |
| `CommandName` | `const FString&` |
| `Description` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static void RegisterModCommand(const FName& ModId, const FString& CommandName, const FString& Description);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注册控制台命令（供Lua调用）

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

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System") static bool LoadAndApplyModInformationAssetByPath(const FString& AssetPath,bool bNewGameLoad);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过路径加载并应用UModInformationAsset配置

---
