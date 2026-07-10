# `struct` `FForceFavorabilityInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力好感信息

## 蓝图暴露变量

### 属性 `Guid1`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid1;` |

**说明:**

> Guid 1 字段。

---

### 属性 `Guid2`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid2;` |

**说明:**

> Guid 2 字段。

---

### 属性 `ForceFavorabilityType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceFavorabilityType](WorldStruct__EForceFavorabilityType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) EForceFavorabilityType ForceFavorabilityType = EForceFavorabilityType::Neutrality;` |

**说明:**

> Force Favorability Type 字段。

---

### 属性 `Favorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) float Favorability = 0.f;` |

**说明:**

> 当前好感度

---

### 属性 `OldFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) float OldFavorability = 0.f;` |

**说明:**

> 变化之前的好感度

---
