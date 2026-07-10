# `struct` `FAreaFilter`

**源码头文件:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## 功能说明（来自头文件注释）

> 地理过滤器：OBB 点内判定（Z 不约束），传给 GOAP 做候选目标剔除。
> 运行期临时对象，不存档。bAllowAll=true 时一切放行（通用/待修复/越区/俘虏/带队/战斗软化）。

## 蓝图暴露变量

### 属性 `bAllowAll`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bAllowAll = true;` |

**说明:**

> true=不过滤（放行一切候选）

---

### 属性 `BoxTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FTransform BoxTransform = FTransform::Identity;` |

**说明:**

> 旗 Box 世界变换（含朝向旋转），来自 BuildingEffectRangeComponent

---

### 属性 `HalfExtent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector HalfExtent = FVector::ZeroVector;` |

**说明:**

> Box 半边长（世界尺度）

---
