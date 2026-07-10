# `struct` `FWorldMoveInfoPreset`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 角色世界地图移动信息预设

## 蓝图暴露变量

### 属性 `WorldMapMoveType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EWorldMapMoveType WorldMapMoveType = EWorldMapMoveType::None;` |

**说明:**

> 移动类型

---

### 属性 `StayTotalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float StayTotalTime = 0.f;` |

**说明:**

> 停留的时间

---

### 属性 `MoveSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MoveSpeed = 100.f;` |

**说明:**

> 基础移动速度

---

### 属性 `bBackPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bBackPlace = false;` |

**说明:**

> 是否返回

---

### 属性 `bEnterPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bEnterPlace = false;` |

**说明:**

> 是否进入地点

---

### 属性 `bFixedEnterPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bFixedEnterPosition = false;` |

**说明:**

> 是否固定位置进入

---

### 属性 `EnterPlacePosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides,EditCondition="bFixedEnterPosition")) FVector EnterPlacePosition = FVector::ZeroVector;` |

**说明:**

> 进入地点的坐标

---

### 属性 `MoveActorStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta = (AllowedClasses = "/Script/Engine.StaticMesh")) FSoftObjectPath MoveActorStaticMesh;` |

**说明:**

> 模型

---

### 属性 `TransportationMoveActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ETransportationType](../ERW_Enumerations__ETransportationType.md),FSoftClassPath> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere, meta = (AllowedClasses = "/Script/EastRimWorld.WorldMapMoveActor")) TMap<ETransportationType,FSoftClassPath> TransportationMoveActorClass;` |

**说明:**

> 不同的交通工具在地图中显示的actor

---

### 属性 `WorldMapMoveActorWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FSoftClassPath WorldMapMoveActorWidget;` |

**说明:**

> Actor使用的Tip

---

### 属性 `WidgetID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName WidgetID;` |

**说明:**

> 点击展开的UI  ID

---

### 属性 `WorldMapMovePath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FSoftClassPath WorldMapMovePath;` |

**说明:**

> 移动路径样条线蓝图

---

### 属性 `PlayerTeamPathColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FLinearColor PlayerTeamPathColor = FLinearColor::White;` |

**说明:**

> 玩家队伍样条线颜色

---

### 属性 `OtherTeamPathColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FLinearColor OtherTeamPathColor = FLinearColor::White;` |

**说明:**

> 其他队伍样条线颜色

---

### 属性 `MoveActorScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector MoveActorScale = FVector::OneVector;` |

**说明:**

> 世界中移动的actor缩放

---

### 属性 `MaxCostTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxCostTime = 0.f;` |

**说明:**

> 耗时的最大时间

---
