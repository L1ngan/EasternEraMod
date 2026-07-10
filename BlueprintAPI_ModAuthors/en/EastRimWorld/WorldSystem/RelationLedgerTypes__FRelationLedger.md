# `struct` `FRelationLedger`

**Source header:** `EastRimWorld/WorldSystem/RelationLedgerTypes.h`

---

## Functional description (from header comments)

> 关系账本 — 挂在 AWorldForce (门派) 或 AEastRimWorldCharacter 上
> 记录与"另一方"的完整关系状态, 支持存档
> 使用方法:
>   AddDelta(ERelationAxis::Grace, +20.f);   // LLOG 记录
>   HasTag(ERelationTag::BloodFeud);
>   Decay(DeltaTime);                         // 每游戏日调用一次

## Blueprint-exposed variables

### Property `OwnerGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Relation|Identity" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Relation|Identity") FGuid OwnerGuid;` |

**Notes:**

> 账本所属方 Guid (AWorldForce Guid 或 Character Guid)

---

### Property `TargetGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Relation|Identity" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Relation|Identity") FGuid TargetGuid;` |

**Notes:**

> 账本目标方 Guid

---

### Property `Grace`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Relation|Values" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float Grace = 0.f;` |

**Notes:**

> 恩情值 [0, 100]

---

### Property `Grudge`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Relation|Values" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float Grudge = 0.f;` |

**Notes:**

> 仇恨值 [0, 100]

---

### Property `Romance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Relation|Values" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float Romance = 0.f;` |

**Notes:**

> 情感值 [0, 100]

---

### Property `CombinedFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Relation|Values" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Values") float CombinedFavor = 0.f;` |

**Notes:**

> 综合好感 [-100, 100]
> = Grace - Grudge + 性格修饰 (由系统计算后缓存)
> 初始值由 Tag 关系规则推导 (v0.7 §3)

---

### Property `RelationTags`

| Field | Details |
|------|------|
| C++ type | TArray<[ERelationTag](RelationLedgerTypes__ERelationTag.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Relation|Tags" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Tags") TArray<ERelationTag> RelationTags;` |

**Notes:**

> 标签集合 — 代表双方历史上发生过的决定性事件

---

### Property `LastMajorEventGameDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Relation|Tags" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Relation|Tags") float LastMajorEventGameDay = 0.f;` |

**Notes:**

> 最近一次重大事件的游戏天 (衰减/UI 用)

---
