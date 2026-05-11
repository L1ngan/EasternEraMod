# `struct` `FRoomConfigData`

**源码头文件：** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 房间配置结构

## 蓝图暴露变量

### 属性 `RoomName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText RoomName;` |

**源码注释：**

> 房间名称

---

### 属性 `RoomType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERoomType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) ERoomType RoomType = ERoomType::None;` |

**源码注释：**

> 房间类型

---

### 属性 `RoomDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText RoomDesc;` |

**源码注释：**

> 房间描述

---

### 属性 `RoomIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> RoomIcon;` |

**源码注释：**

> 房间图标

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Priority = 0;` |

**源码注释：**

> 优先级

---

### 属性 `DemandForArea`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 DemandForArea = 0;` |

**源码注释：**

> 面积需求(大于等于)

---

### 属性 `FacilityNeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FFacilityNeed>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FFacilityNeed> FacilityNeed;` |

**源码注释：**

> 设施需求

---

### 属性 `FacilityNeedNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 FacilityNeedNum = 0;` |

**源码注释：**

> 设施需求数量

---

### 属性 `ScoreTypeRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ERoomScoreType,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomScoreType,float> ScoreTypeRate;` |

**源码注释：**

> 评级系数

---

### 属性 `RoomLevels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,FRoomLevel>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32,FRoomLevel> RoomLevels;` |

**源码注释：**

> 房间等级以及效果

---

### 属性 `FiveElementType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EFiveElementType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EFiveElementType FiveElementType = EFiveElementType::None;` |

**源码注释：**

> 五行类型

---

### 属性 `FiveElementValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 FiveElementValue = 0;` |

**源码注释：**

> 五行属性值

---
