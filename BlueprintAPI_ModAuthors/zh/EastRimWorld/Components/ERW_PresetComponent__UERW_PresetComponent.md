# `class` `UERW_PresetComponent`

**源码头文件:** `EastRimWorld/Components/ERW_PresetComponent.h`

---

## 功能说明（来自头文件注释）

> 建筑预设组件

## 蓝图暴露变量

### 属性 `BuildID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName BuildID;` |

**说明:**

> 建筑表ID

---

### 属性 `RoofPartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) ERoofPartType RoofPartType;` |

**说明:**

> 屋顶部位类型

---

### 属性 `WallPillarID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName WallPillarID;` |

**说明:**

> 接缝柱对应的墙的ID

---

## 蓝图暴露函数

### 函数 `CalcCenterLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Locations` | `const TArray<FVector>&` |
| `Center` | `FVector&` |
| `Size` | `FIntVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void CalcCenterLocation(const TArray<FVector>& Locations , FVector& Center , FIntVector& Size);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 计算地基中心位置

---
