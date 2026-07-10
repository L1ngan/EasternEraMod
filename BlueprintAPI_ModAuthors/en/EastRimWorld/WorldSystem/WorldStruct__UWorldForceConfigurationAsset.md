# `class` `UWorldForceConfigurationAsset`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> World Force Configuration Asset UObject type.

## Blueprint-exposed variables

### Property `FirstBuildReputation`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,float> FirstBuildReputation;` |

**Notes:**

> 首次建造指定的建筑可获得声望

---

### Property `RecruitReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitReputation = 0.f;` |

**Notes:**

> 玩家招募强力角色获得声望

---

### Property `MaxForceJusticeValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxForceJusticeValue = 10000.f;` |

**Notes:**

> 势力正邪值上限

---

### Property `MinForceJusticeValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MinForceJusticeValue = -10000.f;` |

**Notes:**

> 势力正邪值下限

---

### Property `BuryCorpseJusticeChange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float BuryCorpseJusticeChange = 0.f;` |

**Notes:**

> 埋葬尸体正邪变化

---

### Property `RotCorpseJusticeChange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RotCorpseJusticeChange = 0.f;` |

**Notes:**

> 尸体腐烂正邪变化

---

### Property `NPCvsNPCVictoryRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float NPCvsNPCVictoryRatio = 1.f;` |

**Notes:**

> NPC攻击NPC时胜负计算公式的系数

---

### Property `MinFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MinFavorability = -1200.f;` |

**Notes:**

> 好感度下限

---

### Property `MaxFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MaxFavorability = 1200.f;` |

**Notes:**

> 好感度上限

---

### Property `ForceInitFavorability`

| Field | Details |
|------|------|
| C++ type | TArray<[FForceInitFavorability](WorldStruct__FForceInitFavorability.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FForceInitFavorability> ForceInitFavorability;` |

**Notes:**

> 势力间初始好感度

---
