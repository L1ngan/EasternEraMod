# `class` `UEastRimWorldAbilityCost`

**源码头文件:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldAbilityCost.h`

---

## 功能说明（来自头文件注释）

> 技能附加消耗基类：CheckCost检查是否可支付，ApplyCost应用消耗，可配置仅命中时才扣除

## 蓝图暴露变量

### 属性 `bOnlyApplyCostOnHit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Costs) bool bOnlyApplyCostOnHit = false;` |

**说明:**

> If true, this cost should only be applied if this ability hits successfully

---
