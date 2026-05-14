# `class` `UERW_DoorCollisionComponent`

**Source header:** `EastRimWorld/Components/ERW_DoorCollisionComponent.h`

---

## Functional description (from header comments)

> 门的碰撞管理组件

## Blueprint-exposed variables

### Property `DoorCollision`

| Field | Details |
|------|------|
| C++ type | `UBoxComponent*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) UBoxComponent* DoorCollision { nullptr };` |

**Source comments:**

> 门的碰撞体

---

### Property `DoorState`

| Field | Details |
|------|------|
| C++ type | `EDoorState` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EDoorState DoorState { EDoorState::Closed };` |

**Source comments:**

> 门的开关状态

---

### Property `OverlappingCharacterNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 OverlappingCharacterNum { 0 };` |

**Source comments:**

> 碰撞体碰到的角色数量

---

### Property `AnimPosition`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float AnimPosition { 0.f };` |

**Source comments:**

> 门动画播放位置

---

## Blueprint-exposed functions

### Function `OnLoadData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SaveData` | const [FDoorCollisionSaveData](ERW_DoorCollisionComponent__FDoorCollisionSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnLoadData(const FDoorCollisionSaveData& SaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读取数据

---

### Function `InitDoorCollision`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Collision` | `UBoxComponent*` |
| `Offset` | `const FVector&` |
| `Extent` | `const FVector&` |
| `CollisionProfileName` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitDoorCollision(UBoxComponent* Collision , const FVector& Offset , const FVector& Extent , const FName& CollisionProfileName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化碰撞体

---

### Function `UpdateOverlappingNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Delta` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateOverlappingNum(int32 Delta);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新碰到的角色数量

---

### Function `SetDoorState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `State` | `EDoorState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetDoorState(EDoorState State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置门的开光状态

---

### Function `SetAnimPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Position` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAnimPosition(float Position);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置门动画播放位置

---
