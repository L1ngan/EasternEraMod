# `struct` `FTransportationInfo`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 交通工具信息

## 蓝图暴露变量

### 属性 `TransportationType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ETransportationType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETransportationType TransportationType = ETransportationType::Walking;` |

**源码注释：**

> 交通工具类型

---

### 属性 `TransportationBuildingGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides)) FGuid TransportationBuildingGuid;` |

**源码注释：**

> 交通工具建筑GUID

---

### 属性 `TimeVehicleCosts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FTransportationResourceInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName,FTransportationResourceInfo> TimeVehicleCosts;` |

**源码注释：**

> 交通工具单位时间消耗

---

### 属性 `VehicleNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 VehicleNumber = -1;` |

**源码注释：**

> 交通工具数量 -1 为无限制

---

### 属性 `Speed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Speed = 200;` |

**源码注释：**

> 交通工具移动

---

### 属性 `TransportationActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<class ATransportationActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftClassPtr<class ATransportationActor> TransportationActorClass;` |

**源码注释：**

> 交通工具Actor类

---

### 属性 `AttachTransforms`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,FTransform>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32,FTransform> AttachTransforms;` |

**源码注释：**

> 停靠在建筑物的相对位置

---

### 属性 `UnSelectIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> UnSelectIcon;` |

**源码注释：**

> 未选中时图标

---

### 属性 `SelectedIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> SelectedIcon;` |

**源码注释：**

> 未选中时图标

---
