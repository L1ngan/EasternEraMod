# `struct` `FRandomDiscipleConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 随机弟子生成配置（DT_RandomDiscipleConfig 表行，EGameConfigType::RandomDiscipleConfig）
> 使用方通过 AERW_GameModeBase::GetRandomDiscipleConfig(ID) 获取：
> 1) EGenerationActorType::SpawnRandomDisciple 生成配置（FGenerationData.RandomDiscipleConfigID）
> 2) NPC势力招募培养（FWorldNPCForceConfig.RecruitRandomDiscipleConfigID）

## 蓝图暴露变量

### 属性 `TemplateCharacterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TemplateCharacterID;` |

**说明:**

> 【必填】人形角色模板 ID，指向 DT_HumanData。
> 提供 CharacterClass（蓝图类）、DefaultWeapon/DefaultArmor、AnimGroup、InitGameplayEffect 等。
> 生成的 FCharacterSaveData.CharacterID 将被设为此值，保证读档和进入地点时能正常查表。

---

### 属性 `ForcePool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ForcePool;` |

**说明:**

> 门派 ID 池兜底（填 ForceID/SectID）。正常优先用上下文 ForceGuid 解析所属势力；
> 仅当 ForceGuid 反查不到势力时，才从此池随机取一个。通常留空。

---

### 属性 `RealmOverrideMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RealmOverrideMin = 0;` |

**说明:**

> 境界范围覆盖（0 = 使用 FWorldForceInfo 配置的 DiscipleRealmMin/Max；势力也未配置则按 ForceLevel 估算）

---

### 属性 `RealmOverrideMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RealmOverrideMax = 0;` |

**说明:**

> Realm Override Max 字段。

---

### 属性 `CharacteristicMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacteristicMin = 1;` |

**说明:**

> 随机特性数量范围

---

### 属性 `CharacteristicMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacteristicMax = 2;` |

**说明:**

> Characteristic Max 字段。

---

### 属性 `CharacteristicPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> CharacteristicPool;` |

**说明:**

> 特性池（空 = 从 DT_CharacteristicInfo 全池随机）

---

### 属性 `MovesSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MovesSlotCount = 1;` |

**说明:**

> 招式槽数量（1~3）

---

### 属性 `PassiveSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PassiveSlotCount = 0;` |

**说明:**

> 被动槽数量（0~2）

---
