# `class` `AERW_Preset`

**源码头文件:** `EastRimWorld/Building/ERW_Preset.h`

---

## 功能说明（来自头文件注释）

> 建筑预设Actor

## 蓝图暴露变量

### 属性 `PresetComponents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[UERW_PresetComponent](../Components/ERW_PresetComponent__UERW_PresetComponent.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<UERW_PresetComponent*> PresetComponents;` |

**说明:**

> 建筑预设组件

---

### 属性 `DoorOrWindowMeshInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetMeshInfos](ERW_Preset__FPresetMeshInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FPresetMeshInfos> DoorOrWindowMeshInfos;` |

**说明:**

> 门或者窗户对应的预设组件数据
> TMap<配置表ID , 预设模型数据集合>

---

### 属性 `WallMeshInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FWallMeshInfos](ERW_Preset__FWallMeshInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FWallMeshInfos> WallMeshInfos;` |

**说明:**

> 墙的模型组件集合
> TMap<墙的配置表ID , 预设模型集合>

---

### 属性 `RowName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName RowName;` |

**说明:**

> 配置表行名

---

### 属性 `PresetData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FPresetInfos> PresetData;` |

**说明:**

> 建筑预设数据

---

### 属性 `WallPillarData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FPresetInfos> WallPillarData;` |

**说明:**

> 墙接缝柱数据

---

## 蓝图暴露函数

### 函数 `AddPresetData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Data` | const TArray<[FPresetData](../ERW_CommonTypes__FPresetData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddPresetData(const FName& ID , const TArray<FPresetData>& Data);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入建筑预设数据

---

### 函数 `AddWallPillarData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Data` | const TArray<[FPresetData](../ERW_CommonTypes__FPresetData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddWallPillarData(const FName& ID , const TArray<FPresetData>& Data);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入墙接缝柱数据

---

### 函数 `WriteToDataTable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Table` | `UDataTable*` |
| `Size` | `const FIntVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void WriteToDataTable(UDataTable* Table , const FIntVector& Size);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 写入数据到配置表

---

### 函数 `UpdateWallMeshInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateWallMeshInfos();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新墙的模型信息

---
