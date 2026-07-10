# `struct` `FMijiMoveVM`

**源码头文件:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## 功能说明（来自头文件注释）

> 秘籍招式视图模型

## 蓝图暴露变量

### 属性 `MoveID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName MoveID;` |

**说明:**

> 招式ID（关联 GameAbilityStruct，源自 FMartialArtsBookData::GiveAbility）

---

### 属性 `MoveName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MoveName;` |

**说明:**

> 招式名称（来自 FGameAbilityStruct::SkillName）

---

### 属性 `MoveDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MoveDesc;` |

**说明:**

> 招式介绍（来自 FGameAbilityStruct::SkillDescribe）

---

### 属性 `RealmReq`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 RealmReq = 0;` |

**说明:**

> 需要的境界等级

---

### 属性 `bOwned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") bool bOwned = false;` |

**说明:**

> 玩家是否已掌握

---
