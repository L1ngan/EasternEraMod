# `struct` `FEnergyGridData`

**源码头文件：** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 能源相关信息

## 蓝图暴露变量

### 属性 `GridGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid GridGuid;` |

**源码注释：**

> 能源网唯一ID

---

### 属性 `TransmissionBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> TransmissionBuildings;` |

**源码注释：**

> 传输建筑物

---

### 属性 `EnergyStorageBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> EnergyStorageBuildings;` |

**源码注释：**

> 储能建筑物

---

### 属性 `ConsumeBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> ConsumeBuildings;` |

**源码注释：**

> 消耗建筑物

---

### 属性 `ControlBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> ControlBuildings;` |

**源码注释：**

> 控制建筑物

---

### 属性 `GenerateEnergyBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> GenerateEnergyBuildings;` |

**源码注释：**

> 产生能源建筑物

---

### 属性 `EnergyGridState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEnergyGridState` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EEnergyGridState EnergyGridState = EEnergyGridState::Ununited;` |

**源码注释：**

> 能源网的状态

---

### 属性 `MaxEnergyStorage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MaxEnergyStorage = 0.f;` |

**源码注释：**

> 能源网的总储能

---

### 属性 `CurEnergyStorage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float CurEnergyStorage = 0.f;` |

**源码注释：**

> 能源网的当前储能

---

### 属性 `GenerateEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float GenerateEnergy = 0.f;` |

**源码注释：**

> 生产能源

---

### 属性 `ConsumeEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float ConsumeEnergy = 0.f;` |

**源码注释：**

> 消耗能源

---
