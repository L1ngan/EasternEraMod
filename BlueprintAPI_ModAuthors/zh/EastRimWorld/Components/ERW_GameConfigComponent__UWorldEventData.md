# `class` `UWorldEventData`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 世界事件数据配置资产,包含世界事件各配置表、事件分组、固化槽设置与开关

## 蓝图暴露变量

### 属性 `WorldEventDetailTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UDataTable*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* WorldEventDetailTable = nullptr;` |

**说明:**

> 世界事件详细信息配置表

---

### 属性 `WorldEventInfoTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UDataTable*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* WorldEventInfoTable = nullptr;` |

**说明:**

> 世界事件信息配置表

---

### 属性 `WorldEventSpawnConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UDataTable*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* WorldEventSpawnConfig = nullptr;` |

**说明:**

> 世界事件生成配置表

---

### 属性 `UnlockedPauseSlotInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UDataTable*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UDataTable* UnlockedPauseSlotInfo = nullptr;` |

**说明:**

> 解锁固化槽的信息

---

### 属性 `WorldEventGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,int>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,int> WorldEventGroup;` |

**说明:**

> 世界事件分组 0 为无限制

---

### 属性 `bOpenWorldEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bOpenWorldEvent = false;` |

**说明:**

> 是否开启世界事件

---

### 属性 `MaxPauseSlotNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int MaxPauseSlotNumber = 3;` |

**说明:**

> 最大的固化槽数量

---
