# `struct` `FSteamAchievementInfo`

**源码头文件:** `EastRimWorld/Mod/SteamAchievementLibrary.h`

---

## 功能说明（来自头文件注释）

> 成就信息结构体

## 蓝图暴露变量

### 属性 `AchievementName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Achievement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") FString AchievementName;` |

**说明:**

> 成就名称（API名称）

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Achievement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") FString DisplayName;` |

**说明:**

> 成就显示名称

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Achievement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") FString Description;` |

**说明:**

> 成就描述

---

### 属性 `bUnlocked`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Achievement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") bool bUnlocked = false;` |

**说明:**

> 是否已解锁

---

### 属性 `UnlockTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Achievement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Achievement") int32 UnlockTime = 0;` |

**说明:**

> 解锁时间戳（Unix时间戳，如果未解锁则为0）

---
