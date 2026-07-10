# `class` `AWorldArea`

**源码头文件:** `EastRimWorld/WorldSystem/WorldArea.h`

---

## 功能说明（来自头文件注释）

> World Area Actor 类型。

## 蓝图暴露变量

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**说明:**

> Scene Component 字段。

---

### 属性 `WorldAreaInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldAreaInfo](WorldStruct__FWorldAreaInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldAreaInfo WorldAreaInfo;` |

**说明:**

> 区域信息

---

### 属性 `WorldPlaces`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) TArray<FGuid> WorldPlaces;` |

**说明:**

> 所在区域的地点

---

### 属性 `bRevealFog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) bool bRevealFog = false;` |

**说明:**

> 是否已经消除迷雾

---

### 属性 `AreaID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame) FName AreaID;` |

**说明:**

> 区域ID

---

## 蓝图暴露函数

### 函数 `UnlockAreaFog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockAreaFog();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Unlock Area Fog 字段。

---

### 函数 `AddWorldAreaExplorationDegree`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddExplorationDegree` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddWorldAreaExplorationDegree(float AddExplorationDegree);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加区域探索度

---

### 函数 `RevealAreaFog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RevealAreaFog();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 消除区域迷雾

---
