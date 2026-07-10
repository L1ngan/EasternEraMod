# `struct` `FForceFavorabilityRow`

**源码头文件:** `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

---

## 功能说明（来自头文件注释）

> 势力初始好感度行 — 对应 DT_ForceFavorabilityInit.csv (B2, ~50 行)
> 列结构: Name(主键), ForceA, ForceB, InitFavorability(int), Reason
> 描述游戏初始化时两个势力之间预设的好感值.

## 蓝图暴露变量

### 属性 `ForceA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Favorability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") FName ForceA = NAME_None;` |

**说明:**

> 势力 A 的 ID (e.g. NPC_Sect2)

---

### 属性 `ForceB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Favorability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") FName ForceB = NAME_None;` |

**说明:**

> 势力 B 的 ID (e.g. NPC_Sect5)

---

### 属性 `InitFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Favorability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") int32 InitFavorability = 0;` |

**说明:**

> 初始好感值 (范围 -100 ~ 100)

---

### 属性 `Reason`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Favorability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") FText Reason;` |

**说明:**

> 好感预设原因说明 (e.g. 武当达摩并称南尊北崇道佛双峰盟好百年)

---
