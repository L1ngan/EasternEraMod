# `struct` `FStrongholdRow`

**源码头文件:** `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

---

## 功能说明（来自头文件注释）

> 据点配置行 — 对应 DT_StrongholdConfig.csv (B2, ~11 行)
> 列结构: Name(主键), DisplayName, GeoLocation, MainPurpose1/2/3, Population, Alignment
> 描述武林重要据点 (门派山门/城市) 的地理位置与主要用途.

## 蓝图暴露变量

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText DisplayName;` |

**说明:**

> 据点显示名 (e.g. 武当派)

---

### 属性 `GeoLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText GeoLocation;` |

**说明:**

> 地理位置描述 (e.g. 中原Spine正中)

---

### 属性 `MainPurpose1`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText MainPurpose1;` |

**说明:**

> 主要用途 1 (策划文案)

---

### 属性 `MainPurpose2`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText MainPurpose2;` |

**说明:**

> 主要用途 2 (策划文案)

---

### 属性 `MainPurpose3`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText MainPurpose3;` |

**说明:**

> 主要用途 3 (策划文案)

---

### 属性 `Population`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") int32 Population = 0;` |

**说明:**

> 据点人口数量

---

### 属性 `Alignment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Stronghold" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FName Alignment = NAME_None;` |

**说明:**

> 阵营归属 (e.g. 正派 / 邪派 / 中立)

---
