# `class` `UCommonLogComponent`

**源码头文件:** `EastRimWorld/Components/CommonLogComponent.h`

---

## 功能说明（来自头文件注释）

> 通用日志组件：生成、记录、过滤游戏内日志并随存档保存

## 蓝图暴露变量

### 属性 `GameMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class AERW_GameModeBase> GameMode;` |

**说明:**

> 全局世界指针  游戏模式

---

### 属性 `GameInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<class UERW_GameInstanceBase> GameInstance;` |

**说明:**

> 缓存的游戏实例（UERW_GameInstanceBase）引用

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

**说明:**

> 生成新日志字符串时广播的委托（含日志文本、分组与类型）

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
| `CommonLogType` | [ECommonLogType](../Struct/CommonLogStruct__ECommonLogType.md) |
| `LogParameterMap` | const TMap<[ECommonLogParameterType](../Struct/CommonLogStruct__ECommonLogParameterType.md),FString> & |
| `255` | `int32 TeamID =` |
| `（匿名/仅类型）` | `const FString& FilterString = ""` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FString GenerateLog(ECommonLogType CommonLogType,const TMap<ECommonLogParameterType,FString> & LogParameterMap,int32 TeamID = 255,const FString& FilterString = "");`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

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

**说明:**

> 获取全部日志数据

---

### 函数 `AddEventLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Log" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Text` | `const FText&` |
| `（匿名/仅类型）` | `const FString& FilterString = TEXT("")` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Log") static void AddEventLog(const FText& Text, const FString& FilterString = TEXT(""));`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 便捷静态口: 写一条"江湖事件"日志(Event 分组)到全局日志组件(ASaveGameDataActor::LogComponent)。
> 涌现 / StoryArc / 历练 / 据点 等系统的江湖事件统一走此口。
> 组件或 WorldDirector 未就绪时静默跳过(防早期空指针)。

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

**说明:**

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

**说明:**

> 查找所有不包含指定过滤字符串的日志

---
