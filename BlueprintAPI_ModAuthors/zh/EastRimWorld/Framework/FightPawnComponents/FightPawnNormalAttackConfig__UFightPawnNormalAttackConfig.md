# `class` `UFightPawnNormalAttackConfig`

**源码头文件:** `EastRimWorld/Framework/FightPawnComponents/FightPawnNormalAttackConfig.h`

---

## 功能说明（来自头文件注释）

> FightPawn普通攻击配置数据资产：把"武器类型→玩家专用普攻技能ID"解耦成可配置表，装备加载后按主武器类型查出普攻GA并授予ASC，查不到时回退到武器自带EquipmentAbility。

## 蓝图暴露变量

### 属性 `WeaponTypeToNormalAttackAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EWeaponType, FName>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|NormalAttack" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|NormalAttack") TMap<EWeaponType, FName> WeaponTypeToNormalAttackAbility;` |

**说明:**

> 武器类型 → 普攻技能ID（FName，走 GameMode->GetGameplayAbilityByID 配置表）。
> key 用 EWeaponType（Sword/Blade/Spear/Fist...），value 是普攻 GA 的配置表 ID。

---

## 蓝图暴露函数

### 函数 `GetNormalAttackAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="FightPawn|NormalAttack" |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeaponType` | `EWeaponType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FightPawn|NormalAttack") FName GetNormalAttackAbilityID(EWeaponType WeaponType) const { const FName* Found = WeaponTypeToNormalAttackAbility.Find(WeaponType); return Found ? *Found : NAME_None; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 查询某武器类型对应的普攻技能ID。查不到返回 NAME_None。

---
