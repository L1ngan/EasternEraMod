# `class` `UEnergySystem`

**Source header:** `EastRimWorld/System/Energy/EnergySystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OnUpdateEnergyGridData`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateEnergyGridDataDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateEnergyGridDataDelegate OnUpdateEnergyGridData;` |

---

## Blueprint-exposed functions

### Function `GetInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EnergySystem" |
| Return type | [UEnergySystem](EnergySystem__UEnergySystem.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EnergySystem") static UEnergySystem * GetInstance();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `SelectAllConsistentBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnergyGridGuid` | `FGuid` |
| `EnergyType` | `EEnergyType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SelectAllConsistentBuilding(FGuid EnergyGridGuid , EEnergyType EnergyType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据传入类型选中能量网中所有对应建筑

---

### Function `FindConnectedTransmissionBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuilding` | [ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md) * |
| `IgnoreBuilding` | [ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md) * |
| `OutBuildings` | TArray<[ABuildingActorBase](../../Building/BuildingActorBase__ABuildingActorBase.md)*> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FindConnectedTransmissionBuilding(ABuildingActorBase * InBuilding,ABuildingActorBase * IgnoreBuilding,TArray<ABuildingActorBase*> & OutBuildings);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
