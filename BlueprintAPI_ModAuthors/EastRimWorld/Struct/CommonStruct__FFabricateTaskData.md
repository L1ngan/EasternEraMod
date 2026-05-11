# `struct` `FFabricateTaskData`

**源码头文件：** `EastRimWorld/Struct/CommonStruct.h`

---

## 功能说明（来自头文件注释）

> 制造任务信息

## 蓝图暴露变量

### 属性 `FabricateTaskGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGuid FabricateTaskGuid;` |

**源码注释：**

> 当前制造任务的GUID

---

### 属性 `FormulaData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FFormulaData](CommonStruct__FFormulaData.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FFormulaData FormulaData;` |

**源码注释：**

> 制造的配方信息

---

### 属性 `LackResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int> LackResource;` |

**源码注释：**

> 缺少的资源

---

### 属性 `SelectableResourceTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FGameplayTag> SelectableResourceTags;` |

**源码注释：**

> 选择的资源标签

---

### 属性 `AlreadyHaveSelectableResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int> AlreadyHaveSelectableResource;` |

**源码注释：**

> 已经放入的可选资源

---

### 属性 `FabricateState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EFabricateState` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EFabricateState FabricateState = EFabricateState::None;` |

**源码注释：**

> 制造状态

---

### 属性 `TargetNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int TargetNumber = 0;` |

**源码注释：**

> 目标数量

---

### 属性 `FabricateRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EFabricateRule` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EFabricateRule FabricateRule = EFabricateRule::NumberOfTimes;` |

**源码注释：**

> 制造的规则

---

### 属性 `CurWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float CurWorkload = 0.f;` |

**源码注释：**

> 当前单次已经完成的工作量

---

### 属性 `QualityValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float QualityValue = 0.f;` |

**源码注释：**

> 单次累加的品质值

---
