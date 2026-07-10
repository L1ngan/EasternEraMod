# `class` `AERW_Preset`

**Source header:** `EastRimWorld/Building/ERW_Preset.h`

---

## Functional description (from header comments)

> 建筑预设Actor

## Blueprint-exposed variables

### Property `PresetComponents`

| Field | Details |
|------|------|
| C++ type | TArray<[UERW_PresetComponent](../Components/ERW_PresetComponent__UERW_PresetComponent.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<UERW_PresetComponent*> PresetComponents;` |

**Notes:**

> 建筑预设组件

---

### Property `DoorOrWindowMeshInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetMeshInfos](ERW_Preset__FPresetMeshInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FPresetMeshInfos> DoorOrWindowMeshInfos;` |

**Notes:**

> 门或者窗户对应的预设组件数据
> TMap<配置表ID , 预设模型数据集合>

---

### Property `WallMeshInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FWallMeshInfos](ERW_Preset__FWallMeshInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FWallMeshInfos> WallMeshInfos;` |

**Notes:**

> 墙的模型组件集合
> TMap<墙的配置表ID , 预设模型集合>

---

### Property `RowName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName RowName;` |

**Notes:**

> 配置表行名

---

### Property `PresetData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FPresetInfos> PresetData;` |

**Notes:**

> 建筑预设数据

---

### Property `WallPillarData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName , FPresetInfos> WallPillarData;` |

**Notes:**

> 墙接缝柱数据

---

## Blueprint-exposed functions

### Function `AddPresetData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Data` | const TArray<[FPresetData](../ERW_CommonTypes__FPresetData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPresetData(const FName& ID , const TArray<FPresetData>& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入建筑预设数据

---

### Function `AddWallPillarData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Data` | const TArray<[FPresetData](../ERW_CommonTypes__FPresetData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddWallPillarData(const FName& ID , const TArray<FPresetData>& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入墙接缝柱数据

---

### Function `WriteToDataTable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Table` | `UDataTable*` |
| `Size` | `const FIntVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void WriteToDataTable(UDataTable* Table , const FIntVector& Size);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 写入数据到配置表

---

### Function `UpdateWallMeshInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWallMeshInfos();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新墙的模型信息

---
