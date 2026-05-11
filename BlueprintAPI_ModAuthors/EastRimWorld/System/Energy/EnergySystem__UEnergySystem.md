# `class` `UEnergySystem`

**源码头文件：** `EastRimWorld/System/Energy/EnergySystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnUpdateEnergyGridData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateEnergyGridDataDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateEnergyGridDataDelegate OnUpdateEnergyGridData;` |

---

## 蓝图暴露函数

### 函数 `GetInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EnergySystem" |
| 返回类型 | `UEnergySystem *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "EnergySystem") static UEnergySystem * GetInstance();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `SelectAllConsistentBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnergyGridGuid` | `FGuid` |
| `EnergyType` | `EEnergyType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SelectAllConsistentBuilding(FGuid EnergyGridGuid , EEnergyType EnergyType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据传入类型选中能量网中所有对应建筑

---

### 函数 `FindConnectedTransmissionBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuilding` | `ABuildingActorBase *` |
| `IgnoreBuilding` | `ABuildingActorBase *` |
| `OutBuildings` | `TArray<ABuildingActorBase*> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void FindConnectedTransmissionBuilding(ABuildingActorBase * InBuilding,ABuildingActorBase * IgnoreBuilding,TArray<ABuildingActorBase*> & OutBuildings);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
