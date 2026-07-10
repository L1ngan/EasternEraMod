# `struct` `FWorkScheduleUIConfigData`

**源码头文件:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## 功能说明（来自头文件注释）

> 工作日程UI配置结构

## 蓝图暴露变量

### 属性 `WorkScheduleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorkScheduleType](UIStruct__EWorkScheduleType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EWorkScheduleType WorkScheduleType { EWorkScheduleType::None };` |

**说明:**

> 工作日程类型

---

### 属性 `ScheduleScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 ScheduleScore { 0 };` |

**说明:**

> 工作日程对应的分值

---

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Name;` |

**说明:**

> 显示名称

---

### 属性 `BgTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> BgTexture;` |

**说明:**

> 背景图片

---

### 属性 `SelectedBgTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> SelectedBgTexture;` |

**说明:**

> 选中的背景图片

---

### 属性 `BlockTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> BlockTexture;` |

**说明:**

> 对应的方块图片

---
