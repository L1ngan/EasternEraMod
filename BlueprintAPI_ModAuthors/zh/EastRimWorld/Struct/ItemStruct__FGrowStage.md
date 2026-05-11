# `struct` `FGrowStage`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 生长阶段

## 蓝图暴露变量

### 属性 `CurGrowStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGrowStageType` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") EGrowStageType CurGrowStage = EGrowStageType::None;` |

**源码注释:**

> 当前阶段

---

### 属性 `StageName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") FText StageName;` |

**源码注释:**

> 阶段名称

---

### 属性 `StageDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") FText StageDescription;` |

**源码注释:**

> 阶段描述

---

### 属性 `GrowStageTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float GrowStageTime = 0.f;` |

**源码注释:**

> 阶段持续时间 -1时 不会随时间结束此阶段 也不会发生变化

---

### 属性 `MinScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float MinScale = 0.f;` |

**源码注释:**

> 此阶段的最小缩放(如果是种植物的第一阶段,MinScale不能被其他阶段缩放范围包含)

---

### 属性 `MaxScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float MaxScale = 0.f;` |

**源码注释:**

> 此阶段的最大缩放

---

### 属性 `AutoNextGrowStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGrowStageType` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") EGrowStageType AutoNextGrowStage = EGrowStageType::None;` |

**源码注释:**

> 此阶段过后的下一个阶段

---

### 属性 `AfterActionStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,EGrowStageType>` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") TMap<FName,EGrowStageType> AfterActionStage;` |

**源码注释:**

> 此阶段行为之后的阶段

---

### 属性 `CuttingFractureHeightPercentage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") float CuttingFractureHeightPercentage = 0.2;` |

**源码注释:**

> 砍伐的断裂高度百分比

---

### 属性 `StageStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") TSoftObjectPtr<UStaticMesh> StageStaticMesh;` |

**源码注释:**

> 当前阶段的模型

---

### 属性 `CommonButtons`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<ECommonButtonType>` |
| 反射说明符 | BlueprintReadWrite, Category="Stage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stage") TArray<ECommonButtonType> CommonButtons;` |

**源码注释:**

> 此阶段可以操作的按钮

---
