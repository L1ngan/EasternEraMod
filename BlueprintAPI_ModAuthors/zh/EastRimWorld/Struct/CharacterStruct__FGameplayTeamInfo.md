# `struct` `FGameplayTeamInfo`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 团队信息

## 蓝图暴露变量

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FGenericTeamId TeamId;` |

**说明:**

> 阵营ID

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, category="Base",meta = (AllowedClasses = "Texture2D")) FSoftObjectPath Icon;` |

**说明:**

> 图标

---

### 属性 `FriendlyTeamIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGenericTeamId>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TArray<FGenericTeamId> FriendlyTeamIds;` |

**说明:**

> 友好阵营 标记为队友 无论对方是否是同阵营 且见面不会主动攻击

---

### 属性 `HostilityTeamIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGenericTeamId>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TArray<FGenericTeamId> HostilityTeamIds;` |

**说明:**

> 敌对阵营 标记为敌人 见面双方会主动攻击

---

### 属性 `NeutralityTeamIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGenericTeamId>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TArray<FGenericTeamId> NeutralityTeamIds;` |

**说明:**

> 中立阵营 标记为中立 不同阵营 见面不会互相攻击

---

### 属性 `GameplayTeamGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGameplayTeamGoals](CharacterStruct__FGameplayTeamGoals.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FGameplayTeamGoals> GameplayTeamGoals;` |

**说明:**

> 不同模式中的goal配置

---

### 属性 `bMarkAttackerToHostility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Attacker") bool bMarkAttackerToHostility = false;` |

**说明:**

> 此个体受到伤害后是否会标记攻击者为敌对(脱离战斗后失效)

---

### 属性 `bNotifyAttackerToFriendly`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Attacker",meta = (EditConditionHides = " bMarkAttackerToHostility == true ")) bool bNotifyAttackerToFriendly = false;` |

**说明:**

> 此阵营个体被攻击是否会通知周围同阵营的其他单位且标记攻击者为敌方(脱离战斗后失效)

---

### 属性 `bMarkAttackerTeamToHostility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Attacker",meta = (EditConditionHides = " bMarkAttackerToHostility == true ")) bool bMarkAttackerTeamToHostility = false;` |

**说明:**

> 此阵营个体被攻击是否标记攻击者阵营为敌方阵营(永久)

---

### 属性 `bOnDamageReportTeam`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") bool bOnDamageReportTeam = false;` |

**说明:**

> 受到攻击是否通知阵营其他单位

---

### 属性 `bOnSightReportTeam`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") bool bOnSightReportTeam = true;` |

**说明:**

> 看到敌人是否通知阵营其他单位

---

### 属性 `NavigationQueryFilter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FSoftClassPath NavigationQueryFilter;` |

**说明:**

> AI导航查询过滤

---
