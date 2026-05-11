# `struct` `FCharacterOrganConfig`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色器官配置

## 蓝图暴露变量

### 属性 `Attribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FGameplayAttribute Attribute;` |

**源码注释：**

> 器官对应的血量属性值

---

### 属性 `OwnedSpecies`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ESpeciesType` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") ESpeciesType OwnedSpecies = ESpeciesType::Human;` |

**源码注释：**

> 拥有此器官类型的种族

---

### 属性 `OrganName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FText OrganName;` |

**源码注释：**

> 器官名称

---

### 属性 `OrganStatus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FOrganStatus>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FOrganStatus> OrganStatus;` |

**源码注释：**

> 器官所处在区间的状态信息

---

### 属性 `MaxLifeAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FGameplayAttribute MaxLifeAttribute;` |

**源码注释：**

> 器官对应的最大血量属性

---

### 属性 `ForBodyStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EBodyStateType,float>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TMap<EBodyStateType,float> ForBodyStates;` |

**源码注释：**

> 器官关联的身体状态的百分比（0-1）

---

### 属性 `AttackedWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") int AttackedWeight = 1;` |

**源码注释：**

> 器官的被攻击到的权重

---

### 属性 `AttackedSharePercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float AttackedSharePercent = 0.0f;` |

**源码注释：**

> 器官的被攻击到的分摊几率(0-1)(<=0 不分摊; >=1 必分摊)

---

### 属性 `AttackedShareConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FOrganAttackedShareConfig>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FOrganAttackedShareConfig> AttackedShareConfigs;` |

**源码注释：**

> 器官的被攻击到的分摊伤害的配置

---

### 属性 `DestoryDie`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") bool DestoryDie = false;` |

**源码注释：**

> 器官损毁是否导致死亡

---

### 属性 `AttackedOverPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float AttackedOverPercent = 0.75f;` |

**源码注释：**

> 最大损毁过量比例

---

### 属性 `MinAttackedOverPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float MinAttackedOverPercent = 0.f;` |

**源码注释：**

> 最小损毁过量比例

---

### 属性 `KnockDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") bool KnockDown = false;` |

---

### 属性 `KnockDownPrecent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float KnockDownPrecent = 0.f;` |

---

### 属性 `InjuryConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FInjuryConfig>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FInjuryConfig> InjuryConfigs;` |

**源码注释：**

> 部位伤势配置

---

### 属性 `ScarPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float ScarPercent = 0.f;` |

**源码注释：**

> 部位形成疤痕概率

---

### 属性 `OrganType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBodyOrganType` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterOrganConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") EBodyOrganType OrganType = EBodyOrganType::None;` |

**源码注释：**

> 身体部位类型枚举

---
