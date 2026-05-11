# `struct` `FTeamBaseInformation`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 基地信息

## Blueprint-exposed variables

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = INDEX_NONE;` |

**Source comments:**

> 阵营ID 如果指定那么固定阵营会使用这个基地 不指定则随机

---

### Property `TeamBasePoint`

| Field | Details |
|------|------|
| C++ type | TArray<[FTeamBasePoint](WorldBattleStruct__FTeamBasePoint.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTeamBasePoint> TeamBasePoint;` |

**Source comments:**

> 此基地的出生点和移动路径

---

### Property `GunTurretPoint`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> GunTurretPoint;` |

**Source comments:**

> 此基地的炮塔位置坐标

---

### Property `CrystalPoint`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform CrystalPoint;` |

**Source comments:**

> 此基地的水晶坐标

---

### Property `MedicalCenter`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> MedicalCenter;` |

**Source comments:**

> 此基地的医疗点位置

---

### Property `MedicalAwait`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> MedicalAwait;` |

**Source comments:**

> 此基地的医师待机位置

---
