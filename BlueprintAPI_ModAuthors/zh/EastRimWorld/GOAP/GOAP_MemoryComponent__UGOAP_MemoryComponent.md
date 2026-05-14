# `class` `UGOAP_MemoryComponent`

**源码头文件:** `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

---

## 功能说明（来自头文件注释）

> GOAP记忆组件

## 蓝图暴露变量

### 属性 `Memories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EGOAP_ConditionType , [FMemoryData](GOAP_MemoryComponent__FMemoryData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<EGOAP_ConditionType , FMemoryData> Memories;` |

**源码注释:**

> GOAP前置条件类型对应的记忆值
> TMap<GOAP前置条件类型 , 记忆数据>

---

### 属性 `OnMemoryUpdated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMemoryUpdated` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMemoryUpdated OnMemoryUpdated;` |

**源码注释:**

> 当GOAP记忆更新时

---

## 蓝图暴露函数

### 函数 `GetMemoryInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | `EGOAP_ConditionType` |
| `ID` | `const FName&` |
| `GOAPValue` | [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetMemoryInfo(EGOAP_ConditionType ConditionType , const FName& ID , FGOAP_Value& GOAPValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取记忆值

---

### 函数 `UpdateMemory`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Delete` | `bool` |
| `ConditionType` | `EGOAP_ConditionType` |
| `ID` | `const FName&` |
| `GOAPValue` | const [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateMemory(bool Delete , EGOAP_ConditionType ConditionType , const FName& ID , const FGOAP_Value& GOAPValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新记忆

---

### 函数 `IsMemoryDifferent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Delete` | `bool` |
| `ConditionType` | `EGOAP_ConditionType` |
| `ID` | `const FName&` |
| `GOAPValue` | const [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsMemoryDifferent(bool Delete , EGOAP_ConditionType ConditionType , const FName& ID , const FGOAP_Value& GOAPValue) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 检查记忆值是否不同

---
