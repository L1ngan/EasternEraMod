# `struct` `FBattleRuleset`

**源码头文件：** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战斗规则

## 蓝图暴露变量

### 属性 `BattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBattleType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattleType BattleType = EBattleType::None;` |

**源码注释：**

> 战斗类型

---

### 属性 `TimeLimitSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeLimitSeconds = 600.0f;` |

**源码注释：**

> 时间限制

---

### 属性 `TeamBaseInformation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTeamBaseInformation](WorldBattleStruct__FTeamBaseInformation.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTeamBaseInformation> TeamBaseInformation;` |

**源码注释：**

> 其他阵营基地信息

---

### 属性 `MonsterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> MonsterGeneration;` |

**源码注释：**

> 小兵的生成规则模板 读取MonsterGenerationConfig 模板中配置所有可能生成的小兵，开始后会根据玩家选择小兵读取对应的生成配置

---

### 属性 `GunTurretGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> GunTurretGeneration;` |

**源码注释：**

> 阵营建筑物的生成模板(炮塔)如果是多个则会依次读取基地中炮塔坐标

---

### 属性 `CrystalGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName CrystalGeneration;` |

**源码注释：**

> 此基地的水晶生成配置

---

### 属性 `CharacterRealmRelevancyData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FCharacterRealmRelevancyData](WorldBattleStruct__FCharacterRealmRelevancyData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,FCharacterRealmRelevancyData> CharacterRealmRelevancyData;` |

**源码注释：**

> 角色消耗 key 境界等级 value 消耗

---

### 属性 `MiniStratagemAbilityNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MiniStratagemAbilityNumber = 5;` |

**源码注释：**

> 战略卡牌池的最小数量（出战必须选择的最小战略卡数量）

---

### 属性 `MaxStratagemAbilityNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxStratagemAbilityNumber = 10;` |

**源码注释：**

> 战略卡牌池的最大数量

---

### 属性 `MaxHandStratagemAbilityNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxHandStratagemAbilityNumber = 5;` |

**源码注释：**

> 战略卡牌的最大数量(手牌)

---

### 属性 `MaxCharacterNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxCharacterNumber = 5;` |

**源码注释：**

> 角色卡牌的最大数量(手牌)

---

### 属性 `ExtractionStratagemTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExtractionStratagemTime = 10;` |

**源码注释：**

> 抽取战略卡牌所需时间

---

### 属性 `ExtractionCharacterTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExtractionCharacterTime = 10;` |

**源码注释：**

> 抽取角色卡牌所需时间

---

### 属性 `MaxStrategyPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxStrategyPoint = 1000;` |

**源码注释：**

> 战略值最大值

---

### 属性 `MaxResourcePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxResourcePoint = 1000;` |

**源码注释：**

> 资源点最大值

---

### 属性 `InitStrategyPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 InitStrategyPoint = 100;` |

**源码注释：**

> 战略初始点数

---

### 属性 `InitResourcePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 InitResourcePoint = 100;` |

**源码注释：**

> 资源初始点数

---

### 属性 `AutoReleaseStrategyRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FAutoReleaseStrategyRule](WorldBattleStruct__FAutoReleaseStrategyRule.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FAutoReleaseStrategyRule AutoReleaseStrategyRule;` |

**源码注释：**

> 自动释放战略技能规则

---

### 属性 `CaptureCharacterNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,int32> CaptureCharacterNumber;` |

**源码注释：**

> 俘虏人数的权重 key 人数 Value 权重

---

### 属性 `ListenDogfaceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ListenDogfaceIDs;` |

**源码注释：**

> 监听兵种的刷新时间

---

### 属性 `DogfaceGenerateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DogfaceGenerateTime = 10;` |

**源码注释：**

> 小兵刷新的最大时间

---

### 属性 `AttackChangeJusticeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 AttackChangeJusticeValue = 10;` |

**源码注释：**

> 正义值变化 攻击方正邪值变化 填正值 ，增加减少根据防守方正邪判断

---

### 属性 `JusticeValueAddToRelease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValueAddToRelease = 10;` |

**源码注释：**

> 每100正义值(正邪值大于0)增加释放的权重

---

### 属性 `JusticeValueAddToKill`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValueAddToKill = 10;` |

**源码注释：**

> 每100邪恶值(正邪值小于0)增加处决的权重

---

### 属性 `CaptureCharacterDisposal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCaptureDisposal](WorldBattleStruct__FCaptureDisposal.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCaptureDisposal> CaptureCharacterDisposal = { {FCaptureDisposal(ECaptureCharacterDisposalType::Release,50,10,10)}, {FCaptureDisposal(ECaptureCharacterDisposalType::Recruit,25,0,0)}, {FCaptureDisposal(ECaptureCharacterDisposalType::Kill,25,-10,-10)}, };` |

**源码注释：**

> NPC俘虏的角色处置概率

---

### 属性 `PlaceDisposal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPlaceDisposal](WorldBattleStruct__FPlaceDisposal.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPlaceDisposal> PlaceDisposal = { {FPlaceDisposal(EPlaceDisposalType::OccupyPlace,1,0)}, {FPlaceDisposal(EPlaceDisposalType::PlunderPlace,1,-0.5)}, {FPlaceDisposal(EPlaceDisposalType::DestroyPlace,1,-1)}, };` |

**源码注释：**

> NPC占领 掠夺 摧毁的概率

---

### 属性 `DestroyBuildingMinNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DestroyBuildingMinNumber = 1;` |

**源码注释：**

> 摧毁时建筑物损坏的最小数量

---

### 属性 `DestroyBuildingMaxNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DestroyBuildingMaxNumber = 1;` |

**源码注释：**

> 摧毁时建筑物损坏的最大数量

---

### 属性 `DestroyBuildingChangeJusticeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DestroyBuildingChangeJusticeValue = -10;` |

**源码注释：**

> 摧毁城市时正邪值变化

---

### 属性 `InitRecoverResourcePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 InitRecoverResourcePoint = 10;` |

**源码注释：**

> 每3秒恢复的资源量

---

### 属性 `BattleMaxCharacterNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BattleMaxCharacterNumber = 10;` |

**源码注释：**

> 最大可战斗的人数(卡池大小)

---

### 属性 `BattleMiniCharacterNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BattleMiniCharacterNumber = 1;` |

**源码注释：**

> 最小可战斗的人数(卡池大小)（出战必须选择的最小弟子卡数量）

---

### 属性 `CanJoinBattleCharacterMiniRealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CanJoinBattleCharacterMiniRealmLevel = 0;` |

**源码注释：**

> 出战弟子最小境界等级(>=)

---

### 属性 `CanJoinBattleCharacterMaxRealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CanJoinBattleCharacterMaxRealmLevel = 10;` |

**源码注释：**

> 出战弟子最大境界等级(<=)

---
