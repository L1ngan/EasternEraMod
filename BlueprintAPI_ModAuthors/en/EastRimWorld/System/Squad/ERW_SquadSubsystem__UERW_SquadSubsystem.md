# `class` `UERW_SquadSubsystem`

**Source header:** `EastRimWorld/System/Squad/ERW_SquadSubsystem.h`

---

## Functional description (from header comments)

> 编组子系统：统一管理所有纵队编组。
> - 场景里可有多条样条路径，入队角色先选离自己最近的样条。
> - 同一样条上：未满编组优先就近加入；都满则在该样条上开新编组，
>   新编组头点设到角色在该样条上的最近点。
> - 每帧驱动所有编组的 Tick。

## Blueprint-exposed variables

### Property `MinSquadGap`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Squad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float MinSquadGap = 1000.f;` |

**Notes:**

> 同一样条上相邻编组的最小间距(cm)。新组头点设到角色最近点后，若与已有编组过近则沿路径后让。
> 建议 ≥ Capacity*Spacing（满员纵队长度）再加余量，否则两列仍会交叠。

---

## Blueprint-exposed functions

### Function `GetSquadSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Squad" |
| Return type | [UERW_SquadSubsystem](ERW_SquadSubsystem__UERW_SquadSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Squad", meta = (WorldContext = "WorldContextObject")) static UERW_SquadSubsystem* GetSquadSubsystem(const UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 静态获取本子系统（传入任意带 World 的对象作上下文）

---

### Function `RegisterPathFromLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Squad" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Squad") void RegisterPathFromLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 扫描关卡里所有样条路径 Actor 并缓存（手动调用，仅一次）

---

### Function `JoinSquad`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Squad" |
| Return type | [UERW_SquadFormation](ERW_SquadFormation__UERW_SquadFormation.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AI` | [AEastRimWorldAIController](../../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Squad") UERW_SquadFormation* JoinSquad(AEastRimWorldAIController* AI);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 入队：先选离 AI 最近的样条；该样条上未满编组就近加入，都满则新建（头点设到角色最近点）

---

### Function `LeaveSquad`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Squad" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AI` | [AEastRimWorldAIController](../../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Squad") void LeaveSquad(AEastRimWorldAIController* AI);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 让某 AI 离开其所在编组

---
