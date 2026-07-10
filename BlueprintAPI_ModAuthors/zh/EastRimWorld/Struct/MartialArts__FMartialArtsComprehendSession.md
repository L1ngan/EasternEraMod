# `struct` `FMartialArtsComprehendSession`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 当前的参悟会话（瞬态，不存档；确认/取消后清空）

## 蓝图暴露变量

### 属性 `bActive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") bool bActive = false;` |

**说明:**

> 是否有进行中的参悟会话

---

### 属性 `MartialArtsLearnDataMapKey`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") FName MartialArtsLearnDataMapKey;` |

**说明:**

> 本次参悟的武学（MartialArtsLearnData 的 TMap 键）

---

### 属性 `Slots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMartialArtsComprehendSlot](MartialArts__FMartialArtsComprehendSlot.md)> |
| 反射说明符 | BlueprintReadOnly, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") TArray<FMartialArtsComprehendSlot> Slots;` |

**说明:**

> 每个词条槽位的前后对比

---
