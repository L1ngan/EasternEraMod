# `struct` `FEnergyGridData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 能源相关信息

## Blueprint-exposed variables

### Property `GridGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FGuid GridGuid;` |

**Source comments:**

> 能源网唯一ID

---

### Property `TransmissionBuildings`

| Field | Details |
|------|------|
| C++ type | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> TransmissionBuildings;` |

**Source comments:**

> 传输建筑物

---

### Property `EnergyStorageBuildings`

| Field | Details |
|------|------|
| C++ type | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> EnergyStorageBuildings;` |

**Source comments:**

> 储能建筑物

---

### Property `ConsumeBuildings`

| Field | Details |
|------|------|
| C++ type | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> ConsumeBuildings;` |

**Source comments:**

> 消耗建筑物

---

### Property `ControlBuildings`

| Field | Details |
|------|------|
| C++ type | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> ControlBuildings;` |

**Source comments:**

> 控制建筑物

---

### Property `GenerateEnergyBuildings`

| Field | Details |
|------|------|
| C++ type | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<ABuildingActorBase*> GenerateEnergyBuildings;` |

**Source comments:**

> 产生能源建筑物

---

### Property `EnergyGridState`

| Field | Details |
|------|------|
| C++ type | `EEnergyGridState` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EEnergyGridState EnergyGridState = EEnergyGridState::Ununited;` |

**Source comments:**

> 能源网的状态

---

### Property `MaxEnergyStorage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MaxEnergyStorage = 0.f;` |

**Source comments:**

> 能源网的总储能

---

### Property `CurEnergyStorage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float CurEnergyStorage = 0.f;` |

**Source comments:**

> 能源网的当前储能

---

### Property `GenerateEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float GenerateEnergy = 0.f;` |

**Source comments:**

> 生产能源

---

### Property `ConsumeEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float ConsumeEnergy = 0.f;` |

**Source comments:**

> 消耗能源

---
