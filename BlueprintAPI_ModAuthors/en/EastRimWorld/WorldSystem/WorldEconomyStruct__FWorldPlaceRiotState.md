# `struct` `FWorldPlaceRiotState`

**Source header:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## Functional description (from header comments)

> 据点暴乱运行时状态

## Blueprint-exposed variables

### Property `bInRiot`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bInRiot = false;` |

**Notes:**

> 是否处于暴乱中

---

### Property `StartGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float StartGameTime = 0.f;` |

**Notes:**

> 暴乱开始时的 GameTime(秒)

---

### Property `EndGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float EndGameTime = 0.f;` |

**Notes:**

> 暴乱预定结束的 GameTime(秒)

---

### Property `LastTickGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float LastTickGameTime = 0.f;` |

**Notes:**

> 上一次扣繁荣/扣人口/扣治安触发的 GameTime

---
