# `class` `AGWOGeneralAccess`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOGeneralAccess.h`

---

## 功能说明（来自头文件注释）

> GWO全局访问Actor：统一注册管理玩家、GWO组件与生成器，并维护GWO世界时间

## 蓝图暴露变量

### 属性 `sectorsDirector`

| 项目 | 内容 |
|------|------|
| C++ 类型 | class [AGWOSectorsDirector](GWOSectorsDirector__AGWOSectorsDirector.md) * |
| 反射说明符 | BlueprintReadOnly, Category="Sectors" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Sectors") class AGWOSectorsDirector *sectorsDirector = nullptr;` |

**说明:**

> 分区管理器（AGWOSectorsDirector）引用

---

### 属性 `playersArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") TArray<AActor*> playersArr;` |

**说明:**

> 检测的对象

---

### 属性 `actorsCompArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<class [UGWOActorComponent](GWOActorComponent__UGWOActorComponent.md)*> |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") TArray<class UGWOActorComponent*> actorsCompArr;` |

**说明:**

> 已注册的GWO Actor组件数组

---

### 属性 `spawnersArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<class [AGWOSpawner](GWOSpawner__AGWOSpawner.md)*> |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") TArray<class AGWOSpawner*> spawnersArr;` |

**说明:**

> 生成器

---

## 蓝图暴露函数

### 函数 `UpdateTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Spawner Parameters" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `setHours` | `int` |
| `setMinutes` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Spawner Parameters") void UpdateTime(int setHours, int setMinutes);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置GWO世界时间（小时与分钟）

---
