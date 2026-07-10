# `struct` `FAreaFilter`

**Source header:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## Functional description (from header comments)

> 地理过滤器：OBB 点内判定（Z 不约束），传给 GOAP 做候选目标剔除。
> 运行期临时对象，不存档。bAllowAll=true 时一切放行（通用/待修复/越区/俘虏/带队/战斗软化）。

## Blueprint-exposed variables

### Property `bAllowAll`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bAllowAll = true;` |

**Notes:**

> true=不过滤（放行一切候选）

---

### Property `BoxTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FTransform BoxTransform = FTransform::Identity;` |

**Notes:**

> 旗 Box 世界变换（含朝向旋转），来自 BuildingEffectRangeComponent

---

### Property `HalfExtent`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector HalfExtent = FVector::ZeroVector;` |

**Notes:**

> Box 半边长（世界尺度）

---
