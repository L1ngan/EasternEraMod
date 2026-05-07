// Copyright Epic Games, Inc. All Rights Reserved.

#include "EastRimWorldGameplayTags.h"

#include "Engine/EngineTypes.h"
#include "GameplayTagsManager.h"

namespace EastRimWorldGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "Ability failed to activate because its owner is dead.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cooldown, "Ability.ActivateFail.Cooldown", "Ability failed to activate because it is on cool down.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cost, "Ability.ActivateFail.Cost", "Ability failed to activate because it did not pass the cost checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsBlocked, "Ability.ActivateFail.TagsBlocked", "Ability failed to activate because tags are blocking it.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsMissing, "Ability.ActivateFail.TagsMissing", "Ability failed to activate because tags are missing.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "Ability failed to activate because of its activation group.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Behavior_SurvivesDeath, "Ability.Behavior.SurvivesDeath", "An ability with this type tag should not be canceled due to death.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action, "Ability.Action","动作能力总标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_Pick, "Ability.Action.Pick","拿起.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_EatSit, "Ability.Action.Eat_Sit","坐着吃东西.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_EatStand, "Ability.Action.Eat_Stand","站着吃东西");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_Find, "Ability.Action.Find","搜寻目标");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_Move, "Ability.Action.Move","移动");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_UseCorpse, "Ability.Action.UseCorpse","操作尸体");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_Practice, "Ability.Action.Practice","修炼");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_RobotRecovery, "Ability.Action.RobotRecovery","机关人正在恢复");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Action_KnockDown, "Ability.Action.KnockDown","击倒行为");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_MoveState_Irremovability, "Ability.MoveState.Irremovability","行走状态：无法移动");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Skill_GeneralAbility, "Ability.Skill.GeneralAbility","主动技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Skill_PassiveAbility, "Ability.Skill.PassiveAbility","被动技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Skill_ChannelAbility, "Ability.Skill.ChannelAbility","引导技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Skill_ToggleAbility, "Ability.Skill.ToggleAbility","开关类技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Skill_ActivateAbility, "Ability.Skill.ActivateAbility","激活类技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Projectile, "Ability.Projectile","投射物父标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ProjectileType, "Ability.ProjectileType","投射物父标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_SKill_PackUpWeapon, "Ability.SKill.PackUpWeapon","收起武器");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_SKill_HandWeapon, "Ability.SKill.HandWeapon","拿起武器");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_StratagemAbility_Test, "Ability.StratagemAbility.Test","战略技能测试");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_AttackType_NormalAttack, "Ability.AttackType.NormalAttack","普通攻击");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_AttackType_SkillAttack, "Ability.AttackType.SkillAttack","技能攻击");

	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Death, "GameplayEvent.Death", "Event that fires on death. This event only fires on the server.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Reset, "GameplayEvent.Reset", "Event that fires once a player reset is executed.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_RequestReset, "GameplayEvent.RequestReset", "Event to request a player's pawn to be instantly replaced with a new one at a valid spawn location.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_OnHit, "GameplayEvent.OnHit", "受到攻击，无论是否受到伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_OnDamage, "GameplayEvent.OnDamage", "受到伤害，会携带伤害数据");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_CriticalStrike, "GameplayEvent.CriticalStrike", "打出暴击");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_OnHitHard, "GameplayEvent.OnHitHard", "受到暴击伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_AttackWasDodged, "GameplayEvent.AttackWasDodged", "攻击被闪避");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_OnDodge, "GameplayEvent.OnDodge", "闪避攻击");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Damage, "SetByCaller.Damage", "SetByCaller tag used by damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Heal, "SetByCaller.Heal", "SetByCaller tag used by healing gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CoolDown, "SetByCaller.CoolDown", "技能cd父标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CoolDown_ChangeWeapon, "SetByCaller.CoolDown.ChangeWeapon", "武器切换的冷却");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_MinAttack, "SetByCaller.Equipment.MinAttack", "SetByCaller tag used by minimum attack gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_MaxAttack, "SetByCaller.Equipment.MaxAttack", "SetByCaller tag used by maximum attack gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_CharacterAttackFrequency, "SetByCaller.Equipment.CharacterAttackFrequency", "SetByCaller tag used by character attack frequency gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_WeaponAttackFrequency, "SetByCaller.Equipment.WeaponAttackFrequency", "SetByCaller tag used by weapon attack frequency gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_AttackRange, "SetByCaller.Equipment.AttackRange", "SetByCaller tag used by attack range gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_AttackAccuracy, "SetByCaller.Equipment.AttackAccuracy", "SetByCaller tag used by character attack accuracy gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_PierceDamage, "SetByCaller.Equipment.PierceDamage", "SetByCaller tag used by pierce damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_SlashDamage, "SetByCaller.Equipment.SlashDamage", "SetByCaller tag used by slash damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_BluntDamage, "SetByCaller.Equipment.BluntDamage", "SetByCaller tag used by blunt damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_PoisonDamage, "SetByCaller.Equipment.PoisonDamage", "SetByCaller tag used by poison damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_TrueQiDamage, "SetByCaller.Equipment.TrueQiDamage", "SetByCaller tag used by True Qi damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_PierceCritical, "SetByCaller.Equipment.PierceCritical", "SetByCaller tag used by pierce critical gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_SlashCritical, "SetByCaller.Equipment.SlashCritical", "SetByCaller tag used by slash critical gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_BluntCritical, "SetByCaller.Equipment.BluntCritical", "SetByCaller tag used by blunt critical gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_PierceResistance, "SetByCaller.Equipment.PierceResistance", "SetByCaller tag used by pierce resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_SlashResistance, "SetByCaller.Equipment.SlashResistance", "SetByCaller tag used by slash resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_BluntResistance, "SetByCaller.Equipment.BluntResistance", "SetByCaller tag used by blunt resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_PoisonResistance, "SetByCaller.Equipment.PoisonResistance", "SetByCaller tag used by poison resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_TrueQiResistance, "SetByCaller.Equipment.TrueQiResistance", "SetByCaller tag used by True Qi resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_Recharging, "SetByCaller.Equipment.Recharging", "SetByCaller tag used by recharging gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_InternalStrength, "SetByCaller.Equipment.InternalStrength", "SetByCaller tag used by internal strength gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_Stiffness, "SetByCaller.Equipment.Stiffness", "SetByCaller tag used by stiffness gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_KnockBack, "SetByCaller.Equipment.KnockBack", "SetByCaller tag used by knockback gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_KnockDown, "SetByCaller.Equipment.KnockDown", "SetByCaller tag used by knockdown gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_KnockUp, "SetByCaller.Equipment.KnockUp", "SetByCaller tag used by knockup gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_Dodge, "SetByCaller.Equipment.Dodge", "SetByCaller tag used by dodge gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_StiffnessResistance, "SetByCaller.Equipment.StiffnessResistance", "SetByCaller tag used by stiffness resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_KnockBackResistance, "SetByCaller.Equipment.KnockBackResistance", "SetByCaller tag used by knockback resistance gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Equipment_KnockDownResistance, "SetByCaller.Equipment.KnockDownResistance", "SetByCaller tag used by knockdown resistance gameplay effects.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_Health, "SetByCaller.CharacterState.Health", "角色当前的生命值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_NutritionValue, "SetByCaller.CharacterState.NutritionValue", "角色当前的营养值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_NutritionValueReduceSpeed, "SetByCaller.CharacterState.NutritionValueReduceSpeed", "角色当前的营养值减小速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_NutritionValueReduceSpeedPercent, "SetByCaller.CharacterState.NutritionValueReduceSpeedPercent", "角色当前的营养值减小速度百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_NutritionValueIncreaseSpeed, "SetByCaller.CharacterState.NutritionValueIncreaseSpeed", "角色当前的营养值增加速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_NutritionValueIncreaseSpeedPercent, "SetByCaller.CharacterState.NutritionValueIncreaseSpeedPercent", "角色当前的营养值增加速度百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_TiredValue, "SetByCaller.CharacterState.TiredValue", "角色当前的疲劳值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_TiredValueReduceSpeed, "SetByCaller.CharacterState.TiredValueReduceSpeed", "角色当前的疲劳值减小速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_TiredValueReduceSpeedPercent, "SetByCaller.CharacterState.TiredValueReduceSpeedPercent", "角色当前的疲劳值减小速度百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_TiredValueIncreaseSpeed, "SetByCaller.CharacterState.TiredValueIncreaseSpeed", "角色当前的疲劳值增加速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_TiredValueIncreaseSpeedPercent, "SetByCaller.CharacterState.TiredValueIncreaseSpeedPercent", "角色当前的疲劳值增加速度百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_HappyValue, "SetByCaller.CharacterState.HappyValue", "角色当前的娱乐值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_HappyValueReduceSpeed, "SetByCaller.CharacterState.HappyValueReduceSpeed", "角色当前的娱乐值减小速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_HappyValueReduceSpeedPercent, "SetByCaller.CharacterState.HappyValueReduceSpeedPercent", "角色当前的娱乐值减小速度百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_HappyValueIncreaseSpeed, "SetByCaller.CharacterState.HappyValueIncreaseSpeed", "角色当前的娱乐值增加速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_HappyValueIncreaseSpeedPercent, "SetByCaller.CharacterState.HappyValueIncreaseSpeedPercent", "角色当前的娱乐值增加速度百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_MoodValue, "SetByCaller.CharacterState.MoodValue", "角色当前的心情值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_MoodTargetValue, "SetByCaller.CharacterState.MoodTargetValue", "角色目标心情值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_MoveSpeed, "SetByCaller.CharacterState.MoveSpeed", "角色移动速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_RunSpeed, "SetByCaller.CharacterState.RunSpeed", "角色奔跑速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_BreakDownThresholdChangeValue, "SetByCaller.CharacterState.BreakDownThresholdChangeValue", "角色崩溃阈值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_Rot, "SetByCaller.CharacterState.Rot", "腐蚀值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_Inspiration, "SetByCaller.CharacterState.Inspiration", "感悟值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_BaseHealingRate, "SetByCaller.CharacterState.BaseHealingRate", "基础治疗速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_KnockDownValue, "SetByCaller.CharacterState.KnockDownValue", "击倒值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterState_MaxKnockDownValue, "SetByCaller.CharacterState.MaxKnockDownValue", "最大击倒值");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_CombatExperience, "SetByCaller.GrowUp.CombatExperience", "战斗等级经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_ConstructionExperience, "SetByCaller.GrowUp.ConstructionExperience", "建造等级经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_MiningExperience, "SetByCaller.GrowUp.MiningExperience", "采矿等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_CookingExperience, "SetByCaller.GrowUp.CookingExperience", "烹饪等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_FarmingExperience, "SetByCaller.GrowUp.FarmingExperience", "农业等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_AnimalExperience, "SetByCaller.GrowUp.AnimalExperience", "动物等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_MakeExperience, "SetByCaller.GrowUp.MakeExperience", "制造等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_ArtExperience, "SetByCaller.GrowUp.ArtExperience", "艺术等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_CureExperience, "SetByCaller.GrowUp.CureExperience", "医疗等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_SocialContactExperience, "SetByCaller.GrowUp.SocialContactExperience", "社交等级经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_IntelligenceExperience, "SetByCaller.GrowUp.IntelligenceExperience", "智力等级经验");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_DanTianExperience, "SetByCaller.GrowUp.DanTianExperience", "丹田经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_YinExperience, "SetByCaller.GrowUp.YinExperience", "阴性武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_NeutralExperience, "SetByCaller.GrowUp.NeutralExperience", "中正武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_PositiveExperience, "SetByCaller.GrowUp.PositiveExperience", "阳性武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_LightSkillExperience, "SetByCaller.GrowUp.LightSkillExperience", "轻功武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_HardSkillExperience, "SetByCaller.GrowUp.HardSkillExperience", "硬功武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_InternalStrengthExperience, "SetByCaller.GrowUp.InternalStrengthExperience", "内劲武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_BladeStabsExperience, "SetByCaller.GrowUp.BladeStabsExperience", "刃刺武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_SpearAndHalberdExperience, "SetByCaller.GrowUp.SpearAndHalberdExperience", "枪戟武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_SwordsExperience, "SetByCaller.GrowUp.SwordsExperience", "刀剑武学经验");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_AxeClubsExperience, "SetByCaller.GrowUp.AxeClubsExperience", "斧棒武学经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_FistsAndPalmsExperience, "SetByCaller.GrowUp.FistsAndPalmsExperience", "拳掌武学经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_HammersAndMacesExperience, "SetByCaller.GrowUp.HammersAndMacesExperience", "锤锏武学经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_HiddenWeaponsExperience, "SetByCaller.GrowUp.HiddenWeaponsExperience", "暗器武学经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GrowUp_LongRangeExperience, "SetByCaller.GrowUp.LongRangeExperience", "远程武学经验");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Comprehension, "SetByCaller.Comprehension", "悟性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Aptitude, "SetByCaller.Aptitude", "资质");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CharacterAttackFrequency, "SetByCaller.CharacterAttackFrequency", "角色攻击频率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_WeaponAttackFrequency, "SetByCaller.WeaponAttackFrequency", "武器攻击频率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AttackRange, "SetByCaller.AttackRange", "攻击射程");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AttackAccuracy, "SetByCaller.AttackAccuracy", "命中");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Dodge, "SetByCaller.Dodge", "闪避");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PierceIncrease, "SetByCaller.PierceIncrease", "穿刺增幅");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PierceDamage, "SetByCaller.PierceDamage", "穿刺伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SlashIncrease, "SetByCaller.SlashIncrease", "挥砍增幅");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SlashDamage, "SetByCaller.SlashDamage", "挥砍伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BluntIncrease, "SetByCaller.BluntIncrease", "钝击增幅");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BluntDamage, "SetByCaller.BluntDamage", "钝击伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SubjoinPoisonAttack, "SetByCaller.SubjoinPoisonAttack", "毒素附伤");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PoisonIncrease, "SetByCaller.PoisonIncrease", "毒素增幅");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PoisonDamage, "SetByCaller.PoisonDamage", "毒素伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SubjoinTrueQiAttack, "SetByCaller.SubjoinTrueQiAttack", "真气附伤");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_TrueQiIncrease, "SetByCaller.TrueQiIncrease", "真气增幅");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_TrueQiDamage, "SetByCaller.TrueQiDamage", "真气伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PierceCritical, "SetByCaller.PierceCritical", "穿刺暴击");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PierceCriticalDamage, "SetByCaller.PierceCriticalDamage", "穿刺暴击伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SlashCritical, "SetByCaller.SlashCritical", "挥砍暴击");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SlashCriticalDamage, "SetByCaller.SlashCriticalDamage", "挥砍暴击伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BluntCritical, "SetByCaller.BluntCritical", "钝击暴击");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BluntCriticalDamage, "SetByCaller.BluntCriticalDamage", "钝击暴击伤害");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PierceResistance, "SetByCaller.PierceResistance", "穿刺抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SlashResistance, "SetByCaller.SlashResistance", "挥砍抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BluntResistance, "SetByCaller.BluntResistance", "钝击抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PoisonResistance, "SetByCaller.PoisonResistance", "毒素抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_TrueQiResistance, "SetByCaller.TrueQiResistance", "真气抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_KnockBack, "SetByCaller.KnockBack", "击退点数");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_KnockDown, "SetByCaller.KnockDown", "倒地点数");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_KnockUp, "SetByCaller.KnockUp", "击飞点数");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_KnockBackResistance, "SetByCaller.KnockBackResistance", "击退抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_KnockDownResistance, "SetByCaller.KnockDownResistance", "倒地抗性");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ResistanceSupplement, "SetByCaller.ResistanceSupplement", "伤害计算抗性值修正");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CriticalStrikeMinValue, "SetByCaller.CriticalStrikeMinValue", "暴击计算修正最小值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CriticalStrikeMaxValue, "SetByCaller.CriticalStrikeMaxValue", "暴击计算修正最大值");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_GlobalExperienceBonus, "SetByCaller.GlobalExperienceBonus", "全局技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_OrdinaryWorkingSpeed, "SetByCaller.OrdinaryWorkingSpeed", "全局工作速度加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_FarmingLevel, "SetByCaller.FarmingLevel", "务农技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_FarmingExperienceBonus, "SetByCaller.FarmingExperienceBonus", "务农技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ConstructionLevel, "SetByCaller.ConstructionLevel", "建造技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ConstructionExperienceBonus, "SetByCaller.ConstructionExperienceBonus", "建造技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CombatLevel, "SetByCaller.CombatLevel", "战斗技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CombatExperienceBonus, "SetByCaller.CombatExperienceBonus", "战斗技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MiningLevel, "SetByCaller.MiningLevel", "挖掘技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MiningExperienceBonus, "SetByCaller.MiningExperienceBonus", "挖掘技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CookingLevel, "SetByCaller.CookingLevel", "烹饪技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CookingExperienceBonus, "SetByCaller.CookingExperienceBonus", "烹饪技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AnimalLevel, "SetByCaller.AnimalLevel", "动物技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AnimalExperienceBonus, "SetByCaller.AnimalExperienceBonus", "动物技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MakeLevel, "SetByCaller.MakeLevel", "制作技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MakeExperienceBonus, "SetByCaller.MakeExperienceBonus", "制作技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ArtLevel, "SetByCaller.ArtLevel", "艺术技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ArtExperienceBonus, "SetByCaller.ArtExperienceBonus", "艺术技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CureLevel, "SetByCaller.CureLevel", "治疗技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CureExperienceBonus, "SetByCaller.CureExperienceBonus", "治疗技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SocialContactLevel, "SetByCaller.SocialContactLevel", "社交技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SocialContactExperienceBonus, "SetByCaller.SocialContactExperienceBonus", "社交技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_IntelligenceLevel, "SetByCaller.IntelligenceLevel", "智力技能");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_IntelligenceExperienceBonus, "SetByCaller.IntelligenceExperienceBonus", "智力技能经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MiningExtraOutput, "SetByCaller.MiningExtraOutput", "采矿额外产生倍率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MiningSpeed, "SetByCaller.MiningSpeed", "采矿速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_QualityOfTreatment, "SetByCaller.QualityOfTreatment", "治疗质量");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SpeedOfTreatment, "SetByCaller.SpeedOfTreatment", "治疗速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_RateOfConstruction, "SetByCaller.RateOfConstruction", "建造速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SuccessRateOfConstruction, "SetByCaller.SuccessRateOfConstruction", "建造成功率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SuccessRateOfRepair, "SetByCaller.SuccessRateOfRepair", "修理成功率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ReadingSpeed, "SetByCaller.ReadingSpeed", "阅读速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PlantsHarvestExtraYield, "SetByCaller.PlantsHarvestExtraYield", "植物的收获额外产量");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PlantingSpeed, "SetByCaller.PlantingSpeed", "种植速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ForagingAmount, "SetByCaller.ForagingAmount", "觅食量");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CookingSpeed, "SetByCaller.CookingSpeed", "烹饪速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CookingToxicityProbability, "SetByCaller.CookingToxicityProbability", "烹饪有毒率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SlaughterSpeed, "SetByCaller.SlaughterSpeed", "屠宰速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ExtraSlaughterYield, "SetByCaller.ExtraSlaughterYield", "屠宰额外产量");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_DrugMakingSpeed, "SetByCaller.DrugMakingSpeed", "制药速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BrewingSpeed, "SetByCaller.BrewingSpeed", "酿酒速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AnimalCollectionSuppliesExtraOutput, "SetByCaller.AnimalCollectionSuppliesExtraOutput", "动物收集物资额外产出");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AnimalCollectionSuppliesSpeed, "SetByCaller.AnimalCollectionSuppliesSpeed", "动物收集物资速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_MeltingSpeed, "SetByCaller.MeltingSpeed", "熔炼速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_HuntingCover, "SetByCaller.HuntingCover", "狩猎隐蔽率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ResearchRate, "SetByCaller.ResearchRate", "研究速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SurgerySpeed, "SetByCaller.SurgerySpeed", "手术速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SurgerySuccessRate, "SetByCaller.SurgerySuccessRate", "手术成功率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_FarmingExtraOutput, "SetByCaller.FarmingExtraOutput", "务农额外产出");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_FarmingSpeed, "SetByCaller.FarmingSpeed", "务农速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_CollectionSuccessRate, "SetByCaller.CollectionSuccessRate", "采集成功率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_TamingProbability, "SetByCaller.TamingProbability", "驯服几率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_TrainingProbability, "SetByCaller.TrainingProbability", "训练几率");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ArtProductionSpeed, "SetByCaller.ArtProductionSpeed", "艺术制造速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ManufacturingSpeed, "SetByCaller.ManufacturingSpeed", "制造速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SpeedOfMaintain, "SetByCaller.SpeedOfMaintain", "维修速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_DisassemblySpeed, "SetByCaller.DisassemblySpeed", "拆解速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_DisassemblyIncome, "SetByCaller.DisassemblyIncome", "拆解收益");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ObserveSpeed, "SetByCaller.ObserveSpeed", "观察速度");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_ObserveEfficiency, "SetByCaller.ObserveEfficiency", "观察效率");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_DanTianExperienceBonus, "SetByCaller.DanTianExperienceBonus", "丹田经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_YinExperienceBonus, "SetByCaller.YinExperienceBonus", "阴性武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_NeutralExperienceBonus, "SetByCaller.NeutralExperienceBonus", "中性武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_PositiveExperienceBonus, "SetByCaller.PositiveExperienceBonus", "阳性武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LightSkillExperienceBonus, "SetByCaller.LightSkillExperienceBonus", "轻功武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_HardSkillExperienceBonus, "SetByCaller.HardSkillExperienceBonus", "硬功武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_InternalStrengthExperienceBonus, "SetByCaller.InternalStrengthExperienceBonus", "内劲武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_BladeStabsExperienceBonus, "SetByCaller.BladeStabsExperienceBonus", "刃刺武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SpearAndHalberdExperienceBonus, "SetByCaller.SpearAndHalberdExperienceBonus", "枪戟武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_SwordsExperienceBonus, "SetByCaller.SwordsExperienceBonus", "刀剑武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_AxeClubsExperienceBonus, "SetByCaller.AxeClubsExperienceBonus", "斧棒武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_FistsAndPalmsExperienceBonus, "SetByCaller.FistsAndPalmsExperienceBonus", "拳掌武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_HammersAndMacesExperienceBonus, "SetByCaller.HammersAndMacesExperienceBonus", "锤锏武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_HiddenWeaponsExperienceBonus, "SetByCaller.HiddenWeaponsExperienceBonus", "暗器武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LongRangeExperienceBonus, "SetByCaller.LongRangeExperienceBonus", "远程武学经验加成");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_InjuryOrgan, "SetByCaller.InjuryOrgan", "伤害部位");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_DamagePercentage, "SetByCaller.DamagePercentage", "部位伤害百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_DamageType, "SetByCaller.DamageType", "伤害类型");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxHeadPercentage, "SetByCaller.LossMaxHeadPercentage", "部位最大头部损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxLeftEyePercentage, "SetByCaller.LossMaxLeftEyePercentage", "部位最大左眼损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxRightEyePercentage, "SetByCaller.LossMaxRightEyePercentage", "部位最大右眼损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxLeftEarPercentage, "SetByCaller.LossMaxLeftEarPercentage", "部位最大左耳损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxRightEarPercentage, "SetByCaller.LossMaxRightEarPercentage", "部位最大右耳损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxNosePercentage, "SetByCaller.LossMaxNosePercentage", "部位最大鼻子损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxMouthPercentage, "SetByCaller.LossMaxMouthPercentage", "部位最大嘴巴损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxBodyPercentage, "SetByCaller.LossMaxBodyPercentage", "部位最大身体损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxVisceraPercentage, "SetByCaller.LossMaxVisceraPercentage", "部位最大内脏损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxDantianPercentage, "SetByCaller.LossMaxDantianPercentage", "部位最大丹田损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxXiaYinPercentage, "SetByCaller.LossMaxXiaYinPercentage", "部位最大下阴损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxLeftArmPercentage, "SetByCaller.LossMaxLeftArmPercentage", "部位最大左臂损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxRightArmPercentage, "SetByCaller.LossMaxRightArmPercentage", "部位最大右臂损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxLeftLegPercentage, "SetByCaller.LossMaxLeftLegPercentage", "部位最大左腿损失百分比");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_LossMaxRightLegPercentage, "SetByCaller.LossMaxRightLegPercentage", "部位最大右腿损失百分比");

	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status, "Status", "状态父标签 .");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Crouching, "Status.Crouching", "Target is crouching.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_PlayerTeam, "Status.PlayerTeam", "是玩家阵营的.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_HasMated, "Status.HasMated", "该季节已经交配过.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Pregnant, "Status.Pregnant", "该动物已怀孕.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_AutoRunning, "Status.AutoRunning", "Target is auto-running.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death, "Status.Death", "Target has the death status.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Dying, "Status.Death.Dying", "Target has begun the death process.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Rot, "Status.Death.Rot", "死亡添加腐蚀状态");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_DanTianOpened, "Status.DanTianOpened", "已开启丹田标记");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Dead, "Status.Death.Dead", "Target has finished the death process.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_DeadTag, "Status.Death.DeadTag", "死亡Tag，目前用于GA的触发");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_SeriousInjury, "Status.Death.SeriousInjury", "重伤类型");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Combat_Armored, "Status.Combat.Armored", "霸体状态");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_InBattle, "Status.InBattle", "战斗中");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Invincibility, "Status.Invincibility", "无敌状态");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_NotBodyPart, "Status.NotBodyPart", "无身体部位只计算基础血量");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_CantPractice, "Status.CantPractice", "不能修炼状态");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_NotCauseHatred, "Status.NotCauseHatred", "不会产生仇恨");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Invincibility_NotAttack, "Status.Invincibility.NotAttack", "无敌状态且不会选为目标");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_Body, "Status.Max.Body", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_Head, "Status.Max.Head", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_LeftEye, "Status.Max.LeftEye", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_RightEye, "Status.Max.RightEye", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_LeftEar, "Status.Max.LeftEar", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_RightEar, "Status.Max.RightEar", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_Mouth, "Status.Max.Mouth", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_Viscera, "Status.Max.Viscera", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_Dantian, "Status.Max.Dantian", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_XiaYin, "Status.Max.XiaYin", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_LeftArm, "Status.Max.LeftArm", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_RightArm, "Status.Max.RightArm", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_LeftLeg, "Status.Max.LeftLeg", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_RightLeg, "Status.Max.RightLeg", "部位血量达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_DamageShield, "Status.Max.DamageShield", "罡气达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Max_Inspiration, "Status.Max.Inspiration", "感悟值达到最大");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Breakthrough, "Status.Breakthrough", "突破状态");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_KnockDown, "Status.KnockDown", "击倒");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_LowVolume10_Body, "Status.LowVolume10.Body", "躯干血量低于10%");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_LowVolume10_DamageShield, "Status.LowVolume10.DamageShield", "罡气低于10%");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_LowVolume30_Body, "Status.LowVolume30.Body", "躯干血量低于30%");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_LowVolume30_DamageShield, "Status.LowVolume30.DamageShield", "罡气低于30%");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ReleasingSkill, "Status.ReleasingSkill", "正在释放技能");
	
	//UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardAndStraight, "Status.ControlEffect.HardAndStraight", "僵直");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_BeatBack, "Status.ControlEffect.HardControl.BeatBack", "击退");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_KnockAway, "Status.ControlEffect.HardControl.KnockAway", "击倒");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_StrikeToFly, "Status.ControlEffect.HardControl.StrikeToFly", "击飞");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_Dizziness, "Status.ControlEffect.HardControl.Dizziness", "眩晕");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_SoftControl_Suppress, "Status.ControlEffect.SoftControl.Suppress", "压制");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_Traction, "Status.ControlEffect.SoftControl.Traction", "牵引");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_Traction_Target, "Status.ControlEffect.HardControl.Traction.Target", "牵引到目标");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_SoftControl_BeingRidiculed, "Status.ControlEffect.SoftControl.BeingRidiculed", "嘲讽");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_ControlEffect_HardControl_Freeze, "Status.ControlEffect.HardControl.Freeze", "冻结");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Inventory, "Inventory", "所有的物品父标签");

	// These are mapped to the movement modes inside GetMovementModeTagMap()
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Walking, "Movement.Mode.Walking", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_NavWalking, "Movement.Mode.NavWalking", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Falling, "Movement.Mode.Falling", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Swimming, "Movement.Mode.Swimming", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Flying, "Movement.Mode.Flying", "Default Character movement tag");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Status_JumpStart, "Movement.Status.JumpStart", "跳跃开始");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Status_JumpEnd, "Movement.Status.JumpEnd", "跳跃结束");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Group, "Sound.Group", "音乐分组");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Button, "Sound.Button", "按钮音效父标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Button_Click, "Sound.Button.Click", "按钮点击音效");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Building, "Sound.Button", "建筑物音效父标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Building_Construct, "Sound.Building.Construct", "建筑物建造锤子敲击音效");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Building_Click, "Sound.Building.Click", "点击建筑物音效");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Building_Click_Construct, "Sound.Building.Click.Construct", "点击建造中的建筑物音效");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Building_Click_Normal, "Sound.Building.Click.Normal", "点击正常建筑物音效");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Building_LoopPlay, "Sound.Building.LoopPlay", "建筑物循环播放");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Item, "Sound.Item", "物品的音乐父标签");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Sound_Item_Destroy, "Sound.Item.Destroy", "物品的销毁标签");
	
	// When extending EastRimWorld, you can create your own movement modes ,but you need to update GetCustomMovementModeTagMap()
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Custom, "Movement.Mode.Custom", "This is invalid and should be replaced with custom tags.  See EastRimWorldGameplayTags::CustomMovementModeTagMap.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SmartObject_AnimalTrough_Mini, "SmartObject.AnimalTrough.Mini", "动物食槽_迷你");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SmartObject_AnimalTrough_Small, "SmartObject.AnimalTrough.Small", "动物食槽_小型");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SmartObject_AnimalTrough_Normal, "SmartObject.AnimalTrough.Normal", "动物食槽_中型");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SmartObject_AnimalTrough_Big, "SmartObject.AnimalTrough.Big", "动物食槽_大型");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SmartObject_Facility, "SmartObject.Facility", "设备交互");
	// Unreal Movement Modes
	const TMap<uint8, FGameplayTag> MovementModeTagMap =
	{
		{ MOVE_Walking, Movement_Mode_Walking },
		{ MOVE_NavWalking, Movement_Mode_NavWalking },
		{ MOVE_Falling, Movement_Mode_Falling },
		{ MOVE_Swimming, Movement_Mode_Swimming },
		{ MOVE_Flying, Movement_Mode_Flying },
		{ MOVE_Custom, Movement_Mode_Custom }
	};

	// Custom Movement Modes
	const TMap<uint8, FGameplayTag> CustomMovementModeTagMap =
	{
		// Fill these in with your custom modes
	};

	FGameplayTag FindTagByString(const FString& TagString, bool bMatchPartialString)
	{
		const UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
		FGameplayTag Tag = Manager.RequestGameplayTag(FName(*TagString), false);

		if (!Tag.IsValid() && bMatchPartialString)
		{
			FGameplayTagContainer AllTags;
			Manager.RequestAllGameplayTags(AllTags, true);

			for (const FGameplayTag& TestTag : AllTags)
			{
				if (TestTag.ToString().Contains(TagString))
				{
					Tag = TestTag;
					break;
				}
			}
		}

		return Tag;
	}
}

