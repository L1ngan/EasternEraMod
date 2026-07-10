# `class` `AWorldMapWayPoint`

**源码头文件:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapWayPoint.h`

---

## 功能说明（来自头文件注释）

> World Map Way Point Actor 类型。

## 蓝图暴露变量

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadWrite, Category="Waypoint" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY( BlueprintReadWrite, Category="Waypoint") TObjectPtr<USceneComponent> SceneComponent;` |

**说明:**

> Scene Component 字段。

---

### 属性 `SelectLinkWaypoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*> |
| 反射说明符 | BlueprintReadWrite, Category="Waypoint" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Waypoint") TArray<AWorldMapWayPoint*> SelectLinkWaypoints;` |

**说明:**

> 选择的点位

---

### 属性 `LinkWaypoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*> |
| 反射说明符 | BlueprintReadOnly, Category="Waypoint" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="Waypoint") TArray<AWorldMapWayPoint*> LinkWaypoints;` |

**说明:**

> 可以到达的下一个路点

---

## 蓝图暴露函数

### 函数 `UpdateAllActorSplines`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Waypoint" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,CallInEditor,Category="Waypoint") void UpdateAllActorSplines();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 仅在编辑器模式下更新样条线

---

### 函数 `LinkShortestDistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Waypoint" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,CallInEditor,Category="Waypoint") void LinkShortestDistance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 仅在编辑器模式下更新样条线

---
