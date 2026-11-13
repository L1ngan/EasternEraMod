# `struct` `FModCustomizationParamConfig`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## 功能说明（来自头文件注释）

> 开放给 Mod 的捏脸滑条（照官方宗门时装界面的滑条配置）

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

**说明:**

> 滑条 ID，Mod 用它读写

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;` |

---

### 属性 `Category`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName Category;` |

**说明:**

> 分组，如 Body / Face / Eyes / Skin

---

### 属性 `MinValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinValue = 0.f;` |

---

### 属性 `MaxValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxValue = 1.f;` |

---

### 属性 `DefaultValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float DefaultValue = 0.f;` |

---

### 属性 `Targets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModCustomizationParamTarget](ModCharacterLayerTypes__FModCustomizationParamTarget.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FModCustomizationParamTarget> Targets;` |

**说明:**

> 一个滑条可同时改多个参数（如年龄同时改动画混合、形变和皮肤）；读值取第一个

---
