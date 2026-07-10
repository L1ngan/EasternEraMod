# `struct` `FEmergenceDirectorSignals`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> Director 维护并传入压力库的"世界外部信号"。
> 缺失的底层信号(沉滞天数 / 火并冷却 / 上季快照)不假装世界已有, 由 Director 闭环维护后传入。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `NowDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Signals" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") float NowDay = 0.f;` |

**Notes:**

> 当前游戏天(冷却天数差 / 沉寂天数差用)

---

### Property `StagnantDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Signals" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") float StagnantDays = 0.f;` |

**Notes:**

> 距上次宗门境界推进的累计天数(境界压力沉滞衰减用)

---

### Property `LastEmergentEventDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Signals" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") float LastEmergentEventDay = -100000.f;` |

**Notes:**

> 上次涌现事件冒出的游戏天(沉闷压力用; 默认极久远 → 开局满沉闷)

---

### Property `LastClashDayByPair`

| Field | Details |
|------|------|
| C++ type | `TMap<FString, float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Signals" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") TMap<FString, float> LastClashDayByPair;` |

**Notes:**

> 各势力对上次火并/暗杀的游戏天(结仇冷却用)。Key = UEmergencePressureLibrary::MakeForcePairKey 规范化键

---

### Property `LastSeasonForce`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FEmergenceForceSeasonSnapshot](EmergenceTypes__FEmergenceForceSeasonSnapshot.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Signals" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") TMap<FGuid, FEmergenceForceSeasonSnapshot> LastSeasonForce;` |

**Notes:**

> 上季各势力快照(兴衰·暴起环比基线)。Key = 势力 SGUID

---
