# `struct` `FBuildingData`

**源码头文件:** `EastRimWorld/Struct/BuildingData.h`

---

## 功能说明（来自头文件注释）

> 建筑配置数据表行：包含类别、模型、蓝图类、座位数、服务时长/动画、GOAP动作与世界状态等建筑定义信息

## 蓝图暴露变量

### 属性 `BuildingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BuildingType = 0;` |

**说明:**

> 类别

---

### 属性 `MeshPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "StaticMesh")) FSoftObjectPath MeshPath;` |

**说明:**

> 模型

---

### 属性 `BpClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (MetaClass = "BuildingBase")) FSoftClassPath BpClass;` |

**说明:**

> 蓝图

---

### 属性 `SeatNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SeatNum = 0;` |

**说明:**

> 座位数

---

### 属性 `ServiceTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ServiceTime = 0.f;` |

**说明:**

> 服务时长

---

### 属性 `AnimPaths`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FSoftObjectPath>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset")) TArray<FSoftObjectPath> AnimPaths;` |

**说明:**

> 服务动画

---

### 属性 `AnimTans`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset")) TArray<FTransform> AnimTans;` |

**说明:**

> 动画坐标

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FName> Actions;` |

**说明:**

> goap动作

---

### 属性 `GoapWorldStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FLUniValue>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FName, FLUniValue> GoapWorldStates;` |

**说明:**

> goap世界状态

---
