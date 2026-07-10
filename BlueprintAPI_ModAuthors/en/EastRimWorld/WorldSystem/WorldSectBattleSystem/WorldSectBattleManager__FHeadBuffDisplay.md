# `struct` `FHeadBuffDisplay`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> 头顶 buff 图标的单格显示数据（已算好转圈% + 剩余秒，UI 直接喂给 WBP_Buff，不用查表/算时间）。

## Blueprint-exposed variables

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> buff 图标（UI 直接 SetBrush）。

---

### Property `RemainPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") float RemainPercent = 1.f;` |

**Notes:**

> 转圈进度 = 剩余/总，0~1，直接喂转圈控件。士气(无倒计时)恒为 1。

---

### Property `RemainSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") float RemainSeconds = 0.f;` |

**Notes:**

> 剩余秒数（可选显示数字）。士气为 0。

---

### Property `bHasCountdown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") bool bHasCountdown = false;` |

**Notes:**

> 是否有倒计时：事件 buff(FixedTime)=true → 显示转圈；士气 buff(ForEver)=false → 转圈隐藏/满圈。

---

### Property `MoraleStage`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") int32 MoraleStage = 0;` |

**Notes:**

> 士气档位（= 占旗数，仅士气有效），UI 可显示"第几档"。

---
