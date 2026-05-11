# `class` `UCommonLogComponent`

**Source header:** `EastRimWorld/Components/CommonLogComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GameMode`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<class [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class AERW_GameModeBase> GameMode;` |

**Source comments:**

> 全局世界指针  游戏模式

---

### Property `GameInstance`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<class [UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class UERW_GameInstanceBase> GameInstance;` |

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
| `CommonLogType` | `ECommonLogType` |
| `LogParameterMap` | `const TMap<ECommonLogParameterType,FString> &` |
| `255` | `int32 TeamID =` |
| `(unnamed / type only)` | `const FString& FilterString = ""` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FString GenerateLog(ECommonLogType CommonLogType,const TMap<ECommonLogParameterType,FString> & LogParameterMap,int32 TeamID = 255,const FString& FilterString = "");`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

---
