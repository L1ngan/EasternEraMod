# `struct` `FMartialArtsSaveHandle`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 学习武学后保存的信息

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName Name;` |

**说明:**

> 武学名称

---

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Level = 0;` |

**说明:**

> 武学等级

---

### 属性 `SpecHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FActiveGameplayEffectHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FActiveGameplayEffectHandle SpecHandle;` |

**说明:**

> GE句柄

---
