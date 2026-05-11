# `struct` `FSceneTextInfo`

**Source header:** `EastRimWorld/AbilitySystem/SceneText/SceneTextStruct.h`

---

## Functional description (from header comments)

> 场景文字配置

## Blueprint-exposed variables

### Property `SceneTextType`

| Field | Details |
|------|------|
| C++ type | `ESceneTextType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ESceneTextType SceneTextType = ESceneTextType::None;` |

**Source comments:**

> 显示字体的类型

---

### Property `TextAnimationType`

| Field | Details |
|------|------|
| C++ type | `ETextAnimationType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ETextAnimationType TextAnimationType = ETextAnimationType::None;` |

**Source comments:**

> 动画类型

---

### Property `SpawnAngleRange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpawnAngleRange = 0.f;` |

**Source comments:**

> 生成角度区间

---

### Property `RandomSpawnOffset`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector2D RandomSpawnOffset = FVector2D::ZeroVector;` |

**Source comments:**

> 生成位置偏移

---

### Property `DirectionalSpawnOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DirectionalSpawnOffset = 0.0f;` |

**Source comments:**

> 生成方向偏移

---

### Property `PopSizeType`

| Field | Details |
|------|------|
| C++ type | `EPopSizeType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EPopSizeType PopSizeType = EPopSizeType::None;` |

**Source comments:**

> 弹出大小

---

### Property `bComeToStop`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bComeToStop = false;` |

**Source comments:**

> 是否停止

---

### Property `DecelerationRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DecelerationRate = 0.0f;` |

**Source comments:**

> 减速效率

---

### Property `LifeTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float LifeTime = 0.f;` |

**Source comments:**

> 持续时间

---

### Property `Speed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float Speed = 0.f;` |

**Source comments:**

> 速度

---

### Property `bShowNumber`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bShowNumber = true;` |

**Source comments:**

> 是否显示数字

---

### Property `OptionalIcon`

| Field | Details |
|------|------|
| C++ type | `UTexture2D *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UTexture2D * OptionalIcon = nullptr;` |

**Source comments:**

> 操作图标

---

### Property `IconScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float IconScale = 0.f;` |

**Source comments:**

> 图标大小

---

### Property `OptionalMessage`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText OptionalMessage;` |

**Source comments:**

> 操作信息

---

### Property `OptionalMessageSize`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float OptionalMessageSize = 10.f;` |

**Source comments:**

> 操作信息字体大小

---

### Property `PlayerTextInfo`

| Field | Details |
|------|------|
| C++ type | [FTeamTextInfo](SceneTextStruct__FTeamTextInfo.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FTeamTextInfo PlayerTextInfo;` |

**Source comments:**

> 玩家阵营文字

---

### Property `EnemyTextInfo`

| Field | Details |
|------|------|
| C++ type | [FTeamTextInfo](SceneTextStruct__FTeamTextInfo.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FTeamTextInfo EnemyTextInfo;` |

**Source comments:**

> 玩家阵营文字

---
