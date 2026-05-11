# `struct` `FBuildingData`

**源码头文件：** `EastRimWorld/Struct/BuildingData.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `BuildingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BuildingType = 0;` |

**源码注释：**

> 类别

---

### 属性 `MeshPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "StaticMesh")) FSoftObjectPath MeshPath;` |

**源码注释：**

> 模型

---

### 属性 `BpClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (MetaClass = "BuildingBase")) FSoftClassPath BpClass;` |

**源码注释：**

> 蓝图

---

### 属性 `SeatNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SeatNum = 0;` |

**源码注释：**

> 座位数

---

### 属性 `ServiceTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ServiceTime = 0.f;` |

**源码注释：**

> 服务时长

---

### 属性 `AnimPaths`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FSoftObjectPath>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset")) TArray<FSoftObjectPath> AnimPaths;` |

**源码注释：**

> 服务动画

---

### 属性 `AnimTans`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowedClasses = "AnimationAsset")) TArray<FTransform> AnimTans;` |

**源码注释：**

> 动画坐标

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FName> Actions;` |

**源码注释：**

> goap动作

---

### 属性 `GoapWorldStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FLUniValue>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FName, FLUniValue> GoapWorldStates;` |

**源码注释：**

> goap世界状态

---
