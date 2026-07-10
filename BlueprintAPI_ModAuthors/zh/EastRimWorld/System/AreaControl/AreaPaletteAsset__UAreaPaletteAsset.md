# `class` `UAreaPaletteAsset`

**源码头文件:** `EastRimWorld/System/AreaControl/AreaPaletteAsset.h`

---

## 功能说明（来自头文件注释）

> Area Palette Asset UObject 类型。

## 蓝图暴露变量

### 属性 `Palette`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FAreaPaletteEntry](AreaControlTypes__FAreaPaletteEntry.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Area" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Area") TArray<FAreaPaletteEntry> Palette;` |

**说明:**

> 调色板槽位（默认 12 槽，色值待美术填）

---

## 蓝图暴露函数

### 函数 `GetPaletteColors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Area" |
| 返回类型 | `TArray<FColor>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Area") TArray<FColor> GetPaletteColors() const { TArray<FColor> Colors; Colors.Reserve(Palette.Num()); for (const FAreaPaletteEntry& Entry : Palette) { Colors.Add(Entry.Color); } return Colors; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> UI 调色板数据源

---
