# `struct` `FModBuildLightSourceData`

**源码头文件:** `CreateModPlugin/Public/BuildDataStruct.h`

---

## 功能说明（来自头文件注释）

> 建筑光源配置数据

## 蓝图暴露变量

### 属性 `LightType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<class UPointLightComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TSubclassOf<class UPointLightComponent> LightType;` |

**说明:**

> 光源类型

---

### 属性 `IntensityUnits`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ELightUnits` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) ELightUnits IntensityUnits { ELightUnits::Lumens };` |

**说明:**

> 强度单位

---

### 属性 `OffsetPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FVector OffsetPosition = FVector::ZeroVector;` |

**说明:**

> 光源偏移位置

---

### 属性 `Rotation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRotator` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FRotator Rotation = FRotator::ZeroRotator;` |

**说明:**

> 光源旋转

---

### 属性 `Intensity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float Intensity { 0.f };` |

**说明:**

> 光源强度

---

### 属性 `AttenuationRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float AttenuationRadius { 0.f };` |

**说明:**

> 衰减半径

---

### 属性 `InnerConeAngle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float InnerConeAngle { 0.f };` |

**说明:**

> 内锥体角度

---

### 属性 `OuterConeAngle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float OuterConeAngle { 0.f };` |

**说明:**

> 外锥体角度

---

### 属性 `LightColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FColor LightColor = FColor::White;` |

**说明:**

> 光源颜色

---

### 属性 `Radius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) float Radius { 0.f };` |

**说明:**

> 光照半径

---

### 属性 `CastShadow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) bool CastShadow { true };` |

**说明:**

> 是否投影

---
