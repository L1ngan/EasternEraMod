# `struct` `FGameplayTeamInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 团队信息

## Blueprint-exposed variables

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FGenericTeamId TeamId;` |

**Source comments:**

> 阵营ID

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, category="Base",meta = (AllowedClasses = "Texture2D")) FSoftObjectPath Icon;` |

**Source comments:**

> 图标

---

### Property `FriendlyTeamIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGenericTeamId>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TArray<FGenericTeamId> FriendlyTeamIds;` |

**Source comments:**

> 友好阵营 标记为队友 无论对方是否是同阵营 且见面不会主动攻击

---

### Property `HostilityTeamIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGenericTeamId>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TArray<FGenericTeamId> HostilityTeamIds;` |

**Source comments:**

> 敌对阵营 标记为敌人 见面双方会主动攻击

---

### Property `NeutralityTeamIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGenericTeamId>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TArray<FGenericTeamId> NeutralityTeamIds;` |

**Source comments:**

> 中立阵营 标记为中立 不同阵营 见面不会互相攻击

---

### Property `GameplayTeamGoals`

| Field | Details |
|------|------|
| C++ type | TArray<[FGameplayTeamGoals](CharacterStruct__FGameplayTeamGoals.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FGameplayTeamGoals> GameplayTeamGoals;` |

**Source comments:**

> 不同模式中的goal配置

---

### Property `bMarkAttackerToHostility`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Attacker") bool bMarkAttackerToHostility = false;` |

**Source comments:**

> 此个体受到伤害后是否会标记攻击者为敌对(脱离战斗后失效)

---

### Property `bNotifyAttackerToFriendly`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Attacker",meta = (EditConditionHides = " bMarkAttackerToHostility == true ")) bool bNotifyAttackerToFriendly = false;` |

**Source comments:**

> 此阵营个体被攻击是否会通知周围同阵营的其他单位且标记攻击者为敌方(脱离战斗后失效)

---

### Property `bMarkAttackerTeamToHostility`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Attacker",meta = (EditConditionHides = " bMarkAttackerToHostility == true ")) bool bMarkAttackerTeamToHostility = false;` |

**Source comments:**

> 此阵营个体被攻击是否标记攻击者阵营为敌方阵营(永久)

---

### Property `bOnDamageReportTeam`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") bool bOnDamageReportTeam = false;` |

**Source comments:**

> 受到攻击是否通知阵营其他单位

---

### Property `bOnSightReportTeam`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") bool bOnSightReportTeam = true;` |

**Source comments:**

> 看到敌人是否通知阵营其他单位

---

### Property `NavigationQueryFilter`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FSoftClassPath NavigationQueryFilter;` |

**Source comments:**

> AI导航查询过滤

---
