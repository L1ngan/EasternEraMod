# `struct` `FWorldPlaceSpecialEffectConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 地点特殊效果配置（对应数据表行）；参数直接写在配置中，按效果类型使用对应字段即可

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") FText Name;` |

**源码注释:**

> 显示名称

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") FText Description;` |

**源码注释:**

> 说明

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") TSoftObjectPtr<UTexture2D> Icon;` |

**源码注释:**

> 图标

---

### 属性 `EffectType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWorldPlaceSpecialEffectType` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") EWorldPlaceSpecialEffectType EffectType = EWorldPlaceSpecialEffectType::None;` |

**源码注释:**

> 效果类型

---

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base", meta = (DisplayName = "阵营ID", ClampMin = "0", ClampMax = "255")) int32 TeamId = 255;` |

**源码注释:**

> 阵营 ID；仅对「添加阵营全局 Buff」等阵营相关效果有效。255 表示所有阵营，其他值表示指定阵营

---

### 属性 `IdParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Params" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Params", meta = (DisplayName = "ID 参数")) TArray<FName> IdParams;` |

**源码注释:**

> ID 类参数（如阵营全局 Buff 的 BuffId，可配置多个）

---

### 属性 `NumericParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly, Category="Params" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Params", meta = (DisplayName = "数值参数")) TArray<float> NumericParams;` |

**源码注释:**

> 数值类参数（如倍率、加成百分比、减免百分比等，可配置多个时按效果类型约定顺序使用）

---
