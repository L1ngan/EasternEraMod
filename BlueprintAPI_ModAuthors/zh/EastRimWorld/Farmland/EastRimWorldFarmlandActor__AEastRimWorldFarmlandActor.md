# `class` `AEastRimWorldFarmlandActor`

**源码头文件:** `EastRimWorld/Farmland/EastRimWorldFarmlandActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `FarmlandGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) FGuid FarmlandGuid = FGuid();` |

**源码注释:**

> ~ Save

---

### 属性 `CollectItemId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName CollectItemId;` |

**源码注释:**

> 作物的id

---

### 属性 `CollectItemData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCollectItem](../Struct/ItemStruct__FCollectItem.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FCollectItem CollectItemData;` |

**源码注释:**

> 作物的数据

---

### 属性 `DecalComponents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),TObjectPtr<UDecalComponent>> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGridPosition,TObjectPtr<UDecalComponent>> DecalComponents;` |

**源码注释:**

> 贴花组件

---

### 属性 `CubeComponents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),TObjectPtr<UStaticMeshComponent>> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGridPosition,TObjectPtr<UStaticMeshComponent>> CubeComponents;` |

**源码注释:**

> 盒子组件(除草)

---

### 属性 `PlantActionsPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, VisibleAnywhere,BlueprintReadOnly) TArray<FVector> PlantActionsPosition;` |

**源码注释:**

> 种植的Action

---

### 属性 `IsPreDesignActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool IsPreDesignActor;` |

**源码注释:**

> 是否直接从UI上创建出来的

---

### 属性 `SelectedDecalComponents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UDecalComponent>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TObjectPtr<UDecalComponent>> SelectedDecalComponents;` |

---

### 属性 `MountISMCompent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInstancedStaticMeshComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<UInstancedStaticMeshComponent> MountISMCompent;` |

**源码注释:**

> 小土包

---

### 属性 `LabelCylinderComponents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UStaticMeshComponent>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TObjectPtr<UStaticMeshComponent>> LabelCylinderComponents;` |

**源码注释:**

> 四角标牌立柱

---

### 属性 `EnvironComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_EnvironComponent](../Components/ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_EnvironComponent* EnvironComponent;` |

---

### 属性 `bSelectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bSelectState = false;` |

**源码注释:**

> 是否是选中状态

---

### 属性 `DesigningSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGridPosition DesigningSize;` |

---

### 属性 `MountTransforms`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FTransform> MountTransforms;` |

**源码注释:**

> 小土包位置

---

### 属性 `FarmerPlantLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,FVector>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TMap<FGuid,FVector> FarmerPlantLocation;` |

**源码注释:**

> 角色对应的种植位置(存来给GA确定种植点,种植完成后移除，种植被打断时用这个来查找位置放回PlantActionsPosition)

---

### 属性 `OriginGirdPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FGridPosition OriginGirdPosition;` |

**源码注释:**

> 保存此农田创建时的起始格子坐标和世界坐标

---

### 属性 `OriginLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FVector OriginLocation;` |

---

### 属性 `PreviewStartGrid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess)) FGridPosition PreviewStartGrid;` |

**源码注释:**

> 预览开始格子

---

### 属性 `FarmlandEdgeGrids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),int32> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) TMap<FGridPosition,int32> FarmlandEdgeGrids;` |

**源码注释:**

> 农田的边界格子位置,边缘类型

---

### 属性 `AllFarmlandGrid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),[FFarmlandData](../Struct/FarmlandStruct__FFarmlandData.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) TMap<FGridPosition,FFarmlandData> AllFarmlandGrid;` |

**源码注释:**

> 田的格子数据

---

### 属性 `AllFarmlandPlants`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[UFarmlandPlantInstance](../Inventory/FarmlandPlantInstance__UFarmlandPlantInstance.md)*> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess)) TArray<UFarmlandPlantInstance*> AllFarmlandPlants;` |

**源码注释:**

> 田里的植物

---

### 属性 `bProhibitPlant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) bool bProhibitPlant;` |

**源码注释:**

> 是否禁止种植

---

### 属性 `bAutoHarvestPlant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) bool bAutoHarvestPlant;` |

**源码注释:**

> 是否自动收获植物

---

### 属性 `AutoHarvestPlantLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) TMap<FName,int32> AutoHarvestPlantLimit;` |

**源码注释:**

> 自动收获植物数量限制(当仓库有n个植物后不再自动收获 <0表示一直收)

---

## 蓝图暴露函数

### 函数 `InitFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |
| `InCollectItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitFarmland(const TSet<FDesignFarmlandGridData>& GridDatas,FName InCollectItemId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckBeginnerGuideProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void CheckBeginnerGuideProgress();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `ResizeFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |
| `bAdd` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResizeFarmland(const TSet<FDesignFarmlandGridData>& GridDatas,bool bAdd);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetAllPlantPosAndGrids`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |
| `OutPos` | `TArray<FVector>&` |
| `OutGirds` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllPlantPosAndGrids(const TSet<FDesignFarmlandGridData>& GridDatas,TArray<FVector>& OutPos,TArray<FGridPosition>& OutGirds);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取输入网格能种植的点

---

### 函数 `PlantAtLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PlantAtLocation(const FVector& Location);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 种植物

---

### 函数 `ChangePlant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Id` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangePlant(FName Id);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更换种植物

---

### 函数 `RemoveOtherPlant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveOtherPlant(const TSet<FDesignFarmlandGridData>& GridDatas);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检测、移除田内的其他采集物

---

### 函数 `RemoveFarmlandPlantAndGoapActionPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveFarmlandPlantAndGoapActionPosition(const TSet<FDesignFarmlandGridData>& GridDatas);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检测、移除田的采集物 种植Action位置

---

### 函数 `GetAllFarmlandPlants`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | const TArray<[UFarmlandPlantInstance](../Inventory/FarmlandPlantInstance__UFarmlandPlantInstance.md)*>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) const TArray<UFarmlandPlantInstance*>& GetAllFarmlandPlants();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `SetAutoHarvestPlantLimit`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemId` | `const FName&` |
| `InNum` | `const int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetAutoHarvestPlantLimit(const FName& ItemId,const int32& InNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 修改自动收获植物的上限

---

### 函数 `TestShowFarmlandEdge`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TestShowFarmlandEdge();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 测试函数：显示农田边界

---

### 函数 `DestoryFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DestoryFarmland();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UpdateFarmlandEdge`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateFarmlandEdge();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新农田边界

---

### 函数 `FilterCanPlaceFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartGrid` | [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `EndGrid` | [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `OutCanPlaceGrid` | TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void FilterCanPlaceFarmland(FGridPosition& StartGrid,FGridPosition& EndGrid,TSet<FDesignFarmlandGridData>& OutCanPlaceGrid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 过滤掉不能放置农田的格子

---

### 函数 `StartPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsAddPreview` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartPreview(bool IsAddPreview);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> ------------------预览-------------
> 预览开始

---

### 函数 `K2_StartPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsAddPreview` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_StartPreview(bool IsAddPreview);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `CancelPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelPreview();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_CancelPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_CancelPreview();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `StartDesigningFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartLocation` | `const FVector &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartDesigningFarmland(const FVector & StartLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 开始设计田地

---

### 函数 `K2_StartDesigningFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartLocation` | `const FVector &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_StartDesigningFarmland(const FVector & StartLocation);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `CancelDesigningFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelDesigningFarmland();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 取消设计田地

---

### 函数 `K2_CancelDesigningFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_CancelDesigningFarmland();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `EndDesigningFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EndLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EndDesigningFarmland(const FVector& EndLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_EndDesigningFarmland`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EndLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_EndDesigningFarmland(const FVector& EndLocation);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `UpdatePreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdatePreview();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新田地预览

---

### 函数 `K2_UpdatePreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_UpdatePreview();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `UpdateDesigning`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateDesigning();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_UpdateDesigning`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RowGridNum` | `const int32&` |
| `ColGridNum` | `const int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void K2_UpdateDesigning(const int32& RowGridNum,const int32& ColGridNum);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `GetPreviewType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `EFarmlandPreviewType` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) EFarmlandPreviewType GetPreviewType(){return PreviewType;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetFarmerPlantLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FVector GetFarmerPlantLocation(const FGuid& CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 根据角色id取对应的种植点

---

### 函数 `PutbackPlantGoapPos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPos` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PutbackPlantGoapPos(const FVector& InPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 种植行为被取消时放回未完成的种植点

---

### 函数 `PutbackPlantGoapPosByAgentGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AgentGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PutbackPlantGoapPosByAgentGuid(const FGuid& AgentGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveFarmerPlantLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 RemoveFarmerPlantLocation(const FGuid& CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetPlaceGridSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetPlaceGridSize();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取农田大小

---

### 函数 `CalcuPlantLocationOccupyGrids`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPlantLocation` | `const FVector&` |
| `OutOccupyGrids` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcuPlantLocationOccupyGrids(const FVector& InPlantLocation,TArray<FGridPosition>& OutOccupyGrids);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 计算种植位置会占据的格子

---
