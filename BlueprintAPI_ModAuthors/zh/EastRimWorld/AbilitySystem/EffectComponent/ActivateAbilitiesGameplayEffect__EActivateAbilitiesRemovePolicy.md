# `enum` `EActivateAbilitiesRemovePolicy`

**源码头文件:** `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

---

## 功能说明（来自头文件注释）

> GE移除时对所授予技能的处理策略：立即取消或等技能结束后再移除

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `CancelAbilityImmediately` |  | Active abilities are immediately canceled and the ability is removed. |
| `RemoveAbilityOnEnd` |  | Active abilities are allowed to finish, and then removed. |
