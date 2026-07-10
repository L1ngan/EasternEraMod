# `struct` `FWorldMapItemLayoutInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## 功能说明（来自头文件注释）

> 世界地图据点(城市)布局配置。
> 独立表 DT_WorldMapItemLayout，行名(KEY) = 城市 ForceID。
> 用于保存 / 还原 WB_WorldMap1 -> CanvasPanel_55 下 WB_WorldMapCityItem 的 2D 坐标与控件参数。
> 还原：城市 item 在 Construct 里按自身 ForceID 查本表，命中则 SetPosition(自身 CanvasSlot) 并回填参数。
> 城市是 CanvasPanel_55 直接子控件，offset 与 SetPosition 同坐标空间，原样写回即 1:1 复现，不需几何换算。

## 蓝图暴露变量

### 属性 `Position`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Layout" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layout") FVector2D Position = FVector2D::ZeroVector;` |

**说明:**

> 在 CanvasPanel_55 中的 2D 位置(= CanvasPanelSlot 的 offset_left/top，画布中心为原点)

---

### 属性 `ZOrder`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Layout" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layout") int32 ZOrder = 1;` |

**说明:**

> 层级(当前手摆全为 1，留作扩展)

---

### 属性 `FindRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Param" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") int32 FindRange = 0;` |

**说明:**

> 探查范围(城市 item 的 FindRange)

---

### 属性 `bShowColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Param" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") bool bShowColor = false;` |

**说明:**

> 是否显示颜色(城市 item 的 ShowColor)

---

### 属性 `bIsMy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Param" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") bool bIsMy = false;` |

**说明:**

> 是否为玩家所有(城市 item 的 IsMy)

---

### 属性 `NearPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Param" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") TArray<FName> NearPoints;` |

**说明:**

> 邻接点(城市 item 的 NearPoints)

---

### 属性 `NearCity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Param" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") TArray<FName> NearCity;` |

**说明:**

> 邻接城(城市 item 的 NearCity)

---
