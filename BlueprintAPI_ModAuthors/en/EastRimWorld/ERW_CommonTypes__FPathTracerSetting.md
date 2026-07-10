# `struct` `FPathTracerSetting`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 样条线配置数据

## Blueprint-exposed variables

### Property `CornerSize`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Corners" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Corners") float CornerSize = 0.f;` |

**Notes:**

> Size of the path corners.

---

### Property `TangentsLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Corners" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Corners") float TangentsLength = 0.f;` |

**Notes:**

> Length of the spline tangents.

---

### Property `DistanceBetweenDots`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dots" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float DistanceBetweenDots = 0.f;` |

**Notes:**

> Distance between adjacent dots along the path.

---

### Property `DotsRotation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dots" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float DotsRotation = 0.f;` |

**Notes:**

> Rotation angle of the path dots.

---

### Property `DotsScaleVertical`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dots" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float DotsScaleVertical = 0.f;` |

**Notes:**

> Vertical scale of the path dots.

---

### Property `CornerDotsScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dots" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float CornerDotsScale = 0.f;` |

**Notes:**

> Scale factor of the dots at corners.

---

### Property `DashedLine`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") bool DashedLine = false;` |

**Notes:**

> Whether the path is displayed as a dashed line.

---

### Property `DashedLineFrequency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") float DashedLineFrequency = 0.f;` |

**Notes:**

> Frequency (density) of the dashed line segments.

---

### Property `DashedLineGapSize`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") float DashedLineGapSize = 0.f;` |

**Notes:**

> Gap size between dashed line segments.

---

### Property `DashedLineAnimSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") float DashedLineAnimSpeed = 0.f;` |

**Notes:**

> Animation speed of the dashed line.

---

### Property `MainMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Mesh") TSoftObjectPtr<UStaticMesh> MainMesh;` |

**Notes:**

> Main static mesh of the path (soft reference).

---

### Property `AdditionalMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main|Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Mesh") TSoftObjectPtr<UStaticMesh> AdditionalMesh;` |

**Notes:**

> Additional static mesh for the path (soft reference).

---

### Property `ManualEditMode`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ManualEditMode = false;` |

**Notes:**

> Whether manual edit mode is enabled.

---

### Property `ExactFollowingSplineMode`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ExactFollowingSplineMode = false;` |

**Notes:**

> Whether to enable exact spline-following mode.

---

### Property `ClosedLoop`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ClosedLoop = false;` |

**Notes:**

> Whether the path forms a closed loop.

---

### Property `PathType`

| Field | Details |
|------|------|
| C++ type | [EPathTracerType](ERW_Enumerations__EPathTracerType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") EPathTracerType PathType = EPathTracerType::Default;` |

**Notes:**

> Type of the path (EPathTracerType).

---

### Property `PathScale`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") FVector2D PathScale = FVector2D::ZeroVector;` |

**Notes:**

> 2D scale of the path.

---

### Property `GroundOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") float GroundOffset = 0.f;` |

**Notes:**

> Height offset of the path above the ground.

---

### Property `LimitPath`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool LimitPath = false;` |

**Notes:**

> Whether to limit the path length.

---

### Property `PathLimitLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") float PathLimitLength = 0.f;` |

**Notes:**

> Maximum path length (effective when the limit is enabled).

---

### Property `CenterOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") FVector CenterOffset = FVector::ZeroVector;` |

**Notes:**

> Offset vector of the path center.

---

### Property `ExpandedPath`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ExpandedPath = false;` |

**Notes:**

> Whether the path is expanded.

---

### Property `ExpandValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") float ExpandValue = 0.f;` |

**Notes:**

> Expansion amount of the path.

---

### Property `ExpandDirection`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Main" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ExpandDirection = false;` |

**Notes:**

> Toggle for the direction of path expansion.

---

### Property `PathColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") FLinearColor PathColor = FLinearColor::White;` |

**Notes:**

> Display color of the path.

---

### Property `PathOpacity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") float PathOpacity = 1.f;` |

**Notes:**

> Opacity of the path (0-1).

---

### Property `SetPathColorForMarks`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool SetPathColorForMarks = false;` |

**Notes:**

> Whether to also apply the path color to the start/end markers.

---

### Property `TranslucentStartAndEnd`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool TranslucentStartAndEnd = false;` |

**Notes:**

> Whether the start and end of the path use a translucent fade.

---

### Property `VisibleThroughObjects`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool VisibleThroughObjects = false;` |

**Notes:**

> Whether the path is visible through occluding objects.

---

### Property `ShadedVisibleThroughObjects`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool ShadedVisibleThroughObjects = false;` |

**Notes:**

> Whether to use shaded rendering when the path is visible through occluding objects.

---

### Property `EnableTranslucent`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool EnableTranslucent = false;` |

**Notes:**

> Whether to enable the translucent effect.

---

### Property `TranslucentStartSize`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") float TranslucentStartSize = 0.f;` |

**Notes:**

> Size of the translucent fade region at the start of the path.

---

### Property `TranslucentEndSize`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") float TranslucentEndSize = 0.f;` |

**Notes:**

> Size of the translucent fade region at the end of the path.

---

### Property `VisibleThroughObjectsShaderType`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") int32 VisibleThroughObjectsShaderType = 0;` |

**Notes:**

> Shader type index used when the path is rendered through occluding objects.

---

### Property `EnableCustomMaterial`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool EnableCustomMaterial = false;` |

**Notes:**

> Whether to enable the custom material.

---

### Property `CustomMaterial`

| Field | Details |
|------|------|
| C++ type | `UMaterialInterface*` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Material" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") UMaterialInterface* CustomMaterial = nullptr;` |

**Notes:**

> Custom material used by the path.

---

### Property `PathMarkStartClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") TSoftClassPtr<AActor> PathMarkStartClass;` |

**Notes:**

> Actor class for the path start marker (soft class reference).

---

### Property `PathMarkEndClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") TSoftClassPtr<AActor> PathMarkEndClass;` |

**Notes:**

> Actor class for the path end marker (soft class reference).

---

### Property `StartMarkRotation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float StartMarkRotation = 0.f;` |

**Notes:**

> Rotation angle of the start marker.

---

### Property `EndMarkRotation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float EndMarkRotation = 0.f;` |

**Notes:**

> Rotation angle of the end marker.

---

### Property `StartMarkScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float StartMarkScale = 0.f;` |

**Notes:**

> Scale factor of the start marker.

---

### Property `EndMarkScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float EndMarkScale = 0.f;` |

**Notes:**

> Scale factor of the end marker.

---

### Property `StartMarkFollowDirection`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") bool StartMarkFollowDirection = false;` |

**Notes:**

> Whether the start marker follows the path direction.

---

### Property `EndMarkFollowDirection`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") bool EndMarkFollowDirection = false;` |

**Notes:**

> Whether the end marker follows the path direction.

---

### Property `StartPathIndent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float StartPathIndent = 0.f;` |

**Notes:**

> Indent distance at the start of the path.

---

### Property `EndPathIndent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings|Markers" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float EndPathIndent = 0.f;` |

**Notes:**

> Indent distance at the end of the path.

---
