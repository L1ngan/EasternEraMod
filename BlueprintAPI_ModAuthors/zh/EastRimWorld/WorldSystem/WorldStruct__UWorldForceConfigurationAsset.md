# `class` `UWorldForceConfigurationAsset`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> World Force Configuration Asset UObject 类型。

## 蓝图暴露变量

### 属性 `FirstBuildReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,float> FirstBuildReputation;` |

**说明:**

> 首次建造指定的建筑可获得声望

---

### 属性 `RecruitReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitReputation = 0.f;` |

**说明:**

> 玩家招募强力角色获得声望

---

### 属性 `MaxForceJusticeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxForceJusticeValue = 10000.f;` |

**说明:**

> 势力正邪值上限

---

### 属性 `MinForceJusticeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MinForceJusticeValue = -10000.f;` |

**说明:**

> 势力正邪值下限

---

### 属性 `BuryCorpseJusticeChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float BuryCorpseJusticeChange = 0.f;` |

**说明:**

> 埋葬尸体正邪变化

---

### 属性 `RotCorpseJusticeChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RotCorpseJusticeChange = 0.f;` |

**说明:**

> 尸体腐烂正邪变化

---

### 属性 `NPCvsNPCVictoryRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float NPCvsNPCVictoryRatio = 1.f;` |

**说明:**

> NPC攻击NPC时胜负计算公式的系数

---

### 属性 `MinFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MinFavorability = -1200.f;` |

**说明:**

> 好感度下限

---

### 属性 `MaxFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MaxFavorability = 1200.f;` |

**说明:**

> 好感度上限

---

### 属性 `ForceInitFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FForceInitFavorability](WorldStruct__FForceInitFavorability.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FForceInitFavorability> ForceInitFavorability;` |

**说明:**

> 势力间初始好感度

---
