# `class` `UERW_SquadFormation`

**Source header:** `EastRimWorld/System/Squad/ERW_SquadFormation.h`

---

## Functional description (from header comments)

> 单个编组（纵队）。
> - 沿预设地面路径(PathPoints)以"虚拟头点"推进。
> - 队员按弧长偏移(HeadDistance - SlotIndex*Spacing)排成纵队。
> - 散兵入队先跑(Joining)，到位后转走(InFormation)。

## Blueprint-exposed variables

### Property `Members`

| Field | Details |
|------|------|
| C++ type | TArray<[FSquadMember](ERW_SquadFormation__FSquadMember.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") TArray<FSquadMember> Members;` |

**Notes:**

> 当前队员（含正在赶来的 Joining 成员）

---

### Property `PathPoints`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") TArray<FVector> PathPoints;` |

**Notes:**

> 预设地面路径（来自 WorldMapPathSubsystem）

---

### Property `TotalPathLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") float TotalPathLength = 0.f;` |

**Notes:**

> 路径总长（环形时包含末点->首点的闭合段）

---

### Property `bLoop`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") bool bLoop = false;` |

**Notes:**

> 路径是否首尾相接（环形巡逻，永不停止）

---

### Property `HeadDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") float HeadDistance = 0.f;` |

**Notes:**

> 虚拟头点已推进的弧长

---

### Property `Spacing`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Squad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float Spacing = 150.f;` |

**Notes:**

> 纵队前后间距(cm)

---

### Property `AcceptanceRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Squad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float AcceptanceRadius = 50.f;` |

**Notes:**

> 到达槽位容差(cm)，小于此值不再下发移动指令（防抖动）

---

### Property `StragglerSpacingFactor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Squad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float StragglerSpacingFactor = 3.f;` |

**Notes:**

> 已入列成员掉队超过 Spacing*此倍数 时，降级回 Joining 重新跑步归队

---

### Property `LaneJoinTolerance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Squad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float LaneJoinTolerance = 80.f;` |

**Notes:**

> 散兵汇入车道判定(cm)：到路径折线的横向(2D)距离小于此值即视为"上线"，
> 转入 InFormation——不再死磕仍在移动的精确槽位（抗入队抖动）。

---

### Property `JoinLead`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Squad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float JoinLead = 100.f;` |

**Notes:**

> 散兵入队提前量(cm)：Joining 寻路目标取槽位再沿路径前移此距离，
> 让散兵从后方切线汇入而非垂直撞移动点，逼近轨迹更顺（抗逼近抖动）。

---

### Property `bActive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") bool bActive = false;` |

**Notes:**

> 是否激活（开始行军）

---

### Property `PathIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Squad" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Squad") int32 PathIndex = INDEX_NONE;` |

**Notes:**

> 本编组所属的样条路径索引（子系统多路径匹配用；-1 表示未绑定）

---
