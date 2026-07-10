# `struct` `FWorldNPCForceConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> NPC势力信息

## 蓝图暴露变量

### 属性 `ForceCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ForceCharacterData;` |

**说明:**

> 势力中主城初始的角色 读取 CharacterPresetConfig

---

### 属性 `ExpatriateCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,FNameIDArray> ExpatriateCharacters;` |

**说明:**

> 初始外派角色<地点ID,外派角色ID数组>

---

### 属性 `ForceCharacterDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ForceCharacterDataPool;` |

**说明:**

> 势力中的抽取的角色池 读取 CharacterPresetConfig(2026.6.12 废弃......)

---

### 属性 `WorldNPCForceTroops`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int,[FWorldNPCForceTroops](WorldStruct__FWorldNPCForceTroops.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,FWorldNPCForceTroops> WorldNPCForceTroops;` |

**说明:**

> ncp部队的信息

---

### 属性 `ForceArmorDataPools`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),[FNPCForceArmorPool](WorldStruct__FNPCForceArmorPool.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<EArmorType,FNPCForceArmorPool> ForceArmorDataPools;` |

**说明:**

> 培养角色的防具池

---

### 属性 `ForceWeaponDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceWeaponDataPool;` |

**说明:**

> 培养角色的武器池<DT_EquipmentQualityRange表,成长积分以及权重>

---

### 属性 `ForceInternalStrengthDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceInternalStrengthDataPool;` |

**说明:**

> 培养角色的内功武学池<ID,成长积分以及权重>

---

### 属性 `ForceMovesDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceMovesDataPool;` |

**说明:**

> 培养角色的招式武学池<ID,成长积分以及权重>

---

### 属性 `ForcePassiveDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForcePassiveDataPool;` |

**说明:**

> 培养角色的被动武学池<ID,成长积分以及权重>

---

### 属性 `AttributeGrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FGameplayAttribute,float> AttributeGrowScore;` |

**说明:**

> 属性成长消耗的成长积分

---

### 属性 `RealmGrowAttributeWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FCultivateAttributeWeight](WorldStruct__FCultivateAttributeWeight.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<int32,FCultivateAttributeWeight> RealmGrowAttributeWeight;` |

**说明:**

> 境界等级对应的属性成长权重

---

### 属性 `CultivateCharacterTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ENPCCultivateCharacterType](WorldStruct__ENPCCultivateCharacterType.md),[FNPCCultivateCharacterTypeData](WorldStruct__FNPCCultivateCharacterTypeData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<ENPCCultivateCharacterType,FNPCCultivateCharacterTypeData> CultivateCharacterTypes;` |

**说明:**

> 培养角色的方式

---

### 属性 `RecruitRandomDiscipleConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") FName RecruitRandomDiscipleConfigID;` |

**说明:**

> 招募培养时随机生成弟子的配置ID（DT_RandomDiscipleConfig 表行；未配置或行无效则该势力无法招募）

---

### 属性 `CultivateAddMartialArtExp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float CultivateAddMartialArtExp = 500.f;` |

**说明:**

> 培养角色增加的武学经验

---

### 属性 `StopCultivateGrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float StopCultivateGrowScore = 100.f;` |

**说明:**

> 成长积分低于该值时停止培养角色

---

### 属性 `MaxCultivateTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") int32 MaxCultivateTimes = 10;` |

**说明:**

> 单次最大培养角色次数

---

### 属性 `LevelUpPlaceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 LevelUpPlaceInterval = 3;` |

**说明:**

> 定期升级城镇的间隔(天)

---

### 属性 `BuildTypeTendency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EWorldPlaceBuildType](WorldStruct__EWorldPlaceBuildType.md),int32> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceBuildType,int32> BuildTypeTendency;` |

**说明:**

> 建造城镇设施的类型倾向(<类型,建造设施优先级加值>)

---

### 属性 `AttackProportion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackProportion = 0.9f;` |

**说明:**

> 进攻其他城镇时的参战比例

---

### 属性 `DogfaceSelectWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> DogfaceSelectWeight;` |

**说明:**

> 选择出战小兵的权重

---

### 属性 `StrategicAbilitySelectWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> StrategicAbilitySelectWeight;` |

**说明:**

> 选择战略技能的权重

---

### 属性 `TowerDefenseSelectWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> TowerDefenseSelectWeight;` |

**说明:**

> 选择防御塔的权重

---

### 属性 `ForceApparelSets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<bool, [FForceApparelSetArray](WorldStruct__FForceApparelSetArray.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Appearance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Appearance") TMap<bool, FForceApparelSetArray> ForceApparelSets;` |

**说明:**

> 门派外观套装池（整套选取，保证风格统一）<性别(true=男/false=女), 套装数组>
> 为空时降级使用 ForceArmorDataPools 按品质随机（小势力兜底）

---

### 属性 `ForceAvatarConfigPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<bool, [FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Appearance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Appearance") TMap<bool, FNameIDArray> ForceAvatarConfigPool;` |

**说明:**

> 门派立绘配置 ID 池（按性别）<性别(true=男/false=女), 立绘配置ID数组>
> 元素为 DT_CharacterAvatarConfig 的行 ID，一个 ID 已含全部用途立绘；为空则保持模板行默认立绘

---
