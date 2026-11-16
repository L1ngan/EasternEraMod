# `struct` `FModSettingDef`

**源码头文件:** `EastRimWorld/Mod/ModInfo.h`

---

## 功能说明（来自头文件注释）

> Mod 在 ModInfo.json 里声明的一个设置项；值的文本形式：bool 为 true/false，int 为整数，float 为小数，enum 为 Options 之一

## 蓝图暴露变量

### 属性 `Key`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString Key;` |

**说明:**

> 设置键（1~64 字符，不能以 __ 开头）

---

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModSettingType](ModInfo__EModSettingType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EModSettingType Type = EModSettingType::Bool;` |

**说明:**

> 值类型

---

### 属性 `Default`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString Default;` |

**说明:**

> 默认值（文本形式，解析时已按类型规整）

---

### 属性 `bHasMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bHasMin = false;` |

**说明:**

> 数值范围（int/float 可选，越界的值截到范围内）

---

### 属性 `Min`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) double Min = 0.0;` |

**说明:**

> 数值下限（越界截取）

---

### 属性 `bHasMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bHasMax = false;` |

**说明:**

> 是否设了上限

---

### 属性 `Max`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) double Max = 0.0;` |

**说明:**

> 数值上限（越界截取）

---

### 属性 `Step`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) double Step = 0.0;` |

**说明:**

> 界面步长（只给设置面板用，不参与校验）

---

### 属性 `Options`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FString> Options;` |

**说明:**

> enum 的可选值

---

### 属性 `NameKey`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString NameKey;` |

**说明:**

> 显示名、说明的字符表键（设置面板用，Mod 自己的字符表；不写死文字）

---

### 属性 `DescKey`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString DescKey;` |

**说明:**

> 说明的字符表键（设置面板用）

---
