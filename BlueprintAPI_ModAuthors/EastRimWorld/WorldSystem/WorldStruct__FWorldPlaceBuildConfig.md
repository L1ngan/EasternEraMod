# `struct` `FWorldPlaceBuildConfig`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText Name;` |

**源码注释：**

> 建筑名称

---

### 属性 `BuildType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWorldPlaceBuildType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EWorldPlaceBuildType BuildType = EWorldPlaceBuildType::Produce;` |

**源码注释：**

> 建筑类型(用于势力建造倾向)

---

### 属性 `FuncType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPlaceBuildFuncType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildFuncType FuncType = EPlaceBuildFuncType::PlaceAttribute;` |

**源码注释：**

> 建筑功能类型

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText Desc;` |

**源码注释：**

> 建筑描述

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> Icon;` |

**源码注释：**

> 图标

---

### 属性 `PriorityBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 PriorityBase = 0;` |

**源码注释：**

> 建筑的基础建造优先级(数值越大越优先)

---

### 属性 `LevelInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,FPlaceBuildLevelInfo>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<int32,FPlaceBuildLevelInfo> LevelInfos;` |

**源码注释：**

> 建筑设施等级信息(从1开始)

---
