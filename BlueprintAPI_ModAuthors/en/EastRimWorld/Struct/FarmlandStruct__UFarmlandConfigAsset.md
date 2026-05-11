# `class` `UFarmlandConfigAsset`

**Source header:** `EastRimWorld/Struct/FarmlandStruct.h`

---

## Functional description (from header comments)

> 田地配置资产

## Blueprint-exposed variables

### Property `PlantWidgetId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") FName PlantWidgetId;` |

**Source comments:**

> 农田种植物信息界面id

---

### Property `DecalMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInterface> DecalMaterial;` |

**Source comments:**

> 农田材质

---

### Property `PreviewMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInterface> PreviewMaterial;` |

**Source comments:**

> 预览农田材质(跟随鼠标的预览田)

---

### Property `ExpandMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInstance>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> ExpandMaterial;` |

**Source comments:**

> 扩大农田材质

---

### Property `ReduceMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInstance>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> ReduceMaterial;` |

**Source comments:**

> 缩减农田材质

---

### Property `EdgeMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInstance>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> EdgeMaterial;` |

**Source comments:**

> 农田边线材质

---

### Property `SelectedMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInstance>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> SelectedMaterial;` |

**Source comments:**

> 选中农田材质

---

### Property `MaskGrassMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInterface> MaskGrassMaterial;` |

**Source comments:**

> 除草材质

---

### Property `MaskGrassVirtualTexture`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<URuntimeVirtualTexture>` |
| Reflection specifiers | BlueprintReadWrite, Category="Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<URuntimeVirtualTexture> MaskGrassVirtualTexture;` |

---

### Property `InformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="UI") FName InformationWidget;` |

---

### Property `ChangePlantListUI`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="UI") TSubclassOf<UUserWidget> ChangePlantListUI;` |

---

### Property `FarmlandMaterialParamName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="MaterialParam" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="MaterialParam") FName FarmlandMaterialParamName;` |

**Source comments:**

> 农田材质边缘淡化参数名称

---

### Property `FarmlandMaterialCornerParamName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="MaterialParam" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="MaterialParam") FName FarmlandMaterialCornerParamName;` |

**Source comments:**

> 农田材质内角淡化参数名称

---

### Property `MountMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mount" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Mount") TSoftObjectPtr<UStaticMesh> MountMesh;` |

**Source comments:**

> 农田土包模型

---

### Property `MountOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Mount" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Mount") float MountOffset;` |

**Source comments:**

> 农田土包偏移

---

### Property `FarmlandActorClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AEastRimWorldFarmlandActor](../Farmland/EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AEastRimWorldFarmlandActor> FarmlandActorClass;` |

---

### Property `FarmlandMaxHeightDiff`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarmlandMaxHeightDiff;` |

**Source comments:**

> 农田最大高差限制

---

### Property `LabelCylinderMaterial`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadWrite, Category="LabelCylinder" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="LabelCylinder") TSoftObjectPtr<UMaterialInterface> LabelCylinderMaterial;` |

**Source comments:**

> 四角标牌立柱材质

---

### Property `LabelCylinderMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="LabelCylinder" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="LabelCylinder") TSoftObjectPtr<UStaticMesh> LabelCylinderMesh;` |

**Source comments:**

> 四角标牌立柱模型

---

### Property `LabelCylinderSize`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="LabelCylinder" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="LabelCylinder") FVector LabelCylinderSize;` |

**Source comments:**

> 四角标牌立柱模型大小缩放

---

### Property `MaxPlantSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MaxPlantSize;` |

**Source comments:**

> 一次能拉出的农田大小限制

---

### Property `ClickSoundId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ClickSoundId;` |

**Source comments:**

> 农田点击音效id

---
