# `struct` `FBattleTeamState`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战斗阵营状态

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**源码注释:**

> 势力GUID

---

### 属性 `Score`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Score = 0;` |

**源码注释:**

> 获得的积分

---

### 属性 `KillCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 KillCount = 0;` |

**源码注释:**

> 击杀数

---

### 属性 `CharacterBattleInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FCharacterBattleInfo](WorldBattleStruct__FCharacterBattleInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid, FCharacterBattleInfo> CharacterBattleInfos;` |

**源码注释:**

> 角色战斗信息

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**源码注释:**

> 阵营ID

---

### 属性 `TeamBaseInformation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FTeamBaseInformation](WorldBattleStruct__FTeamBaseInformation.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTeamBaseInformation TeamBaseInformation;` |

**源码注释:**

> 当前分配到的营地

---

### 属性 `BattleTeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleTeamInfo BattleTeamInfo;` |

**源码注释:**

> 战斗阵营信息

---

### 属性 `HandStratagemAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FStratagemAbility](WorldBattleStruct__FStratagemAbility.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FStratagemAbility> HandStratagemAbility;` |

**源码注释:**

> 手中的战略卡牌信息

---

### 属性 `PoolStratagemAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FStratagemAbility](WorldBattleStruct__FStratagemAbility.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FStratagemAbility> PoolStratagemAbility;` |

**源码注释:**

> 池子中的战略卡牌信息

---

### 属性 `HandCharacterCard`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> HandCharacterCard;` |

**源码注释:**

> 手中的角色卡牌信息

---

### 属性 `PoolCharacterCard`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> PoolCharacterCard;` |

**源码注释:**

> 池子中的的角色卡牌信息

---

### 属性 `ApplyStratagemAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FStratagemAbility](WorldBattleStruct__FStratagemAbility.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FStratagemAbility> ApplyStratagemAbility;` |

**源码注释:**

> 应用中的战略技能 只有全局且拥有持续时间的战略技能

---

### 属性 `AliveCharacterCard`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> AliveCharacterCard;` |

**源码注释:**

> 存在场上的角色 包含重伤

---

### 属性 `StrategyPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 StrategyPoint = 0;` |

**源码注释:**

> 战略值

---

### 属性 `ResourcePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ResourcePoint = 0;` |

**源码注释:**

> 资源点

---

### 属性 `ExtractionStratagemTimerRemaining`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExtractionStratagemTimerRemaining = 0.f;` |

**源码注释:**

> 抽取战略剩余时间

---

### 属性 `ExtractionCharacterTimerRemaining`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExtractionCharacterTimerRemaining = 0.f;` |

**源码注释:**

> 抽取角色剩余时间

---

### 属性 `NextUseStratagemAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FStratagemAbility NextUseStratagemAbility;` |

**源码注释:**

> 要使用的战略技能

---

### 属性 `StrategyDetectionIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StrategyDetectionIntervalTime = 0.f;` |

**源码注释:**

> 持有牌时无法使用检测间隔时间

---

### 属性 `StrategyWaitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StrategyWaitTime = 0.f;` |

**源码注释:**

> 释放条件不满足时同一张牌等待时间

---

### 属性 `StrategyUseIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StrategyUseIntervalTime = 0.f;` |

**源码注释:**

> 使用技能的最小间隔时间

---

### 属性 `bAutoReleaseStrategy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bAutoReleaseStrategy = true;` |

**源码注释:**

> 是否自动释放战略技能

---

### 属性 `bAutoUseCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bAutoUseCharacter = true;` |

**源码注释:**

> 是否自动使用角色

---

### 属性 `AutoUseCharacterRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FAutoUseCharacterRule](WorldBattleStruct__FAutoUseCharacterRule.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FAutoUseCharacterRule AutoUseCharacterRule;` |

**源码注释:**

> 自动使用角色的规则

---

### 属性 `NextCharacterSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FCharacterSaveData NextCharacterSaveData;` |

**源码注释:**

> 下次使用的弟子信息

---

### 属性 `CharacterUseIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CharacterUseIntervalTime = 10.f;` |

**源码注释:**

> 使用的间隔时间

---

### 属性 `CharacterDetectionIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CharacterDetectionIntervalTime = 3.f;` |

**源码注释:**

> 检测间隔时间

---

### 属性 `bHaveResourceUseCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bHaveResourceUseCharacter = false;` |

**源码注释:**

> 是否资源满足持续使用角色

---

### 属性 `BattleBuffGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FBattleBuffGroup](../WorldStruct__FBattleBuffGroup.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FBattleBuffGroup> BattleBuffGroup;` |

**源码注释:**

> 战斗buff组

---

### 属性 `CharacterCureInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FCharacterCureInfo](WorldBattleStruct__FCharacterCureInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGuid,FCharacterCureInfo> CharacterCureInfo;` |

**源码注释:**

> 受伤人员的

---

### 属性 `OccupiedCureIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> OccupiedCureIndex;` |

**源码注释:**

> 治疗点占用的索引

---

### 属性 `OccupiedAwaitIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> OccupiedAwaitIndex;` |

**源码注释:**

> 医师等待占用的索引

---
