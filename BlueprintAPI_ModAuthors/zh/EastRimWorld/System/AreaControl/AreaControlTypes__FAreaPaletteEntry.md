# `struct` `FAreaPaletteEntry`

**源码头文件:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## 功能说明（来自头文件注释）

> 调色板单项（默认 12 槽，色值待美术填，R8）。

## 蓝图暴露变量

### 属性 `ColorName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ColorName;` |

**说明:**

> 颜色名（UI 显示/查找）

---

### 属性 `Color`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor Color = FColor::White;` |

**说明:**

> 颜色值

---
