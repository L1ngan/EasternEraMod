# `class` `AGOAP_ActorBase`

**源码头文件：** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> GOAP Actor的基类

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame,EditAnywhere) FGuid SGUID = FGuid();` |

**源码注释：**

> ----------------------------- SaveGame -----------------------------

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

**源码注释：**

> ----------------------------- SaveGame -----------------------------

---

### 属性 `GameMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_GameModeBase> GameMode;` |

---

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `USceneComponent*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere , BlueprintReadOnly) USceneComponent* SceneComponent { nullptr };` |

**源码注释：**

> 根组件

---

### 属性 `HISMManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_HISMManager](../Components/ERW_HISMManager__UERW_HISMManager.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UERW_HISMManager* HISMManager { nullptr };` |

**源码注释：**

> HISMManager

---

### 属性 `ConstructionComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_ConstructionComponent](../Components/ERW_ConstructionComponent__UERW_ConstructionComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_ConstructionComponent* ConstructionComponent { nullptr };` |

**源码注释：**

> 建造组件

---

### 属性 `GOAP_ActionComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_ActionComponent](GOAP_ActionComponent__UGOAP_ActionComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_ActionComponent* GOAP_ActionComponent { nullptr };` |

**源码注释：**

> GOAP行动组件

---

### 属性 `GOAP_MemoryComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_MemoryComponent](GOAP_MemoryComponent__UGOAP_MemoryComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_MemoryComponent* GOAP_MemoryComponent { nullptr };` |

**源码注释：**

> GOAP记忆组件

---

### 属性 `DoorCollisionComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_DoorCollisionComponent](../Components/ERW_DoorCollisionComponent__UERW_DoorCollisionComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_DoorCollisionComponent* DoorCollisionComponent { nullptr };` |

**源码注释：**

> 门碰撞管理组件

---

### 属性 `SmartObjectComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `USmartObjectComponent*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) USmartObjectComponent* SmartObjectComponent { nullptr };` |

**源码注释：**

> 智能对象组件

---

### 属性 `ObjectID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) FName ObjectID;` |

**源码注释：**

> 物体的ID

---

### 属性 `Selected`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool Selected { false };` |

**源码注释：**

> 是否选中

---

### 属性 `Hovered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool Hovered { false };` |

**源码注释：**

> 是否被鼠标指中

---

### 属性 `IsInMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsInMap { false };` |

**源码注释：**

> 是否放置在地图中

---

### 属性 `IsDestroyed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsDestroyed { false };` |

**源码注释：**

> 是否销毁

---

### 属性 `bBuildComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) bool bBuildComplete = false;` |

**源码注释：**

> 是否建造完成

---

### 属性 `SlotHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSmartObjectSlotHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FSmartObjectSlotHandle SlotHandle;` |

**源码注释：**

> 选中的智能对象插槽

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,VisibleAnywhere) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释：**

> 相关按钮的状态 是否选中

---

### 属性 `InventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**源码注释：**

> 库存组件 当此actor可以储存物品时生成

---

### 属性 `FabricateActorComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UFabricateActorComponent](../Components/FabricateActorComponent__UFabricateActorComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UFabricateActorComponent> FabricateActorComponent;` |

**源码注释：**

> 制造组件 当此actor可制造物品时生成

---

### 属性 `TreasureComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UTreasureComponent](../Components/TreasureComponent__UTreasureComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UTreasureComponent> TreasureComponent;` |

**源码注释：**

> 珍宝阁组件 当此actor是珍宝阁时生成

---

## 蓝图暴露函数

