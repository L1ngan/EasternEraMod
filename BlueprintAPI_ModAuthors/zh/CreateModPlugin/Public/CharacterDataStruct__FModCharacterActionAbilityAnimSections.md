# `struct` `FModCharacterActionAbilityAnimSections`

**源码头文件:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## 功能说明（来自头文件注释）

> 角色行为能力的动画蒙太奇片段配置（开始/循环/结束片段名，可按性别区分）

## 蓝图暴露变量

### 属性 `BehaviorStartSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorStartSections;` |

**说明:**

> 开始的动画蒙太奇片段名字

---

### 属性 `BehaviorLoopSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorLoopSections;` |

**说明:**

> 循环动画蒙太奇片段名字

---

### 属性 `BehaviorEndSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TArray<FName> BehaviorEndSections;` |

**说明:**

> 结束动画蒙太奇片段名字

---

### 属性 `bDistinguishSex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bDistinguishSex = false;` |

**说明:**

> 区分性别

---

### 属性 `WomanBehaviorStartSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorStartSections;` |

**说明:**

> 开始的动画蒙太奇片段名字

---

### 属性 `WomanBehaviorLoopSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorLoopSections;` |

**说明:**

> 循环动画蒙太奇片段名字

---

### 属性 `WomanBehaviorEndSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bDistinguishSex")) TArray<FName> WomanBehaviorEndSections;` |

**说明:**

> 结束动画蒙太奇片段名字

---
