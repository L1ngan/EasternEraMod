# `class` `UEnergySystemSetUp`

**源码头文件：** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `LineMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") TSoftObjectPtr<UMaterialInterface> LineMaterial;` |

---

### 属性 `CableLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") float CableLength = 200.f;` |

**源码注释：**

> 缆索静止时的长度

---

### 属性 `AttachEndSocketName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") FName AttachEndSocketName = NAME_None;` |

**源码注释：**

> 插槽名字

---

### 属性 `NumSegments`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 20)) int NumSegments = 6;` |

**源码注释：**

> 缆索静止时的长度

---

### 属性 `SolverIterations`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 16)) int SolverIterations = 3;` |

---

### 属性 `CableWidth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 50)) float CableWidth = 3;` |

**源码注释：**

> 宽度

---

### 属性 `NumSides`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 16)) int NumSides = 3;` |

**源码注释：**

> 几何体的面数

---

### 属性 `TileMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection",meta=(ClampMin = 1,ClampMax = 8)) float TileMaterial = 1;` |

**源码注释：**

> 方向的重复次数

---

### 属性 `EnergyRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") int32 EnergyRange = 1000;` |

**源码注释：**

> 能源相关的范围（连接范围，传输范围等）

---

### 属性 `CalculationInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") int32 CalculationInterval = 40;` |

**源码注释：**

> 计算间隔

---

### 属性 `EnergySplineActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AEnergySplineActor>` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Connection") TSoftClassPtr<AEnergySplineActor> EnergySplineActor;` |

**源码注释：**

> 连线actor

---

### 属性 `bShowDebugBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Connection" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Connection") bool bShowDebugBox = false;` |

**源码注释：**

> 是否显示范围

---
