# `struct` `FTimerInfo`

**Source header:** `EastRimWorld/Components/ERW_TimerManager.h`

---

## Functional description (from header comments)

> 计时器信息

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 ID { -1 };` |

**Notes:**

> 计时器ID

---

### Property `OwnerData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FUObjectData OwnerData;` |

**Notes:**

> Owner的数据

---

### Property `Time`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) float Time { 0.f };` |

**Notes:**

> Timer总时间

---

### Property `IsLoop`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsLoop { false };` |

**Notes:**

> 是否循环

---

### Property `FuncName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FString FuncName;` |

**Notes:**

> 调用的方法名

---

### Property `Parameters`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) TArray<FString> Parameters;` |

**Notes:**

> 方法参数

---

### Property `StartDelayTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) float StartDelayTime { 0.f };` |

**Notes:**

> 剩余时间, 用作加载游戏后重新调用

---

### Property `IsPause`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsPause { false };` |

**Notes:**

> 是否暂停

---

### Property `TimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FTimerHandle TimerHandle;` |

**Notes:**

> Timer句柄

---
