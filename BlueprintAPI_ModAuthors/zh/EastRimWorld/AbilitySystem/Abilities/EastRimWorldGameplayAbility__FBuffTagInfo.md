# `struct` `FBuffTagInfo`

**源码头文件:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

## 功能说明（来自头文件注释）

> Buff标签信息配置：唯一Tag、图标、名称与描述

## 蓝图暴露变量

### 属性 `BuffTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag BuffTag;` |

**说明:**

> Buff的唯一Tag

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;` |

**说明:**

> Buff的图标

---

### 属性 `BuffName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuffName;` |

**说明:**

> Buff名称

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;` |

**说明:**

> 描述

---
