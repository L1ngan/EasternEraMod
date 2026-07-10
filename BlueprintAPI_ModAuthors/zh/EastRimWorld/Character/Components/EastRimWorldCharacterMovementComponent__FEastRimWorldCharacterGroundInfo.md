# `struct` `FEastRimWorldCharacterGroundInfo`

**源码头文件:** `EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent.h`

---

## 功能说明（来自头文件注释）

> FEastRimWorldCharacterGroundInfo
> Information about the ground under the character.  It only gets updated as needed.

## 蓝图暴露变量

### 属性 `GroundHitResult`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FHitResult` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FHitResult GroundHitResult;` |

**说明:**

> 地面检测的命中结果。

---

### 属性 `GroundDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float GroundDistance;` |

**说明:**

> 角色到地面的距离（厘米）。

---
