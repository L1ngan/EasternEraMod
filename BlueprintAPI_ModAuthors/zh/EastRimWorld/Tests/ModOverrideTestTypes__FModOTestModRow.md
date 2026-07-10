# `struct` `FModOTestModRow`

**源码头文件:** `EastRimWorld/Tests/ModOverrideTestTypes.h`

---

## 功能说明（来自头文件注释）

> Mod O Test Mod Row 数据结构。

## 蓝图暴露变量

### 属性 `TemplateID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName TemplateID;` |

**说明:**

> Template ID 字段。

---

### 属性 `Color`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EModOTestModColor Color = EModOTestModColor::Red;` |

**说明:**

> Color 字段。

---

### 属性 `ColorList`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<EModOTestModColor> ColorList;` |

**说明:**

> Color List 字段。

---

### 属性 `ColorScores`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md), int32> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TMap<EModOTestModColor, int32> ColorScores;` |

**说明:**

> Color Scores 字段。

---

### 属性 `ColorItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md), [FModOTestModItem](ModOverrideTestTypes__FModOTestModItem.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TMap<EModOTestModColor, FModOTestModItem> ColorItems;` |

**说明:**

> Color Items 字段。

---

### 属性 `Items`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModOTestModItem](ModOverrideTestTypes__FModOTestModItem.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FModOTestModItem> Items;` |

**说明:**

> Items 字段。

---