### 函数 `GetFuelData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FuelData` | [FFuelData](GOAP_ActorBase__FFuelData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetFuelData(FFuelData& FuelData) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetEnergyData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnergyData` | [FEnergyData](GOAP_ActorBase__FEnergyData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetEnergyData(FEnergyData& EnergyData) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetCeremonyData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CeremonyData` | [FCeremonyData](GOAP_ActorBase__FCeremonyData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetCeremonyData(FCeremonyData& CeremonyData) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetPuppetData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetData` | [FPuppetData](GOAP_ActorBase__FPuppetData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetPuppetData(FPuppetData& PuppetData) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetFacilityBelongData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FacilityBelongData` | TArray<[FFacilityBelongData](GOAP_ActorBase__FFacilityBelongData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetFacilityBelongData(TArray<FFacilityBelongData>& FacilityBelongData) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetAutoOutputWorkloadTimerID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int32 GetAutoOutputWorkloadTimerID() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetEnvironSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironSaveData` | `FEnvironSaveData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetEnvironSaveData(FEnvironSaveData& EnvironSaveData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetHeatSourceData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `HeatSourceData` | [FHeatSourceData](GOAP_ActorBase__FHeatSourceData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHeatSourceData(FHeatSourceData& HeatSourceData);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `NeedSaveObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintNativeEvent |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent) bool NeedSaveObject() const;`

**用法说明：** **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

---

### 函数 `GetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGenericTeamId` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> ~IEastRimWorldTeamAgentInterface interface

---

### 函数 `SetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTeamID` | `const FGenericTeamId&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OnLoadFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnLoadFinished();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 加载完成

---

### 函数 `UpdateFillersOnLoading`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateFillersOnLoading();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 读档时重新更新填充模型

---

### 函数 `SetHISMManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetHISMManager();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 设置HISMManager

---

### 函数 `InitBuildObjectInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RotateOrientation` | `ERotateOrientation` |
| `BuildID` | `const FName&` |
| `TeamId` | `const FGenericTeamId&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void InitBuildObjectInfo(ERotateOrientation RotateOrientation , const FName& BuildID , const FGenericTeamId& TeamId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 初始化建筑信息

---

### 函数 `CreateConstructionComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateConstructionComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建建造组件

---

### 函数 `DestroyConstructionComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void DestroyConstructionComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 销毁建造组件

---

### 函数 `OnActorDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void OnActorDestroy();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 当Actor销毁时

---

### 函数 `SetNearestSlotHandle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetNearestSlotHandle(AEastRimWorldAIController* Agent , const FGameplayTag& Tag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置最近的智能对象槽位

---

### 函数 `OnAddConstructionResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnAddConstructionResource(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 当有人来放置建造资源时

---

### 函数 `GetGoalID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) void GetGoalID(FName& GoalID) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `InitInventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `EInventoryItemSetType InInventoryItemSetType = EInventoryItemSetType::Warehouse` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitInventoryManagerComponent(EInventoryItemSetType InInventoryItemSetType = EInventoryItemSetType::Warehouse);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当建筑物是仓库类型时初始化库存组件

---

### 函数 `InitFabricateActorComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void InitFabricateActorComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当建筑物为制造建筑物时初始化制造组件

---

### 函数 `InitTreasureComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void InitTreasureComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当建筑物为珍宝阁时初始化珍宝阁组件

---

### 函数 `GetBuildOpenWidgetID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `FName` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent ,BlueprintPure) FName GetBuildOpenWidgetID() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获取建造物品点击后创建的界面id

---

### 函数 `GetBuildingName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual FText GetBuildingName(){return K2_GetBuildingName();}`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取建造物品的名字

---

### 函数 `K2_GetBuildingName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="GetBuildingName") FText K2_GetBuildingName();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `CreateDoorCollisionComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateDoorCollisionComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建门碰撞管理组件

---

### 函数 `RecoverDoorCollision`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SaveData` | `const FDoorCollisionSaveData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void RecoverDoorCollision(const FDoorCollisionSaveData& SaveData);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 读档恢复门碰撞

---

### 函数 `GetDoorAnimPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) float GetDoorAnimPosition() const;`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获得门动画播放位置

---

### 函数 `OnNativeBuildingComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | const [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md) &BuildConfigData |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void OnNativeBuildingComplete(const FBuildConfigData &BuildConfigData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 建筑物建造成功

---

### 函数 `OnNativeInitConstruction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildConfigData` | const [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void OnNativeInitConstruction(const FBuildConfigData& BuildConfigData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetBuildObjectInstanceVisible`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bVisible` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetBuildObjectInstanceVisible(bool bVisible);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 隐藏建筑物模型

---

