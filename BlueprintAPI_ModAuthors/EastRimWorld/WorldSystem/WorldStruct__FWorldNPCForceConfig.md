# `struct` `FWorldNPCForceConfig`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

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

**源码注释：**

> 势力中主城初始的角色 读取 CharacterPresetConfig

---

### 属性 `ExpatriateCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FNameIDArray>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,FNameIDArray> ExpatriateCharacters;` |

**源码注释：**

> 初始外派角色<地点ID,外派角色ID数组>

---

### 属性 `ForceCharacterDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ForceCharacterDataPool;` |

**源码注释：**

> 势力中的抽取的角色池 读取 CharacterPresetConfig

---

### 属性 `WorldNPCForceTroops`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FWorldNPCForceTroops>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,FWorldNPCForceTroops> WorldNPCForceTroops;` |

**源码注释：**

> ncp部队的信息

---

### 属性 `ForceArmorDataPools`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EArmorType,FNPCForceArmorPool>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<EArmorType,FNPCForceArmorPool> ForceArmorDataPools;` |

**源码注释：**

> 培养角色的防具池

---

### 属性 `ForceWeaponDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceWeaponDataPool;` |

**源码注释：**

> 培养角色的武器池<DT_EquipmentQualityRange表,成长积分以及权重>

---

### 属性 `ForceInternalStrengthDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceInternalStrengthDataPool;` |

**源码注释：**

> 培养角色的内功武学池<ID,成长积分以及权重>

---

### 属性 `ForceMovesDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceMovesDataPool;` |

**源码注释：**

> 培养角色的招式武学池<ID,成长积分以及权重>

---

### 属性 `ForcePassiveDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForcePassiveDataPool;` |

**源码注释：**

> 培养角色的被动武学池<ID,成长积分以及权重>

---

### 属性 `AttributeGrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FGameplayAttribute,float> AttributeGrowScore;` |

**源码注释：**

> 属性成长消耗的成长积分

---

### 属性 `RealmGrowAttributeWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,FCultivateAttributeWeight>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<int32,FCultivateAttributeWeight> RealmGrowAttributeWeight;` |

**源码注释：**

> 境界等级对应的属性成长权重

---

### 属性 `CultivateCharacterTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ENPCCultivateCharacterType,FNPCCultivateCharacterTypeData>` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<ENPCCultivateCharacterType,FNPCCultivateCharacterTypeData> CultivateCharacterTypes;` |

**源码注释：**

> 培养角色的方式

---

### 属性 `CultivateAddMartialArtExp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float CultivateAddMartialArtExp = 500.f;` |

**源码注释：**

> 培养角色增加的武学经验

---

### 属性 `StopCultivateGrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float StopCultivateGrowScore = 100.f;` |

**源码注释：**

> 成长积分低于该值时停止培养角色

---

### 属性 `MaxCultivateTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") int32 MaxCultivateTimes = 10;` |

**源码注释：**

> 单次最大培养角色次数

---

### 属性 `LevelUpPlaceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 LevelUpPlaceInterval = 3;` |

**源码注释：**

> 定期升级城镇的间隔(天)

---

### 属性 `BuildTypeTendency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EWorldPlaceBuildType,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceBuildType,int32> BuildTypeTendency;` |

**源码注释：**

> 建造城镇设施的类型倾向(<类型,建造设施优先级加值>)

---

### 属性 `AttackProportion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackProportion = 0.9f;` |

**源码注释：**

> 进攻其他城镇时的参战比例

---

### 属性 `DogfaceSelectWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> DogfaceSelectWeight;` |

**源码注释：**

> 选择出战小兵的权重

---

### 属性 `StrategicAbilitySelectWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> StrategicAbilitySelectWeight;` |

**源码注释：**

> 选择战略技能的权重

---

### 属性 `TowerDefenseSelectWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> TowerDefenseSelectWeight;` |

**源码注释：**

> 选择防御塔的权重

---
