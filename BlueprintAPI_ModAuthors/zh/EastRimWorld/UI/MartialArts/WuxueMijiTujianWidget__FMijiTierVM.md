# `struct` `FMijiTierVM`

**源码头文件:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## 功能说明（来自头文件注释）

> 秘籍层级（词条）视图模型——对应武学书的一个修炼层（FMartialArtsLevel）

## 蓝图暴露变量

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 Level = 0;` |

**说明:**

> 层级序号（来自 FMartialArtsLevel::Level）

---

### 属性 `LevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText LevelName;` |

**说明:**

> 层级名（如"第一层"，来自 FMartialArtsLevel::LevelName）

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc;` |

**说明:**

> 该层效果描述（来自 FMartialArtsLevel::EntriesDescribe）

---

### 属性 `DescTooltip`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText DescTooltip;` |

**说明:**

> 该层词条池描述（FSkillEntryPoolConfig::PoolDesc，鼠标悬停词条层行时显示；无池/无描述时为空）

---
