# `struct` `FGovernanceTendency`

**Source header:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## Functional description (from header comments)

> 城主性格治理倾向(配置:激进/中立/保守 各一份)

## Blueprint-exposed variables

### Property `IdleWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float IdleWeight = 50.f;` |

**Notes:**

> 不动作权重

---

### Property `ExpelWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ExpelWeight = 25.f;` |

**Notes:**

> 驱逐权重(见效快,推动门派流浪,降低同城其他门派忠诚)

---

### Property `RaiseTaxWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float RaiseTaxWeight = 25.f;` |

**Notes:**

> 加税权重(温和,不产生驱逐记录,但降低忠诚/提升反水风险)

---

### Property `ApproveMoveInChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float ApproveMoveInChance = 0.5f;` |

**Notes:**

> 批准迁入申请的概率(0-1)

---
