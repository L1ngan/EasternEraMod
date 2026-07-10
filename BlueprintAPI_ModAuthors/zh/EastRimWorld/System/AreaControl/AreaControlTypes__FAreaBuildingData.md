# `struct` `FAreaBuildingData`

**源码头文件:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## 功能说明（来自头文件注释）

> 区域配置数据。
> 【核心】存进旗建筑的 BuildingData[EBuildingDataType::Area]（FInstancedStruct），
> 随 FBuildObjectSaveData.BuildingData 存档复原——不靠建筑子类、不靠裸 SaveGame 字段。
> 字段标 SaveGame 以随 BuildingData 序列化（仿 FEnergyData）。

## 蓝图暴露变量

### 属性 `AreaId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) FGuid AreaId;` |

**说明:**

> 区域唯一 Id（建造落成时生成；Invalid 视为未初始化）

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) FName DisplayName;` |

**说明:**

> 显示名（默认"未命名区域 #N"）

---

### 属性 `DebugColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) FLinearColor DebugColor = FLinearColor::Green;` |

**说明:**

> 区域颜色（地面边线 + 弟子头像色块 + 旗布）

---

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAreaType](AreaControlTypes__EAreaType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) EAreaType Type = EAreaType::Activity;` |

**说明:**

> 区域类型

---

### 属性 `SizeX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) int32 SizeX = 40;` |

**说明:**

> Box 尺寸 X（格，1 格=1m，玩家 UI 滑条可调，运行期改动须随此持久化）

---

### 属性 `SizeY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) int32 SizeY = 40;` |

**说明:**

> Box 尺寸 Y

---

### 属性 `Orientation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) uint8 Orientation = 0;` |

**说明:**

> 朝向：0/1/2/3 = 0/90/180/270（应用时转 ERotateOrientation）

---

### 属性 `GroundHeightLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) int32 GroundHeightLevel = 0;` |

**说明:**

> 地砖高度档：-2~+2（-50/-10/0/+10/+50），仅影响通行不影响判定
> 注：Blueprint 不支持 int8，用 int32（范围用不上压缩）

---