### 函数 `K2_SetBuildObjectInstanceVisible`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bVisible` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="SetBuildObjectInstanceVisible") void K2_SetBuildObjectInstanceVisible(bool bVisible);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `DestoryBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void DestoryBuilding();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 拆除建筑

---

### 函数 `ChangeBuildingDurability`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChangeValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void ChangeBuildingDurability(float ChangeValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 改变建筑物耐久度

---

### 函数 `AttackBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDamage` | `float` |
| `AttackActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void AttackBuilding(float InDamage,AActor * AttackActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 攻击建筑物

---

### 函数 `SetBuildingRunState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RunState` | `EBuildingRunState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void SetBuildingRunState(EBuildingRunState RunState);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置建筑物状态

---

### 函数 `SetBuildingEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnabledState` | `EBuildingEnableState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void SetBuildingEnabled(EBuildingEnableState EnabledState);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置建筑物开启或者关闭

---

### 函数 `UpdateOutlineShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FromHovering` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateOutlineShow(bool FromHovering);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 显示或隐藏描边

---

### 函数 `CanUseLineTraceResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Result` | `const FHitResult&` |
| `Location` | `FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool CanUseLineTraceResult(const FHitResult& Result , FVector& Location) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 能否使用射线检测结果

---

### 函数 `InitFacilityBelongData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Num` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitFacilityBelongData(int32 Num);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化设施归属数据

---

### 函数 `SetFacilityBelongData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Index` | `int32` |
| `BelongState` | `EFacilityBelongState` |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetFacilityBelongData(int32 Index , EFacilityBelongState BelongState , AEastRimWorldAIController* Agent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置设施归属数据

---

### 函数 `PopupInfoUIChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PopupInfoUIChanged(const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 弹出UI信息改变

---

### 函数 `SetAutoFabricateTimerID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetAutoFabricateTimerID(int32 TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置自动制造计时器ID

---

### 函数 `UnregisterAutoFabricateTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterAutoFabricateTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注销自动制造计时器

---

### 函数 `SetRoofPartType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RoofPartType` | `ERoofPartType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetRoofPartType(ERoofPartType RoofPartType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 设置屋顶部位类型

---

### 函数 `SwitchRoofShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Show` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SwitchRoofShow(bool Show);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 切换屋顶显示

---

### 函数 `TryAddTransportAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void TryAddTransportAction();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 尝试添加搬运Action

---

### 函数 `RemoveTransportAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void RemoveTransportAction();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 移除搬运Action

---

### 函数 `GetActionCostChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetActionCostChange(FName ActionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取行为在这个建筑物上的消耗变化

---

### 函数 `SetStoragePriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewStoragePriority` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetStoragePriority(int32 NewStoragePriority);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置新的优先级

---

### 函数 `GetModelHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) float GetModelHeight() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获得模型高度

---

### 函数 `GetWallPillarParam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) int32 GetWallPillarParam() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获得墙接缝柱配置参数

---

### 函数 `UpdateWallRotation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DistributionTypes` | `const TArray<EGridDistributionType>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateWallRotation(const TArray<EGridDistributionType>& DistributionTypes);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 更新墙的旋转朝向

---

### 函数 `GetRealTargetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintNativeEvent |
| 返回类型 | [AGOAP_ActorBase](GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintPure) AGOAP_ActorBase* GetRealTargetActor();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 获得真正的目标Actor

---

### 函数 `CreateBeginnerGuideBillboard`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CreateBeginnerGuideBillboard();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 创建新手引导指引箭头

---

### 函数 `DestroyBeginnerGuideBillboard`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChangeActor` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void DestroyBeginnerGuideBillboard(bool ChangeActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 销毁新手引导指引箭头

---

### 函数 `UpdateEntranceArrow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ShowState` | `EEntranceArrowState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateEntranceArrow(EEntranceArrowState ShowState);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 更新建筑入口箭头

---

### 函数 `GetBuildingGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPoses` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetBuildingGridPoses(TArray<FGridPosition>& GridPoses);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得建筑的格子

---

### 函数 `AddStairInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Height` | `float` |
| `IsFlat` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void AddStairInstance(const FGridPosition& GridPos , float Height , bool IsFlat);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 加入阶梯的模型

---
