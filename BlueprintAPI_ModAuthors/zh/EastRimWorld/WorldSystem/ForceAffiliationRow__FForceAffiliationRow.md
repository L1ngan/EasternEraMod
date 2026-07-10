# `struct` `FForceAffiliationRow`

**源码头文件:** `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

---

## 功能说明（来自头文件注释）

> 派系归属行 — 对应 DT_ForceAffiliation.csv (B1, ~88 行)
> 列结构: Name(主键), DisplayName, MainCityID, Region, Alignment, TerritoryNotes
> 描述每个武林门派/势力所在区域、主城、阵营归属.

## 蓝图暴露变量

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="ForceAffiliation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FText DisplayName;` |

**说明:**

> 势力显示名 (e.g. 武当派)

---

### 属性 `MainCityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ForceAffiliation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FName MainCityID = NAME_None;` |

**说明:**

> 主城 ID, 对应大地图城市数据表 (e.g. AreaCity1_HangZhou)

---

### 属性 `Region`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ForceAffiliation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FName Region = NAME_None;` |

**说明:**

> 所在大区域 (e.g. 江南, 中原, 北方, 西域)

---

### 属性 `Alignment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ForceAffiliation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FName Alignment = NAME_None;` |

**说明:**

> 阵营归属 (e.g. 正派 / 邪派 / 中立)

---

### 属性 `TerritoryNotes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="ForceAffiliation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FText TerritoryNotes;` |

**说明:**

> 领土/背景描述文本 (策划文案, 供 UI tooltip 使用)

---
