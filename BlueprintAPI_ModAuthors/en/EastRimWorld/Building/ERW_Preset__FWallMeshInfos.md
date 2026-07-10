# `struct` `FWallMeshInfos`

**Source header:** `EastRimWorld/Building/ERW_Preset.h`

---

## Functional description (from header comments)

> 墙的模型信息

## Blueprint-exposed variables

### Property `Infos`

| Field | Details |
|------|------|
| C++ type | TMap<UStaticMeshComponent* , [FWallMeshData](ERW_Preset__FWallMeshData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , Transient) TMap<UStaticMeshComponent* , FWallMeshData> Infos;` |

**Notes:**

> TMap<墙的模型组件 , 墙的数据>（组件作 map key，与 FUObjectData 同类最危险形态：GC 不置空 map key 指针）
> 标 Transient 防止序列化悬空 key 致崩；当前非 SaveGame，防御性

---
