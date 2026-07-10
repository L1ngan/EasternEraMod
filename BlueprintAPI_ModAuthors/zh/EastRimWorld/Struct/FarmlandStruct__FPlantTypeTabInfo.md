# `struct` `FPlantTypeTabInfo`

**源码头文件:** `EastRimWorld/Struct/FarmlandStruct.h`

---

## 功能说明（来自头文件注释）

> Plant Type Tab Info 数据结构。

## 蓝图暴露变量

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECollectPlantType](ItemStruct__ECollectPlantType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") ECollectPlantType Type = ECollectPlantType::None;` |

**说明:**

> 种植物类型

---

### 属性 `TypeName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText TypeName;` |

**说明:**

> 种植物类型名称

---

### 属性 `Sort`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 Sort = 0;` |

**说明:**

> 种植物类型UI排序

---
