# `struct` `FMartialArtsComprehendSlot`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 单个词条槽位的参悟预览（参悟前 vs 参悟后）

## 蓝图暴露变量

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") int32 Level = 0;` |

**说明:**

> 槽位对应的武学等级

---

### 属性 `OldEntryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") FName OldEntryId;` |

**说明:**

> 参悟前的词条 RowName

---

### 属性 `NewEntryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") FName NewEntryId;` |

**说明:**

> 参悟后新抽的词条 RowName（无可换时回退为 OldEntryId）

---

### 属性 `bRolledBack`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") bool bRolledBack = false;` |

**说明:**

> 是否已回溯（true=该槽改用旧词条 OldEntryId）

---
