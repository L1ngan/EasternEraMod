# `class` `UERW_DoorCollisionComponent`

**源码头文件:** `EastRimWorld/Components/ERW_DoorCollisionComponent.h`

---

## 功能说明（来自头文件注释）

> 门的碰撞管理组件

## 蓝图暴露变量

### 属性 `DoorCollision`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UBoxComponent*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) UBoxComponent* DoorCollision { nullptr };` |

**源码注释:**

> 门的碰撞体

---

### 属性 `DoorState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EDoorState` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EDoorState DoorState { EDoorState::Closed };` |

**源码注释:**

> 门的开关状态

---

### 属性 `OverlappingCharacterNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 OverlappingCharacterNum { 0 };` |

**源码注释:**

> 碰撞体碰到的角色数量

---

### 属性 `AnimPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float AnimPosition { 0.f };` |

**源码注释:**

> 门动画播放位置

---

## 蓝图暴露函数

### 函数 `OnLoadData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SaveData` | const [FDoorCollisionSaveData](ERW_DoorCollisionComponent__FDoorCollisionSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnLoadData(const FDoorCollisionSaveData& SaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 读取数据

---

### 函数 `InitDoorCollision`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Collision` | `UBoxComponent*` |
| `Offset` | `const FVector&` |
| `Extent` | `const FVector&` |
| `CollisionProfileName` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitDoorCollision(UBoxComponent* Collision , const FVector& Offset , const FVector& Extent , const FName& CollisionProfileName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 初始化碰撞体

---

### 函数 `UpdateOverlappingNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Delta` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateOverlappingNum(int32 Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新碰到的角色数量

---

### 函数 `SetDoorState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `State` | `EDoorState` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetDoorState(EDoorState State);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置门的开光状态

---

### 函数 `SetAnimPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Position` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetAnimPosition(float Position);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置门动画播放位置

---
