# `class` `UCommonLogComponent`

**Source header:** `EastRimWorld/Components/CommonLogComponent.h`

---

## Functional description (from header comments)

> Common log component that generates, records and filters in-game logs and persists them with the save game

## Blueprint-exposed variables

### Property `GameMode`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<class [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class AERW_GameModeBase> GameMode;` |

**Notes:**

> 全局世界指针  游戏模式

---

### Property `GameInstance`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<class [UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class UERW_GameInstanceBase> GameInstance;` |

**Notes:**

> Cached reference to the game instance (UERW_GameInstanceBase)

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable); FLogLoadSucceedDelegate OnLogLoadSucceedDelegate;` |

---

### Property `OnLogStringDelegate`

| Field | Details |
|------|------|
| C++ type | `FLogStringDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FLogStringDelegate OnLogStringDelegate;` |

**Notes:**

> Delegate broadcast when a new log string is generated (with log text, group and type)

---

## Blueprint-exposed functions

### Function `GenerateLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CommonLogType` | [ECommonLogType](../Struct/CommonLogStruct__ECommonLogType.md) |
| `LogParameterMap` | const TMap<[ECommonLogParameterType](../Struct/CommonLogStruct__ECommonLogParameterType.md),FString> & |
| `255` | `int32 TeamID =` |
| `(unnamed / type only)` | `const FString& FilterString = ""` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FString GenerateLog(ECommonLogType CommonLogType,const TMap<ECommonLogParameterType,FString> & LogParameterMap,int32 TeamID = 255,const FString& FilterString = "");`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成日志

---

### Function `GetAllLogData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllLogData(TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets all log data

---

### Function `AddEventLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Log" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Text` | `const FText&` |
| `(unnamed / type only)` | `const FString& FilterString = TEXT("")` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Log") static void AddEventLog(const FText& Text, const FString& FilterString = TEXT(""));`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 便捷静态口: 写一条"江湖事件"日志(Event 分组)到全局日志组件(ASaveGameDataActor::LogComponent)。
> 涌现 / StoryArc / 历练 / 据点 等系统的江湖事件统一走此口。
> 组件或 WorldDirector 未就绪时静默跳过(防早期空指针)。

---

### Function `FindAllLogStringByFilterString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFilterString` | `const FString&` |
| `OutLogString` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FindAllLogStringByFilterString(const FString& InFilterString,TArray<FCommonLogData>& OutLogString);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找所有包含InFilterString的日志

---

### Function `FindAllLogNotInclueFilterString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFilterString` | `const FString&` |
| `OutLogString` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FindAllLogNotInclueFilterString(const FString& InFilterString,TArray<FCommonLogData>& OutLogString);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Finds all logs that do not contain the given filter string

---
