# `struct` `FEastRimWorldGameplayEffectContext`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldGameplayEffectContext.h`

---

## 功能说明（来自头文件注释）

> 项目扩展的GameplayEffect上下文：命中位置/方向、目标、发起者GUID与阵营、技能ID及效果提示文本等

## 蓝图暴露变量

### 属性 `CartridgeID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 CartridgeID = -1;` |

**说明:**

> ID to allow the identification of multiple bullets that were part of the same cartridge

---

### 属性 `HitLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector HitLocation = FVector::ZeroVector;` |

**说明:**

> 碰撞点

---

### 属性 `Direction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector Direction = FVector::ZeroVector;` |

**说明:**

> 方向

---

### 属性 `Target`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TWeakObjectPtr<AActor> Target;` |

**说明:**

> 目标

---

### 属性 `InstigatorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FGuid InstigatorGuid;` |

**说明:**

> 发起者GUID

---

### 属性 `InstigatorTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 InstigatorTeamID = 255;` |

**说明:**

> 发起者team

---

### 属性 `BattlefieldRolesType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattlefieldRolesType](../Struct/CommonEnum__EBattlefieldRolesType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EBattlefieldRolesType BattlefieldRolesType = EBattlefieldRolesType::Hero;` |

**说明:**

> 发起者的类型

---

### 属性 `Parameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float Parameter = 0.f;` |

**说明:**

> 额外的参数 1.控制时长

---

### 属性 `AbilitySourceObject`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<const UObject>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TWeakObjectPtr<const UObject> AbilitySourceObject;` |

**说明:**

> Ability Source object (should implement IEastRimWorldAbilitySourceInterface). NOT replicated currently

---

### 属性 `GameplayEffectTipText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FText GameplayEffectTipText;` |

**说明:**

> 游戏效果提示文本，经SetGameplayEffectTipText/GetGameplayEffectTipText读写

---
