# `struct` `FAreaBuildingData`

**Source header:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## Functional description (from header comments)

> 区域配置数据。
> 【核心】存进旗建筑的 BuildingData[EBuildingDataType::Area]（FInstancedStruct），
> 随 FBuildObjectSaveData.BuildingData 存档复原——不靠建筑子类、不靠裸 SaveGame 字段。
> 字段标 SaveGame 以随 BuildingData 序列化（仿 FEnergyData）。

## Blueprint-exposed variables

### Property `AreaId`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) FGuid AreaId;` |

**Notes:**

> 区域唯一 Id（建造落成时生成；Invalid 视为未初始化）

---

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) FName DisplayName;` |

**Notes:**

> 显示名（默认"未命名区域 #N"）

---

### Property `DebugColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) FLinearColor DebugColor = FLinearColor::Green;` |

**Notes:**

> 区域颜色（地面边线 + 弟子头像色块 + 旗布）

---

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [EAreaType](AreaControlTypes__EAreaType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) EAreaType Type = EAreaType::Activity;` |

**Notes:**

> 区域类型

---

### Property `SizeX`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) int32 SizeX = 40;` |

**Notes:**

> Box 尺寸 X（格，1 格=1m，玩家 UI 滑条可调，运行期改动须随此持久化）

---

### Property `SizeY`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) int32 SizeY = 40;` |

**Notes:**

> Box 尺寸 Y

---

### Property `Orientation`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) uint8 Orientation = 0;` |

**Notes:**

> 朝向：0/1/2/3 = 0/90/180/270（应用时转 ERotateOrientation）

---

### Property `GroundHeightLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly) int32 GroundHeightLevel = 0;` |

**Notes:**

> 地砖高度档：-2~+2（-50/-10/0/+10/+50），仅影响通行不影响判定
> 注：Blueprint 不支持 int8，用 int32（范围用不上压缩）

---
