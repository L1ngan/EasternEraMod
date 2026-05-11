# `class` `ANewGameCharacterSpawnerActor`

**Source header:** `EastRimWorld/Actor/NewGameCharacterSpawnerActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BoxComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UBoxComponent>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) TObjectPtr<UBoxComponent> BoxComponent;` |

---

## Blueprint-exposed functions

### Function `GetSpawnerActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="NewGame|Spawner" |
| Return type | [ANewGameCharacterSpawnerActor](NewGameCharacterSpawnerActor__ANewGameCharacterSpawnerActor.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "NewGame|Spawner", meta = (WorldContext = "WorldContextObject")) static ANewGameCharacterSpawnerActor* GetSpawnerActor(UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 当前关卡中首个本类 Actor（同 GetActorOfClass）

---

### Function `GetSpawnerLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="NewGame|Spawner" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `OutLocation` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "NewGame|Spawner", meta = (WorldContext = "WorldContextObject")) static bool GetSpawnerLocation(UObject* WorldContextObject, FVector& OutLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 写入 Spawner 世界坐标；成功返回 true，失败时 OutLocation 置零并返回 false

---
