# `struct` `FForceFavorabilityConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力好感度配置

## 蓝图暴露变量

### 属性 `ForceFavorabilityType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EForceFavorabilityType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceFavorabilityType ForceFavorabilityType = EForceFavorabilityType::Bland;` |

**源码注释:**

> 好感度类型

---

### 属性 `FavorabilityMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FavorabilityMin = 0.f;` |

**源码注释:**

> 区间最小值

---

### 属性 `FavorabilityMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FavorabilityMax = 0.f;` |

**源码注释:**

> 区间最大值

---

### 属性 `FavoriteName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText FavoriteName;` |

**源码注释:**

> 好感名称

---
