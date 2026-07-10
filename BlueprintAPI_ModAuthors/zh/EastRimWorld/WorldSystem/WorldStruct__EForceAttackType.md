# `enum` `EForceAttackType`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 攻击行为

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 未指定或无效的默认值。 |
| `AttackMyPlace` |  | 攻击自己的城市，好感度变化：-100 |
| `AttackFriendlyPlace` |  | 攻击"友善"（亲密/盟友）宗门的城市，好感度变化：-30 |
| `AttackHatefulPlace` |  | 攻击"死敌"（死敌/敌对）宗门的城市，好感度变化：+50 |
| `AttackSameJusticeTypePlace` |  | 攻击相同正义类型的城市，好感度变化：-10 |
| `AttackDisaffinityJusticeTypePlace` |  | 攻击不同正义类型的城市，好感度变化：+10 |
| `AttackBorderlands` |  | 攻击我周边5格内无主/他派城市，好感度变化：-10，距离要求：<=5格 |
| `AttackConfidantPlace` |  | 攻击"至交"宗门的城市（好感度区间[1001,1200]），好感度变化：-80 |
| `AttackTrustedPlace` |  | 攻击"信赖"宗门的城市（好感度区间[501,1000]），好感度变化：-60 |
| `AttackColdPlace` |  | 攻击"冷淡"宗门的城市（好感度区间[-500,-101]），好感度变化：+10 |
| `AttackHostilePlace` |  | 攻击"仇视"宗门的城市（好感度区间[-1000,-501]），好感度变化：+30 |
