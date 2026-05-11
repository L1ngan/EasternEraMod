# `class` `UCommonLogComponent`

**源码头文件:** `EastRimWorld/Components/CommonLogComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `GameMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class AERW_GameModeBase> GameMode;` |

**源码注释:**

> 全局世界指针  游戏模式

---

### 属性 `GameInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class UERW_GameInstanceBase> GameInstance;` |

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable); FLogLoadSucceedDelegate OnLogLoadSucceedDelegate;` |

---

### 属性 `OnLogStringDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLogStringDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FLogStringDelegate OnLogStringDelegate;` |

---

## 蓝图暴露函数

### 函数 `GenerateLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CommonLogType` | `ECommonLogType` |
| `LogParameterMap` | `const TMap<ECommonLogParameterType,FString> &` |
| `255` | `int32 TeamID =` |
| `（匿名/仅类型）` | `const FString& FilterString = ""` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FString GenerateLog(ECommonLogType CommonLogType,const TMap<ECommonLogParameterType,FString> & LogParameterMap,int32 TeamID = 255,const FString& FilterString = "");`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 生成日志

---

### 函数 `GetAllLogData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllLogData(TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `FindAllLogStringByFilterString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFilterString` | `const FString&` |
| `OutLogString` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void FindAllLogStringByFilterString(const FString& InFilterString,TArray<FCommonLogData>& OutLogString);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 查找所有包含InFilterString的日志

---

### 函数 `FindAllLogNotInclueFilterString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFilterString` | `const FString&` |
| `OutLogString` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void FindAllLogNotInclueFilterString(const FString& InFilterString,TArray<FCommonLogData>& OutLogString);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
