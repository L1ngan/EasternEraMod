# 蓝图 API 类型索引（模组作者）

以下为 **每个 UCLASS / USTRUCT** 的独立文档入口（仅含蓝图暴露的成员）。

- **类型数量：** 658
- **头文件数量：** 196

**功能说明：** 每条索引下的 **功能说明** 摘自该类型在头文件中 **`UCLASS` / `USTRUCT` 声明紧上方** 的 `//` 或块注释（概括该类/结构体**做什么、负责哪块逻辑**；自动压成一行并截断）。若工程未写类型级注释，则显示占位提示；更完整的说明仍以对应 `.h` 与单页 `.md` 为准。

## 使用说明

- **覆盖范围**：`Source/EastRimWorld`、`Plugins/CreateModPlugin`、`CreateModPluginEditor`。
- **路径**：文档路径与源码模块目录对应，文件名 `{头文件名}__{类型名}.md`。
- **参数拆分**：复杂模板可能被简化；**最权威签名以对应 `.h` 为准**。
- **更新**：`python Tools/extract_blueprint_api.py`（会清空并重建 `BlueprintAPI_ModAuthors/`）

叙事索引见仓库根目录 `MOD_AUTHOR_BLUEPRINT_API.md`。

---

## `CreateModPlugin/Public/BaseDataStruct.h`

- `struct` **`FModAsset`** — [BaseDataStruct__FModAsset](CreateModPlugin/Public/BaseDataStruct__FModAsset.md)
  - **功能说明：** Mod资产
- `struct` **`FModConfig`** — [BaseDataStruct__FModConfig](CreateModPlugin/Public/BaseDataStruct__FModConfig.md)
  - **功能说明：** Mod数据表
- `struct` **`FModDataBase`** — [BaseDataStruct__FModDataBase](CreateModPlugin/Public/BaseDataStruct__FModDataBase.md)
  - **功能说明：** Mod数据表基类
- `struct` **`FModDropItemInfo`** — [BaseDataStruct__FModDropItemInfo](CreateModPlugin/Public/BaseDataStruct__FModDropItemInfo.md)
  - **功能说明：** 掉落物品信息
- `struct` **`FModDropSetConfig`** — [BaseDataStruct__FModDropSetConfig](CreateModPlugin/Public/BaseDataStruct__FModDropSetConfig.md)
  - **功能说明：** 掉落配置
- `struct` **`FModFormatText`** — [BaseDataStruct__FModFormatText](CreateModPlugin/Public/BaseDataStruct__FModFormatText.md)
  - **功能说明：** 可替换文本结构
