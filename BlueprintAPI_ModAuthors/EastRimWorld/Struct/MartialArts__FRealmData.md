# `struct` `FRealmData`

**源码头文件：** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 境界数据

## 蓝图暴露变量

### 属性 `LevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FText LevelName;` |

**源码注释：**

> 等级名字

---

### 属性 `MartialArtsScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") int MartialArtsScore = 0;` |

**源码注释：**

> 所需的武学分数

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") int RealmLevel = 0;` |

**源码注释：**

> 境界等级

---

### 属性 `Characteristic`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") TArray<FName> Characteristic;` |

**源码注释：**

> 包含的特性

---

### 属性 `SlotNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EMartialArtsMajorCategories,int>` |
| 反射说明符 | BlueprintReadWrite, Category="Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") TMap<EMartialArtsMajorCategories,int> SlotNumber;` |

**源码注释：**

> 携带的插槽数量

---

### 属性 `AddReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Force" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Force") float AddReputation = 0.f;` |

**源码注释：**

> 增加所属势力声望

---

### 属性 `AddGrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Force" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Force") float AddGrowScore = 0.f;` |

**源码注释：**

> 提供给NPC势力的成长积分

---

### 属性 `bBreakThrough`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Force" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Force") bool bBreakThrough = false;` |

**源码注释：**

> 是否需要突破

---