- `struct` **`FModGameplayEffectContainer`** — [BaseDataStruct__FModGameplayEffectContainer](CreateModPlugin/Public/BaseDataStruct__FModGameplayEffectContainer.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UModInformationAsset`** — [BaseDataStruct__UModInformationAsset](CreateModPlugin/Public/BaseDataStruct__UModInformationAsset.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `CreateModPlugin/Public/BuffDataStruct.h`

- `struct` **`FModCommonBuff`** — [BuffDataStruct__FModCommonBuff](CreateModPlugin/Public/BuffDataStruct__FModCommonBuff.md)
  - **功能说明：** 通用BUFF

## `CreateModPlugin/Public/BuildDataStruct.h`

- `struct` **`FModAutoTileMeshConfigData`** — [BuildDataStruct__FModAutoTileMeshConfigData](CreateModPlugin/Public/BuildDataStruct__FModAutoTileMeshConfigData.md)
  - **功能说明：** 九宫格模型配置数据结构
- `struct` **`FModBuildData`** — [BuildDataStruct__FModBuildData](CreateModPlugin/Public/BuildDataStruct__FModBuildData.md)
  - **功能说明：** mod建筑物
- `struct` **`FModBuildLightSourceData`** — [BuildDataStruct__FModBuildLightSourceData](CreateModPlugin/Public/BuildDataStruct__FModBuildLightSourceData.md)
  - **功能说明：** 建筑光源配置数据
- `struct` **`FModBuildUIData`** — [BuildDataStruct__FModBuildUIData](CreateModPlugin/Public/BuildDataStruct__FModBuildUIData.md)
  - **功能说明：** mod建筑物UI
- `struct` **`FModGridPosition`** — [BuildDataStruct__FModGridPosition](CreateModPlugin/Public/BuildDataStruct__FModGridPosition.md)
  - **功能说明：** 格子坐标位置
- `struct` **`FModRelativeGridPoses`** — [BuildDataStruct__FModRelativeGridPoses](CreateModPlugin/Public/BuildDataStruct__FModRelativeGridPoses.md)
  - **功能说明：** 物体的相对格子坐标

## `CreateModPlugin/Public/CharacterDataStruct.h`

- `struct` **`FModAllTypeItemDrop`** — [CharacterDataStruct__FModAllTypeItemDrop](CreateModPlugin/Public/CharacterDataStruct__FModAllTypeItemDrop.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModAnimalActionAbility`** — [CharacterDataStruct__FModAnimalActionAbility](CreateModPlugin/Public/CharacterDataStruct__FModAnimalActionAbility.md)
  - **功能说明：** 动物ActionAbility配置表结构
- `struct` **`FModAnimalData`** — [CharacterDataStruct__FModAnimalData](CreateModPlugin/Public/CharacterDataStruct__FModAnimalData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModCharacterActionAbilityAnimSections`** — [CharacterDataStruct__FModCharacterActionAbilityAnimSections](CreateModPlugin/Public/CharacterDataStruct__FModCharacterActionAbilityAnimSections.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModHumanData`** — [CharacterDataStruct__FModHumanData](CreateModPlugin/Public/CharacterDataStruct__FModHumanData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModIDs`** — [CharacterDataStruct__FModIDs](CreateModPlugin/Public/CharacterDataStruct__FModIDs.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModOutputData`** — [CharacterDataStruct__FModOutputData](CreateModPlugin/Public/CharacterDataStruct__FModOutputData.md)
  - **功能说明：** 资源产出数据
- `struct` **`FModOutputDatas`** — [CharacterDataStruct__FModOutputDatas](CreateModPlugin/Public/CharacterDataStruct__FModOutputDatas.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `CreateModPlugin/Public/CommonUIStruct.h`

- `struct` **`FModCommonUIConfig`** — [CommonUIStruct__FModCommonUIConfig](CreateModPlugin/Public/CommonUIStruct__FModCommonUIConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModModuleUIConfig`** — [CommonUIStruct__FModModuleUIConfig](CreateModPlugin/Public/CommonUIStruct__FModModuleUIConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModTabInfo`** — [CommonUIStruct__FModTabInfo](CreateModPlugin/Public/CommonUIStruct__FModTabInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `CreateModPlugin/Public/EquipmentDataStruct.h`

- `struct` **`FModCharacterApparel`** — [EquipmentDataStruct__FModCharacterApparel](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterApparel.md)
  - **功能说明：** Mod 防具结构
- `struct` **`FModCharacterEquipment`** — [EquipmentDataStruct__FModCharacterEquipment](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterEquipment.md)
  - **功能说明：** 角色装备
- `struct` **`FModCharacterTool`** — [EquipmentDataStruct__FModCharacterTool](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterTool.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModCharacterWeapon`** — [EquipmentDataStruct__FModCharacterWeapon](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterWeapon.md)
  - **功能说明：** Mod 武器结构
- `struct` **`FModEquipmentAttribute`** — [EquipmentDataStruct__FModEquipmentAttribute](CreateModPlugin/Public/EquipmentDataStruct__FModEquipmentAttribute.md)
  - **功能说明：** Mod 装备属性结构
- `struct` **`FModEquipmentQualityRange`** — [EquipmentDataStruct__FModEquipmentQualityRange](CreateModPlugin/Public/EquipmentDataStruct__FModEquipmentQualityRange.md)
  - **功能说明：** Mod 装备品质区间结构
- `struct` **`FModFabricateEquipmentData`** — [EquipmentDataStruct__FModFabricateEquipmentData](CreateModPlugin/Public/EquipmentDataStruct__FModFabricateEquipmentData.md)
  - **功能说明：** Mod 制造装备数据结构
- `struct` **`FModFormulaData`** — [EquipmentDataStruct__FModFormulaData](CreateModPlugin/Public/EquipmentDataStruct__FModFormulaData.md)
  - **功能说明：** Mod 配方数据结构
- `struct` **`FModGenerateEquipmentData`** — [EquipmentDataStruct__FModGenerateEquipmentData](CreateModPlugin/Public/EquipmentDataStruct__FModGenerateEquipmentData.md)
  - **功能说明：** Mod 生成装备数据结构

## `CreateModPlugin/Public/GenerationMonster.h`

- `struct` **`FModGenerationData`** — [GenerationMonster__FModGenerationData](CreateModPlugin/Public/GenerationMonster__FModGenerationData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModGenerationProbabilityInfluence`** — [GenerationMonster__FModGenerationProbabilityInfluence](CreateModPlugin/Public/GenerationMonster__FModGenerationProbabilityInfluence.md)
  - **功能说明：** 生成的概率影响
- `struct` **`FModGenerationRuleData`** — [GenerationMonster__FModGenerationRuleData](CreateModPlugin/Public/GenerationMonster__FModGenerationRuleData.md)
  - **功能说明：** 生成的规则
- `struct` **`FModGenerationSetData`** — [GenerationMonster__FModGenerationSetData](CreateModPlugin/Public/GenerationMonster__FModGenerationSetData.md)
  - **功能说明：** 生成的信息
- `struct` **`FModMonsterGenerationConfig`** — [GenerationMonster__FModMonsterGenerationConfig](CreateModPlugin/Public/GenerationMonster__FModMonsterGenerationConfig.md)
  - **功能说明：** 怪物生成
- `struct` **`FModNameIDArray`** — [GenerationMonster__FModNameIDArray](CreateModPlugin/Public/GenerationMonster__FModNameIDArray.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModThreatPoolInfo`** — [GenerationMonster__FModThreatPoolInfo](CreateModPlugin/Public/GenerationMonster__FModThreatPoolInfo.md)
  - **功能说明：** 威胁池信息

## `CreateModPlugin/Public/ItemDataStruct.h`

- `struct` **`FModEfficiencyByTemperature`** — [ItemDataStruct__FModEfficiencyByTemperature](CreateModPlugin/Public/ItemDataStruct__FModEfficiencyByTemperature.md)
  - **功能说明：** 温度与效率的关联 0<=T<=20 E=100% 21<=T<=40 E=50% T无范围E=0 策划直接填
- `struct` **`FModGroupCorrespondingAnim`** — [ItemDataStruct__FModGroupCorrespondingAnim](CreateModPlugin/Public/ItemDataStruct__FModGroupCorrespondingAnim.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModInventoryGeneralData`** — [ItemDataStruct__FModInventoryGeneralData](CreateModPlugin/Public/ItemDataStruct__FModInventoryGeneralData.md)
  - **功能说明：** 物品总表结构体
- `struct` **`FModInventoryItem`** — [ItemDataStruct__FModInventoryItem](CreateModPlugin/Public/ItemDataStruct__FModInventoryItem.md)
  - **功能说明：** 物品结构体
- `struct` **`FModStackModel`** — [ItemDataStruct__FModStackModel](CreateModPlugin/Public/ItemDataStruct__FModStackModel.md)
  - **功能说明：** 定义堆叠模型的结构体

## `CreateModPlugin/Public/ModNewGameStruct.h`

- `struct` **`FModCharacteristicNumWeight`** — [ModNewGameStruct__FModCharacteristicNumWeight](CreateModPlugin/Public/ModNewGameStruct__FModCharacteristicNumWeight.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UModNewGameConfigAsset`** — [ModNewGameStruct__UModNewGameConfigAsset](CreateModPlugin/Public/ModNewGameStruct__UModNewGameConfigAsset.md)
  - **功能说明：** 新游戏流程配置资产

## `CreateModPlugin/Public/TechnologyDataStruct.h`

- `struct` **`FModTechUnlockItemConigStruct`** — [TechnologyDataStruct__FModTechUnlockItemConigStruct](CreateModPlugin/Public/TechnologyDataStruct__FModTechUnlockItemConigStruct.md)
  - **功能说明：** 科技解锁物品配置表结构
- `struct` **`FModTechnologyConfigStruct`** — [TechnologyDataStruct__FModTechnologyConfigStruct](CreateModPlugin/Public/TechnologyDataStruct__FModTechnologyConfigStruct.md)
  - **功能说明：** 科技配置表结构

## `CreateModPlugin/Public/WorldDataStruct.h`

- `struct` **`FModWorldPlaceInfo`** — [WorldDataStruct__FModWorldPlaceInfo](CreateModPlugin/Public/WorldDataStruct__FModWorldPlaceInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `CreateModPluginEditor/Public/ModInfoEditorData.h`

- `struct` **`FModDependencyData`** — [ModInfoEditorData__FModDependencyData](CreateModPluginEditor/Public/ModInfoEditorData__FModDependencyData.md)
  - **功能说明：** Mod 依赖信息
- `class` **`UModInfoData`** — [ModInfoEditorData__UModInfoData](CreateModPluginEditor/Public/ModInfoEditorData__UModInfoData.md)
  - **功能说明：** Mod 信息数据类

## `EastRimWorld/AbilitySystem/Abilities/EastRimWorldAbilityCost.h`

- `class` **`UEastRimWorldAbilityCost`** — [EastRimWorldAbilityCost__UEastRimWorldAbilityCost](EastRimWorld/AbilitySystem/Abilities/EastRimWorldAbilityCost__UEastRimWorldAbilityCost.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

- `struct` **`FBuffTagInfo`** — [EastRimWorldGameplayAbility__FBuffTagInfo](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__FBuffTagInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FEastRimWorldAbilityMontageFailureMessage`** — [EastRimWorldGameplayAbility__FEastRimWorldAbilityMontageFailureMessage](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__FEastRimWorldAbilityMontageFailureMessage.md)
  - **功能说明：** Failure reason that can be used to play an animation montage when a failure occurs
- `class` **`UEastRimWorldGameplayAbility`** — [EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldCombatSet.h`

- `class` **`UEastRimWorldCombatSet`** — [EastRimWorldCombatSet__UEastRimWorldCombatSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldCombatSet__UEastRimWorldCombatSet.md)
  - **功能说明：** UEastRimWorldCombatSet Class that defines attributes that are necessary for applying damage or healing. Attribute examples include: damage, healing, attack power, and shield penetrations.

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldGrowUpSet.h`

- `class` **`UEastRimWorldGrowUpSet`** — [EastRimWorldGrowUpSet__UEastRimWorldGrowUpSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldGrowUpSet__UEastRimWorldGrowUpSet.md)
  - **功能说明：** DECLARE_MULTICAST_DELEGATE_TwoParams(FOnAddMartialArtsExperience,const FGameplayAttribute &Attribute,float /*AddValue);

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldHealthSet.h`

- `class` **`UEastRimWorldHealthSet`** — [EastRimWorldHealthSet__UEastRimWorldHealthSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldHealthSet__UEastRimWorldHealthSet.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldSocialSet.h`

- `class` **`UEastRimWorldSocialSet`** — [EastRimWorldSocialSet__UEastRimWorldSocialSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldSocialSet__UEastRimWorldSocialSet.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldWorkSet.h`

- `class` **`UEastRimWorldWorkSet`** — [EastRimWorldWorkSet__UEastRimWorldWorkSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldWorkSet__UEastRimWorldWorkSet.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent.h`

- `class` **`UEastRimWorldAbilitySystemComponent`** — [EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent](EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem.h`

- `class` **`UEastRimWorldGlobalAbilitySystem`** — [EastRimWorldGlobalAbilitySystem__UEastRimWorldGlobalAbilitySystem](EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem__UEastRimWorldGlobalAbilitySystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/GamplyCue/GameplayCueNotifyActor.h`

- `class` **`AGameplayCueNotifyActor`** — [GameplayCueNotifyActor__AGameplayCueNotifyActor](EastRimWorld/AbilitySystem/GamplyCue/GameplayCueNotifyActor__AGameplayCueNotifyActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Pool/AbilityCachePoolSystem.h`

- `class` **`UAbilityCachePoolSystem`** — [AbilityCachePoolSystem__UAbilityCachePoolSystem](EastRimWorld/AbilitySystem/Pool/AbilityCachePoolSystem__UAbilityCachePoolSystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

- `class` **`AAbilityProjectileEmitterBase`** — [AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase](EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md)
  - **功能说明：** 发射器
- `struct` **`FAllGameplayEffectSpecHandles`** — [AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles](EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Projectile/EastRimWorldProjectileBase.h`

- `class` **`AEastRimWorldProjectileBase`** — [EastRimWorldProjectileBase__AEastRimWorldProjectileBase](EastRimWorld/AbilitySystem/Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/SceneText/SceneTextActor.h`

- `class` **`ASceneTextActor`** — [SceneTextActor__ASceneTextActor](EastRimWorld/AbilitySystem/SceneText/SceneTextActor__ASceneTextActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/SceneText/SceneTextStruct.h`

- `struct` **`FSceneTextInfo`** — [SceneTextStruct__FSceneTextInfo](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__FSceneTextInfo.md)
  - **功能说明：** 场景文字配置
- `struct` **`FTeamTextInfo`** — [SceneTextStruct__FTeamTextInfo](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__FTeamTextInfo.md)
  - **功能说明：** 场景文字配置

## `EastRimWorld/AbilitySystem/Task/AsyncTaskAttributeChanged.h`

- `class` **`UAsyncTaskAttributeChanged`** — [AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged](EastRimWorld/AbilitySystem/Task/AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged.md)
  - **功能说明：** Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent. Useful to use in UI.

## `EastRimWorld/AbilitySystem/Task/AsyncTaskCooldownChanged.h`

- `class` **`UAsyncTaskCooldownChanged`** — [AsyncTaskCooldownChanged__UAsyncTaskCooldownChanged](EastRimWorld/AbilitySystem/Task/AsyncTaskCooldownChanged__UAsyncTaskCooldownChanged.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged.h`

- `class` **`UAsyncTaskEffectStackChanged`** — [AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged](EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/AbilitySystem/Task/AsyncTaskGameplayTagAddedRemoved.h`

- `class` **`UAsyncTaskGameplayTagAddedRemoved`** — [AsyncTaskGameplayTagAddedRemoved__UAsyncTaskGameplayTagAddedRemoved](EastRimWorld/AbilitySystem/Task/AsyncTaskGameplayTagAddedRemoved__UAsyncTaskGameplayTagAddedRemoved.md)
  - **功能说明：** Blueprint node to automatically register a listener for FGameplayTags added and removed. Useful to use in Blueprint/UMG.

## `EastRimWorld/AbilitySystem/Task/EastRimWorldPlayMontageAndWaitForEvent.h`

- `class` **`UEastRimWorldPlayMontageAndWaitForEvent`** — [EastRimWorldPlayMontageAndWaitForEvent__UEastRimWorldPlayMontageAndWaitForEvent](EastRimWorld/AbilitySystem/Task/EastRimWorldPlayMontageAndWaitForEvent__UEastRimWorldPlayMontageAndWaitForEvent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Actor/ERW_FightInteractableActor.h`

- `class` **`AERW_FightInteractableActor`** — [ERW_FightInteractableActor__AERW_FightInteractableActor](EastRimWorld/Actor/ERW_FightInteractableActor__AERW_FightInteractableActor.md)
  - **功能说明：** AERW_FightInteractableActor - 门派战交互物基类 宝箱、门、建筑等继承此类即可自动拥有交互能力 功能： - 自带交互范围碰撞球（蓝图可调半径） - 自动检测 FightPawn 进入/离开 - 实现 IERW_FightInteractableInterface 接口

## `EastRimWorld/Actor/NewGameCharacterSpawnerActor.h`

- `class` **`ANewGameCharacterSpawnerActor`** — [NewGameCharacterSpawnerActor__ANewGameCharacterSpawnerActor](EastRimWorld/Actor/NewGameCharacterSpawnerActor__ANewGameCharacterSpawnerActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Actor/NewGameResourceSpawnerActor.h`

- `class` **`ANewGameResourceSpawnerActor`** — [NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor](EastRimWorld/Actor/NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Animation/EastRimWorldAnimInstance.h`

- `class` **`UEastRimWorldAnimInstance`** — [EastRimWorldAnimInstance__UEastRimWorldAnimInstance](EastRimWorld/Animation/EastRimWorldAnimInstance__UEastRimWorldAnimInstance.md)
  - **功能说明：** UEastRimWorldAnimInstance The base game animation instance class used by this project.

## `EastRimWorld/Animation/Notify/AnimNotifyState_AbilityFaceTarget.h`

- `class` **`UAnimNotifyState_AbilityFaceTarget`** — [AnimNotifyState_AbilityFaceTarget__UAnimNotifyState_AbilityFaceTarget](EastRimWorld/Animation/Notify/AnimNotifyState_AbilityFaceTarget__UAnimNotifyState_AbilityFaceTarget.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Animation/Notify/AnimNotifyState_AbilityMotionWarping.h`

- `class` **`UAnimNotifyState_AbilityMotionWarping`** — [AnimNotifyState_AbilityMotionWarping__UAnimNotifyState_AbilityMotionWarping](EastRimWorld/Animation/Notify/AnimNotifyState_AbilityMotionWarping__UAnimNotifyState_AbilityMotionWarping.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Building/BuildingActorBase.h`

- `class` **`ABuildingActorBase`** — [BuildingActorBase__ABuildingActorBase](EastRimWorld/Building/BuildingActorBase__ABuildingActorBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Building/DoorNavLink.h`

- `class` **`ADoorNavLink`** — [DoorNavLink__ADoorNavLink](EastRimWorld/Building/DoorNavLink__ADoorNavLink.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Building/ERW_Preset.h`

- `class` **`AERW_Preset`** — [ERW_Preset__AERW_Preset](EastRimWorld/Building/ERW_Preset__AERW_Preset.md)
  - **功能说明：** 建筑预设Actor
- `struct` **`FPresetMeshData`** — [ERW_Preset__FPresetMeshData](EastRimWorld/Building/ERW_Preset__FPresetMeshData.md)
  - **功能说明：** 预设模型数据
- `struct` **`FPresetMeshInfos`** — [ERW_Preset__FPresetMeshInfos](EastRimWorld/Building/ERW_Preset__FPresetMeshInfos.md)
  - **功能说明：** 预设模型数据集合
- `struct` **`FWallMeshData`** — [ERW_Preset__FWallMeshData](EastRimWorld/Building/ERW_Preset__FWallMeshData.md)
  - **功能说明：** 墙的数据
- `struct` **`FWallMeshInfos`** — [ERW_Preset__FWallMeshInfos](EastRimWorld/Building/ERW_Preset__FWallMeshInfos.md)
  - **功能说明：** 墙的模型信息

## `EastRimWorld/Character/Components/AnimalCultivationComponent.h`

- `class` **`UAnimalCultivationComponent`** — [AnimalCultivationComponent__UAnimalCultivationComponent](EastRimWorld/Character/Components/AnimalCultivationComponent__UAnimalCultivationComponent.md)
  - **功能说明：** UAnimalCultivationComponent 动物修炼组件，用于处理怪物的修炼系统 包括经验获取、等级提升、行为管理、属性提升、能力添加等功能

## `EastRimWorld/Character/Components/CharacterAttributesComponent.h`

- `class` **`UCharacterAttributesComponent`** — [CharacterAttributesComponent__UCharacterAttributesComponent](EastRimWorld/Character/Components/CharacterAttributesComponent__UCharacterAttributesComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/Components/CharacterBreedingComponent.h`

- `class` **`UCharacterBreedingComponent`** — [CharacterBreedingComponent__UCharacterBreedingComponent](EastRimWorld/Character/Components/CharacterBreedingComponent__UCharacterBreedingComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/Components/CommonBuffComponent.h`

- `class` **`UCommonBuffComponent`** — [CommonBuffComponent__UCommonBuffComponent](EastRimWorld/Character/Components/CommonBuffComponent__UCommonBuffComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent.h`

- `class` **`UEastRimWorldCharacterChatComponent`** — [EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent](EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent.h`

- `struct` **`FEastRimWorldCharacterGroundInfo`** — [EastRimWorldCharacterMovementComponent__FEastRimWorldCharacterGroundInfo](EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent__FEastRimWorldCharacterGroundInfo.md)
  - **功能说明：** FEastRimWorldCharacterGroundInfo Information about the ground under the character. It only gets updated as needed.
- `class` **`UEastRimWorldCharacterMovementComponent`** — [EastRimWorldCharacterMovementComponent__UEastRimWorldCharacterMovementComponent](EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent__UEastRimWorldCharacterMovementComponent.md)
  - **功能说明：** UEastRimWorldCharacterMovementComponent The base character movement component class used by this project.

## `EastRimWorld/Character/Components/EastRimWorldGrowUpComponent.h`

- `class` **`UEastRimWorldGrowUpComponent`** — [EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent](EastRimWorld/Character/Components/EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent.md)
  - **功能说明：** UEastRimWorldGrowUpComponent An actor component used to handle anything related to GrowUp.

## `EastRimWorld/Character/Components/EastRimWorldHealthComponent.h`

- `class` **`UEastRimWorldHealthComponent`** — [EastRimWorldHealthComponent__UEastRimWorldHealthComponent](EastRimWorld/Character/Components/EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)
  - **功能说明：** UEastRimWorldHealthComponent An actor component used to handle anything related to health.

## `EastRimWorld/Character/Components/InjuryBuffComponent.h`

- `class` **`UInjuryBuffComponent`** — [InjuryBuffComponent__UInjuryBuffComponent](EastRimWorld/Character/Components/InjuryBuffComponent__UInjuryBuffComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/EastRimWorldCharacter.h`

- `class` **`AEastRimWorldCharacter`** — [EastRimWorldCharacter__AEastRimWorldCharacter](EastRimWorld/Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/EastRimWorldCharacter_Animal.h`

- `class` **`AEastRimWorldCharacter_Animal`** — [EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal](EastRimWorld/Character/EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/EastRimWorldCharacter_Human.h`

- `class` **`AEastRimWorldCharacter_Human`** — [EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human](EastRimWorld/Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/EastRimWorldCharacter_Summons.h`

- `class` **`AEastRimWorldCharacter_Summons`** — [EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons](EastRimWorld/Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Character/WorldMapMoveActor.h`

- `class` **`AWorldMapMoveActor`** — [WorldMapMoveActor__AWorldMapMoveActor](EastRimWorld/Character/WorldMapMoveActor__AWorldMapMoveActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Components/CommonLogComponent.h`

- `class` **`UCommonLogComponent`** — [CommonLogComponent__UCommonLogComponent](EastRimWorld/Components/CommonLogComponent__UCommonLogComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Components/ERW_AreaOperationComponent.h`

- `struct` **`FBuildObjects`** — [ERW_AreaOperationComponent__FBuildObjects](EastRimWorld/Components/ERW_AreaOperationComponent__FBuildObjects.md)
  - **功能说明：** 存储建造物体的结构
- `struct` **`FLineActorInfo`** — [ERW_AreaOperationComponent__FLineActorInfo](EastRimWorld/Components/ERW_AreaOperationComponent__FLineActorInfo.md)
  - **功能说明：** 沿格子边线生成的Actor的信息
- `struct` **`FRoofActors`** — [ERW_AreaOperationComponent__FRoofActors](EastRimWorld/Components/ERW_AreaOperationComponent__FRoofActors.md)
  - **功能说明：** 同一屋顶部位类型显示和隐藏的Actor
- `struct` **`FStairGridInfo`** — [ERW_AreaOperationComponent__FStairGridInfo](EastRimWorld/Components/ERW_AreaOperationComponent__FStairGridInfo.md)
  - **功能说明：** 阶梯格子信息
- `class` **`UERW_AreaOperationComponent`** — [ERW_AreaOperationComponent__UERW_AreaOperationComponent](EastRimWorld/Components/ERW_AreaOperationComponent__UERW_AreaOperationComponent.md)
  - **功能说明：** 物体创建区域操作相关组件

## `EastRimWorld/Components/ERW_ConstructionComponent.h`

- `class` **`UERW_ConstructionComponent`** — [ERW_ConstructionComponent__UERW_ConstructionComponent](EastRimWorld/Components/ERW_ConstructionComponent__UERW_ConstructionComponent.md)
  - **功能说明：** 建造组件

## `EastRimWorld/Components/ERW_DoorCollisionComponent.h`

- `class` **`UERW_DoorCollisionComponent`** — [ERW_DoorCollisionComponent__UERW_DoorCollisionComponent](EastRimWorld/Components/ERW_DoorCollisionComponent__UERW_DoorCollisionComponent.md)
  - **功能说明：** 门的碰撞管理组件

## `EastRimWorld/Components/ERW_EnvironComponent.h`

- `struct` **`FSupportingObjects`** — [ERW_EnvironComponent__FSupportingObjects](EastRimWorld/Components/ERW_EnvironComponent__FSupportingObjects.md)
  - **功能说明：** 格子坐标对应的配套物体
- `class` **`UERW_EnvironComponent`** — [ERW_EnvironComponent__UERW_EnvironComponent](EastRimWorld/Components/ERW_EnvironComponent__UERW_EnvironComponent.md)
  - **功能说明：** 环境信息组件

## `EastRimWorld/Components/ERW_GameConfigComponent.h`

- `struct` **`FGameplayTagArr`** — [ERW_GameConfigComponent__FGameplayTagArr](EastRimWorld/Components/ERW_GameConfigComponent__FGameplayTagArr.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FManageGoalName`** — [ERW_GameConfigComponent__FManageGoalName](EastRimWorld/Components/ERW_GameConfigComponent__FManageGoalName.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FNameArr`** — [ERW_GameConfigComponent__FNameArr](EastRimWorld/Components/ERW_GameConfigComponent__FNameArr.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPracticeAddAttributeRange`** — [ERW_GameConfigComponent__FPracticeAddAttributeRange](EastRimWorld/Components/ERW_GameConfigComponent__FPracticeAddAttributeRange.md)
  - **功能说明：** 修炼的属性区间对应的数值
- `struct` **`FProductTypeInfo`** — [ERW_GameConfigComponent__FProductTypeInfo](EastRimWorld/Components/ERW_GameConfigComponent__FProductTypeInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRedemptionTextData`** — [ERW_GameConfigComponent__FRedemptionTextData](EastRimWorld/Components/ERW_GameConfigComponent__FRedemptionTextData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorkPriorityData`** — [ERW_GameConfigComponent__FWorkPriorityData](EastRimWorld/Components/ERW_GameConfigComponent__FWorkPriorityData.md)
  - **功能说明：** 工作优先级数据
- `class` **`UCameraConfigAsset`** — [ERW_GameConfigComponent__UCameraConfigAsset](EastRimWorld/Components/ERW_GameConfigComponent__UCameraConfigAsset.md)
  - **功能说明：** 相机配置资产
- `class` **`UCommonLogConfigurationAsset`** — [ERW_GameConfigComponent__UCommonLogConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UCommonLogConfigurationAsset.md)
  - **功能说明：** 日志通用资产配置
- `class` **`UERW_GameConfigComponent`** — [ERW_GameConfigComponent__UERW_GameConfigComponent](EastRimWorld/Components/ERW_GameConfigComponent__UERW_GameConfigComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UEnergySystemSetUp`** — [ERW_GameConfigComponent__UEnergySystemSetUp](EastRimWorld/Components/ERW_GameConfigComponent__UEnergySystemSetUp.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UGamePlayConfigurationAsset`** — [ERW_GameConfigComponent__UGamePlayConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UGamePlayConfigurationAsset.md)
  - **功能说明：** 游戏配置资产
- `class` **`UPracticeConfigurationAsset`** — [ERW_GameConfigComponent__UPracticeConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UPracticeConfigurationAsset.md)
  - **功能说明：** 修炼配置
- `class` **`UPrisonConfigAsset`** — [ERW_GameConfigComponent__UPrisonConfigAsset](EastRimWorld/Components/ERW_GameConfigComponent__UPrisonConfigAsset.md)
  - **功能说明：** 监狱配置
- `class` **`UTournamentConfigurationAsset`** — [ERW_GameConfigComponent__UTournamentConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UTournamentConfigurationAsset.md)
  - **功能说明：** 门派战配置资产
- `class` **`UWorldEventData`** — [ERW_GameConfigComponent__UWorldEventData](EastRimWorld/Components/ERW_GameConfigComponent__UWorldEventData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UWorldGameConfigurationAsset`** — [ERW_GameConfigComponent__UWorldGameConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UWorldGameConfigurationAsset.md)
  - **功能说明：** 世界

## `EastRimWorld/Components/ERW_HISMManager.h`

- `struct` **`FEmbeddedWallInfo`** — [ERW_HISMManager__FEmbeddedWallInfo](EastRimWorld/Components/ERW_HISMManager__FEmbeddedWallInfo.md)
  - **功能说明：** 嵌入式墙体在ISM中的信息
- `struct` **`FReplacedWallData`** — [ERW_HISMManager__FReplacedWallData](EastRimWorld/Components/ERW_HISMManager__FReplacedWallData.md)
  - **功能说明：** 需要替换的墙体的数据
- `class` **`UERW_HISMManager`** — [ERW_HISMManager__UERW_HISMManager](EastRimWorld/Components/ERW_HISMManager__UERW_HISMManager.md)
  - **功能说明：** 管理各种物体的ISM组件(该组件需要挂在一个能出现在场景中的Actor上) ----------! Warning !---------- 由于UE5的新特性Nanite, 使用ISM进行管理的模型需要开启Nanite, 否则移动模型会出现消失的BUG ----------! Warning !----------

## `EastRimWorld/Components/ERW_MapDataMgr.h`

- `struct` **`FBuildData`** — [ERW_MapDataMgr__FBuildData](EastRimWorld/Components/ERW_MapDataMgr__FBuildData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FClosureAreaData`** — [ERW_MapDataMgr__FClosureAreaData](EastRimWorld/Components/ERW_MapDataMgr__FClosureAreaData.md)
  - **功能说明：** 闭合区域数据
- `struct` **`FClosureAreas`** — [ERW_MapDataMgr__FClosureAreas](EastRimWorld/Components/ERW_MapDataMgr__FClosureAreas.md)
  - **功能说明：** 同一层的所有闭合区域
- `struct` **`FCombinationBuildAreaData`** — [ERW_MapDataMgr__FCombinationBuildAreaData](EastRimWorld/Components/ERW_MapDataMgr__FCombinationBuildAreaData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGridCollectData`** — [ERW_MapDataMgr__FGridCollectData](EastRimWorld/Components/ERW_MapDataMgr__FGridCollectData.md)
  - **功能说明：** 地格属性
- `struct` **`FGridData`** — [ERW_MapDataMgr__FGridData](EastRimWorld/Components/ERW_MapDataMgr__FGridData.md)
  - **功能说明：** 格子数据
- `struct` **`FHeatSourceAreaData`** — [ERW_MapDataMgr__FHeatSourceAreaData](EastRimWorld/Components/ERW_MapDataMgr__FHeatSourceAreaData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UERW_MapDataMgr`** — [ERW_MapDataMgr__UERW_MapDataMgr](EastRimWorld/Components/ERW_MapDataMgr__UERW_MapDataMgr.md)
  - **功能说明：** 地图数据管理

## `EastRimWorld/Components/ERW_PresetComponent.h`

- `class` **`UERW_PresetComponent`** — [ERW_PresetComponent__UERW_PresetComponent](EastRimWorld/Components/ERW_PresetComponent__UERW_PresetComponent.md)
  - **功能说明：** 建筑预设组件

## `EastRimWorld/Components/ERW_TechnologyMgr.h`

- `class` **`UERW_TechnologyMgr`** — [ERW_TechnologyMgr__UERW_TechnologyMgr](EastRimWorld/Components/ERW_TechnologyMgr__UERW_TechnologyMgr.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Components/ERW_TimerManager.h`

- `struct` **`FTimerInfo`** — [ERW_TimerManager__FTimerInfo](EastRimWorld/Components/ERW_TimerManager__FTimerInfo.md)
  - **功能说明：** 计时器信息
- `class` **`UERW_TimerManager`** — [ERW_TimerManager__UERW_TimerManager](EastRimWorld/Components/ERW_TimerManager__UERW_TimerManager.md)
  - **功能说明：** 计时器管理组件

## `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

- `struct` **`FWorkScheduleData`** — [ERW_WorkScheduleComponent__FWorkScheduleData](EastRimWorld/Components/ERW_WorkScheduleComponent__FWorkScheduleData.md)
  - **功能说明：** 工作日程数据
- `class` **`UERW_WorkScheduleComponent`** — [ERW_WorkScheduleComponent__UERW_WorkScheduleComponent](EastRimWorld/Components/ERW_WorkScheduleComponent__UERW_WorkScheduleComponent.md)
  - **功能说明：** 工作日程管理组件

## `EastRimWorld/Components/FabricateActorComponent.h`

- `class` **`UFabricateActorComponent`** — [FabricateActorComponent__UFabricateActorComponent](EastRimWorld/Components/FabricateActorComponent__UFabricateActorComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Components/TreasureComponent.h`

- `struct` **`FBuyTreasureInfo`** — [TreasureComponent__FBuyTreasureInfo](EastRimWorld/Components/TreasureComponent__FBuyTreasureInfo.md)
  - **功能说明：** 珍宝阁购买信息
- `struct` **`FSaveItemArr`** — [TreasureComponent__FSaveItemArr](EastRimWorld/Components/TreasureComponent__FSaveItemArr.md)
  - **功能说明：** 珍宝阁保存信息
- `struct` **`FStallInfo`** — [TreasureComponent__FStallInfo](EastRimWorld/Components/TreasureComponent__FStallInfo.md)
  - **功能说明：** 珍宝阁购买信息
- `struct` **`FTreasureItem`** — [TreasureComponent__FTreasureItem](EastRimWorld/Components/TreasureComponent__FTreasureItem.md)
  - **功能说明：** 珍宝阁商品
- `struct` **`FTreasureItemSubData`** — [TreasureComponent__FTreasureItemSubData](EastRimWorld/Components/TreasureComponent__FTreasureItemSubData.md)
  - **功能说明：** 珍宝阁现存商品数量及其货架
- `struct` **`FTreasureSaveData`** — [TreasureComponent__FTreasureSaveData](EastRimWorld/Components/TreasureComponent__FTreasureSaveData.md)
  - **功能说明：** 珍宝阁保存信息
- `struct` **`FTreasureStatisticsInfo`** — [TreasureComponent__FTreasureStatisticsInfo](EastRimWorld/Components/TreasureComponent__FTreasureStatisticsInfo.md)
  - **功能说明：** 珍宝阁商品当期已售统计数据
- `struct` **`FTreasureStatisticsTotalInfo`** — [TreasureComponent__FTreasureStatisticsTotalInfo](EastRimWorld/Components/TreasureComponent__FTreasureStatisticsTotalInfo.md)
  - **功能说明：** 珍宝阁商品总共已售统计数据
- `class` **`UTreasureComponent`** — [TreasureComponent__UTreasureComponent](EastRimWorld/Components/TreasureComponent__UTreasureComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/DLC/DLCSubsystem.h`

- `struct` **`FDLCInfoConfig`** — [DLCSubsystem__FDLCInfoConfig](EastRimWorld/DLC/DLCSubsystem__FDLCInfoConfig.md)
  - **功能说明：** DLC的配置 作为主体包内游戏显示
- `class` **`UDLCInformationAsset`** — [DLCSubsystem__UDLCInformationAsset](EastRimWorld/DLC/DLCSubsystem__UDLCInformationAsset.md)
  - **功能说明：** DCL中的信息 放置于dlc包中
- `class` **`UDLCSubsystem`** — [DLCSubsystem__UDLCSubsystem](EastRimWorld/DLC/DLCSubsystem__UDLCSubsystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/ERW_AreaCurve.h`

- `class` **`AERW_AreaCurve`** — [ERW_AreaCurve__AERW_AreaCurve](EastRimWorld/ERW_AreaCurve__AERW_AreaCurve.md)
  - **功能说明：** 地图区域曲线

## `EastRimWorld/ERW_CommonTypes.h`

- `struct` **`FAssemblePartInfo`** — [ERW_CommonTypes__FAssemblePartInfo](EastRimWorld/ERW_CommonTypes__FAssemblePartInfo.md)
  - **功能说明：** 组装建筑的部位信息
- `struct` **`FAssemblePartTransform`** — [ERW_CommonTypes__FAssemblePartTransform](EastRimWorld/ERW_CommonTypes__FAssemblePartTransform.md)
  - **功能说明：** 组装建筑部位的Transform
- `struct` **`FBuildLightSourceData`** — [ERW_CommonTypes__FBuildLightSourceData](EastRimWorld/ERW_CommonTypes__FBuildLightSourceData.md)
  - **功能说明：** 建筑光源配置数据
- `struct` **`FCommonCondition`** — [ERW_CommonTypes__FCommonCondition](EastRimWorld/ERW_CommonTypes__FCommonCondition.md)
  - **功能说明：** 通用条件
- `struct` **`FConditionValue`** — [ERW_CommonTypes__FConditionValue](EastRimWorld/ERW_CommonTypes__FConditionValue.md)
  - **功能说明：** 通用条件判断的值
- `struct` **`FConditions`** — [ERW_CommonTypes__FConditions](EastRimWorld/ERW_CommonTypes__FConditions.md)
  - **功能说明：** 通用条件的数组
- `struct` **`FGameplayAbilitySaveData`** — [ERW_CommonTypes__FGameplayAbilitySaveData](EastRimWorld/ERW_CommonTypes__FGameplayAbilitySaveData.md)
  - **功能说明：** 当前能力存档数据
- `struct` **`FGridPosition`** — [ERW_CommonTypes__FGridPosition](EastRimWorld/ERW_CommonTypes__FGridPosition.md)
  - **功能说明：** 格子坐标位置
- `struct` **`FGridSeamPoint`** — [ERW_CommonTypes__FGridSeamPoint](EastRimWorld/ERW_CommonTypes__FGridSeamPoint.md)
  - **功能说明：** 格子接缝点数据
- `struct` **`FIDs`** — [ERW_CommonTypes__FIDs](EastRimWorld/ERW_CommonTypes__FIDs.md)
  - **功能说明：** 包含FName的数组
- `struct` **`FLogData`** — [ERW_CommonTypes__FLogData](EastRimWorld/ERW_CommonTypes__FLogData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FOverlockingAddInjuryData`** — [ERW_CommonTypes__FOverlockingAddInjuryData](EastRimWorld/ERW_CommonTypes__FOverlockingAddInjuryData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPathTracerSetting`** — [ERW_CommonTypes__FPathTracerSetting](EastRimWorld/ERW_CommonTypes__FPathTracerSetting.md)
  - **功能说明：** 样条线配置数据
- `struct` **`FPresetData`** — [ERW_CommonTypes__FPresetData](EastRimWorld/ERW_CommonTypes__FPresetData.md)
  - **功能说明：** 预设建筑数据
- `struct` **`FPresetInfos`** — [ERW_CommonTypes__FPresetInfos](EastRimWorld/ERW_CommonTypes__FPresetInfos.md)
  - **功能说明：** 预设建筑数据的集合
- `struct` **`FRobotTypeAction`** — [ERW_CommonTypes__FRobotTypeAction](EastRimWorld/ERW_CommonTypes__FRobotTypeAction.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FStaticMeshComponents`** — [ERW_CommonTypes__FStaticMeshComponents](EastRimWorld/ERW_CommonTypes__FStaticMeshComponents.md)
  - **功能说明：** 静态模型组件的集合
- `struct` **`FTreasureAddMoodRule`** — [ERW_CommonTypes__FTreasureAddMoodRule](EastRimWorld/ERW_CommonTypes__FTreasureAddMoodRule.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FUObjectData`** — [ERW_CommonTypes__FUObjectData](EastRimWorld/ERW_CommonTypes__FUObjectData.md)
  - **功能说明：** 包含UObject和其对应的Guid的结构
- `struct` **`FVectorData`** — [ERW_CommonTypes__FVectorData](EastRimWorld/ERW_CommonTypes__FVectorData.md)
  - **功能说明：** 可存档的三维Vector数据

## `EastRimWorld/ERW_ConfigTypes.h`

- `struct` **`FAutoTileMeshConfigData`** — [ERW_ConfigTypes__FAutoTileMeshConfigData](EastRimWorld/ERW_ConfigTypes__FAutoTileMeshConfigData.md)
  - **功能说明：** 九宫格模型配置数据结构
- `struct` **`FBreakdownActionConfigData`** — [ERW_ConfigTypes__FBreakdownActionConfigData](EastRimWorld/ERW_ConfigTypes__FBreakdownActionConfigData.md)
  - **功能说明：** 崩溃行为配置结构
- `struct` **`FBreakdownValueConfigData`** — [ERW_ConfigTypes__FBreakdownValueConfigData](EastRimWorld/ERW_ConfigTypes__FBreakdownValueConfigData.md)
  - **功能说明：** 崩溃值配置结构
- `struct` **`FBuildCombination`** — [ERW_ConfigTypes__FBuildCombination](EastRimWorld/ERW_ConfigTypes__FBuildCombination.md)
  - **功能说明：** 建筑组合配置结构
- `struct` **`FBuildConfigData`** — [ERW_ConfigTypes__FBuildConfigData](EastRimWorld/ERW_ConfigTypes__FBuildConfigData.md)
  - **功能说明：** 建筑配置结构
- `struct` **`FBuildEnergyData`** — [ERW_ConfigTypes__FBuildEnergyData](EastRimWorld/ERW_ConfigTypes__FBuildEnergyData.md)
  - **功能说明：** 建筑物能源相关信息
- `struct` **`FBuildPersonConfigData`** — [ERW_ConfigTypes__FBuildPersonConfigData](EastRimWorld/ERW_ConfigTypes__FBuildPersonConfigData.md)
  - **功能说明：** 玩家拥有此类建筑的数量
- `struct` **`FCameraConfigData`** — [ERW_ConfigTypes__FCameraConfigData](EastRimWorld/ERW_ConfigTypes__FCameraConfigData.md)
  - **功能说明：** 摄像机配置数据结构
- `struct` **`FEnergyGridData`** — [ERW_ConfigTypes__FEnergyGridData](EastRimWorld/ERW_ConfigTypes__FEnergyGridData.md)
  - **功能说明：** 能源相关信息
- `struct` **`FExtraEnvironInfo`** — [ERW_ConfigTypes__FExtraEnvironInfo](EastRimWorld/ERW_ConfigTypes__FExtraEnvironInfo.md)
  - **功能说明：** 建筑额外的占位信息
- `struct` **`FExtraInfos`** — [ERW_ConfigTypes__FExtraInfos](EastRimWorld/ERW_ConfigTypes__FExtraInfos.md)
  - **功能说明：** 建筑额外占位信息集合
- `struct` **`FFacilityNeed`** — [ERW_ConfigTypes__FFacilityNeed](EastRimWorld/ERW_ConfigTypes__FFacilityNeed.md)
  - **功能说明：** 房间设施需求
- `struct` **`FIdeaTriggerConfigData`** — [ERW_ConfigTypes__FIdeaTriggerConfigData](EastRimWorld/ERW_ConfigTypes__FIdeaTriggerConfigData.md)
  - **功能说明：** 想法触发配置结构
- `struct` **`FLevelConfigData`** — [ERW_ConfigTypes__FLevelConfigData](EastRimWorld/ERW_ConfigTypes__FLevelConfigData.md)
  - **功能说明：** 难度相关配置
- `struct` **`FMeshMaterialParameter`** — [ERW_ConfigTypes__FMeshMaterialParameter](EastRimWorld/ERW_ConfigTypes__FMeshMaterialParameter.md)
  - **功能说明：** 建筑模型材质参数
- `struct` **`FParticleEffectData`** — [ERW_ConfigTypes__FParticleEffectData](EastRimWorld/ERW_ConfigTypes__FParticleEffectData.md)
  - **功能说明：** 建筑粒子效果数据
- `struct` **`FPracticeBuildingOverlockingData`** — [ERW_ConfigTypes__FPracticeBuildingOverlockingData](EastRimWorld/ERW_ConfigTypes__FPracticeBuildingOverlockingData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPresetBuilding`** — [ERW_ConfigTypes__FPresetBuilding](EastRimWorld/ERW_ConfigTypes__FPresetBuilding.md)
  - **功能说明：** 预设建筑物信息
- `struct` **`FPuppetPlatformMeshConfig`** — [ERW_ConfigTypes__FPuppetPlatformMeshConfig](EastRimWorld/ERW_ConfigTypes__FPuppetPlatformMeshConfig.md)
  - **功能说明：** 傀儡台
- `struct` **`FRelativeGridPoses`** — [ERW_ConfigTypes__FRelativeGridPoses](EastRimWorld/ERW_ConfigTypes__FRelativeGridPoses.md)
  - **功能说明：** 物体的相对格子坐标
- `struct` **`FRoomBuffIds`** — [ERW_ConfigTypes__FRoomBuffIds](EastRimWorld/ERW_ConfigTypes__FRoomBuffIds.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRoomConfigData`** — [ERW_ConfigTypes__FRoomConfigData](EastRimWorld/ERW_ConfigTypes__FRoomConfigData.md)
  - **功能说明：** 房间配置结构
- `struct` **`FRoomInfo`** — [ERW_ConfigTypes__FRoomInfo](EastRimWorld/ERW_ConfigTypes__FRoomInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRoomLevel`** — [ERW_ConfigTypes__FRoomLevel](EastRimWorld/ERW_ConfigTypes__FRoomLevel.md)
  - **功能说明：** 房间等级结构
- `struct` **`FRoomScoreData`** — [ERW_ConfigTypes__FRoomScoreData](EastRimWorld/ERW_ConfigTypes__FRoomScoreData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRoomScoreDataArray`** — [ERW_ConfigTypes__FRoomScoreDataArray](EastRimWorld/ERW_ConfigTypes__FRoomScoreDataArray.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRoomSizeTemperatureRate`** — [ERW_ConfigTypes__FRoomSizeTemperatureRate](EastRimWorld/ERW_ConfigTypes__FRoomSizeTemperatureRate.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRoomTemperatureScoreData`** — [ERW_ConfigTypes__FRoomTemperatureScoreData](EastRimWorld/ERW_ConfigTypes__FRoomTemperatureScoreData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UPuppetPlatformConfigurationAsset`** — [ERW_ConfigTypes__UPuppetPlatformConfigurationAsset](EastRimWorld/ERW_ConfigTypes__UPuppetPlatformConfigurationAsset.md)
  - **功能说明：** 傀儡台配置
- `class` **`URoomConfigAsset`** — [ERW_ConfigTypes__URoomConfigAsset](EastRimWorld/ERW_ConfigTypes__URoomConfigAsset.md)
  - **功能说明：** 房间配置资产

## `EastRimWorld/ERW_FunctionLibrary.h`

- `class` **`UERW_FunctionLibrary`** — [ERW_FunctionLibrary__UERW_FunctionLibrary](EastRimWorld/ERW_FunctionLibrary__UERW_FunctionLibrary.md)
  - **功能说明：** 公共函数库类

## `EastRimWorld/ERW_HUDBase.h`

- `class` **`AERW_HUDBase`** — [ERW_HUDBase__AERW_HUDBase](EastRimWorld/ERW_HUDBase__AERW_HUDBase.md)
  - **功能说明：** HUD基类

## `EastRimWorld/ERW_NoiseFunctionLibrary.h`

- `class` **`UERW_NoiseFunctionLibrary`** — [ERW_NoiseFunctionLibrary__UERW_NoiseFunctionLibrary](EastRimWorld/ERW_NoiseFunctionLibrary__UERW_NoiseFunctionLibrary.md)
  - **功能说明：** 噪声相关功能函数库

## `EastRimWorld/ERW_SceneManager.h`

- `class` **`AERW_SceneManager`** — [ERW_SceneManager__AERW_SceneManager](EastRimWorld/ERW_SceneManager__AERW_SceneManager.md)
  - **功能说明：** 场景管理器类

## `EastRimWorld/Farmland/EastRimWorldFarmlandActor.h`

- `class` **`AEastRimWorldFarmlandActor`** — [EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor](EastRimWorld/Farmland/EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Framework/ERW_FightPawn.h`

- `class` **`AERW_FightPawn`** — [ERW_FightPawn__AERW_FightPawn](EastRimWorld/Framework/ERW_FightPawn__AERW_FightPawn.md)
  - **功能说明：** AERW_FightPawn - 门派战俯视角战斗主角 俯视角相机 + WASD 移动 + 交互系统（旧式输入）

## `EastRimWorld/Framework/ERW_GameInstanceBase.h`

- `class` **`UERW_GameInstanceBase`** — [ERW_GameInstanceBase__UERW_GameInstanceBase](EastRimWorld/Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Framework/ERW_GameModeBase.h`

- `class` **`AERW_GameModeBase`** — [ERW_GameModeBase__AERW_GameModeBase](EastRimWorld/Framework/ERW_GameModeBase__AERW_GameModeBase.md)
  - **功能说明：** GameMode基类
- `struct` **`FGoalBaseInfo`** — [ERW_GameModeBase__FGoalBaseInfo](EastRimWorld/Framework/ERW_GameModeBase__FGoalBaseInfo.md)
  - **功能说明：** GOAP目标信息

## `EastRimWorld/Framework/ERW_PlayerControllerBase.h`

- `class` **`AERW_PlayerControllerBase`** — [ERW_PlayerControllerBase__AERW_PlayerControllerBase](EastRimWorld/Framework/ERW_PlayerControllerBase__AERW_PlayerControllerBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Framework/ERW_PlayerPawn.h`

- `class` **`AERW_PlayerPawn`** — [ERW_PlayerPawn__AERW_PlayerPawn](EastRimWorld/Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)
  - **功能说明：** PlayerPawn基类 不可在此类中存储数据

## `EastRimWorld/Framework/ERW_PlayerStateBase.h`

- `class` **`AERW_PlayerStateBase`** — [ERW_PlayerStateBase__AERW_PlayerStateBase](EastRimWorld/Framework/ERW_PlayerStateBase__AERW_PlayerStateBase.md)
  - **功能说明：** PlayerState基类

## `EastRimWorld/GOAP/GOAP_ActionComponent.h`

- `struct` **`FGOAP_Users`** — [GOAP_ActionComponent__FGOAP_Users](EastRimWorld/GOAP/GOAP_ActionComponent__FGOAP_Users.md)
  - **功能说明：** GOAP用户的数组
- `class` **`UGOAP_ActionComponent`** — [GOAP_ActionComponent__UGOAP_ActionComponent](EastRimWorld/GOAP/GOAP_ActionComponent__UGOAP_ActionComponent.md)
  - **功能说明：** GOAP行动组件

## `EastRimWorld/GOAP/GOAP_ActorBase.h`

- `class` **`AGOAP_ActorBase`** — [GOAP_ActorBase__AGOAP_ActorBase](EastRimWorld/GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)
  - **功能说明：** GOAP Actor的基类
- `struct` **`FAutoOutputWorkloadData`** — [GOAP_ActorBase__FAutoOutputWorkloadData](EastRimWorld/GOAP/GOAP_ActorBase__FAutoOutputWorkloadData.md)
  - **功能说明：** 自动输出工作量相关数据
- `struct` **`FCeremonyData`** — [GOAP_ActorBase__FCeremonyData](EastRimWorld/GOAP/GOAP_ActorBase__FCeremonyData.md)
  - **功能说明：** 仪式相关数据
- `struct` **`FEnergyData`** — [GOAP_ActorBase__FEnergyData](EastRimWorld/GOAP/GOAP_ActorBase__FEnergyData.md)
  - **功能说明：** 能量相关数据
- `struct` **`FFacilityBelongData`** — [GOAP_ActorBase__FFacilityBelongData](EastRimWorld/GOAP/GOAP_ActorBase__FFacilityBelongData.md)
  - **功能说明：** 设施归属数据
- `struct` **`FFacilityBelongSaveData`** — [GOAP_ActorBase__FFacilityBelongSaveData](EastRimWorld/GOAP/GOAP_ActorBase__FFacilityBelongSaveData.md)
  - **功能说明：** 设施归属存档数据
- `struct` **`FFuelData`** — [GOAP_ActorBase__FFuelData](EastRimWorld/GOAP/GOAP_ActorBase__FFuelData.md)
  - **功能说明：** 燃料相关数据
- `struct` **`FHeatSourceData`** — [GOAP_ActorBase__FHeatSourceData](EastRimWorld/GOAP/GOAP_ActorBase__FHeatSourceData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPuppetData`** — [GOAP_ActorBase__FPuppetData](EastRimWorld/GOAP/GOAP_ActorBase__FPuppetData.md)
  - **功能说明：** 傀儡相关数据
- `struct` **`FTransportationData`** — [GOAP_ActorBase__FTransportationData](EastRimWorld/GOAP/GOAP_ActorBase__FTransportationData.md)
  - **功能说明：** 交通工具相关数据

## `EastRimWorld/GOAP/GOAP_Data.h`

- `struct` **`FCategoryCostData`** — [GOAP_Data__FCategoryCostData](EastRimWorld/GOAP/GOAP_Data__FCategoryCostData.md)
  - **功能说明：** 类型对应的消耗配置结构
- `struct` **`FGOAP_Action`** — [GOAP_Data__FGOAP_Action](EastRimWorld/GOAP/GOAP_Data__FGOAP_Action.md)
  - **功能说明：** GOAP行动数据
- `struct` **`FGOAP_ActionIcon`** — [GOAP_Data__FGOAP_ActionIcon](EastRimWorld/GOAP/GOAP_Data__FGOAP_ActionIcon.md)
  - **功能说明：** GOAP行为图标
- `struct` **`FGOAP_Action_Data`** — [GOAP_Data__FGOAP_Action_Data](EastRimWorld/GOAP/GOAP_Data__FGOAP_Action_Data.md)
  - **功能说明：** GOAP行为信息
- `struct` **`FGOAP_Condition`** — [GOAP_Data__FGOAP_Condition](EastRimWorld/GOAP/GOAP_Data__FGOAP_Condition.md)
  - **功能说明：** GOAP判断条件
- `struct` **`FGOAP_Value`** — [GOAP_Data__FGOAP_Value](EastRimWorld/GOAP/GOAP_Data__FGOAP_Value.md)
  - **功能说明：** 用于GOAP条件判断的值
- `struct` **`FGoalAndAction`** — [GOAP_Data__FGoalAndAction](EastRimWorld/GOAP/GOAP_Data__FGoalAndAction.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPathGoalData`** — [GOAP_Data__FPathGoalData](EastRimWorld/GOAP/GOAP_Data__FPathGoalData.md)
  - **功能说明：** 路径目标数据

## `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

- `class` **`UGOAP_ManagerComponent`** — [GOAP_ManagerComponent__UGOAP_ManagerComponent](EastRimWorld/GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)
  - **功能说明：** GOAP管理组件

## `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

- `class` **`UGOAP_MemoryComponent`** — [GOAP_MemoryComponent__UGOAP_MemoryComponent](EastRimWorld/GOAP/GOAP_MemoryComponent__UGOAP_MemoryComponent.md)
  - **功能说明：** GOAP记忆组件

## `EastRimWorld/GOAP/GOAP_PlanComponent.h`

- `struct` **`FGOAPScoreData`** — [GOAP_PlanComponent__FGOAPScoreData](EastRimWorld/GOAP/GOAP_PlanComponent__FGOAPScoreData.md)
  - **功能说明：** GOAP分值数据
- `struct` **`FItemUseState`** — [GOAP_PlanComponent__FItemUseState](EastRimWorld/GOAP/GOAP_PlanComponent__FItemUseState.md)
  - **功能说明：** 物品使用状态
- `class` **`UGOAP_PlanComponent`** — [GOAP_PlanComponent__UGOAP_PlanComponent](EastRimWorld/GOAP/GOAP_PlanComponent__UGOAP_PlanComponent.md)
  - **功能说明：** 用于AI通过GOAP寻找计划的组件

## `EastRimWorld/GPUInfoLibrary.h`

- `struct` **`FGPUInfo`** — [GPUInfoLibrary__FGPUInfo](EastRimWorld/GPUInfoLibrary__FGPUInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UGPUInfoLibrary`** — [GPUInfoLibrary__UGPUInfoLibrary](EastRimWorld/GPUInfoLibrary__UGPUInfoLibrary.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/CanUseInventoryItemInstance.h`

- `class` **`UCanUseInventoryItemInstance`** — [CanUseInventoryItemInstance__UCanUseInventoryItemInstance](EastRimWorld/Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)
  - **功能说明：** 可以使用的物品实例的基类

## `EastRimWorld/Inventory/CollectItemInstance.h`

- `class` **`UCollectItemInstance`** — [CollectItemInstance__UCollectItemInstance](EastRimWorld/Inventory/CollectItemInstance__UCollectItemInstance.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/FarmlandPlantInstance.h`

- `class` **`UFarmlandPlantInstance`** — [FarmlandPlantInstance__UFarmlandPlantInstance](EastRimWorld/Inventory/FarmlandPlantInstance__UFarmlandPlantInstance.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/InventoryEntityActor.h`

- `class` **`AInventoryEntityActor`** — [InventoryEntityActor__AInventoryEntityActor](EastRimWorld/Inventory/InventoryEntityActor__AInventoryEntityActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/InventoryItemInstance.h`

- `class` **`UInventoryItemInstance`** — [InventoryItemInstance__UInventoryItemInstance](EastRimWorld/Inventory/InventoryItemInstance__UInventoryItemInstance.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/InventoryItemSet.h`

- `class` **`AInventoryItemSet`** — [InventoryItemSet__AInventoryItemSet](EastRimWorld/Inventory/InventoryItemSet__AInventoryItemSet.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/InventoryItemWidgetActor.h`

- `class` **`AInventoryItemWidgetActor`** — [InventoryItemWidgetActor__AInventoryItemWidgetActor](EastRimWorld/Inventory/InventoryItemWidgetActor__AInventoryItemWidgetActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/InventoryManagerComponent.h`

- `class` **`UInventoryManagerComponent`** — [InventoryManagerComponent__UInventoryManagerComponent](EastRimWorld/Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/SelectInventorySubstituteSystem.h`

- `class` **`ASelectInventorySubstituteSystem`** — [SelectInventorySubstituteSystem__ASelectInventorySubstituteSystem](EastRimWorld/Inventory/SelectInventorySubstituteSystem__ASelectInventorySubstituteSystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

- `struct` **`FTransportItemCache`** — [WarehouseManagerSubsystem__FTransportItemCache](EastRimWorld/Inventory/WarehouseManagerSubsystem__FTransportItemCache.md)
  - **功能说明：** 物品缓存
- `struct` **`FTransportToWarehouseCache`** — [WarehouseManagerSubsystem__FTransportToWarehouseCache](EastRimWorld/Inventory/WarehouseManagerSubsystem__FTransportToWarehouseCache.md)
  - **功能说明：** 物品ID 对应的缓存
- `struct` **`FWarehouseCacheState`** — [WarehouseManagerSubsystem__FWarehouseCacheState](EastRimWorld/Inventory/WarehouseManagerSubsystem__FWarehouseCacheState.md)
  - **功能说明：** 单个仓库在管理器中的缓存状态
- `struct` **`FWarehouseCellLayerEmptyState`** — [WarehouseManagerSubsystem__FWarehouseCellLayerEmptyState](EastRimWorld/Inventory/WarehouseManagerSubsystem__FWarehouseCellLayerEmptyState.md)
  - **功能说明：** 单个坐标格在某一层的空余状态（用于缓存，避免 TMap 套 TMap）
- `class` **`UWarehouseManagerSubsystem`** — [WarehouseManagerSubsystem__UWarehouseManagerSubsystem](EastRimWorld/Inventory/WarehouseManagerSubsystem__UWarehouseManagerSubsystem.md)
  - **功能说明：** 仓库管理器：记录每个仓库的放置状态、空余格子、是否满仓等。 当类型为 Warehouse 的 InventoryManagerComponent 会注册到此管理器。 有物品放入/取出时标记为需要更新，在下次获取空位或状态时再执行更新。

## `EastRimWorld/Mod/ModInfo.h`

- `struct` **`FModDependency`** — [ModInfo__FModDependency](EastRimWorld/Mod/ModInfo__FModDependency.md)
  - **功能说明：** Mod依赖信息
- `struct` **`FModMetadata`** — [ModInfo__FModMetadata](EastRimWorld/Mod/ModInfo__FModMetadata.md)
  - **功能说明：** Mod元数据信息
- `class` **`UModRuntimeInfo`** — [ModInfo__UModRuntimeInfo](EastRimWorld/Mod/ModInfo__UModRuntimeInfo.md)
  - **功能说明：** Mod运行时信息 用于在运行时管理Mod的状态

## `EastRimWorld/Mod/ModLuaLibrary.h`

- `class` **`UModLuaLibrary`** — [ModLuaLibrary__UModLuaLibrary](EastRimWorld/Mod/ModLuaLibrary__UModLuaLibrary.md)
  - **功能说明：** Mod Lua函数库 提供从Lua调用C++功能的接口

## `EastRimWorld/Mod/ModSubsystem.h`

- `class` **`UModSubsystem`** — [ModSubsystem__UModSubsystem](EastRimWorld/Mod/ModSubsystem__UModSubsystem.md)
  - **功能说明：** Mod子系统 负责管理所有Mod的加载、卸载和生命周期

## `EastRimWorld/Mod/PakLibrary.h`

- `class` **`UPakLibrary`** — [PakLibrary__UPakLibrary](EastRimWorld/Mod/PakLibrary__UPakLibrary.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Mod/SteamAchievementLibrary.h`

- `struct` **`FSteamAchievementInfo`** — [SteamAchievementLibrary__FSteamAchievementInfo](EastRimWorld/Mod/SteamAchievementLibrary__FSteamAchievementInfo.md)
  - **功能说明：** 成就信息结构体
- `class` **`USteamAchievementLibrary`** — [SteamAchievementLibrary__USteamAchievementLibrary](EastRimWorld/Mod/SteamAchievementLibrary__USteamAchievementLibrary.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Mod/SteamWorkshopLibrary.h`

- `struct` **`FWorkshopItemDetails`** — [SteamWorkshopLibrary__FWorkshopItemDetails](EastRimWorld/Mod/SteamWorkshopLibrary__FWorkshopItemDetails.md)
  - **功能说明：** Workshop 项目详细信息结构体
- `class` **`USteamWorkshopLibrary`** — [SteamWorkshopLibrary__USteamWorkshopLibrary](EastRimWorld/Mod/SteamWorkshopLibrary__USteamWorkshopLibrary.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Mod/SteamWorkshopSubsystem.h`

- `class` **`USteamWorkshopSubsystem`** — [SteamWorkshopSubsystem__USteamWorkshopSubsystem](EastRimWorld/Mod/SteamWorkshopSubsystem__USteamWorkshopSubsystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Physics/PhysicalMaterialWithTags.h`

- `class` **`UPhysicalMaterialWithTags`** — [PhysicalMaterialWithTags__UPhysicalMaterialWithTags](EastRimWorld/Physics/PhysicalMaterialWithTags__UPhysicalMaterialWithTags.md)
  - **功能说明：** ULyraWeaponInstance A piece of equipment representing a weapon spawned and applied to a pawn

## `EastRimWorld/Player/EastRimWorldAIController.h`

- `class` **`AEastRimWorldAIController`** — [EastRimWorldAIController__AEastRimWorldAIController](EastRimWorld/Player/EastRimWorldAIController__AEastRimWorldAIController.md)
  - **功能说明：** AEastRimWorldPlayerBotController The controller class used by player bots in this project.
- `struct` **`FAnimalActionAbility`** — [EastRimWorldAIController__FAnimalActionAbility](EastRimWorld/Player/EastRimWorldAIController__FAnimalActionAbility.md)
  - **功能说明：** 动物ActionAbility配置表结构
- `struct` **`FCharacterActionAbility`** — [EastRimWorldAIController__FCharacterActionAbility](EastRimWorld/Player/EastRimWorldAIController__FCharacterActionAbility.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterActionAbilityAnimSections`** — [EastRimWorldAIController__FCharacterActionAbilityAnimSections](EastRimWorld/Player/EastRimWorldAIController__FCharacterActionAbilityAnimSections.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Player/EastRimWorldAIController_Human.h`

- `class` **`AEastRimWorldAIController_Human`** — [EastRimWorldAIController_Human__AEastRimWorldAIController_Human](EastRimWorld/Player/EastRimWorldAIController_Human__AEastRimWorldAIController_Human.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Player/EastRimWorldAIController_Summons.h`

- `class` **`AEastRimWorldAIController_Summons`** — [EastRimWorldAIController_Summons__AEastRimWorldAIController_Summons](EastRimWorld/Player/EastRimWorldAIController_Summons__AEastRimWorldAIController_Summons.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/PostStation/EasternEraPostStationActor.h`

- `class` **`AEasternEraPostStationActor`** — [EasternEraPostStationActor__AEasternEraPostStationActor](EastRimWorld/PostStation/EasternEraPostStationActor__AEasternEraPostStationActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/PostStation/EasternEraTradeAreaActor.h`

- `class` **`AEasternEraTradeAreaActor`** — [EasternEraTradeAreaActor__AEasternEraTradeAreaActor](EastRimWorld/PostStation/EasternEraTradeAreaActor__AEasternEraTradeAreaActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/PostStation/PostStationStruct.h`

- `struct` **`FExchangeMartialArtsConfig`** — [PostStationStruct__FExchangeMartialArtsConfig](EastRimWorld/PostStation/PostStationStruct__FExchangeMartialArtsConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FExchangeMartialArtsInstance`** — [PostStationStruct__FExchangeMartialArtsInstance](EastRimWorld/PostStation/PostStationStruct__FExchangeMartialArtsInstance.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPostStationGenerateConfig`** — [PostStationStruct__FPostStationGenerateConfig](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPostStationGenerateInfo`** — [PostStationStruct__FPostStationGenerateInfo](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPostStationGenerateInstanceInfo`** — [PostStationStruct__FPostStationGenerateInstanceInfo](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateInstanceInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPostStationGenerateLine`** — [PostStationStruct__FPostStationGenerateLine](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateLine.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPostStationGenerateLineConfig`** — [PostStationStruct__FPostStationGenerateLineConfig](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateLineConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UPostStationConfigAsset`** — [PostStationStruct__UPostStationConfigAsset](EastRimWorld/PostStation/PostStationStruct__UPostStationConfigAsset.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SaveGame/SaveGameDataActor.h`

- `class` **`ASaveGameDataActor`** — [SaveGameDataActor__ASaveGameDataActor](EastRimWorld/SaveGame/SaveGameDataActor__ASaveGameDataActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTeamBuffInfo`** — [SaveGameDataActor__FTeamBuffInfo](EastRimWorld/SaveGame/SaveGameDataActor__FTeamBuffInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SaveGame/SaveGlobalGameData.h`

- `class` **`USaveGlobalGameData`** — [SaveGlobalGameData__USaveGlobalGameData](EastRimWorld/SaveGame/SaveGlobalGameData__USaveGlobalGameData.md)
  - **功能说明：** 保存游戏内全局的数据

## `EastRimWorld/SpawnActorSystem/GWOActorComponent.h`

- `class` **`UGWOActorComponent`** — [GWOActorComponent__UGWOActorComponent](EastRimWorld/SpawnActorSystem/GWOActorComponent__UGWOActorComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SpawnActorSystem/GWOGeneralAccess.h`

- `class` **`AGWOGeneralAccess`** — [GWOGeneralAccess__AGWOGeneralAccess](EastRimWorld/SpawnActorSystem/GWOGeneralAccess__AGWOGeneralAccess.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SpawnActorSystem/GWOSectorsDirector.h`

- `class` **`AGWOSectorsDirector`** — [GWOSectorsDirector__AGWOSectorsDirector](EastRimWorld/SpawnActorSystem/GWOSectorsDirector__AGWOSectorsDirector.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SpawnActorSystem/GWOSpawnZoneBlocking.h`

- `class` **`AGWOSpawnZoneBlocking`** — [GWOSpawnZoneBlocking__AGWOSpawnZoneBlocking](EastRimWorld/SpawnActorSystem/GWOSpawnZoneBlocking__AGWOSpawnZoneBlocking.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SpawnActorSystem/GWOSpawner.h`

- `class` **`AGWOSpawner`** — [GWOSpawner__AGWOSpawner](EastRimWorld/SpawnActorSystem/GWOSpawner__AGWOSpawner.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/SpawnActorSystem/GWOTypes.h`

- `struct` **`FGWOActorReplaceParameters`** — [GWOTypes__FGWOActorReplaceParameters](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOActorReplaceParameters.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGWOActorSpawnStruct`** — [GWOTypes__FGWOActorSpawnStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOActorSpawnStruct.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGWOReplaceMeshRuleStruct`** — [GWOTypes__FGWOReplaceMeshRuleStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOReplaceMeshRuleStruct.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGWOSaveSpawnedActorStruct`** — [GWOTypes__FGWOSaveSpawnedActorStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOSaveSpawnedActorStruct.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGWOTime`** — [GWOTypes__FGWOTime](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOTime.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGWOWave`** — [GWOTypes__FGWOWave](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOWave.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/BuildingData.h`

- `struct` **`FBuildingData`** — [BuildingData__FBuildingData](EastRimWorld/Struct/BuildingData__FBuildingData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FFacilityDefineData`** — [BuildingData__FFacilityDefineData](EastRimWorld/Struct/BuildingData__FFacilityDefineData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/CharacterChatStruct.h`

- `struct` **`FChatConditionWeight`** — [CharacterChatStruct__FChatConditionWeight](EastRimWorld/Struct/CharacterChatStruct__FChatConditionWeight.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FChatTypeData`** — [CharacterChatStruct__FChatTypeData](EastRimWorld/Struct/CharacterChatStruct__FChatTypeData.md)
  - **功能说明：** 社交类型数据
- `struct` **`FSocialRelationshipConfig`** — [CharacterChatStruct__FSocialRelationshipConfig](EastRimWorld/Struct/CharacterChatStruct__FSocialRelationshipConfig.md)
  - **功能说明：** 社交关系配置
- `struct` **`FSocialRelationshipData`** — [CharacterChatStruct__FSocialRelationshipData](EastRimWorld/Struct/CharacterChatStruct__FSocialRelationshipData.md)
  - **功能说明：** 社交关系数据
- `class` **`UCharacterChatConfigAsset`** — [CharacterChatStruct__UCharacterChatConfigAsset](EastRimWorld/Struct/CharacterChatStruct__UCharacterChatConfigAsset.md)
  - **功能说明：** 角色聊天配置资产

## `EastRimWorld/Struct/CharacterDeathInformation.h`

- `struct` **`FCharacterDeathInformation`** — [CharacterDeathInformation__FCharacterDeathInformation](EastRimWorld/Struct/CharacterDeathInformation__FCharacterDeathInformation.md)
  - **功能说明：** 角色的死亡信息

## `EastRimWorld/Struct/CharacterStruct.h`

- `struct` **`FAnimalCultivationConfig`** — [CharacterStruct__FAnimalCultivationConfig](EastRimWorld/Struct/CharacterStruct__FAnimalCultivationConfig.md)
  - **功能说明：** 动物修炼配置数据 每个怪物类型对应的修炼配置
- `struct` **`FAnimalCultivationLevelUpgrade`** — [CharacterStruct__FAnimalCultivationLevelUpgrade](EastRimWorld/Struct/CharacterStruct__FAnimalCultivationLevelUpgrade.md)
  - **功能说明：** 动物修炼等级升级功能配置 用于配置到达某个等级时增加的各项功能（经验值、行为树、Goals、能力、Buff、属性、掉落组、模型等）
- `struct` **`FCarryWeaponsInfo`** — [CharacterStruct__FCarryWeaponsInfo](EastRimWorld/Struct/CharacterStruct__FCarryWeaponsInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterAttributeUpgradeConfig`** — [CharacterStruct__FCharacterAttributeUpgradeConfig](EastRimWorld/Struct/CharacterStruct__FCharacterAttributeUpgradeConfig.md)
  - **功能说明：** 角色属性升级配置
- `struct` **`FCharacterLoyaltyConfig`** — [CharacterStruct__FCharacterLoyaltyConfig](EastRimWorld/Struct/CharacterStruct__FCharacterLoyaltyConfig.md)
  - **功能说明：** 角色忠诚度配置
- `struct` **`FCharacterOrganConfig`** — [CharacterStruct__FCharacterOrganConfig](EastRimWorld/Struct/CharacterStruct__FCharacterOrganConfig.md)
  - **功能说明：** 角色器官配置
- `struct` **`FCharacterOrganUIConfig`** — [CharacterStruct__FCharacterOrganUIConfig](EastRimWorld/Struct/CharacterStruct__FCharacterOrganUIConfig.md)
  - **功能说明：** 角色器官显示UI显示配置（综合显示多个器官的汇总值）
- `struct` **`FCharacterTeamInfo`** — [CharacterStruct__FCharacterTeamInfo](EastRimWorld/Struct/CharacterStruct__FCharacterTeamInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterTemperatureInfluence`** — [CharacterStruct__FCharacterTemperatureInfluence](EastRimWorld/Struct/CharacterStruct__FCharacterTemperatureInfluence.md)
  - **功能说明：** 角色温度影响
- `struct` **`FEastRimWorldAnimalData`** — [CharacterStruct__FEastRimWorldAnimalData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldAnimalData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FEastRimWorldCharacterData`** — [CharacterStruct__FEastRimWorldCharacterData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldCharacterData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FEastRimWorldCharacterFirstName`** — [CharacterStruct__FEastRimWorldCharacterFirstName](EastRimWorld/Struct/CharacterStruct__FEastRimWorldCharacterFirstName.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FEastRimWorldCharacterName`** — [CharacterStruct__FEastRimWorldCharacterName](EastRimWorld/Struct/CharacterStruct__FEastRimWorldCharacterName.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FEastRimWorldHumanData`** — [CharacterStruct__FEastRimWorldHumanData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldHumanData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FEastRimWorldSummonsData`** — [CharacterStruct__FEastRimWorldSummonsData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldSummonsData.md)
  - **功能说明：** 召唤物的数据
- `struct` **`FExchangeRuleData`** — [CharacterStruct__FExchangeRuleData](EastRimWorld/Struct/CharacterStruct__FExchangeRuleData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGameplayTeamBehaviorTree`** — [CharacterStruct__FGameplayTeamBehaviorTree](EastRimWorld/Struct/CharacterStruct__FGameplayTeamBehaviorTree.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGameplayTeamGoals`** — [CharacterStruct__FGameplayTeamGoals](EastRimWorld/Struct/CharacterStruct__FGameplayTeamGoals.md)
  - **功能说明：** 阵营的goals
- `struct` **`FGameplayTeamInfo`** — [CharacterStruct__FGameplayTeamInfo](EastRimWorld/Struct/CharacterStruct__FGameplayTeamInfo.md)
  - **功能说明：** 团队信息
- `struct` **`FGoals`** — [CharacterStruct__FGoals](EastRimWorld/Struct/CharacterStruct__FGoals.md)
  - **功能说明：** 团队信息
- `struct` **`FGrowthInfo`** — [CharacterStruct__FGrowthInfo](EastRimWorld/Struct/CharacterStruct__FGrowthInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FHobbyConfig`** — [CharacterStruct__FHobbyConfig](EastRimWorld/Struct/CharacterStruct__FHobbyConfig.md)
  - **功能说明：** 爱好配置表
- `struct` **`FHungryEffectConfig`** — [CharacterStruct__FHungryEffectConfig](EastRimWorld/Struct/CharacterStruct__FHungryEffectConfig.md)
  - **功能说明：** 饥饿伤势配置表
- `struct` **`FInjuryConfig`** — [CharacterStruct__FInjuryConfig](EastRimWorld/Struct/CharacterStruct__FInjuryConfig.md)
  - **功能说明：** 伤势配置解构
- `struct` **`FInjuryEffectConfig`** — [CharacterStruct__FInjuryEffectConfig](EastRimWorld/Struct/CharacterStruct__FInjuryEffectConfig.md)
  - **功能说明：** 伤势效果配置表
- `struct` **`FInjuryEffectInstance`** — [CharacterStruct__FInjuryEffectInstance](EastRimWorld/Struct/CharacterStruct__FInjuryEffectInstance.md)
  - **功能说明：** 伤势效果实施对象
- `struct` **`FInjuryMedicine`** — [CharacterStruct__FInjuryMedicine](EastRimWorld/Struct/CharacterStruct__FInjuryMedicine.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FOrganAttackedShareConfig`** — [CharacterStruct__FOrganAttackedShareConfig](EastRimWorld/Struct/CharacterStruct__FOrganAttackedShareConfig.md)
  - **功能说明：** 器官收到伤害的分摊配置表
- `struct` **`FOrganStatus`** — [CharacterStruct__FOrganStatus](EastRimWorld/Struct/CharacterStruct__FOrganStatus.md)
  - **功能说明：** 器官状态
- `struct` **`FPlaceInitGameplayEffect`** — [CharacterStruct__FPlaceInitGameplayEffect](EastRimWorld/Struct/CharacterStruct__FPlaceInitGameplayEffect.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTeamBuffData`** — [CharacterStruct__FTeamBuffData](EastRimWorld/Struct/CharacterStruct__FTeamBuffData.md)
  - **功能说明：** 对应阵营的buff
- `struct` **`FTeamChangeInformationInfo`** — [CharacterStruct__FTeamChangeInformationInfo](EastRimWorld/Struct/CharacterStruct__FTeamChangeInformationInfo.md)
  - **功能说明：** 存储的团队关系关联信息
- `struct` **`FWeaponsInfo`** — [CharacterStruct__FWeaponsInfo](EastRimWorld/Struct/CharacterStruct__FWeaponsInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorkAttributeLevelConfig`** — [CharacterStruct__FWorkAttributeLevelConfig](EastRimWorld/Struct/CharacterStruct__FWorkAttributeLevelConfig.md)
  - **功能说明：** 工作属性等级配置
- `class` **`UDefaultTeamInfoAsset`** — [CharacterStruct__UDefaultTeamInfoAsset](EastRimWorld/Struct/CharacterStruct__UDefaultTeamInfoAsset.md)
  - **功能说明：** 默认的阵营信息资产

## `EastRimWorld/Struct/CommonLogStruct.h`

- `struct` **`FCommonLogData`** — [CommonLogStruct__FCommonLogData](EastRimWorld/Struct/CommonLogStruct__FCommonLogData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCommonLogInfo`** — [CommonLogStruct__FCommonLogInfo](EastRimWorld/Struct/CommonLogStruct__FCommonLogInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/CommonStruct.h`

- `struct` **`FBehaviorTargetInfo`** — [CommonStruct__FBehaviorTargetInfo](EastRimWorld/Struct/CommonStruct__FBehaviorTargetInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacteristicInfo`** — [CommonStruct__FCharacteristicInfo](EastRimWorld/Struct/CommonStruct__FCharacteristicInfo.md)
  - **功能说明：** 角色特性
- `struct` **`FCharacteristicInfoArray`** — [CommonStruct__FCharacteristicInfoArray](EastRimWorld/Struct/CommonStruct__FCharacteristicInfoArray.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCommonBuff`** — [CommonStruct__FCommonBuff](EastRimWorld/Struct/CommonStruct__FCommonBuff.md)
  - **功能说明：** 通用BUFF
- `struct` **`FDropItemInfo`** — [CommonStruct__FDropItemInfo](EastRimWorld/Struct/CommonStruct__FDropItemInfo.md)
  - **功能说明：** 掉落物品信息
- `struct` **`FDropSetConfig`** — [CommonStruct__FDropSetConfig](EastRimWorld/Struct/CommonStruct__FDropSetConfig.md)
  - **功能说明：** 掉落配置
- `struct` **`FEquipmentQualityRange`** — [CommonStruct__FEquipmentQualityRange](EastRimWorld/Struct/CommonStruct__FEquipmentQualityRange.md)
  - **功能说明：** 装备的品质区间
- `struct` **`FEquipmentRandomPool`** — [CommonStruct__FEquipmentRandomPool](EastRimWorld/Struct/CommonStruct__FEquipmentRandomPool.md)
  - **功能说明：** 装备的随机池子
- `struct` **`FFabricateEquipmentData`** — [CommonStruct__FFabricateEquipmentData](EastRimWorld/Struct/CommonStruct__FFabricateEquipmentData.md)
  - **功能说明：** 装备的制造
- `struct` **`FFabricateTaskData`** — [CommonStruct__FFabricateTaskData](EastRimWorld/Struct/CommonStruct__FFabricateTaskData.md)
  - **功能说明：** 制造任务信息
- `struct` **`FFormulaData`** — [CommonStruct__FFormulaData](EastRimWorld/Struct/CommonStruct__FFormulaData.md)
  - **功能说明：** 配方
- `struct` **`FGenerateEquipmentData`** — [CommonStruct__FGenerateEquipmentData](EastRimWorld/Struct/CommonStruct__FGenerateEquipmentData.md)
  - **功能说明：** 生成装备的数据
- `struct` **`FGuidArr`** — [CommonStruct__FGuidArr](EastRimWorld/Struct/CommonStruct__FGuidArr.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FItemSimpleData`** — [CommonStruct__FItemSimpleData](EastRimWorld/Struct/CommonStruct__FItemSimpleData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FLoadingTipInfo`** — [CommonStruct__FLoadingTipInfo](EastRimWorld/Struct/CommonStruct__FLoadingTipInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FLoadingTipInfoArray`** — [CommonStruct__FLoadingTipInfoArray](EastRimWorld/Struct/CommonStruct__FLoadingTipInfoArray.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FNameIDArray`** — [CommonStruct__FNameIDArray](EastRimWorld/Struct/CommonStruct__FNameIDArray.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`ULoadingWidgetAsset`** — [CommonStruct__ULoadingWidgetAsset](EastRimWorld/Struct/CommonStruct__ULoadingWidgetAsset.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/CommonTaskStruct.h`

- `struct` **`FBeginnerGuideDialogue`** — [CommonTaskStruct__FBeginnerGuideDialogue](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuideDialogue.md)
  - **功能说明：** 新手引导对话配置结构
- `struct` **`FBeginnerGuideDialogueContent`** — [CommonTaskStruct__FBeginnerGuideDialogueContent](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuideDialogueContent.md)
  - **功能说明：** 新手引导对话内容
- `struct` **`FBeginnerGuidePopup`** — [CommonTaskStruct__FBeginnerGuidePopup](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuidePopup.md)
  - **功能说明：** 新手引导弹窗配置结构
- `struct` **`FBeginnerGuidePopupContent`** — [CommonTaskStruct__FBeginnerGuidePopupContent](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuidePopupContent.md)
  - **功能说明：** 新手引导弹窗内容
- `struct` **`FBeginnerGuideTips`** — [CommonTaskStruct__FBeginnerGuideTips](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuideTips.md)
  - **功能说明：** 新手引导Tips配置结构
- `struct` **`FCommonAward`** — [CommonTaskStruct__FCommonAward](EastRimWorld/Struct/CommonTaskStruct__FCommonAward.md)
  - **功能说明：** 达成任务的条件
- `struct` **`FCommonTaskCondition`** — [CommonTaskStruct__FCommonTaskCondition](EastRimWorld/Struct/CommonTaskStruct__FCommonTaskCondition.md)
  - **功能说明：** 达成任务的条件
- `struct` **`FCommonTaskInfo`** — [CommonTaskStruct__FCommonTaskInfo](EastRimWorld/Struct/CommonTaskStruct__FCommonTaskInfo.md)
  - **功能说明：** 任务
- `struct` **`FCommonTaskInstance`** — [CommonTaskStruct__FCommonTaskInstance](EastRimWorld/Struct/CommonTaskStruct__FCommonTaskInstance.md)
  - **功能说明：** 任务
- `struct` **`FTaskCategoryDetail`** — [CommonTaskStruct__FTaskCategoryDetail](EastRimWorld/Struct/CommonTaskStruct__FTaskCategoryDetail.md)
  - **功能说明：** 任务类别信息
- `struct` **`FTaskSelectableAward`** — [CommonTaskStruct__FTaskSelectableAward](EastRimWorld/Struct/CommonTaskStruct__FTaskSelectableAward.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTriggerFunction`** — [CommonTaskStruct__FTriggerFunction](EastRimWorld/Struct/CommonTaskStruct__FTriggerFunction.md)
  - **功能说明：** 触发额外功能

## `EastRimWorld/Struct/ConditionStruct.h`

- `struct` **`FCompareCondition`** — [ConditionStruct__FCompareCondition](EastRimWorld/Struct/ConditionStruct__FCompareCondition.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/DiplomacyStruct.h`

- `class` **`UPlayerDiplomacyConfigAsset`** — [DiplomacyStruct__UPlayerDiplomacyConfigAsset](EastRimWorld/Struct/DiplomacyStruct__UPlayerDiplomacyConfigAsset.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/FarmlandStruct.h`

- `struct` **`FDesignFarmlandGridData`** — [FarmlandStruct__FDesignFarmlandGridData](EastRimWorld/Struct/FarmlandStruct__FDesignFarmlandGridData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FFarmlandData`** — [FarmlandStruct__FFarmlandData](EastRimWorld/Struct/FarmlandStruct__FFarmlandData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPlantTypeTabInfo`** — [FarmlandStruct__FPlantTypeTabInfo](EastRimWorld/Struct/FarmlandStruct__FPlantTypeTabInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UFarmlandConfigAsset`** — [FarmlandStruct__UFarmlandConfigAsset](EastRimWorld/Struct/FarmlandStruct__UFarmlandConfigAsset.md)
  - **功能说明：** 田地配置资产

## `EastRimWorld/Struct/ForceStruct.h`

- `struct` **`FForceData`** — [ForceStruct__FForceData](EastRimWorld/Struct/ForceStruct__FForceData.md)
  - **功能说明：** 势力表结构体
- `struct` **`FForceSkillData`** — [ForceStruct__FForceSkillData](EastRimWorld/Struct/ForceStruct__FForceSkillData.md)
  - **功能说明：** 势力给主角的Growup属性加成
- `struct` **`FPassGameConditionDescribe`** — [ForceStruct__FPassGameConditionDescribe](EastRimWorld/Struct/ForceStruct__FPassGameConditionDescribe.md)
  - **功能说明：** 通关条件表结构体

## `EastRimWorld/Struct/ItemStruct.h`

- `struct` **`FAllTypeItemDrop`** — [ItemStruct__FAllTypeItemDrop](EastRimWorld/Struct/ItemStruct__FAllTypeItemDrop.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterApparel`** — [ItemStruct__FCharacterApparel](EastRimWorld/Struct/ItemStruct__FCharacterApparel.md)
  - **功能说明：** 角色防具
- `struct` **`FCharacterAttributeInfo`** — [ItemStruct__FCharacterAttributeInfo](EastRimWorld/Struct/ItemStruct__FCharacterAttributeInfo.md)
  - **功能说明：** 属性的详细信息
- `struct` **`FCharacterEquipment`** — [ItemStruct__FCharacterEquipment](EastRimWorld/Struct/ItemStruct__FCharacterEquipment.md)
  - **功能说明：** 角色装备
- `struct` **`FCharacterMainSkillUIConfig`** — [ItemStruct__FCharacterMainSkillUIConfig](EastRimWorld/Struct/ItemStruct__FCharacterMainSkillUIConfig.md)
  - **功能说明：** 属性的详细信息
- `struct` **`FCharacterTool`** — [ItemStruct__FCharacterTool](EastRimWorld/Struct/ItemStruct__FCharacterTool.md)
  - **功能说明：** 角色工具
- `struct` **`FCharacterWeapon`** — [ItemStruct__FCharacterWeapon](EastRimWorld/Struct/ItemStruct__FCharacterWeapon.md)
  - **功能说明：** 角色武器
- `struct` **`FCollectItem`** — [ItemStruct__FCollectItem](EastRimWorld/Struct/ItemStruct__FCollectItem.md)
  - **功能说明：** 资源参数(采集物，矿物)
- `struct` **`FCollectSaveData`** — [ItemStruct__FCollectSaveData](EastRimWorld/Struct/ItemStruct__FCollectSaveData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCollectSaveDataList`** — [ItemStruct__FCollectSaveDataList](EastRimWorld/Struct/ItemStruct__FCollectSaveDataList.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCollectedGroup`** — [ItemStruct__FCollectedGroup](EastRimWorld/Struct/ItemStruct__FCollectedGroup.md)
  - **功能说明：** 产出组
- `struct` **`FCollectedProduct`** — [ItemStruct__FCollectedProduct](EastRimWorld/Struct/ItemStruct__FCollectedProduct.md)
  - **功能说明：** 采集产出
- `struct` **`FEfficiencyByTemperature`** — [ItemStruct__FEfficiencyByTemperature](EastRimWorld/Struct/ItemStruct__FEfficiencyByTemperature.md)
  - **功能说明：** 温度与效率的关联 0<=T<=20 E=100% 21<=T<=40 E=50% T无范围E=0 策划直接填
- `struct` **`FEquipmentAttribute`** — [ItemStruct__FEquipmentAttribute](EastRimWorld/Struct/ItemStruct__FEquipmentAttribute.md)
  - **功能说明：** 装备属性
- `struct` **`FExplorationReward`** — [ItemStruct__FExplorationReward](EastRimWorld/Struct/ItemStruct__FExplorationReward.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FExplorationRewards`** — [ItemStruct__FExplorationRewards](EastRimWorld/Struct/ItemStruct__FExplorationRewards.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FFarmlandPlantSaveData`** — [ItemStruct__FFarmlandPlantSaveData](EastRimWorld/Struct/ItemStruct__FFarmlandPlantSaveData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FFarmlandPlantSaveDataList`** — [ItemStruct__FFarmlandPlantSaveDataList](EastRimWorld/Struct/ItemStruct__FFarmlandPlantSaveDataList.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGroupCorrespondingAnim`** — [ItemStruct__FGroupCorrespondingAnim](EastRimWorld/Struct/ItemStruct__FGroupCorrespondingAnim.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGrowStage`** — [ItemStruct__FGrowStage](EastRimWorld/Struct/ItemStruct__FGrowStage.md)
  - **功能说明：** 生长阶段
- `struct` **`FInventoryGeneralData`** — [ItemStruct__FInventoryGeneralData](EastRimWorld/Struct/ItemStruct__FInventoryGeneralData.md)
  - **功能说明：** 物品总表结构体
- `struct` **`FInventoryItem`** — [ItemStruct__FInventoryItem](EastRimWorld/Struct/ItemStruct__FInventoryItem.md)
  - **功能说明：** 物品结构体
- `struct` **`FItemClassify`** — [ItemStruct__FItemClassify](EastRimWorld/Struct/ItemStruct__FItemClassify.md)
  - **功能说明：** 物品分类
- `struct` **`FItemNumData`** — [ItemStruct__FItemNumData](EastRimWorld/Struct/ItemStruct__FItemNumData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FOutputData`** — [ItemStruct__FOutputData](EastRimWorld/Struct/ItemStruct__FOutputData.md)
  - **功能说明：** 资源产出数据
- `struct` **`FOutputDatas`** — [ItemStruct__FOutputDatas](EastRimWorld/Struct/ItemStruct__FOutputDatas.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FOutputInformation`** — [ItemStruct__FOutputInformation](EastRimWorld/Struct/ItemStruct__FOutputInformation.md)
  - **功能说明：** 资源产出的展示信息
- `struct` **`FOutputInformations`** — [ItemStruct__FOutputInformations](EastRimWorld/Struct/ItemStruct__FOutputInformations.md)
  - **功能说明：** 资源产出的展示信息
- `struct` **`FPuppetModificationInfo`** — [ItemStruct__FPuppetModificationInfo](EastRimWorld/Struct/ItemStruct__FPuppetModificationInfo.md)
  - **功能说明：** 傀儡装备改造相关结构体
- `struct` **`FResourcePackage`** — [ItemStruct__FResourcePackage](EastRimWorld/Struct/ItemStruct__FResourcePackage.md)
  - **功能说明：** 新游戏资源包
- `struct` **`FResourceTypeTextForTag`** — [ItemStruct__FResourceTypeTextForTag](EastRimWorld/Struct/ItemStruct__FResourceTypeTextForTag.md)
  - **功能说明：** 资源分类名结构只在右上角展示分类
- `struct` **`FStackModel`** — [ItemStruct__FStackModel](EastRimWorld/Struct/ItemStruct__FStackModel.md)
  - **功能说明：** 定义堆叠模型的结构体
- `struct` **`FTemperatureRange`** — [ItemStruct__FTemperatureRange](EastRimWorld/Struct/ItemStruct__FTemperatureRange.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTravelerGoodsConfig`** — [ItemStruct__FTravelerGoodsConfig](EastRimWorld/Struct/ItemStruct__FTravelerGoodsConfig.md)
  - **功能说明：** 商人商品配置
- `struct` **`FTravelerGoodsInfo`** — [ItemStruct__FTravelerGoodsInfo](EastRimWorld/Struct/ItemStruct__FTravelerGoodsInfo.md)
  - **功能说明：** 商人商品配置
- `struct` **`FTravelerGoodsItem`** — [ItemStruct__FTravelerGoodsItem](EastRimWorld/Struct/ItemStruct__FTravelerGoodsItem.md)
  - **功能说明：** 商人商品项配置
- `struct` **`FUseItemSaveData`** — [ItemStruct__FUseItemSaveData](EastRimWorld/Struct/ItemStruct__FUseItemSaveData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWarehouseSmallGrid`** — [ItemStruct__FWarehouseSmallGrid](EastRimWorld/Struct/ItemStruct__FWarehouseSmallGrid.md)
  - **功能说明：** 仓库中每个小格子信息

## `EastRimWorld/Struct/MartialArts.h`

- `struct` **`FAbilityTargetEntriesEffect`** — [MartialArts__FAbilityTargetEntriesEffect](EastRimWorld/Struct/MartialArts__FAbilityTargetEntriesEffect.md)
  - **功能说明：** 技能触发的词条效果
- `struct` **`FBookInfo`** — [MartialArts__FBookInfo](EastRimWorld/Struct/MartialArts__FBookInfo.md)
  - **功能说明：** 书籍
- `struct` **`FFMartialArtsCateInfo`** — [MartialArts__FFMartialArtsCateInfo](EastRimWorld/Struct/MartialArts__FFMartialArtsCateInfo.md)
  - **功能说明：** 武学大类信息
- `struct` **`FMartialArtsBookCategoryData`** — [MartialArts__FMartialArtsBookCategoryData](EastRimWorld/Struct/MartialArts__FMartialArtsBookCategoryData.md)
  - **功能说明：** 武学书籍种类
- `struct` **`FMartialArtsBookData`** — [MartialArts__FMartialArtsBookData](EastRimWorld/Struct/MartialArts__FMartialArtsBookData.md)
  - **功能说明：** 武学书籍
- `struct` **`FMartialArtsEntries`** — [MartialArts__FMartialArtsEntries](EastRimWorld/Struct/MartialArts__FMartialArtsEntries.md)
  - **功能说明：** 武学词条
- `struct` **`FMartialArtsLearnData`** — [MartialArts__FMartialArtsLearnData](EastRimWorld/Struct/MartialArts__FMartialArtsLearnData.md)
  - **功能说明：** 学习的武学信息
- `struct` **`FMartialArtsLevel`** — [MartialArts__FMartialArtsLevel](EastRimWorld/Struct/MartialArts__FMartialArtsLevel.md)
  - **功能说明：** 武学等级
- `struct` **`FMartialArtsLevelConfig`** — [MartialArts__FMartialArtsLevelConfig](EastRimWorld/Struct/MartialArts__FMartialArtsLevelConfig.md)
  - **功能说明：** 武学等级配置
- `struct` **`FMartialArtsSaveHandle`** — [MartialArts__FMartialArtsSaveHandle](EastRimWorld/Struct/MartialArts__FMartialArtsSaveHandle.md)
  - **功能说明：** 学习武学后保存的信息
- `struct` **`FRealmData`** — [MartialArts__FRealmData](EastRimWorld/Struct/MartialArts__FRealmData.md)
  - **功能说明：** 境界数据
- `struct` **`FReduceCoolDownConfig`** — [MartialArts__FReduceCoolDownConfig](EastRimWorld/Struct/MartialArts__FReduceCoolDownConfig.md)
  - **功能说明：** 冷却时间减少的配置

## `EastRimWorld/Struct/NewGameStruct.h`

- `struct` **`FCharacteristicNumWeight`** — [NewGameStruct__FCharacteristicNumWeight](EastRimWorld/Struct/NewGameStruct__FCharacteristicNumWeight.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FNewGamePlace`** — [NewGameStruct__FNewGamePlace](EastRimWorld/Struct/NewGameStruct__FNewGamePlace.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UNewGameConfigAsset`** — [NewGameStruct__UNewGameConfigAsset](EastRimWorld/Struct/NewGameStruct__UNewGameConfigAsset.md)
  - **功能说明：** 新游戏流程配置资产

## `EastRimWorld/Struct/ObserveStruct.h`

- `struct` **`FObserveObjectsRecordMap`** — [ObserveStruct__FObserveObjectsRecordMap](EastRimWorld/Struct/ObserveStruct__FObserveObjectsRecordMap.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FObserveProgressesMap`** — [ObserveStruct__FObserveProgressesMap](EastRimWorld/Struct/ObserveStruct__FObserveProgressesMap.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FObserveUnlockInfo`** — [ObserveStruct__FObserveUnlockInfo](EastRimWorld/Struct/ObserveStruct__FObserveUnlockInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FObservedObjectsRecord`** — [ObserveStruct__FObservedObjectsRecord](EastRimWorld/Struct/ObserveStruct__FObservedObjectsRecord.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/Struct/StoryBackgroundStruct.h`

- `struct` **`FStoryBackgroundAnswerData`** — [StoryBackgroundStruct__FStoryBackgroundAnswerData](EastRimWorld/Struct/StoryBackgroundStruct__FStoryBackgroundAnswerData.md)
  - **功能说明：** 故事背景选项
- `struct` **`FStoryBackgroundData`** — [StoryBackgroundStruct__FStoryBackgroundData](EastRimWorld/Struct/StoryBackgroundStruct__FStoryBackgroundData.md)
  - **功能说明：** 故事背景选项（新的）
- `struct` **`FStoryBackgroundQuestionData`** — [StoryBackgroundStruct__FStoryBackgroundQuestionData](EastRimWorld/Struct/StoryBackgroundStruct__FStoryBackgroundQuestionData.md)
  - **功能说明：** 故事背景问题

## `EastRimWorld/Struct/TechnologyStruct.h`

- `struct` **`FTechCategoryUIConfigStruct`** — [TechnologyStruct__FTechCategoryUIConfigStruct](EastRimWorld/Struct/TechnologyStruct__FTechCategoryUIConfigStruct.md)
  - **功能说明：** 科技分类UI配置表结构
- `struct` **`FTechPointConverConfigStruct`** — [TechnologyStruct__FTechPointConverConfigStruct](EastRimWorld/Struct/TechnologyStruct__FTechPointConverConfigStruct.md)
  - **功能说明：** 科技点数转化配置表结构
- `struct` **`FTechUnlockItemConigStruct`** — [TechnologyStruct__FTechUnlockItemConigStruct](EastRimWorld/Struct/TechnologyStruct__FTechUnlockItemConigStruct.md)
  - **功能说明：** 科技解锁物品配置表结构
- `struct` **`FTechnologyConfigStruct`** — [TechnologyStruct__FTechnologyConfigStruct](EastRimWorld/Struct/TechnologyStruct__FTechnologyConfigStruct.md)
  - **功能说明：** 科技配置表结构
- `struct` **`FTechnologyItemStruct`** — [TechnologyStruct__FTechnologyItemStruct](EastRimWorld/Struct/TechnologyStruct__FTechnologyItemStruct.md)
  - **功能说明：** 科技项目研发进度

## `EastRimWorld/System/BreakThrough/BreakThroughManager.h`

- `class` **`ABreakThroughManager`** — [BreakThroughManager__ABreakThroughManager](EastRimWorld/System/BreakThrough/BreakThroughManager__ABreakThroughManager.md)
  - **功能说明：** 角色突破管理器

## `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

- `struct` **`FBreakThroughInfo`** — [BreakThroughStruct__FBreakThroughInfo](EastRimWorld/System/BreakThrough/BreakThroughStruct__FBreakThroughInfo.md)
  - **功能说明：** 突破信息实例
- `struct` **`FSkillPoolConfig`** — [BreakThroughStruct__FSkillPoolConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FSkillPoolConfig.md)
  - **功能说明：** 技能池配置
- `struct` **`FTrainingRoomConfig`** — [BreakThroughStruct__FTrainingRoomConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FTrainingRoomConfig.md)
  - **功能说明：** 练功房配置
- `struct` **`FTrainingRoomLevelConfig`** — [BreakThroughStruct__FTrainingRoomLevelConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FTrainingRoomLevelConfig.md)
  - **功能说明：** 练功房等级配置
- `struct` **`FWeatherBonusConfig`** — [BreakThroughStruct__FWeatherBonusConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FWeatherBonusConfig.md)
  - **功能说明：** 天气加成配置
- `class` **`UBreakThroughConfigurationAsset`** — [BreakThroughStruct__UBreakThroughConfigurationAsset](EastRimWorld/System/BreakThrough/BreakThroughStruct__UBreakThroughConfigurationAsset.md)
  - **功能说明：** 突破配置资产

## `EastRimWorld/System/Dialogue/DialogueManager.h`

- `class` **`ADialogueManager`** — [DialogueManager__ADialogueManager](EastRimWorld/System/Dialogue/DialogueManager__ADialogueManager.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Dialogue/DialogueStruct.h`

- `struct` **`FDialogueGroup`** — [DialogueStruct__FDialogueGroup](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueGroup.md)
  - **功能说明：** 对话组
- `struct` **`FDialogueGroupItem`** — [DialogueStruct__FDialogueGroupItem](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueGroupItem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FDialogueInfo`** — [DialogueStruct__FDialogueInfo](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueInfo.md)
  - **功能说明：** 对话信息
- `struct` **`FDialogueOption`** — [DialogueStruct__FDialogueOption](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueOption.md)
  - **功能说明：** 对话选项
- `struct` **`FDialogueRandOptions`** — [DialogueStruct__FDialogueRandOptions](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueRandOptions.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FDialogueSpec`** — [DialogueStruct__FDialogueSpec](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueSpec.md)
  - **功能说明：** 具体对话
- `struct` **`FDialogueTriggerFunctionData`** — [DialogueStruct__FDialogueTriggerFunctionData](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueTriggerFunctionData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Energy/EnergySplineActor.h`

- `class` **`AEnergySplineActor`** — [EnergySplineActor__AEnergySplineActor](EastRimWorld/System/Energy/EnergySplineActor__AEnergySplineActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Energy/EnergySystem.h`

- `class` **`UEnergySystem`** — [EnergySystem__UEnergySystem](EastRimWorld/System/Energy/EnergySystem__UEnergySystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/EventGenerateCharacterComponent.h`

- `class` **`UEventGenerateCharacterComponent`** — [EventGenerateCharacterComponent__UEventGenerateCharacterComponent](EastRimWorld/System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

- `struct` **`FBuildingNumData`** — [BirdLetterSystem__FBuildingNumData](EastRimWorld/System/Letterpaper/BirdLetterSystem__FBuildingNumData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterLetterData`** — [BirdLetterSystem__FCharacterLetterData](EastRimWorld/System/Letterpaper/BirdLetterSystem__FCharacterLetterData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FLetterPaperConfig`** — [BirdLetterSystem__FLetterPaperConfig](EastRimWorld/System/Letterpaper/BirdLetterSystem__FLetterPaperConfig.md)
  - **功能说明：** 对话碎片表
- `class` **`UBirdLetterSystem`** — [BirdLetterSystem__UBirdLetterSystem](EastRimWorld/System/Letterpaper/BirdLetterSystem__UBirdLetterSystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/MonsterNest/MonsterNestActor.h`

- `class` **`AMonsterNestActor`** — [MonsterNestActor__AMonsterNestActor](EastRimWorld/System/MonsterNest/MonsterNestActor__AMonsterNestActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Sound/AN_PlaySound.h`

- `class` **`UAN_PlaySound`** — [AN_PlaySound__UAN_PlaySound](EastRimWorld/System/Sound/AN_PlaySound__UAN_PlaySound.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Sound/PlaySoundSystem.h`

- `struct` **`FAkAudioEventInfo`** — [PlaySoundSystem__FAkAudioEventInfo](EastRimWorld/System/Sound/PlaySoundSystem__FAkAudioEventInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FAkAudioSoundChangeEvent`** — [PlaySoundSystem__FAkAudioSoundChangeEvent](EastRimWorld/System/Sound/PlaySoundSystem__FAkAudioSoundChangeEvent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGameSoundInfo`** — [PlaySoundSystem__FGameSoundInfo](EastRimWorld/System/Sound/PlaySoundSystem__FGameSoundInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FSoundChangeEventConfig`** — [PlaySoundSystem__FSoundChangeEventConfig](EastRimWorld/System/Sound/PlaySoundSystem__FSoundChangeEventConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FSoundOperateConfig`** — [PlaySoundSystem__FSoundOperateConfig](EastRimWorld/System/Sound/PlaySoundSystem__FSoundOperateConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UPlaySoundSystem`** — [PlaySoundSystem__UPlaySoundSystem](EastRimWorld/System/Sound/PlaySoundSystem__UPlaySoundSystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UPlaySoundSystemSetUp`** — [PlaySoundSystem__UPlaySoundSystemSetUp](EastRimWorld/System/Sound/PlaySoundSystem__UPlaySoundSystemSetUp.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Sound/SoundActor.h`

- `class` **`ASoundActor`** — [SoundActor__ASoundActor](EastRimWorld/System/Sound/SoundActor__ASoundActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Task/BeginnerGuideComponent.h`

- `class` **`UBeginnerGuideComponent`** — [BeginnerGuideComponent__UBeginnerGuideComponent](EastRimWorld/System/Task/BeginnerGuideComponent__UBeginnerGuideComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Task/CommonTaskComponent.h`

- `class` **`UCommonTaskComponent`** — [CommonTaskComponent__UCommonTaskComponent](EastRimWorld/System/Task/CommonTaskComponent__UCommonTaskComponent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Task/TaskSubsystem.h`

- `class` **`UTaskSubsystem`** — [TaskSubsystem__UTaskSubsystem](EastRimWorld/System/Task/TaskSubsystem__UTaskSubsystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/System/Tournament/TournamentBattleManager.h`

- `class` **`ATournamentBattleManager`** — [TournamentBattleManager__ATournamentBattleManager](EastRimWorld/System/Tournament/TournamentBattleManager__ATournamentBattleManager.md)
  - **功能说明：** 门派比武战斗管理器 专门用于管理门派比武的战斗场景
- `struct` **`FDamageInfo`** — [TournamentBattleManager__FDamageInfo](EastRimWorld/System/Tournament/TournamentBattleManager__FDamageInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTournamentBattleCharacterInfo`** — [TournamentBattleManager__FTournamentBattleCharacterInfo](EastRimWorld/System/Tournament/TournamentBattleManager__FTournamentBattleCharacterInfo.md)
  - **功能说明：** 门派比武战斗角色信息

## `EastRimWorld/System/Tournament/TournamentManager.h`

- `class` **`ATournamentManager`** — [TournamentManager__ATournamentManager](EastRimWorld/System/Tournament/TournamentManager__ATournamentManager.md)
  - **功能说明：** 武林大会管理器

## `EastRimWorld/System/Tournament/TournamentStruct.h`

- `struct` **`FAnnualRewardConfig`** — [TournamentStruct__FAnnualRewardConfig](EastRimWorld/System/Tournament/TournamentStruct__FAnnualRewardConfig.md)
  - **功能说明：** 年度奖励配置
- `struct` **`FOffFieldOperationInfo`** — [TournamentStruct__FOffFieldOperationInfo](EastRimWorld/System/Tournament/TournamentStruct__FOffFieldOperationInfo.md)
  - **功能说明：** 场外操作信息
- `struct` **`FOffFieldOperationInstance`** — [TournamentStruct__FOffFieldOperationInstance](EastRimWorld/System/Tournament/TournamentStruct__FOffFieldOperationInstance.md)
  - **功能说明：** 场外操作信息
- `struct` **`FSectReputationInfo`** — [TournamentStruct__FSectReputationInfo](EastRimWorld/System/Tournament/TournamentStruct__FSectReputationInfo.md)
  - **功能说明：** 门派声望信息
- `struct` **`FTournamentBattleInfo`** — [TournamentStruct__FTournamentBattleInfo](EastRimWorld/System/Tournament/TournamentStruct__FTournamentBattleInfo.md)
  - **功能说明：** 单场比赛战斗信息
- `struct` **`FTournamentGroupInfo`** — [TournamentStruct__FTournamentGroupInfo](EastRimWorld/System/Tournament/TournamentStruct__FTournamentGroupInfo.md)
  - **功能说明：** 比赛分组信息
- `struct` **`FTournamentInstance`** — [TournamentStruct__FTournamentInstance](EastRimWorld/System/Tournament/TournamentStruct__FTournamentInstance.md)
  - **功能说明：** 比赛信息
- `struct` **`FTournamentRankReputation`** — [TournamentStruct__FTournamentRankReputation](EastRimWorld/System/Tournament/TournamentStruct__FTournamentRankReputation.md)
  - **功能说明：** 行进的路径点
- `struct` **`FTournamentRule`** — [TournamentStruct__FTournamentRule](EastRimWorld/System/Tournament/TournamentStruct__FTournamentRule.md)
  - **功能说明：** 比赛规则
- `struct` **`FTournamentSectInfo`** — [TournamentStruct__FTournamentSectInfo](EastRimWorld/System/Tournament/TournamentStruct__FTournamentSectInfo.md)
  - **功能说明：** 势力的比赛信息
- `struct` **`FTournamentSpawnPoint`** — [TournamentStruct__FTournamentSpawnPoint](EastRimWorld/System/Tournament/TournamentStruct__FTournamentSpawnPoint.md)
  - **功能说明：** 行进的路径点

## `EastRimWorld/System/Tournament/TournamentSubsystem.h`

- `class` **`UTournamentSubsystem`** — [TournamentSubsystem__UTournamentSubsystem](EastRimWorld/System/Tournament/TournamentSubsystem__UTournamentSubsystem.md)
  - **功能说明：** 门派比武系统子系统

## `EastRimWorld/Teams/AsyncAction_ObserveTeam.h`

- `class` **`UAsyncAction_ObserveTeam`** — [AsyncAction_ObserveTeam__UAsyncAction_ObserveTeam](EastRimWorld/Teams/AsyncAction_ObserveTeam__UAsyncAction_ObserveTeam.md)
  - **功能说明：** Watches for team changes in the specified object

## `EastRimWorld/Teams/EastRimWorldTeamStatics.h`

- `class` **`UEastRimWorldTeamStatics`** — [EastRimWorldTeamStatics__UEastRimWorldTeamStatics](EastRimWorld/Teams/EastRimWorldTeamStatics__UEastRimWorldTeamStatics.md)
  - **功能说明：** A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

- `class` **`UEastRimWorldTeamSubsystem`** — [EastRimWorldTeamSubsystem__UEastRimWorldTeamSubsystem](EastRimWorld/Teams/EastRimWorldTeamSubsystem__UEastRimWorldTeamSubsystem.md)
  - **功能说明：** A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## `EastRimWorld/UI/Common/CommonModuleBase.h`

- `class` **`UCommonModuleBase`** — [CommonModuleBase__UCommonModuleBase](EastRimWorld/UI/Common/CommonModuleBase__UCommonModuleBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Common/EastRimWorldSceneTextWidget.h`

- `class` **`UEastRimWorldSceneTextWidget`** — [EastRimWorldSceneTextWidget__UEastRimWorldSceneTextWidget](EastRimWorld/UI/Common/EastRimWorldSceneTextWidget__UEastRimWorldSceneTextWidget.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Common/EastRimWorldTabButtonBase.h`

- `class` **`UEastRimWorldTabButtonBase`** — [EastRimWorldTabButtonBase__UEastRimWorldTabButtonBase](EastRimWorld/UI/Common/EastRimWorldTabButtonBase__UEastRimWorldTabButtonBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

- `struct` **`FEastRimWorldTabDescriptor`** — [EastRimWorldTabListWidgetBase__FEastRimWorldTabDescriptor](EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase__FEastRimWorldTabDescriptor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `class` **`UEastRimWorldTabListWidgetBase`** — [EastRimWorldTabListWidgetBase__UEastRimWorldTabListWidgetBase](EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase__UEastRimWorldTabListWidgetBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Common/EastRimWorldWidgetFactory.h`

- `class` **`UEastRimWorldWidgetFactory`** — [EastRimWorldWidgetFactory__UEastRimWorldWidgetFactory](EastRimWorld/UI/Common/EastRimWorldWidgetFactory__UEastRimWorldWidgetFactory.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Common/PopTipWidget.h`

- `class` **`UPopTipWidget`** — [PopTipWidget__UPopTipWidget](EastRimWorld/UI/Common/PopTipWidget__UPopTipWidget.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator.h`

- `struct` **`FWikiUIConfig`** — [RichTextBlockSHyperlinkDecorator__FWikiUIConfig](EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator__FWikiUIConfig.md)
  - **功能说明：** wiki结构表
- `class` **`URichTextBlockSHyperlinkDecorator`** — [RichTextBlockSHyperlinkDecorator__URichTextBlockSHyperlinkDecorator](EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator__URichTextBlockSHyperlinkDecorator.md)
  - **功能说明：** Allows you to setup an image decorator that can be configured to map certain keys to certain images. We recommend you subclass this as a blueprint to configure the instance. Understands the format <img id="NameOfBrushInTable"></>

## `EastRimWorld/UI/ERWComboBoxString.h`

- `class` **`UERWComboBoxString`** — [ERWComboBoxString__UERWComboBoxString](EastRimWorld/UI/ERWComboBoxString__UERWComboBoxString.md)
  - **功能说明：** The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.

## `EastRimWorld/UI/EastRimWorldActivatableWidget.h`

- `class` **`UEastRimWorldActivatableWidget`** — [EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget](EastRimWorld/UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)
  - **功能说明：** An activatable widget that automatically drives the desired input config when activated

## `EastRimWorld/UI/EasternEraDialogDescriptor.h`

- `class` **`UEasternEraDialogDescriptor`** — [EasternEraDialogDescriptor__UEasternEraDialogDescriptor](EastRimWorld/UI/EasternEraDialogDescriptor__UEasternEraDialogDescriptor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Foundation/CommonSidePushBase.h`

- `class` **`UCommonSidePushBase`** — [CommonSidePushBase__UCommonSidePushBase](EastRimWorld/UI/Foundation/CommonSidePushBase__UCommonSidePushBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Foundation/EastRimWorldActionWidget.h`

- `class` **`UEastRimWorldActionWidget`** — [EastRimWorldActionWidget__UEastRimWorldActionWidget](EastRimWorld/UI/Foundation/EastRimWorldActionWidget__UEastRimWorldActionWidget.md)
  - **功能说明：** An action widget that will get the icon of key that is currently assigned to the common input action on this widget

## `EastRimWorld/UI/Foundation/EastRimWorldButtonBase.h`

- `class` **`UEastRimWorldButtonBase`** — [EastRimWorldButtonBase__UEastRimWorldButtonBase](EastRimWorld/UI/Foundation/EastRimWorldButtonBase__UEastRimWorldButtonBase.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Foundation/EastRimWorldConfirmationScreen.h`

- `class` **`UEastRimWorldConfirmationScreen`** — [EastRimWorldConfirmationScreen__UEastRimWorldConfirmationScreen](EastRimWorld/UI/Foundation/EastRimWorldConfirmationScreen__UEastRimWorldConfirmationScreen.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/Struct/UIStruct.h`

- `struct` **`FAchievementUIConfigData`** — [UIStruct__FAchievementUIConfigData](EastRimWorld/UI/Struct/UIStruct__FAchievementUIConfigData.md)
  - **功能说明：** / 成就UI配置结构
- `struct` **`FBuildingUIConfig`** — [UIStruct__FBuildingUIConfig](EastRimWorld/UI/Struct/UIStruct__FBuildingUIConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCommonButton`** — [UIStruct__FCommonButton](EastRimWorld/UI/Struct/UIStruct__FCommonButton.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCommonUIConfig`** — [UIStruct__FCommonUIConfig](EastRimWorld/UI/Struct/UIStruct__FCommonUIConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FModuleUIConfig`** — [UIStruct__FModuleUIConfig](EastRimWorld/UI/Struct/UIStruct__FModuleUIConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FSkillAssign`** — [UIStruct__FSkillAssign](EastRimWorld/UI/Struct/UIStruct__FSkillAssign.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTabInfo`** — [UIStruct__FTabInfo](EastRimWorld/UI/Struct/UIStruct__FTabInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FTipsUIContent`** — [UIStruct__FTipsUIContent](EastRimWorld/UI/Struct/UIStruct__FTipsUIContent.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorkPriorityUIConfigData`** — [UIStruct__FWorkPriorityUIConfigData](EastRimWorld/UI/Struct/UIStruct__FWorkPriorityUIConfigData.md)
  - **功能说明：** 工作优先级UI配置结构
- `struct` **`FWorkScheduleUIConfigData`** — [UIStruct__FWorkScheduleUIConfigData](EastRimWorld/UI/Struct/UIStruct__FWorkScheduleUIConfigData.md)
  - **功能说明：** 工作日程UI配置结构

## `EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem.h`

- `class` **`UEastRimWorldUIManagerSubsystem`** — [EastRimWorldUIManagerSubsystem__UEastRimWorldUIManagerSubsystem](EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem__UEastRimWorldUIManagerSubsystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/UI/TotalWorld/TotalWorldMap.h`

- `class` **`UTotalWorldMap`** — [TotalWorldMap__UTotalWorldMap](EastRimWorld/UI/TotalWorld/TotalWorldMap__UTotalWorldMap.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldArea.h`

- `class` **`AWorldArea`** — [WorldArea__AWorldArea](EastRimWorld/WorldSystem/WorldArea__AWorldArea.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

- `class` **`AWorldBattleManager`** — [WorldBattleManager__AWorldBattleManager](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__AWorldBattleManager.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterTypes`** — [WorldBattleManager__FCharacterTypes](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__FCharacterTypes.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCompositeKey`** — [WorldBattleManager__FCompositeKey](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__FCompositeKey.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldBattleCharacterInfo`** — [WorldBattleManager__FWorldBattleCharacterInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__FWorldBattleCharacterInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

- `struct` **`FAutoReleaseStrategyRule`** — [WorldBattleStruct__FAutoReleaseStrategyRule](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FAutoReleaseStrategyRule.md)
  - **功能说明：** 自动释放战略规则
- `struct` **`FAutoUseCharacterRule`** — [WorldBattleStruct__FAutoUseCharacterRule](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FAutoUseCharacterRule.md)
  - **功能说明：** 自动释放战略规则
- `struct` **`FBattleRuleset`** — [WorldBattleStruct__FBattleRuleset](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleRuleset.md)
  - **功能说明：** 战斗规则
- `struct` **`FBattleTeamInfo`** — [WorldBattleStruct__FBattleTeamInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleTeamInfo.md)
  - **功能说明：** 参与战斗的阵营信息
- `struct` **`FBattleTeamState`** — [WorldBattleStruct__FBattleTeamState](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleTeamState.md)
  - **功能说明：** 战斗阵营状态
- `struct` **`FBattlefieldAward`** — [WorldBattleStruct__FBattlefieldAward](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattlefieldAward.md)
  - **功能说明：** 战场结果
- `struct` **`FBattlefieldInformation`** — [WorldBattleStruct__FBattlefieldInformation](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattlefieldInformation.md)
  - **功能说明：** 战场信息
- `struct` **`FBattlefieldResult`** — [WorldBattleStruct__FBattlefieldResult](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattlefieldResult.md)
  - **功能说明：** 战场结果
- `struct` **`FCaptureDisposal`** — [WorldBattleStruct__FCaptureDisposal](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCaptureDisposal.md)
  - **功能说明：** 俘虏的处置
- `struct` **`FCharacterBattleInfo`** — [WorldBattleStruct__FCharacterBattleInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterBattleInfo.md)
  - **功能说明：** 角色的战斗信息
- `struct` **`FCharacterCureInfo`** — [WorldBattleStruct__FCharacterCureInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterCureInfo.md)
  - **功能说明：** 角色的治疗信息
- `struct` **`FCharacterRealmRelevancyData`** — [WorldBattleStruct__FCharacterRealmRelevancyData](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterRealmRelevancyData.md)
  - **功能说明：** 角色境界关联的数据
- `struct` **`FCharactersWanderMessage`** — [WorldBattleStruct__FCharactersWanderMessage](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharactersWanderMessage.md)
  - **功能说明：** 开始游荡的角色信息
- `struct` **`FPlaceDisposal`** — [WorldBattleStruct__FPlaceDisposal](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FPlaceDisposal.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPostwarCharacterDispose`** — [WorldBattleStruct__FPostwarCharacterDispose](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FPostwarCharacterDispose.md)
  - **功能说明：** 战场结果
- `struct` **`FStratagemAbility`** — [WorldBattleStruct__FStratagemAbility](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FStratagemAbility.md)
  - **功能说明：** 战略技能
- `struct` **`FStratagemAbilityFunction`** — [WorldBattleStruct__FStratagemAbilityFunction](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FStratagemAbilityFunction.md)
  - **功能说明：** 战略技能
- `struct` **`FTeamBaseInformation`** — [WorldBattleStruct__FTeamBaseInformation](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FTeamBaseInformation.md)
  - **功能说明：** 基地信息
- `struct` **`FTeamBasePoint`** — [WorldBattleStruct__FTeamBasePoint](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FTeamBasePoint.md)
  - **功能说明：** 行进的路径点

## `EastRimWorld/WorldSystem/WorldBuildingLightManager.h`

- `class` **`AWorldBuildingLightManager`** — [WorldBuildingLightManager__AWorldBuildingLightManager](EastRimWorld/WorldSystem/WorldBuildingLightManager__AWorldBuildingLightManager.md)
  - **功能说明：** 建筑夜景灯光管理：黑夜时在摄像机一定范围内，用池化灯光组件（最多 20 个）显示已注册建筑的灯具配置。 灯光组件挂在本 Actor 上，不使用时隐藏。

## `EastRimWorld/WorldSystem/WorldCharacterData.h`

- `struct` **`FBreakThroughHarvest`** — [WorldCharacterData__FBreakThroughHarvest](EastRimWorld/WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCharacterSaveData`** — [WorldCharacterData__FCharacterSaveData](EastRimWorld/WorldSystem/WorldCharacterData__FCharacterSaveData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldDirector.h`

- `class` **`AWorldDirector`** — [WorldDirector__AWorldDirector](EastRimWorld/WorldSystem/WorldDirector__AWorldDirector.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FApplyTeamBuffData`** — [WorldDirector__FApplyTeamBuffData](EastRimWorld/WorldSystem/WorldDirector__FApplyTeamBuffData.md)
  - **功能说明：** 施加的阵营buff

## `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

- `class` **`AWorldEventManagerActor`** — [WorldEventManagerActor__AWorldEventManagerActor](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__AWorldEventManagerActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FUnlockedPauseSlotInfo`** — [WorldEventManagerActor__FUnlockedPauseSlotInfo](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FUnlockedPauseSlotInfo.md)
  - **功能说明：** 解锁暂停插槽的信息
- `struct` **`FWorldEventDetail`** — [WorldEventManagerActor__FWorldEventDetail](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FWorldEventDetail.md)
  - **功能说明：** 世界事件详细信息
- `struct` **`FWorldEventInfo`** — [WorldEventManagerActor__FWorldEventInfo](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FWorldEventInfo.md)
  - **功能说明：** 世界事件生成信息
- `struct` **`FWorldEventSpawnConfig`** — [WorldEventManagerActor__FWorldEventSpawnConfig](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FWorldEventSpawnConfig.md)
  - **功能说明：** 世界事件生成信息

## `EastRimWorld/WorldSystem/WorldForce.h`

- `class` **`AWorldForce`** — [WorldForce__AWorldForce](EastRimWorld/WorldSystem/WorldForce__AWorldForce.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldLightActor.h`

- `class` **`AWorldLightActor`** — [WorldLightActor__AWorldLightActor](EastRimWorld/WorldSystem/WorldLightActor__AWorldLightActor.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldManagerSystem.h`

- `class` **`UWorldManagerSystem`** — [WorldManagerSystem__UWorldManagerSystem](EastRimWorld/WorldSystem/WorldManagerSystem__UWorldManagerSystem.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldMapManage.h`

- `class` **`AWorldMapManage`** — [WorldMapManage__AWorldMapManage](EastRimWorld/WorldSystem/WorldMapManage__AWorldMapManage.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldPlace.h`

- `class` **`AWorldPlace`** — [WorldPlace__AWorldPlace](EastRimWorld/WorldSystem/WorldPlace__AWorldPlace.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WorldPlaceSpecialEffectSubsystem.h`

- `class` **`UWorldPlaceSpecialEffectSubsystem`** — [WorldPlaceSpecialEffectSubsystem__UWorldPlaceSpecialEffectSubsystem](EastRimWorld/WorldSystem/WorldPlaceSpecialEffectSubsystem__UWorldPlaceSpecialEffectSubsystem.md)
  - **功能说明：** 管理各地点的特殊效果（全局效果）：每个 AWorldPlace 独立数值，配置在 FWorldPlaceInfo，拥有效果存档、数值读档后重算。

## `EastRimWorld/WorldSystem/WorldStruct.h`

- `struct` **`FAttackEarlyWarning`** — [WorldStruct__FAttackEarlyWarning](EastRimWorld/WorldSystem/WorldStruct__FAttackEarlyWarning.md)
  - **功能说明：** 攻击预警
- `struct` **`FBattleBuffGroup`** — [WorldStruct__FBattleBuffGroup](EastRimWorld/WorldSystem/WorldStruct__FBattleBuffGroup.md)
  - **功能说明：** 战斗buff集合
- `struct` **`FCharacterWorldMoveInfo`** — [WorldStruct__FCharacterWorldMoveInfo](EastRimWorld/WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md)
  - **功能说明：** 角色世界地图移动信息
- `struct` **`FCharacterWorldPlaceData`** — [WorldStruct__FCharacterWorldPlaceData](EastRimWorld/WorldSystem/WorldStruct__FCharacterWorldPlaceData.md)
  - **功能说明：** 驻扎角色的城镇数据
- `struct` **`FCommonTips`** — [WorldStruct__FCommonTips](EastRimWorld/WorldSystem/WorldStruct__FCommonTips.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCommonTipsArr`** — [WorldStruct__FCommonTipsArr](EastRimWorld/WorldSystem/WorldStruct__FCommonTipsArr.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FCultivateAttributeValueWeight`** — [WorldStruct__FCultivateAttributeValueWeight](EastRimWorld/WorldSystem/WorldStruct__FCultivateAttributeValueWeight.md)
  - **功能说明：** NPC培养角色属性加值权重
- `struct` **`FCultivateAttributeWeight`** — [WorldStruct__FCultivateAttributeWeight](EastRimWorld/WorldSystem/WorldStruct__FCultivateAttributeWeight.md)
  - **功能说明：** NPC培养角色属性抽取权重
- `struct` **`FCustomApparelsSkin`** — [WorldStruct__FCustomApparelsSkin](EastRimWorld/WorldSystem/WorldStruct__FCustomApparelsSkin.md)
  - **功能说明：** 服饰外观数据
- `struct` **`FEnemyAttackGenerationConfig`** — [WorldStruct__FEnemyAttackGenerationConfig](EastRimWorld/WorldSystem/WorldStruct__FEnemyAttackGenerationConfig.md)
  - **功能说明：** 敌对势力袭击配置
- `struct` **`FEnemyForceAttackGenerationInfo`** — [WorldStruct__FEnemyForceAttackGenerationInfo](EastRimWorld/WorldSystem/WorldStruct__FEnemyForceAttackGenerationInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FFGuidArr`** — [WorldStruct__FFGuidArr](EastRimWorld/WorldSystem/WorldStruct__FFGuidArr.md)
  - **功能说明：** FGuidArr
- `struct` **`FForceAimInfo`** — [WorldStruct__FForceAimInfo](EastRimWorld/WorldSystem/WorldStruct__FForceAimInfo.md)
  - **功能说明：** 势力宗旨配置表
- `struct` **`FForceAttackTypeConfig`** — [WorldStruct__FForceAttackTypeConfig](EastRimWorld/WorldSystem/WorldStruct__FForceAttackTypeConfig.md)
  - **功能说明：** 势力攻击行为配置
- `struct` **`FForceCreateCondition`** — [WorldStruct__FForceCreateCondition](EastRimWorld/WorldSystem/WorldStruct__FForceCreateCondition.md)
  - **功能说明：** 势力创建条件
- `struct` **`FForceFavorabilityConfig`** — [WorldStruct__FForceFavorabilityConfig](EastRimWorld/WorldSystem/WorldStruct__FForceFavorabilityConfig.md)
  - **功能说明：** 势力好感度配置
- `struct` **`FForceFavorabilityInfo`** — [WorldStruct__FForceFavorabilityInfo](EastRimWorld/WorldSystem/WorldStruct__FForceFavorabilityInfo.md)
  - **功能说明：** 势力好感信息
- `struct` **`FForceInitFavorability`** — [WorldStruct__FForceInitFavorability](EastRimWorld/WorldSystem/WorldStruct__FForceInitFavorability.md)
  - **功能说明：** 势力间好感度初始配置
- `struct` **`FForceLevelInfo`** — [WorldStruct__FForceLevelInfo](EastRimWorld/WorldSystem/WorldStruct__FForceLevelInfo.md)
  - **功能说明：** 势力等级信息（势力声望级别配置）
- `struct` **`FForceMemberJobInfo`** — [WorldStruct__FForceMemberJobInfo](EastRimWorld/WorldSystem/WorldStruct__FForceMemberJobInfo.md)
  - **功能说明：** 势力人员职位信息
- `struct` **`FForcePurpose`** — [WorldStruct__FForcePurpose](EastRimWorld/WorldSystem/WorldStruct__FForcePurpose.md)
  - **功能说明：** 门派宗旨
- `struct` **`FForceSubClassInfo`** — [WorldStruct__FForceSubClassInfo](EastRimWorld/WorldSystem/WorldStruct__FForceSubClassInfo.md)
  - **功能说明：** 势力堂口信息（内门、外门、外事）
- `struct` **`FForceWarInfo`** — [WorldStruct__FForceWarInfo](EastRimWorld/WorldSystem/WorldStruct__FForceWarInfo.md)
  - **功能说明：** 势力战争信息
- `struct` **`FGarrisonRatio`** — [WorldStruct__FGarrisonRatio](EastRimWorld/WorldSystem/WorldStruct__FGarrisonRatio.md)
  - **功能说明：** 驻守比例
- `struct` **`FGenerationData`** — [WorldStruct__FGenerationData](EastRimWorld/WorldSystem/WorldStruct__FGenerationData.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FGenerationInstanceInfo`** — [WorldStruct__FGenerationInstanceInfo](EastRimWorld/WorldSystem/WorldStruct__FGenerationInstanceInfo.md)
  - **功能说明：** 生成的实例
- `struct` **`FGenerationProbabilityInfluence`** — [WorldStruct__FGenerationProbabilityInfluence](EastRimWorld/WorldSystem/WorldStruct__FGenerationProbabilityInfluence.md)
  - **功能说明：** 生成的概率影响
- `struct` **`FGenerationRuleData`** — [WorldStruct__FGenerationRuleData](EastRimWorld/WorldSystem/WorldStruct__FGenerationRuleData.md)
  - **功能说明：** 生成的规则
- `struct` **`FGenerationSetData`** — [WorldStruct__FGenerationSetData](EastRimWorld/WorldSystem/WorldStruct__FGenerationSetData.md)
  - **功能说明：** 生成的信息
- `struct` **`FInstanceGenerationActorInfo`** — [WorldStruct__FInstanceGenerationActorInfo](EastRimWorld/WorldSystem/WorldStruct__FInstanceGenerationActorInfo.md)
  - **功能说明：** 实例信息
- `struct` **`FMediaConfig`** — [WorldStruct__FMediaConfig](EastRimWorld/WorldSystem/WorldStruct__FMediaConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FMonsterAttackSetting`** — [WorldStruct__FMonsterAttackSetting](EastRimWorld/WorldSystem/WorldStruct__FMonsterAttackSetting.md)
  - **功能说明：** 怪物巢穴攻击设置
- `struct` **`FMonsterGenerationConfig`** — [WorldStruct__FMonsterGenerationConfig](EastRimWorld/WorldSystem/WorldStruct__FMonsterGenerationConfig.md)
  - **功能说明：** 怪物生成
- `struct` **`FMonsterGenerationInfo`** — [WorldStruct__FMonsterGenerationInfo](EastRimWorld/WorldSystem/WorldStruct__FMonsterGenerationInfo.md)
  - **功能说明：** 怪物生成
- `struct` **`FMonsterNestInfo`** — [WorldStruct__FMonsterNestInfo](EastRimWorld/WorldSystem/WorldStruct__FMonsterNestInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FNPCCultivateCharacterTypeData`** — [WorldStruct__FNPCCultivateCharacterTypeData](EastRimWorld/WorldSystem/WorldStruct__FNPCCultivateCharacterTypeData.md)
  - **功能说明：** NPC势力角色培养方式
- `struct` **`FNPCForceArmorPool`** — [WorldStruct__FNPCForceArmorPool](EastRimWorld/WorldSystem/WorldStruct__FNPCForceArmorPool.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPawnSaveInfo`** — [WorldStruct__FPawnSaveInfo](EastRimWorld/WorldSystem/WorldStruct__FPawnSaveInfo.md)
  - **功能说明：** pawn的存储信息 位置 旋转 弹簧臂等
- `struct` **`FPlaceBuildAction`** — [WorldStruct__FPlaceBuildAction](EastRimWorld/WorldSystem/WorldStruct__FPlaceBuildAction.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPlaceBuildLevelInfo`** — [WorldStruct__FPlaceBuildLevelInfo](EastRimWorld/WorldSystem/WorldStruct__FPlaceBuildLevelInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPlaceDistanceTimeAndSpeed`** — [WorldStruct__FPlaceDistanceTimeAndSpeed](EastRimWorld/WorldSystem/WorldStruct__FPlaceDistanceTimeAndSpeed.md)
  - **功能说明：** 角色世界地图移动信息预设
- `struct` **`FPlaceLevelDistinguishInfo`** — [WorldStruct__FPlaceLevelDistinguishInfo](EastRimWorld/WorldSystem/WorldStruct__FPlaceLevelDistinguishInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FPlaceLevelInfo`** — [WorldStruct__FPlaceLevelInfo](EastRimWorld/WorldSystem/WorldStruct__FPlaceLevelInfo.md)
  - **功能说明：** 地点等级信息
- `struct` **`FPlaceLevelOutPut`** — [WorldStruct__FPlaceLevelOutPut](EastRimWorld/WorldSystem/WorldStruct__FPlaceLevelOutPut.md)
  - **功能说明：** 城镇等级产出
- `struct` **`FPositionArr`** — [WorldStruct__FPositionArr](EastRimWorld/WorldSystem/WorldStruct__FPositionArr.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FRaidEventElementInfo`** — [WorldStruct__FRaidEventElementInfo](EastRimWorld/WorldSystem/WorldStruct__FRaidEventElementInfo.md)
  - **功能说明：** 事件队列信息（事件冷却队列，袭击事件执行队列）
- `struct` **`FRaidRuleset`** — [WorldStruct__FRaidRuleset](EastRimWorld/WorldSystem/WorldStruct__FRaidRuleset.md)
  - **功能说明：** 袭击规则（触发模式）
- `struct` **`FSeasonMaterialInfo`** — [WorldStruct__FSeasonMaterialInfo](EastRimWorld/WorldSystem/WorldStruct__FSeasonMaterialInfo.md)
  - **功能说明：** 季节变化材质配置表
- `struct` **`FSeasonWeathersInfo`** — [WorldStruct__FSeasonWeathersInfo](EastRimWorld/WorldSystem/WorldStruct__FSeasonWeathersInfo.md)
  - **功能说明：** 季节天气配置表（参考 UDS_Weather_Settings）
- `struct` **`FSubClassApparelConfig`** — [WorldStruct__FSubClassApparelConfig](EastRimWorld/WorldSystem/WorldStruct__FSubClassApparelConfig.md)
  - **功能说明：** 势力服饰限制表（此表中没有的数据，就是无限制）
- `struct` **`FThreatPoolInfo`** — [WorldStruct__FThreatPoolInfo](EastRimWorld/WorldSystem/WorldStruct__FThreatPoolInfo.md)
  - **功能说明：** 威胁池信息
- `struct` **`FTransportationInfo`** — [WorldStruct__FTransportationInfo](EastRimWorld/WorldSystem/WorldStruct__FTransportationInfo.md)
  - **功能说明：** 交通工具信息
- `struct` **`FTransportationResourceInfo`** — [WorldStruct__FTransportationResourceInfo](EastRimWorld/WorldSystem/WorldStruct__FTransportationResourceInfo.md)
  - **功能说明：** 交通工具信息
- `struct` **`FWorldAgreement`** — [WorldStruct__FWorldAgreement](EastRimWorld/WorldSystem/WorldStruct__FWorldAgreement.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldAreaInfo`** — [WorldStruct__FWorldAreaInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldAreaInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldForceInfo`** — [WorldStruct__FWorldForceInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldForceInfo.md)
  - **功能说明：** 势力信息
- `struct` **`FWorldMoveInfoPreset`** — [WorldStruct__FWorldMoveInfoPreset](EastRimWorld/WorldSystem/WorldStruct__FWorldMoveInfoPreset.md)
  - **功能说明：** 角色世界地图移动信息预设
- `struct` **`FWorldNPCForceConfig`** — [WorldStruct__FWorldNPCForceConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldNPCForceConfig.md)
  - **功能说明：** NPC势力信息
- `struct` **`FWorldNPCForceTroops`** — [WorldStruct__FWorldNPCForceTroops](EastRimWorld/WorldSystem/WorldStruct__FWorldNPCForceTroops.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldPlaceBuildConfig`** — [WorldStruct__FWorldPlaceBuildConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceBuildConfig.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldPlaceBuildInfo`** — [WorldStruct__FWorldPlaceBuildInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceBuildInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldPlaceEffectConfig`** — [WorldStruct__FWorldPlaceEffectConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceEffectConfig.md)
  - **功能说明：** 城镇效果
- `struct` **`FWorldPlaceEffectInfo`** — [WorldStruct__FWorldPlaceEffectInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceEffectInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldPlaceInfo`** — [WorldStruct__FWorldPlaceInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldPlaceJobConfig`** — [WorldStruct__FWorldPlaceJobConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceJobConfig.md)
  - **功能说明：** 城镇职位配置
- `struct` **`FWorldPlaceLightInfluenceInfo`** — [WorldStruct__FWorldPlaceLightInfluenceInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceLightInfluenceInfo.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
- `struct` **`FWorldPlaceLightInfo`** — [WorldStruct__FWorldPlaceLightInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceLightInfo.md)
  - **功能说明：** 光照信息
- `struct` **`FWorldPlaceSpecialEffectConfig`** — [WorldStruct__FWorldPlaceSpecialEffectConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceSpecialEffectConfig.md)
  - **功能说明：** 地点特殊效果配置（对应数据表行）；参数直接写在配置中，按效果类型使用对应字段即可
- `struct` **`FWorldPlaceTemperatureInfo`** — [WorldStruct__FWorldPlaceTemperatureInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceTemperatureInfo.md)
  - **功能说明：** 温度信息
- `struct` **`FWorldPlaceWeatherInfo`** — [WorldStruct__FWorldPlaceWeatherInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceWeatherInfo.md)
  - **功能说明：** 天气信息
- `class` **`URaidConfigurationAsset`** — [WorldStruct__URaidConfigurationAsset](EastRimWorld/WorldSystem/WorldStruct__URaidConfigurationAsset.md)
  - **功能说明：** 袭击配置资产
- `class` **`UWorldForceConfigurationAsset`** — [WorldStruct__UWorldForceConfigurationAsset](EastRimWorld/WorldSystem/WorldStruct__UWorldForceConfigurationAsset.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）

## `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathFunctionLibrary.h`

- `class` **`UWorldMapPathFunctionLibrary`** — [WorldMapPathFunctionLibrary__UWorldMapPathFunctionLibrary](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathFunctionLibrary__UWorldMapPathFunctionLibrary.md)
  - **功能说明：** 世界地图路径查找蓝图函数库 提供易于使用的路径查找接口

## `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

- `struct` **`FPathfindingConfig`** — [WorldMapPathSubsystem__FPathfindingConfig](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__FPathfindingConfig.md)
  - **功能说明：** 性能配置
- `struct` **`FPathfindingResult`** — [WorldMapPathSubsystem__FPathfindingResult](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__FPathfindingResult.md)
  - **功能说明：** 路径查找结果
- `struct` **`FPathfindingStats`** — [WorldMapPathSubsystem__FPathfindingStats](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__FPathfindingStats.md)
  - **功能说明：** 性能统计
- `class` **`UWorldMapPathSubsystem`** — [WorldMapPathSubsystem__UWorldMapPathSubsystem](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__UWorldMapPathSubsystem.md)
  - **功能说明：** 优化的世界地图路径子系统

## `EastRimWorld/WorldSystem/WroldMapPath/WorldMapWayPoint.h`

- `class` **`AWorldMapWayPoint`** — [WorldMapWayPoint__AWorldMapWayPoint](EastRimWorld/WorldSystem/WroldMapPath/WorldMapWayPoint__AWorldMapWayPoint.md)
  - **功能说明：** （头文件未在 UCLASS/USTRUCT 声明上方提供功能说明类注释；请打开对应类型文档或查阅源码。）
