# Blueprint API Type Index (Mod Authors)

One page per **UCLASS / USTRUCT** with Blueprint-exposed members only.

**Types:** 1307
**Headers:** 279

**Description:** Each entry summarizes comments **immediately above** the type’s **`UCLASS` / `USTRUCT`** (`//` or block; what it does and which area it covers; flattened to one line and truncated). If there is no comment, a placeholder is shown; authoritative detail is still in the `.h` and per-type `.md`.

## Usage

- **Scope:** `Source/EastRimWorld`, `Plugins/CreateModPlugin`, `CreateModPluginEditor`.
- **Layout:** Paths mirror module folders; files are `{HeaderStem}__{TypeName}.md`.
- **Cross-links:** `F*` / `U*` / `A*` / `E*` tokens in property types and function signatures become **Markdown relative links** when a matching page exists in this bundle.
- **Signatures:** Template-heavy parameters may be simplified; **trust the `.h`** as source of truth.
- **Regenerate:** `python Tools/extract_blueprint_api.py` (rebuilds `BlueprintAPI_ModAuthors/zh/` and `BlueprintAPI_ModAuthors/en/`).

---

## `CreateModPlugin/Public/BaseDataStruct.h`

- `enum` **`EModCharacterBehaviorState`** — [BaseDataStruct__EModCharacterBehaviorState](CreateModPlugin/Public/BaseDataStruct__EModCharacterBehaviorState.md)
  - **Description:** Enum of mod character behavior states, identifying the action a character is currently performing (combat, sleeping, eating, working, gathering, taming, etc.).
- `enum` **`EModCharacterType`** — [BaseDataStruct__EModCharacterType](CreateModPlugin/Public/BaseDataStruct__EModCharacterType.md)
  - **Description:** 角色类型
- `enum` **`EModConfigType`** — [BaseDataStruct__EModConfigType](CreateModPlugin/Public/BaseDataStruct__EModConfigType.md)
  - **Description:** Mod配置类型
- `enum` **`EModDataAssetType`** — [BaseDataStruct__EModDataAssetType](CreateModPlugin/Public/BaseDataStruct__EModDataAssetType.md)
  - **Description:** Mod资产类型
- `enum` **`EModGroundInventoryType`** — [BaseDataStruct__EModGroundInventoryType](CreateModPlugin/Public/BaseDataStruct__EModGroundInventoryType.md)
  - **Description:** 物品类型
- `enum` **`EModTipsType`** — [BaseDataStruct__EModTipsType](CreateModPlugin/Public/BaseDataStruct__EModTipsType.md)
  - **Description:** 提示类型
- `struct` **`FModAsset`** — [BaseDataStruct__FModAsset](CreateModPlugin/Public/BaseDataStruct__FModAsset.md)
  - **Description:** Mod资产
- `struct` **`FModConfig`** — [BaseDataStruct__FModConfig](CreateModPlugin/Public/BaseDataStruct__FModConfig.md)
  - **Description:** Mod数据表
- `struct` **`FModDataBase`** — [BaseDataStruct__FModDataBase](CreateModPlugin/Public/BaseDataStruct__FModDataBase.md)
  - **Description:** Mod数据表基类
- `struct` **`FModDropItemInfo`** — [BaseDataStruct__FModDropItemInfo](CreateModPlugin/Public/BaseDataStruct__FModDropItemInfo.md)
  - **Description:** 掉落物品信息
- `struct` **`FModDropSetConfig`** — [BaseDataStruct__FModDropSetConfig](CreateModPlugin/Public/BaseDataStruct__FModDropSetConfig.md)
  - **Description:** 掉落配置
- `struct` **`FModFormatText`** — [BaseDataStruct__FModFormatText](CreateModPlugin/Public/BaseDataStruct__FModFormatText.md)
  - **Description:** 可替换文本结构
- `struct` **`FModGameplayEffectContainer`** — [BaseDataStruct__FModGameplayEffectContainer](CreateModPlugin/Public/BaseDataStruct__FModGameplayEffectContainer.md)
  - **Description:** Gameplay effect container defining how targeting happens (TargetType) and the list of gameplay effects to apply to the targets.
- `class` **`UModInformationAsset`** — [BaseDataStruct__UModInformationAsset](CreateModPlugin/Public/BaseDataStruct__UModInformationAsset.md)
  - **Description:** Mod information asset listing the mod's config data tables (DataTables) and data assets (DataAssets).

## `CreateModPlugin/Public/BuffDataStruct.h`

- `enum` **`EModBuffOriginType`** — [BuffDataStruct__EModBuffOriginType](CreateModPlugin/Public/BuffDataStruct__EModBuffOriginType.md)
  - **Description:** Buff的来源类型
- `enum` **`EModBuffType`** — [BuffDataStruct__EModBuffType](CreateModPlugin/Public/BuffDataStruct__EModBuffType.md)
  - **Description:** Buff的类型
- `struct` **`FModCommonBuff`** — [BuffDataStruct__FModCommonBuff](CreateModPlugin/Public/BuffDataStruct__FModCommonBuff.md)
  - **Description:** 通用BUFF

## `CreateModPlugin/Public/BuildDataStruct.h`

- `enum` **`EModAutoTileType`** — [BuildDataStruct__EModAutoTileType](CreateModPlugin/Public/BuildDataStruct__EModAutoTileType.md)
  - **Description:** 九宫格枚举类型
- `enum` **`EModEmbeddedWallType`** — [BuildDataStruct__EModEmbeddedWallType](CreateModPlugin/Public/BuildDataStruct__EModEmbeddedWallType.md)
  - **Description:** 嵌入式墙体类型
- `enum` **`EModEnergyType`** — [BuildDataStruct__EModEnergyType](CreateModPlugin/Public/BuildDataStruct__EModEnergyType.md)
  - **Description:** 能源类型
- `enum` **`EModFiveElementType`** — [BuildDataStruct__EModFiveElementType](CreateModPlugin/Public/BuildDataStruct__EModFiveElementType.md)
  - **Description:** 五行类型
- `enum` **`EModGenerateBuildingFaultType`** — [BuildDataStruct__EModGenerateBuildingFaultType](CreateModPlugin/Public/BuildDataStruct__EModGenerateBuildingFaultType.md)
  - **Description:** 供能建筑故障类型
- `enum` **`EModRoofPartType`** — [BuildDataStruct__EModRoofPartType](CreateModPlugin/Public/BuildDataStruct__EModRoofPartType.md)
  - **Description:** 屋顶部位类型
- `struct` **`FModAutoTileMeshConfigData`** — [BuildDataStruct__FModAutoTileMeshConfigData](CreateModPlugin/Public/BuildDataStruct__FModAutoTileMeshConfigData.md)
  - **Description:** 九宫格模型配置数据结构
- `struct` **`FModBuildData`** — [BuildDataStruct__FModBuildData](CreateModPlugin/Public/BuildDataStruct__FModBuildData.md)
  - **Description:** mod建筑物
- `struct` **`FModBuildLightSourceData`** — [BuildDataStruct__FModBuildLightSourceData](CreateModPlugin/Public/BuildDataStruct__FModBuildLightSourceData.md)
  - **Description:** 建筑光源配置数据
- `struct` **`FModBuildUIData`** — [BuildDataStruct__FModBuildUIData](CreateModPlugin/Public/BuildDataStruct__FModBuildUIData.md)
  - **Description:** mod建筑物UI
- `struct` **`FModGridPosition`** — [BuildDataStruct__FModGridPosition](CreateModPlugin/Public/BuildDataStruct__FModGridPosition.md)
  - **Description:** 格子坐标位置
- `struct` **`FModRelativeGridPoses`** — [BuildDataStruct__FModRelativeGridPoses](CreateModPlugin/Public/BuildDataStruct__FModRelativeGridPoses.md)
  - **Description:** 物体的相对格子坐标

## `CreateModPlugin/Public/CharacterDataStruct.h`

- `enum` **`EModAnimalAgeStage`** — [CharacterDataStruct__EModAnimalAgeStage](CreateModPlugin/Public/CharacterDataStruct__EModAnimalAgeStage.md)
  - **Description:** 动物成长阶段
- `enum` **`EModAnimalBodyType`** — [CharacterDataStruct__EModAnimalBodyType](CreateModPlugin/Public/CharacterDataStruct__EModAnimalBodyType.md)
  - **Description:** 动物体型
- `enum` **`EModAnimalFunc`** — [CharacterDataStruct__EModAnimalFunc](CreateModPlugin/Public/CharacterDataStruct__EModAnimalFunc.md)
  - **Description:** 动物升级可获得的功能
- `enum` **`EModArmorType`** — [CharacterDataStruct__EModArmorType](CreateModPlugin/Public/CharacterDataStruct__EModArmorType.md)
  - **Description:** Armor slot type (helmet, bracer, armor, pants, shoes, eyes, etc.).
- `enum` **`EModHitType`** — [CharacterDataStruct__EModHitType](CreateModPlugin/Public/CharacterDataStruct__EModHitType.md)
  - **Description:** 受击类型
- `enum` **`EModSpeciesType`** — [CharacterDataStruct__EModSpeciesType](CreateModPlugin/Public/CharacterDataStruct__EModSpeciesType.md)
  - **Description:** Species type (human, beast, birds, robot human/beast/bird), used to determine body organs and structure.
- `struct` **`FModAllTypeItemDrop`** — [CharacterDataStruct__FModAllTypeItemDrop](CreateModPlugin/Public/CharacterDataStruct__FModAllTypeItemDrop.md)
  - **Description:** Generic item drop entry recording the drop item type and quantity.
- `struct` **`FModAnimalActionAbility`** — [CharacterDataStruct__FModAnimalActionAbility](CreateModPlugin/Public/CharacterDataStruct__FModAnimalActionAbility.md)
  - **Description:** 动物ActionAbility配置表结构
- `struct` **`FModAnimalData`** — [CharacterDataStruct__FModAnimalData](CreateModPlugin/Public/CharacterDataStruct__FModAnimalData.md)
  - **Description:** Animal config table row defining an animal's base info, attributes, mesh/animation, taming/training, output and death drop settings.
- `struct` **`FModCharacterActionAbilityAnimSections`** — [CharacterDataStruct__FModCharacterActionAbilityAnimSections](CreateModPlugin/Public/CharacterDataStruct__FModCharacterActionAbilityAnimSections.md)
  - **Description:** Anim montage section config for character action abilities (start/loop/end section names, optionally split by sex).
- `struct` **`FModHumanData`** — [CharacterDataStruct__FModHumanData](CreateModPlugin/Public/CharacterDataStruct__FModHumanData.md)
  - **Description:** Human character config table row defining customization appearance, base info, initial martial arts/equipment and attributes.
- `struct` **`FModIDs`** — [CharacterDataStruct__FModIDs](CreateModPlugin/Public/CharacterDataStruct__FModIDs.md)
  - **Description:** Wrapper struct holding an array of FName IDs, used to nest arrays inside map values.
- `struct` **`FModOutputData`** — [CharacterDataStruct__FModOutputData](CreateModPlugin/Public/CharacterDataStruct__FModOutputData.md)
  - **Description:** 资源产出数据
- `struct` **`FModOutputDatas`** — [CharacterDataStruct__FModOutputDatas](CreateModPlugin/Public/CharacterDataStruct__FModOutputDatas.md)
  - **Description:** Wrapper struct holding an array of resource output data (FModOutputData).

## `CreateModPlugin/Public/CommonUIStruct.h`

- `enum` **`EModTitleTypeEnum`** — [CommonUIStruct__EModTitleTypeEnum](CreateModPlugin/Public/CommonUIStruct__EModTitleTypeEnum.md)
  - **Description:** Source type of a UI panel title (fixed text, item name, building name, character name, room name, world place name, etc.).
- `struct` **`FModCommonUIConfig`** — [CommonUIStruct__FModCommonUIConfig](CreateModPlugin/Public/CommonUIStruct__FModCommonUIConfig.md)
  - **Description:** Common UI config table row defining the panel title type, icons, common modules/buttons and tab composition.
- `struct` **`FModModuleUIConfig`** — [CommonUIStruct__FModModuleUIConfig](CreateModPlugin/Public/CommonUIStruct__FModModuleUIConfig.md)
  - **Description:** Module UI config table row specifying the UserWidget class for the module.
- `struct` **`FModTabInfo`** — [CommonUIStruct__FModTabInfo](CreateModPlugin/Public/CommonUIStruct__FModTabInfo.md)
  - **Description:** UI tab config containing the button state brushes (normal/hovered/pressed), linked module UI ids, tab tooltip title/content and function button ids.

## `CreateModPlugin/Public/EquipmentDataStruct.h`

- `enum` **`EModCommonButtonType`** — [EquipmentDataStruct__EModCommonButtonType](CreateModPlugin/Public/EquipmentDataStruct__EModCommonButtonType.md)
  - **Description:** Common button type enum identifying the function of operation buttons on building, character and world-place interaction UIs
- `enum` **`EModEquipmentType`** — [EquipmentDataStruct__EModEquipmentType](CreateModPlugin/Public/EquipmentDataStruct__EModEquipmentType.md)
  - **Description:** Mod equipment type enum distinguishing weapon, armor and tool equipment
- `struct` **`FModCharacterApparel`** — [EquipmentDataStruct__FModCharacterApparel](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterApparel.md)
  - **Description:** Mod 防具结构
- `struct` **`FModCharacterEquipment`** — [EquipmentDataStruct__FModCharacterEquipment](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterEquipment.md)
  - **Description:** 角色装备
- `struct` **`FModCharacterTool`** — [EquipmentDataStruct__FModCharacterTool](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterTool.md)
  - **Description:** Mod character tool equipment struct, extending character equipment with durability loss on collecting
- `struct` **`FModCharacterWeapon`** — [EquipmentDataStruct__FModCharacterWeapon](CreateModPlugin/Public/EquipmentDataStruct__FModCharacterWeapon.md)
  - **Description:** Mod 武器结构
- `struct` **`FModEquipmentAttribute`** — [EquipmentDataStruct__FModEquipmentAttribute](CreateModPlugin/Public/EquipmentDataStruct__FModEquipmentAttribute.md)
  - **Description:** Mod 装备属性结构
- `struct` **`FModEquipmentQualityRange`** — [EquipmentDataStruct__FModEquipmentQualityRange](CreateModPlugin/Public/EquipmentDataStruct__FModEquipmentQualityRange.md)
  - **Description:** Mod 装备品质区间结构
- `struct` **`FModFabricateEquipmentData`** — [EquipmentDataStruct__FModFabricateEquipmentData](CreateModPlugin/Public/EquipmentDataStruct__FModFabricateEquipmentData.md)
  - **Description:** Mod 制造装备数据结构
- `struct` **`FModFormulaData`** — [EquipmentDataStruct__FModFormulaData](CreateModPlugin/Public/EquipmentDataStruct__FModFormulaData.md)
  - **Description:** Mod 配方数据结构
- `struct` **`FModGenerateEquipmentData`** — [EquipmentDataStruct__FModGenerateEquipmentData](CreateModPlugin/Public/EquipmentDataStruct__FModGenerateEquipmentData.md)
  - **Description:** Mod 生成装备数据结构

## `CreateModPlugin/Public/GenerationMonster.h`

- `enum` **`EModGenerationActorType`** — [GenerationMonster__EModGenerationActorType](CreateModPlugin/Public/GenerationMonster__EModGenerationActorType.md)
  - **Description:** 生成的类型
- `enum` **`EModGenerationRuleType`** — [GenerationMonster__EModGenerationRuleType](CreateModPlugin/Public/GenerationMonster__EModGenerationRuleType.md)
  - **Description:** 生成的规则类型
- `enum` **`EModInfluenceType`** — [GenerationMonster__EModInfluenceType](CreateModPlugin/Public/GenerationMonster__EModInfluenceType.md)
  - **Description:** 影响的类型
- `enum` **`EModThreatType`** — [GenerationMonster__EModThreatType](CreateModPlugin/Public/GenerationMonster__EModThreatType.md)
  - **Description:** 威胁类型
- `struct` **`FModGenerationData`** — [GenerationMonster__FModGenerationData](CreateModPlugin/Public/GenerationMonster__FModGenerationData.md)
  - **Description:** A single generation config entry: spawn positions, character IDs, count, character type, extra goals and gameplay effects applied on spawn
- `struct` **`FModGenerationProbabilityInfluence`** — [GenerationMonster__FModGenerationProbabilityInfluence](CreateModPlugin/Public/GenerationMonster__FModGenerationProbabilityInfluence.md)
  - **Description:** 生成的概率影响
- `struct` **`FModGenerationRuleData`** — [GenerationMonster__FModGenerationRuleData](CreateModPlugin/Public/GenerationMonster__FModGenerationRuleData.md)
  - **Description:** 生成的规则
- `struct` **`FModGenerationSetData`** — [GenerationMonster__FModGenerationSetData](CreateModPlugin/Public/GenerationMonster__FModGenerationSetData.md)
  - **Description:** 生成的信息
- `struct` **`FModMonsterGenerationConfig`** — [GenerationMonster__FModMonsterGenerationConfig](CreateModPlugin/Public/GenerationMonster__FModMonsterGenerationConfig.md)
  - **Description:** 怪物生成
- `struct` **`FModNameIDArray`** — [GenerationMonster__FModNameIDArray](CreateModPlugin/Public/GenerationMonster__FModNameIDArray.md)
  - **Description:** Wrapper struct for an array of FName IDs, allowing arrays to be nested as TMap values
- `struct` **`FModThreatPoolInfo`** — [GenerationMonster__FModThreatPoolInfo](CreateModPlugin/Public/GenerationMonster__FModThreatPoolInfo.md)
  - **Description:** 威胁池信息

## `CreateModPlugin/Public/ItemDataStruct.h`

- `enum` **`EModFoodType`** — [ItemDataStruct__EModFoodType](CreateModPlugin/Public/ItemDataStruct__EModFoodType.md)
  - **Description:** 食物分类枚举
- `enum` **`EModGroundSoilType`** — [ItemDataStruct__EModGroundSoilType](CreateModPlugin/Public/ItemDataStruct__EModGroundSoilType.md)
  - **Description:** 地面土质类型
- `enum` **`EModItemQuality`** — [ItemDataStruct__EModItemQuality](CreateModPlugin/Public/ItemDataStruct__EModItemQuality.md)
  - **Description:** 物品品质枚举
- `enum` **`EModItemType`** — [ItemDataStruct__EModItemType](CreateModPlugin/Public/ItemDataStruct__EModItemType.md)
  - **Description:** 物品分类枚举
- `enum` **`EModStorageSpace`** — [ItemDataStruct__EModStorageSpace](CreateModPlugin/Public/ItemDataStruct__EModStorageSpace.md)
  - **Description:** Storage space type enum (outdoor / under roof / indoor), used to configure item shelf-life decay rates per storage space
- `struct` **`FModEfficiencyByTemperature`** — [ItemDataStruct__FModEfficiencyByTemperature](CreateModPlugin/Public/ItemDataStruct__FModEfficiencyByTemperature.md)
  - **Description:** 温度与效率的关联 0<=T<=20 E=100% 21<=T<=40 E=50% T无范围E=0 策划直接填
- `struct` **`FModGroupCorrespondingAnim`** — [ItemDataStruct__FModGroupCorrespondingAnim](CreateModPlugin/Public/ItemDataStruct__FModGroupCorrespondingAnim.md)
  - **Description:** Animation group struct: mapping from group index to anim montage, used for behavior-related animation configs
- `struct` **`FModInventoryGeneralData`** — [ItemDataStruct__FModInventoryGeneralData](CreateModPlugin/Public/ItemDataStruct__FModInventoryGeneralData.md)
  - **Description:** 物品总表结构体
- `struct` **`FModInventoryItem`** — [ItemDataStruct__FModInventoryItem](CreateModPlugin/Public/ItemDataStruct__FModInventoryItem.md)
  - **Description:** 物品结构体
- `struct` **`FModStackModel`** — [ItemDataStruct__FModStackModel](CreateModPlugin/Public/ItemDataStruct__FModStackModel.md)
  - **Description:** 定义堆叠模型的结构体

## `CreateModPlugin/Public/ModNewGameStruct.h`

- `struct` **`FModCharacteristicNumWeight`** — [ModNewGameStruct__FModCharacteristicNumWeight](CreateModPlugin/Public/ModNewGameStruct__FModCharacteristicNumWeight.md)
  - **Description:** Struct mapping characteristic count to weight, used for quality-based random rolling of protagonist characteristics
- `class` **`UModNewGameConfigAsset`** — [ModNewGameStruct__UModNewGameConfigAsset](CreateModPlugin/Public/ModNewGameStruct__UModNewGameConfigAsset.md)
  - **Description:** 新游戏流程配置资产

## `CreateModPlugin/Public/TechnologyDataStruct.h`

- `enum` **`EModTechCategory`** — [TechnologyDataStruct__EModTechCategory](CreateModPlugin/Public/TechnologyDataStruct__EModTechCategory.md)
  - **Description:** 科技类型
- `enum` **`EModTechLevel`** — [TechnologyDataStruct__EModTechLevel](CreateModPlugin/Public/TechnologyDataStruct__EModTechLevel.md)
  - **Description:** 科技等级
- `enum` **`EModTechPointType`** — [TechnologyDataStruct__EModTechPointType](CreateModPlugin/Public/TechnologyDataStruct__EModTechPointType.md)
  - **Description:** 科技点数类型
- `enum` **`EModTechUnlockItemType`** — [TechnologyDataStruct__EModTechUnlockItemType](CreateModPlugin/Public/TechnologyDataStruct__EModTechUnlockItemType.md)
  - **Description:** 科技解锁内容类型
- `struct` **`FModTechUnlockItemConigStruct`** — [TechnologyDataStruct__FModTechUnlockItemConigStruct](CreateModPlugin/Public/TechnologyDataStruct__FModTechUnlockItemConigStruct.md)
  - **Description:** 科技解锁物品配置表结构
- `struct` **`FModTechnologyConfigStruct`** — [TechnologyDataStruct__FModTechnologyConfigStruct](CreateModPlugin/Public/TechnologyDataStruct__FModTechnologyConfigStruct.md)
  - **Description:** 科技配置表结构

## `CreateModPlugin/Public/WorldDataStruct.h`

- `enum` **`EModWorldPlaceType`** — [WorldDataStruct__EModWorldPlaceType](CreateModPlugin/Public/WorldDataStruct__EModWorldPlaceType.md)
  - **Description:** 世界地点类型
- `struct` **`FModWorldPlaceInfo`** — [WorldDataStruct__FModWorldPlaceInfo](CreateModPlugin/Public/WorldDataStruct__FModWorldPlaceInfo.md)
  - **Description:** World place config info: name, description, prosperity, place type, icons and post station transform, etc.

## `CreateModPluginEditor/Public/ModInfoEditorData.h`

- `struct` **`FModDependencyData`** — [ModInfoEditorData__FModDependencyData](CreateModPluginEditor/Public/ModInfoEditorData__FModDependencyData.md)
  - **Description:** Mod 依赖信息
- `class` **`UModInfoData`** — [ModInfoEditorData__UModInfoData](CreateModPluginEditor/Public/ModInfoEditorData__UModInfoData.md)
  - **Description:** Mod 信息数据类

## `EastRimWorld/AbilitySystem/Abilities/EastRimWorldAbilityCost.h`

- `class` **`UEastRimWorldAbilityCost`** — [EastRimWorldAbilityCost__UEastRimWorldAbilityCost](EastRimWorld/AbilitySystem/Abilities/EastRimWorldAbilityCost__UEastRimWorldAbilityCost.md)
  - **Description:** Base class for additional ability costs: CheckCost verifies affordability, ApplyCost applies the cost; can be configured to only apply on hit

## `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

- `enum` **`EEastRimWorldAbilityActivationGroup`** — [EastRimWorldGameplayAbility__EEastRimWorldAbilityActivationGroup](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__EEastRimWorldAbilityActivationGroup.md)
  - **Description:** EEastRimWorldAbilityActivationGroup Defines how an ability activates in relation to other abilities.
- `struct` **`FBuffTagInfo`** — [EastRimWorldGameplayAbility__FBuffTagInfo](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__FBuffTagInfo.md)
  - **Description:** Buff tag info config: unique tag, icon, name and description
- `struct` **`FEastRimWorldAbilityMontageFailureMessage`** — [EastRimWorldGameplayAbility__FEastRimWorldAbilityMontageFailureMessage](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__FEastRimWorldAbilityMontageFailureMessage.md)
  - **Description:** Failure reason that can be used to play an animation montage when a failure occurs
- `class` **`UEastRimWorldGameplayAbility`** — [EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility](EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)
  - **Description:** The base gameplay ability class used by this project: activation groups, action flow events, effect containers, projectile/summon spawning and control-effect parameters

## `EastRimWorld/AbilitySystem/Abilities/GA_LightSkillBase.h`

- `class` **`UGA_LightSkillBase`** — [GA_LightSkillBase__UGA_LightSkillBase](EastRimWorld/AbilitySystem/Abilities/GA_LightSkillBase__UGA_LightSkillBase.md)
  - **Description:** 轻功（位移类）GameplayAbility 基类。位移通过「计算」确定，不依赖动画根运动；动画仅作表现。 流程（仅 AbilityAttackType == LightSkill 生效）： 1) 解算参数：FGameAbilityStruct 的 LightSkill 字段 + ChangeLightSkillParam 词条 → 距离/速度/瞬移/生成物/施法Tag+GE。 2) 按使用场景（GameAbilityStruct.AbilityUsageScenario）决定方向与距离： - OffensiveDisplacementAbility（接近）：朝目标；移动距离≥到目标距离则停在目标面前，否则按移动距离。 - KeepAwayFromAbility（远离）：背离目标，按最大移动距离。 - 瞬...

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldCombatSet.h`

- `class` **`UEastRimWorldCombatSet`** — [EastRimWorldCombatSet__UEastRimWorldCombatSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldCombatSet__UEastRimWorldCombatSet.md)
  - **Description:** UEastRimWorldCombatSet Class that defines attributes that are necessary for applying damage or healing. Attribute examples include: damage, healing, attack power, and shield penetrations.

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldGrowUpSet.h`

- `class` **`UEastRimWorldGrowUpSet`** — [EastRimWorldGrowUpSet__UEastRimWorldGrowUpSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldGrowUpSet__UEastRimWorldGrowUpSet.md)
  - **Description:** DECLARE_MULTICAST_DELEGATE_TwoParams(FOnAddMartialArtsExperience,const FGameplayAttribute &Attribute,float /*AddValue);

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldHealthSet.h`

- `class` **`UEastRimWorldHealthSet`** — [EastRimWorldHealthSet__UEastRimWorldHealthSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldHealthSet__UEastRimWorldHealthSet.md)
  - **Description:** Health attribute set: overall health, per-body-part health, damage types, survival attributes (nutrition/tiredness/happiness/mood) and death resolution logic

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldSocialSet.h`

- `class` **`UEastRimWorldSocialSet`** — [EastRimWorldSocialSet__UEastRimWorldSocialSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldSocialSet__UEastRimWorldSocialSet.md)
  - **Description:** Social attribute set: negotiation, bargaining, sociability, arresting, charm, taming and training abilities

## `EastRimWorld/AbilitySystem/Attributes/EastRimWorldWorkSet.h`

- `class` **`UEastRimWorldWorkSet`** — [EastRimWorldWorkSet__UEastRimWorldWorkSet](EastRimWorld/AbilitySystem/Attributes/EastRimWorldWorkSet__UEastRimWorldWorkSet.md)
  - **Description:** Work attribute set: speeds, success rates and extra outputs for various jobs (mining, construction, treatment, cooking, planting, research, surgery, etc.)

## `EastRimWorld/AbilitySystem/ERW_GEGenLibrary.h`

- `class` **`UERW_GEGenLibrary`** — [ERW_GEGenLibrary__UERW_GEGenLibrary](EastRimWorld/AbilitySystem/ERW_GEGenLibrary__UERW_GEGenLibrary.md)
  - **Description:** 词条系统 GE 批量配置辅助（仅编辑器工具用途）。

## `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

- `struct` **`FEastRimWorldAbilitySet_AttributeSet`** — [EastRimWorldAbilitySet__FEastRimWorldAbilitySet_AttributeSet](EastRimWorld/AbilitySystem/EastRimWorldAbilitySet__FEastRimWorldAbilitySet_AttributeSet.md)
  - **Description:** FEastRimWorldAbilitySet_AttributeSet Data used by the ability set to grant attribute sets.
- `struct` **`FEastRimWorldAbilitySet_GameplayAbility`** — [EastRimWorldAbilitySet__FEastRimWorldAbilitySet_GameplayAbility](EastRimWorld/AbilitySystem/EastRimWorldAbilitySet__FEastRimWorldAbilitySet_GameplayAbility.md)
  - **Description:** FEastRimWorldAbilitySet_GameplayAbility Data used by the ability set to grant gameplay abilities.
- `struct` **`FEastRimWorldAbilitySet_GameplayEffect`** — [EastRimWorldAbilitySet__FEastRimWorldAbilitySet_GameplayEffect](EastRimWorld/AbilitySystem/EastRimWorldAbilitySet__FEastRimWorldAbilitySet_GameplayEffect.md)
  - **Description:** FEastRimWorldAbilitySet_GameplayEffect Data used by the ability set to grant gameplay effects.
- `struct` **`FEastRimWorldAbilitySet_GrantedHandles`** — [EastRimWorldAbilitySet__FEastRimWorldAbilitySet_GrantedHandles](EastRimWorld/AbilitySystem/EastRimWorldAbilitySet__FEastRimWorldAbilitySet_GrantedHandles.md)
  - **Description:** FEastRimWorldAbilitySet_GrantedHandles Data used to store handles to what has been granted by the ability set.

## `EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent.h`

- `class` **`UEastRimWorldAbilitySystemComponent`** — [EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent](EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)
  - **Description:** Project-specific ability system component: ability activation groups, gameplay effect/buff construction and application, cooldown operations, and runtime ability config injection

## `EastRimWorld/AbilitySystem/EastRimWorldAbilityTagRelationshipMapping.h`

- `struct` **`FEastRimWorldAbilityTagRelationship`** — [EastRimWorldAbilityTagRelationshipMapping__FEastRimWorldAbilityTagRelationship](EastRimWorld/AbilitySystem/EastRimWorldAbilityTagRelationshipMapping__FEastRimWorldAbilityTagRelationship.md)
  - **Description:** Struct that defines the relationship between different ability tags

## `EastRimWorld/AbilitySystem/EastRimWorldGameplayEffectContext.h`

- `struct` **`FEastRimWorldGameplayEffectContext`** — [EastRimWorldGameplayEffectContext__FEastRimWorldGameplayEffectContext](EastRimWorld/AbilitySystem/EastRimWorldGameplayEffectContext__FEastRimWorldGameplayEffectContext.md)
  - **Description:** Project-extended gameplay effect context: hit location/direction, target, instigator GUID and team, ability ID and effect tip text, etc.

## `EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem.h`

- `struct` **`FGlobalAppliedAbilityList`** — [EastRimWorldGlobalAbilitySystem__FGlobalAppliedAbilityList](EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem__FGlobalAppliedAbilityList.md)
  - **Description:** Tracks the granted handles of an ability class applied to each ASC, supporting removal per ASC or from all
- `struct` **`FGlobalAppliedEffectList`** — [EastRimWorldGlobalAbilitySystem__FGlobalAppliedEffectList](EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem__FGlobalAppliedEffectList.md)
  - **Description:** Tracks the active handles of a gameplay effect class applied to each ASC, supporting removal per ASC or from all
- `class` **`UEastRimWorldGlobalAbilitySystem`** — [EastRimWorldGlobalAbilitySystem__UEastRimWorldGlobalAbilitySystem](EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem__UEastRimWorldGlobalAbilitySystem.md)
  - **Description:** Global ability system (world subsystem) that applies/removes abilities, gameplay effects and global buffs uniformly across all registered ASCs

## `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

- `enum` **`EActivateAbilitiesRemovePolicy`** — [ActivateAbilitiesGameplayEffect__EActivateAbilitiesRemovePolicy](EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect__EActivateAbilitiesRemovePolicy.md)
  - **Description:** Policy for handling granted abilities when the gameplay effect is removed: cancel immediately or remove after the ability ends
- `struct` **`FActivateAbilitiesConfig`** — [ActivateAbilitiesGameplayEffect__FActivateAbilitiesConfig](EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect__FActivateAbilitiesConfig.md)
  - **Description:** Config entry for abilities granted by a gameplay effect: ability ID, grant level, input ID, removal policy and control effect data

## `EastRimWorld/AbilitySystem/GamplyCue/GameplayCueNotifyActor.h`

- `class` **`AGameplayCueNotifyActor`** — [GameplayCueNotifyActor__AGameplayCueNotifyActor](EastRimWorld/AbilitySystem/GamplyCue/GameplayCueNotifyActor__AGameplayCueNotifyActor.md)
  - **Description:** Project base class for gameplay cue notify actors; extracts the EastRimWorld effect context and context parameter from cue parameters

## `EastRimWorld/AbilitySystem/Pool/AbilityCachePoolSystem.h`

- `class` **`UAbilityCachePoolSystem`** — [AbilityCachePoolSystem__UAbilityCachePoolSystem](EastRimWorld/AbilitySystem/Pool/AbilityCachePoolSystem__UAbilityCachePoolSystem.md)
  - **Description:** Ability object cache pool world subsystem that caches and reuses projectiles, projectile emitters and scene text actors to avoid frequent spawn/destroy.

## `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

- `class` **`AAbilityProjectileEmitterBase`** — [AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase](EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md)
  - **Description:** 发射器
- `struct` **`FAllGameplayEffectSpecHandles`** — [AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles](EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)
  - **Description:** Collection of all GameplayEffect information carried by a projectile (effect spec handles, control effects, instigator, target, building damage, etc.).

## `EastRimWorld/AbilitySystem/Projectile/EastRimWorldProjectileBase.h`

- `class` **`AEastRimWorldProjectileBase`** — [EastRimWorldProjectileBase__AEastRimWorldProjectileBase](EastRimWorld/AbilitySystem/Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)
  - **Description:** Base projectile class of the game, supporting team affiliation, target search/homing, applying GameplayEffects on hit, periodic DOT damage and cache-pool recycling.

## `EastRimWorld/AbilitySystem/SceneText/SceneTextActor.h`

- `class` **`ASceneTextActor`** — [SceneTextActor__ASceneTextActor](EastRimWorld/AbilitySystem/SceneText/SceneTextActor__ASceneTextActor.md)
  - **Description:** Abstract base actor for floating scene text (damage numbers, prompts, etc.), reusable via the cache pool.

## `EastRimWorld/AbilitySystem/SceneText/SceneTextStruct.h`

- `enum` **`EPopSizeType`** — [SceneTextStruct__EPopSizeType](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__EPopSizeType.md)
  - **Description:** 场景文字的动画类型
- `enum` **`ESceneTextType`** — [SceneTextStruct__ESceneTextType](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__ESceneTextType.md)
  - **Description:** 场景文字的类型
- `enum` **`ETextAnimationType`** — [SceneTextStruct__ETextAnimationType](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__ETextAnimationType.md)
  - **Description:** 场景文字的动画类型
- `struct` **`FSceneTextInfo`** — [SceneTextStruct__FSceneTextInfo](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__FSceneTextInfo.md)
  - **Description:** 场景文字配置
- `struct` **`FTeamTextInfo`** — [SceneTextStruct__FTeamTextInfo](EastRimWorld/AbilitySystem/SceneText/SceneTextStruct__FTeamTextInfo.md)
  - **Description:** 场景文字配置

## `EastRimWorld/AbilitySystem/Task/AsyncTaskAttributeChanged.h`

- `class` **`UAsyncTaskAttributeChanged`** — [AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged](EastRimWorld/AbilitySystem/Task/AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged.md)
  - **Description:** Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent. Useful to use in UI.

## `EastRimWorld/AbilitySystem/Task/AsyncTaskCooldownChanged.h`

- `class` **`UAsyncTaskCooldownChanged`** — [AsyncTaskCooldownChanged__UAsyncTaskCooldownChanged](EastRimWorld/AbilitySystem/Task/AsyncTaskCooldownChanged__UAsyncTaskCooldownChanged.md)
  - **Description:** Blueprint async task that listens for GameplayEffects with the given cooldown tags being applied and ending, broadcasting the cooldown tag, time remaining and duration.

## `EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged.h`

- `class` **`UAsyncTaskEffectStackChanged`** — [AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged](EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged.md)
  - **Description:** Blueprint async task that listens for stack count changes of GameplayEffects with the given tags.

## `EastRimWorld/AbilitySystem/Task/AsyncTaskGameplayTagAddedRemoved.h`

- `class` **`UAsyncTaskGameplayTagAddedRemoved`** — [AsyncTaskGameplayTagAddedRemoved__UAsyncTaskGameplayTagAddedRemoved](EastRimWorld/AbilitySystem/Task/AsyncTaskGameplayTagAddedRemoved__UAsyncTaskGameplayTagAddedRemoved.md)
  - **Description:** Blueprint node to automatically register a listener for FGameplayTags added and removed. Useful to use in Blueprint/UMG.

## `EastRimWorld/AbilitySystem/Task/EastRimWorldPlayMontageAndWaitForEvent.h`

- `class` **`UEastRimWorldPlayMontageAndWaitForEvent`** — [EastRimWorldPlayMontageAndWaitForEvent__UEastRimWorldPlayMontageAndWaitForEvent](EastRimWorld/AbilitySystem/Task/EastRimWorldPlayMontageAndWaitForEvent__UEastRimWorldPlayMontageAndWaitForEvent.md)
  - **Description:** Ability task that plays a montage and waits for it to end or for matching gameplay events, providing OnCompleted, OnBlendOut, OnInterrupted, OnCancelled and EventReceived callbacks.

## `EastRimWorld/Actor/ERW_FightInteractableActor.h`

- `class` **`AERW_FightInteractableActor`** — [ERW_FightInteractableActor__AERW_FightInteractableActor](EastRimWorld/Actor/ERW_FightInteractableActor__AERW_FightInteractableActor.md)
  - **Description:** AERW_FightInteractableActor - 门派战交互物基类 宝箱、门、建筑等继承此类即可自动拥有交互能力 功能： - 自带交互范围碰撞球（蓝图可调半径） - 自动检测 FightPawn 进入/离开 - 实现 IERW_FightInteractableInterface 接口

## `EastRimWorld/Actor/NewGameCharacterSpawnerActor.h`

- `class` **`ANewGameCharacterSpawnerActor`** — [NewGameCharacterSpawnerActor__ANewGameCharacterSpawnerActor](EastRimWorld/Actor/NewGameCharacterSpawnerActor__ANewGameCharacterSpawnerActor.md)
  - **Description:** New-game character spawner actor that marks the initial character spawn location and provides static query functions.

## `EastRimWorld/Actor/NewGameResourceSpawnerActor.h`

- `class` **`ANewGameResourceSpawnerActor`** — [NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor](EastRimWorld/Actor/NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor.md)
  - **Description:** New-game resource spawner actor that places initial item resources around its own grid position.

## `EastRimWorld/Actor/WorldSectBattleChestActor.h`

- `class` **`AWorldSectBattleChestActor`** — [WorldSectBattleChestActor__AWorldSectBattleChestActor](EastRimWorld/Actor/WorldSectBattleChestActor__AWorldSectBattleChestActor.md)
  - **Description:** Sect battle chest. Uses the FightPawn interactable flow and notifies the manager when opened.
- `enum` **`EWorldSectBattleChestType`** — [WorldSectBattleChestActor__EWorldSectBattleChestType](EastRimWorld/Actor/WorldSectBattleChestActor__EWorldSectBattleChestType.md)
  - **Description:** Type of a world sect battle chest.

## `EastRimWorld/Actor/WorldSectBattleChestDropActor.h`

- `class` **`AWorldSectBattleChestDropActor`** — [WorldSectBattleChestDropActor__AWorldSectBattleChestDropActor](EastRimWorld/Actor/WorldSectBattleChestDropActor__AWorldSectBattleChestDropActor.md)
  - **Description:** Visual drop spawned by a sect battle chest. It starts at the chest center, flies along a short arc, then stops at a random XY point around the chest.

## `EastRimWorld/Actor/WorldSectBattleFlagActor.h`

- `class` **`AWorldSectBattleFlagActor`** — [WorldSectBattleFlagActor__AWorldSectBattleFlagActor](EastRimWorld/Actor/WorldSectBattleFlagActor__AWorldSectBattleFlagActor.md)
  - **Description:** 门派战旗子 Actor。 负责：占领范围、进度计算、归属切换、UI 状态广播、蓝图表现扩展点。
- `enum` **`EWorldSectBattleFlagRuntimeState`** — [WorldSectBattleFlagActor__EWorldSectBattleFlagRuntimeState](EastRimWorld/Actor/WorldSectBattleFlagActor__EWorldSectBattleFlagRuntimeState.md)
  - **Description:** 旗子当前给 UI 显示用的运行状态，不等同于最终归属。

## `EastRimWorld/Animation/EastRimWorldAnimInstance.h`

- `class` **`UEastRimWorldAnimInstance`** — [EastRimWorldAnimInstance__UEastRimWorldAnimInstance](EastRimWorld/Animation/EastRimWorldAnimInstance__UEastRimWorldAnimInstance.md)
  - **Description:** UEastRimWorldAnimInstance The base game animation instance class used by this project.

## `EastRimWorld/Animation/Notify/AnimNotifyState_AbilityFaceTarget.h`

- `class` **`UAnimNotifyState_AbilityFaceTarget`** — [AnimNotifyState_AbilityFaceTarget__UAnimNotifyState_AbilityFaceTarget](EastRimWorld/Animation/Notify/AnimNotifyState_AbilityFaceTarget__UAnimNotifyState_AbilityFaceTarget.md)
  - **Description:** Anim notify state that keeps the character rotating to face the target during an ability, with a capped move distance toward the target.

## `EastRimWorld/Animation/Notify/AnimNotifyState_AbilityMotionWarping.h`

- `class` **`UAnimNotifyState_AbilityMotionWarping`** — [AnimNotifyState_AbilityMotionWarping__UAnimNotifyState_AbilityMotionWarping](EastRimWorld/Animation/Notify/AnimNotifyState_AbilityMotionWarping__UAnimNotifyState_AbilityMotionWarping.md)
  - **Description:** Ability motion warping anim notify state; extends the engine MotionWarping notify and warps movement based on the configured target distance.

## `EastRimWorld/Building/BuildingActorBase.h`

- `class` **`ABuildingActorBase`** — [BuildingActorBase__ABuildingActorBase](EastRimWorld/Building/BuildingActorBase__ABuildingActorBase.md)
  - **Description:** Base building actor class derived from AGOAP_ActorBase, covering construction, durability, energy grid, pipelines, ceremonies, puppet refitting, transportation, prison and trade area features.

## `EastRimWorld/Building/DoorNavLink.h`

- `class` **`ADoorNavLink`** — [DoorNavLink__ADoorNavLink](EastRimWorld/Building/DoorNavLink__ADoorNavLink.md)
  - **Description:** Door navigation link actor derived from ANavLinkProxy; the nav link's start/end positions and traversal direction can be updated at runtime.

## `EastRimWorld/Building/ERW_Preset.h`

- `class` **`AERW_Preset`** — [ERW_Preset__AERW_Preset](EastRimWorld/Building/ERW_Preset__AERW_Preset.md)
  - **Description:** 建筑预设Actor
- `struct` **`FPresetMeshData`** — [ERW_Preset__FPresetMeshData](EastRimWorld/Building/ERW_Preset__FPresetMeshData.md)
  - **Description:** 预设模型数据
- `struct` **`FPresetMeshInfos`** — [ERW_Preset__FPresetMeshInfos](EastRimWorld/Building/ERW_Preset__FPresetMeshInfos.md)
  - **Description:** 预设模型数据集合
- `struct` **`FWallMeshData`** — [ERW_Preset__FWallMeshData](EastRimWorld/Building/ERW_Preset__FWallMeshData.md)
  - **Description:** 墙的数据
- `struct` **`FWallMeshInfos`** — [ERW_Preset__FWallMeshInfos](EastRimWorld/Building/ERW_Preset__FWallMeshInfos.md)
  - **Description:** 墙的模型信息

## `EastRimWorld/Character/Components/AnimalCultivationComponent.h`

- `class` **`UAnimalCultivationComponent`** — [AnimalCultivationComponent__UAnimalCultivationComponent](EastRimWorld/Character/Components/AnimalCultivationComponent__UAnimalCultivationComponent.md)
  - **Description:** UAnimalCultivationComponent 动物修炼组件，用于处理怪物的修炼系统 包括经验获取、等级提升、行为管理、属性提升、能力添加等功能

## `EastRimWorld/Character/Components/CharacterAttributesComponent.h`

- `class` **`UCharacterAttributesComponent`** — [CharacterAttributesComponent__UCharacterAttributesComponent](EastRimWorld/Character/Components/CharacterAttributesComponent__UCharacterAttributesComponent.md)
  - **Description:** Character attributes component bound to the ability system component (ASC); handles attribute events and attribute value changes.

## `EastRimWorld/Character/Components/CharacterBreedingComponent.h`

- `class` **`UCharacterBreedingComponent`** — [CharacterBreedingComponent__UCharacterBreedingComponent](EastRimWorld/Character/Components/CharacterBreedingComponent__UCharacterBreedingComponent.md)
  - **Description:** Animal breeding component managing breeding demand, nearby-character checks, pregnancy interruption and baby spawning.

## `EastRimWorld/Character/Components/CommonBuffComponent.h`

- `class` **`UCommonBuffComponent`** — [CommonBuffComponent__UCommonBuffComponent](EastRimWorld/Character/Components/CommonBuffComponent__UCommonBuffComponent.md)
  - **Description:** Common buff component managing add/remove/activate/suspend of character buffs and the application/cleanup of their gameplay effects.

## `EastRimWorld/Character/Components/ConsumableComponent.h`

- `class` **`UConsumableComponent`** — [ConsumableComponent__UConsumableComponent](EastRimWorld/Character/Components/ConsumableComponent__UConsumableComponent.md)
  - **Description:** 耗材组件：行为开始/结束时自动使用角色背包中状态为"角色拥有"的耗材 触发入口：AEastRimWorldAIController::BroadCastActionChange（行为切换时旧行为结束/新行为开始）

## `EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent.h`

- `enum` **`EChatState`** — [EastRimWorldCharacterChatComponent__EChatState](EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent__EChatState.md)
  - **Description:** Enumeration of chat states.
- `enum` **`EChatTimerType`** — [EastRimWorldCharacterChatComponent__EChatTimerType](EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent__EChatTimerType.md)
  - **Description:** Enumeration of chat-related timer types.
- `class` **`UEastRimWorldCharacterChatComponent`** — [EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent](EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)
  - **Description:** Character chat/social component: finds chat partners, starts/ends chats, and maintains social relationship and favorability data persisted in the save game.

## `EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent.h`

- `struct` **`FEastRimWorldCharacterGroundInfo`** — [EastRimWorldCharacterMovementComponent__FEastRimWorldCharacterGroundInfo](EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent__FEastRimWorldCharacterGroundInfo.md)
  - **Description:** FEastRimWorldCharacterGroundInfo Information about the ground under the character. It only gets updated as needed.
- `class` **`UEastRimWorldCharacterMovementComponent`** — [EastRimWorldCharacterMovementComponent__UEastRimWorldCharacterMovementComponent](EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent__UEastRimWorldCharacterMovementComponent.md)
  - **Description:** UEastRimWorldCharacterMovementComponent The base character movement component class used by this project.

## `EastRimWorld/Character/Components/EastRimWorldGrowUpComponent.h`

- `enum` **`EPracticeWorkExperienceMatch`** — [EastRimWorldGrowUpComponent__EPracticeWorkExperienceMatch](EastRimWorld/Character/Components/EastRimWorldGrowUpComponent__EPracticeWorkExperienceMatch.md)
  - **Description:** 修炼 Action 与弟子携带功法的 WorkExperience 匹配结果
- `class` **`UEastRimWorldGrowUpComponent`** — [EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent](EastRimWorld/Character/Components/EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent.md)
  - **Description:** UEastRimWorldGrowUpComponent An actor component used to handle anything related to GrowUp.

## `EastRimWorld/Character/Components/EastRimWorldHealthComponent.h`

- `enum` **`EEastRimWorldDeathState`** — [EastRimWorldHealthComponent__EEastRimWorldDeathState](EastRimWorld/Character/Components/EastRimWorldHealthComponent__EEastRimWorldDeathState.md)
  - **Description:** EEastRimWorldDeathState Defines current state of death.
- `class` **`UEastRimWorldHealthComponent`** — [EastRimWorldHealthComponent__UEastRimWorldHealthComponent](EastRimWorld/Character/Components/EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)
  - **Description:** UEastRimWorldHealthComponent An actor component used to handle anything related to health.

## `EastRimWorld/Character/Components/InjuryBuffComponent.h`

- `class` **`UInjuryBuffComponent`** — [InjuryBuffComponent__UInjuryBuffComponent](EastRimWorld/Character/Components/InjuryBuffComponent__UInjuryBuffComponent.md)
  - **Description:** Injury buff component managing add/activate/treatment/scarring of body-part injuries and the application/removal of their gameplay effects.

## `EastRimWorld/Character/EastRimWorldCharacter.h`

- `class` **`AEastRimWorldCharacter`** — [EastRimWorldCharacter__AEastRimWorldCharacter](EastRimWorld/Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)
  - **Description:** Base character class integrating GAS ability system, team, GOAP, smart object and Savior save interfaces; common parent of human, animal and summons characters

## `EastRimWorld/Character/EastRimWorldCharacter_Animal.h`

- `class` **`AEastRimWorldCharacter_Animal`** — [EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal](EastRimWorld/Character/EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal.md)
  - **Description:** Animal character class supporting taming, breeding, cultivation, growth and output production

## `EastRimWorld/Character/EastRimWorldCharacter_Human.h`

- `class` **`AEastRimWorldCharacter_Human`** — [EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human](EastRimWorld/Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)
  - **Description:** Human character class covering work, social, consumables, chatting, mood breakdown, traveler trading and treasure-house exchange features

## `EastRimWorld/Character/EastRimWorldCharacter_Summons.h`

- `class` **`AEastRimWorldCharacter_Summons`** — [EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons](EastRimWorld/Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)
  - **Description:** Summons (robot/automaton) character class supporting attach actors, energy management, puppet platforms and survival countdown

## `EastRimWorld/Character/WorldMapMoveActor.h`

- `class` **`AWorldMapMoveActor`** — [WorldMapMoveActor__AWorldMapMoveActor](EastRimWorld/Character/WorldMapMoveActor__AWorldMapMoveActor.md)
  - **Description:** World map move actor: a selectable entity representing a character moving or staying on the world map

## `EastRimWorld/Components/CommonLogComponent.h`

- `class` **`UCommonLogComponent`** — [CommonLogComponent__UCommonLogComponent](EastRimWorld/Components/CommonLogComponent__UCommonLogComponent.md)
  - **Description:** Common log component that generates, records and filters in-game logs and persists them with the save game

## `EastRimWorld/Components/ERW_AreaOperationComponent.h`

- `struct` **`FBuildObjects`** — [ERW_AreaOperationComponent__FBuildObjects](EastRimWorld/Components/ERW_AreaOperationComponent__FBuildObjects.md)
  - **Description:** 存储建造物体的结构
- `struct` **`FLineActorInfo`** — [ERW_AreaOperationComponent__FLineActorInfo](EastRimWorld/Components/ERW_AreaOperationComponent__FLineActorInfo.md)
  - **Description:** 沿格子边线生成的Actor的信息
- `struct` **`FRoofActors`** — [ERW_AreaOperationComponent__FRoofActors](EastRimWorld/Components/ERW_AreaOperationComponent__FRoofActors.md)
  - **Description:** 同一屋顶部位类型显示和隐藏的Actor
- `struct` **`FRoofPartData`** — [ERW_AreaOperationComponent__FRoofPartData](EastRimWorld/Components/ERW_AreaOperationComponent__FRoofPartData.md)
  - **Description:** 屋顶部位数据
- `struct` **`FStairGridInfo`** — [ERW_AreaOperationComponent__FStairGridInfo](EastRimWorld/Components/ERW_AreaOperationComponent__FStairGridInfo.md)
  - **Description:** 阶梯格子信息
- `class` **`UERW_AreaOperationComponent`** — [ERW_AreaOperationComponent__UERW_AreaOperationComponent](EastRimWorld/Components/ERW_AreaOperationComponent__UERW_AreaOperationComponent.md)
  - **Description:** 物体创建区域操作相关组件

## `EastRimWorld/Components/ERW_ConstructionComponent.h`

- `enum` **`EConstructionWorkType`** — [ERW_ConstructionComponent__EConstructionWorkType](EastRimWorld/Components/ERW_ConstructionComponent__EConstructionWorkType.md)
  - **Description:** Construction work type distinguishing new construction from building repair
- `struct` **`FBuildingNeedResources`** — [ERW_ConstructionComponent__FBuildingNeedResources](EastRimWorld/Components/ERW_ConstructionComponent__FBuildingNeedResources.md)
  - **Description:** 同类型建筑物需要资源总和
- `struct` **`FConstructionSaveData`** — [ERW_ConstructionComponent__FConstructionSaveData](EastRimWorld/Components/ERW_ConstructionComponent__FConstructionSaveData.md)
  - **Description:** 建造组件存档数据
- `class` **`UERW_ConstructionComponent`** — [ERW_ConstructionComponent__UERW_ConstructionComponent](EastRimWorld/Components/ERW_ConstructionComponent__UERW_ConstructionComponent.md)
  - **Description:** 建造组件

## `EastRimWorld/Components/ERW_DoorCollisionComponent.h`

- `struct` **`FDoorCollisionSaveData`** — [ERW_DoorCollisionComponent__FDoorCollisionSaveData](EastRimWorld/Components/ERW_DoorCollisionComponent__FDoorCollisionSaveData.md)
  - **Description:** 门的碰撞存档数据
- `class` **`UERW_DoorCollisionComponent`** — [ERW_DoorCollisionComponent__UERW_DoorCollisionComponent](EastRimWorld/Components/ERW_DoorCollisionComponent__UERW_DoorCollisionComponent.md)
  - **Description:** 门的碰撞管理组件

## `EastRimWorld/Components/ERW_EnvironComponent.h`

- `struct` **`FEnvironSaveData`** — [ERW_EnvironComponent__FEnvironSaveData](EastRimWorld/Components/ERW_EnvironComponent__FEnvironSaveData.md)
  - **Description:** 环境信息关数据
- `struct` **`FSupportingObjects`** — [ERW_EnvironComponent__FSupportingObjects](EastRimWorld/Components/ERW_EnvironComponent__FSupportingObjects.md)
  - **Description:** 格子坐标对应的配套物体
- `class` **`UERW_EnvironComponent`** — [ERW_EnvironComponent__UERW_EnvironComponent](EastRimWorld/Components/ERW_EnvironComponent__UERW_EnvironComponent.md)
  - **Description:** 环境信息组件

## `EastRimWorld/Components/ERW_GameConfigComponent.h`

- `enum` **`ECanManageTagType`** — [ERW_GameConfigComponent__ECanManageTagType](EastRimWorld/Components/ERW_GameConfigComponent__ECanManageTagType.md)
  - **Description:** 可管理的标签分类
- `enum` **`EGameConfigType`** — [ERW_GameConfigComponent__EGameConfigType](EastRimWorld/Components/ERW_GameConfigComponent__EGameConfigType.md)
  - **Description:** 游戏配置类型
- `enum` **`EGameDataAssetType`** — [ERW_GameConfigComponent__EGameDataAssetType](EastRimWorld/Components/ERW_GameConfigComponent__EGameDataAssetType.md)
  - **Description:** 游戏资产类型
- `enum` **`EGoapGoalType`** — [ERW_GameConfigComponent__EGoapGoalType](EastRimWorld/Components/ERW_GameConfigComponent__EGoapGoalType.md)
  - **Description:** Goap Goal类型
- `struct` **`FGameplayTagArr`** — [ERW_GameConfigComponent__FGameplayTagArr](EastRimWorld/Components/ERW_GameConfigComponent__FGameplayTagArr.md)
  - **Description:** Wrapper struct holding an array of gameplay tags (for nesting inside TMap values)
- `struct` **`FManageGoalName`** — [ERW_GameConfigComponent__FManageGoalName](EastRimWorld/Components/ERW_GameConfigComponent__FManageGoalName.md)
  - **Description:** Pair struct of a manageable action Goal ID and its display name
- `struct` **`FNameArr`** — [ERW_GameConfigComponent__FNameArr](EastRimWorld/Components/ERW_GameConfigComponent__FNameArr.md)
  - **Description:** Wrapper struct holding an array of FNames
- `struct` **`FPracticeAddAttributeRange`** — [ERW_GameConfigComponent__FPracticeAddAttributeRange](EastRimWorld/Components/ERW_GameConfigComponent__FPracticeAddAttributeRange.md)
  - **Description:** 修炼的属性区间对应的数值
- `struct` **`FProductTypeInfo`** — [ERW_GameConfigComponent__FProductTypeInfo](EastRimWorld/Components/ERW_GameConfigComponent__FProductTypeInfo.md)
  - **Description:** Treasure pavilion product type info (type weight and sub-type weight map)
- `struct` **`FRedemptionTextData`** — [ERW_GameConfigComponent__FRedemptionTextData](EastRimWorld/Components/ERW_GameConfigComponent__FRedemptionTextData.md)
  - **Description:** Redemption text table row: redemption texts mapped to a justice value range
- `struct` **`FWorkPriorityData`** — [ERW_GameConfigComponent__FWorkPriorityData](EastRimWorld/Components/ERW_GameConfigComponent__FWorkPriorityData.md)
  - **Description:** 工作优先级数据
- `class` **`UCameraConfigAsset`** — [ERW_GameConfigComponent__UCameraConfigAsset](EastRimWorld/Components/ERW_GameConfigComponent__UCameraConfigAsset.md)
  - **Description:** 相机配置资产
- `class` **`UCommonLogConfigurationAsset`** — [ERW_GameConfigComponent__UCommonLogConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UCommonLogConfigurationAsset.md)
  - **Description:** 日志通用资产配置
- `class` **`UERW_GameConfigComponent`** — [ERW_GameConfigComponent__UERW_GameConfigComponent](EastRimWorld/Components/ERW_GameConfigComponent__UERW_GameConfigComponent.md)
  - **Description:** Game config component that centrally manages and provides access to data tables and data assets by type, with runtime copies for mod modification
- `class` **`UEnergySystemSetUp`** — [ERW_GameConfigComponent__UEnergySystemSetUp](EastRimWorld/Components/ERW_GameConfigComponent__UEnergySystemSetUp.md)
  - **Description:** Energy system setup asset configuring energy connection cable material, segments, range, calculation interval and related parameters
- `class` **`UGamePlayConfigurationAsset`** — [ERW_GameConfigComponent__UGamePlayConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UGamePlayConfigurationAsset.md)
  - **Description:** 游戏配置资产
- `class` **`UPracticeConfigurationAsset`** — [ERW_GameConfigComponent__UPracticeConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UPracticeConfigurationAsset.md)
  - **Description:** 修炼配置
- `class` **`UPrisonConfigAsset`** — [ERW_GameConfigComponent__UPrisonConfigAsset](EastRimWorld/Components/ERW_GameConfigComponent__UPrisonConfigAsset.md)
  - **Description:** 监狱配置
- `class` **`UTournamentConfigurationAsset`** — [ERW_GameConfigComponent__UTournamentConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UTournamentConfigurationAsset.md)
  - **Description:** 门派战配置资产
- `class` **`UWorldEventData`** — [ERW_GameConfigComponent__UWorldEventData](EastRimWorld/Components/ERW_GameConfigComponent__UWorldEventData.md)
  - **Description:** World event data asset holding world event config tables, event grouping, pause slot settings and the enable switch
- `class` **`UWorldGameConfigurationAsset`** — [ERW_GameConfigComponent__UWorldGameConfigurationAsset](EastRimWorld/Components/ERW_GameConfigComponent__UWorldGameConfigurationAsset.md)
  - **Description:** 世界

## `EastRimWorld/Components/ERW_HISMManager.h`

- `struct` **`FAutoTileActorInfo`** — [ERW_HISMManager__FAutoTileActorInfo](EastRimWorld/Components/ERW_HISMManager__FAutoTileActorInfo.md)
  - **Description:** 九宫格物体信息
- `struct` **`FAutoTileIndexInfo`** — [ERW_HISMManager__FAutoTileIndexInfo](EastRimWorld/Components/ERW_HISMManager__FAutoTileIndexInfo.md)
  - **Description:** 九宫格物体索引信息
- `struct` **`FBuildObjectInfos`** — [ERW_HISMManager__FBuildObjectInfos](EastRimWorld/Components/ERW_HISMManager__FBuildObjectInfos.md)
  - **Description:** 建造物体对应的信息
- `struct` **`FEmbeddedWallInfo`** — [ERW_HISMManager__FEmbeddedWallInfo](EastRimWorld/Components/ERW_HISMManager__FEmbeddedWallInfo.md)
  - **Description:** 嵌入式墙体在ISM中的信息
- `struct` **`FEmbeddedWallTypeData`** — [ERW_HISMManager__FEmbeddedWallTypeData](EastRimWorld/Components/ERW_HISMManager__FEmbeddedWallTypeData.md)
  - **Description:** 嵌入式墙体类型数据
- `struct` **`FEntranceArrowData`** — [ERW_HISMManager__FEntranceArrowData](EastRimWorld/Components/ERW_HISMManager__FEntranceArrowData.md)
  - **Description:** 建筑入口箭头的数据
- `struct` **`FEntranceArrowInfos`** — [ERW_HISMManager__FEntranceArrowInfos](EastRimWorld/Components/ERW_HISMManager__FEntranceArrowInfos.md)
  - **Description:** 建筑入口箭头信息
- `struct` **`FFillerData`** — [ERW_HISMManager__FFillerData](EastRimWorld/Components/ERW_HISMManager__FFillerData.md)
  - **Description:** 填充数据
- `struct` **`FFillerInfo`** — [ERW_HISMManager__FFillerInfo](EastRimWorld/Components/ERW_HISMManager__FFillerInfo.md)
  - **Description:** 填充模型信息
- `struct` **`FFillerPartData`** — [ERW_HISMManager__FFillerPartData](EastRimWorld/Components/ERW_HISMManager__FFillerPartData.md)
  - **Description:** 填充九宫格每部分数据
- `struct` **`FISMComponentInfo`** — [ERW_HISMManager__FISMComponentInfo](EastRimWorld/Components/ERW_HISMManager__FISMComponentInfo.md)
  - **Description:** ISM组件信息
- `struct` **`FIndexActorData`** — [ERW_HISMManager__FIndexActorData](EastRimWorld/Components/ERW_HISMManager__FIndexActorData.md)
  - **Description:** 索引对应Actor的数据
- `struct` **`FIndexData`** — [ERW_HISMManager__FIndexData](EastRimWorld/Components/ERW_HISMManager__FIndexData.md)
  - **Description:** 索引数据
- `struct` **`FPillarData`** — [ERW_HISMManager__FPillarData](EastRimWorld/Components/ERW_HISMManager__FPillarData.md)
  - **Description:** 建筑柱子数据
- `struct` **`FPillarIndexInfo`** — [ERW_HISMManager__FPillarIndexInfo](EastRimWorld/Components/ERW_HISMManager__FPillarIndexInfo.md)
  - **Description:** 建筑柱子索引对应交点位置信息
- `struct` **`FPillarInfo`** — [ERW_HISMManager__FPillarInfo](EastRimWorld/Components/ERW_HISMManager__FPillarInfo.md)
  - **Description:** 建筑柱子信息
- `struct` **`FPillarPosInfo`** — [ERW_HISMManager__FPillarPosInfo](EastRimWorld/Components/ERW_HISMManager__FPillarPosInfo.md)
  - **Description:** 建筑柱子位置信息
- `struct` **`FPillarSaveData`** — [ERW_HISMManager__FPillarSaveData](EastRimWorld/Components/ERW_HISMManager__FPillarSaveData.md)
  - **Description:** 建筑柱子的存档数据
- `struct` **`FReplacedWallData`** — [ERW_HISMManager__FReplacedWallData](EastRimWorld/Components/ERW_HISMManager__FReplacedWallData.md)
  - **Description:** 需要替换的墙体的数据
- `struct` **`FRoofIndexInfos`** — [ERW_HISMManager__FRoofIndexInfos](EastRimWorld/Components/ERW_HISMManager__FRoofIndexInfos.md)
  - **Description:** 屋顶索引信息
- `struct` **`FStairIndexData`** — [ERW_HISMManager__FStairIndexData](EastRimWorld/Components/ERW_HISMManager__FStairIndexData.md)
  - **Description:** 阶梯索引对应的数据
- `class` **`UERW_HISMManager`** — [ERW_HISMManager__UERW_HISMManager](EastRimWorld/Components/ERW_HISMManager__UERW_HISMManager.md)
  - **Description:** 管理各种物体的ISM组件(该组件需要挂在一个能出现在场景中的Actor上) ----------! Warning !---------- 由于UE5的新特性Nanite, 使用ISM进行管理的模型需要开启Nanite, 否则移动模型会出现消失的BUG ----------! Warning !----------

## `EastRimWorld/Components/ERW_MapDataMgr.h`

- `struct` **`FActorData`** — [ERW_MapDataMgr__FActorData](EastRimWorld/Components/ERW_MapDataMgr__FActorData.md)
  - **Description:** Actor数据
- `struct` **`FAreaRange`** — [ERW_MapDataMgr__FAreaRange](EastRimWorld/Components/ERW_MapDataMgr__FAreaRange.md)
  - **Description:** 区域范围
- `struct` **`FBuildData`** — [ERW_MapDataMgr__FBuildData](EastRimWorld/Components/ERW_MapDataMgr__FBuildData.md)
  - **Description:** Map building data per config ID: the build config ID plus GUID arrays of unfinished and finished buildings
- `struct` **`FBuildObjectResourceInfo`** — [ERW_MapDataMgr__FBuildObjectResourceInfo](EastRimWorld/Components/ERW_MapDataMgr__FBuildObjectResourceInfo.md)
  - **Description:** 同类型建筑物需要的资源信息
- `struct` **`FBuildObjectSaveData`** — [ERW_MapDataMgr__FBuildObjectSaveData](EastRimWorld/Components/ERW_MapDataMgr__FBuildObjectSaveData.md)
  - **Description:** 建筑存档数据
- `struct` **`FBuildingNum`** — [ERW_MapDataMgr__FBuildingNum](EastRimWorld/Components/ERW_MapDataMgr__FBuildingNum.md)
  - **Description:** Wrapper struct holding the set of used numbers for one building/device type
- `struct` **`FClosureAreaData`** — [ERW_MapDataMgr__FClosureAreaData](EastRimWorld/Components/ERW_MapDataMgr__FClosureAreaData.md)
  - **Description:** 闭合区域数据
- `struct` **`FClosureAreaRange`** — [ERW_MapDataMgr__FClosureAreaRange](EastRimWorld/Components/ERW_MapDataMgr__FClosureAreaRange.md)
  - **Description:** 闭合区域范围信息
- `struct` **`FClosureAreas`** — [ERW_MapDataMgr__FClosureAreas](EastRimWorld/Components/ERW_MapDataMgr__FClosureAreas.md)
  - **Description:** 同一层的所有闭合区域
- `struct` **`FColumnData`** — [ERW_MapDataMgr__FColumnData](EastRimWorld/Components/ERW_MapDataMgr__FColumnData.md)
  - **Description:** 环境列数据
- `struct` **`FCombinationBuildAreaData`** — [ERW_MapDataMgr__FCombinationBuildAreaData](EastRimWorld/Components/ERW_MapDataMgr__FCombinationBuildAreaData.md)
  - **Description:** Combination building area data: combination-satisfied flag, GUID, config ID, core building grid range and member building counts
- `struct` **`FConstructionGuidData`** — [ERW_MapDataMgr__FConstructionGuidData](EastRimWorld/Components/ERW_MapDataMgr__FConstructionGuidData.md)
  - **Description:** 建造中建筑的Guid数据
- `struct` **`FEnvironData`** — [ERW_MapDataMgr__FEnvironData](EastRimWorld/Components/ERW_MapDataMgr__FEnvironData.md)
  - **Description:** 环境数据
- `struct` **`FGridCollectData`** — [ERW_MapDataMgr__FGridCollectData](EastRimWorld/Components/ERW_MapDataMgr__FGridCollectData.md)
  - **Description:** 地格属性
- `struct` **`FGridData`** — [ERW_MapDataMgr__FGridData](EastRimWorld/Components/ERW_MapDataMgr__FGridData.md)
  - **Description:** 格子数据
- `struct` **`FGridTraversalData`** — [ERW_MapDataMgr__FGridTraversalData](EastRimWorld/Components/ERW_MapDataMgr__FGridTraversalData.md)
  - **Description:** 遍历格子数据
- `struct` **`FHeatSourceAreaData`** — [ERW_MapDataMgr__FHeatSourceAreaData](EastRimWorld/Components/ERW_MapDataMgr__FHeatSourceAreaData.md)
  - **Description:** Heat source area data: the heat source building GUID and its temperature effect value
- `struct` **`FPointTraversalData`** — [ERW_MapDataMgr__FPointTraversalData](EastRimWorld/Components/ERW_MapDataMgr__FPointTraversalData.md)
  - **Description:** 遍历点数据
- `struct` **`FRoomElementGuids`** — [ERW_MapDataMgr__FRoomElementGuids](EastRimWorld/Components/ERW_MapDataMgr__FRoomElementGuids.md)
  - **Description:** 房间要素的Guid
- `class` **`UERW_MapDataMgr`** — [ERW_MapDataMgr__UERW_MapDataMgr](EastRimWorld/Components/ERW_MapDataMgr__UERW_MapDataMgr.md)
  - **Description:** 地图数据管理

## `EastRimWorld/Components/ERW_PresetComponent.h`

- `class` **`UERW_PresetComponent`** — [ERW_PresetComponent__UERW_PresetComponent](EastRimWorld/Components/ERW_PresetComponent__UERW_PresetComponent.md)
  - **Description:** 建筑预设组件

## `EastRimWorld/Components/ERW_TechnologyMgr.h`

- `class` **`UERW_TechnologyMgr`** — [ERW_TechnologyMgr__UERW_TechnologyMgr](EastRimWorld/Components/ERW_TechnologyMgr__UERW_TechnologyMgr.md)
  - **Description:** Technology manager component handling research states of all tech items, item unlocking, tech purchasing and save/load

## `EastRimWorld/Components/ERW_TimerManager.h`

- `struct` **`FTimerInfo`** — [ERW_TimerManager__FTimerInfo](EastRimWorld/Components/ERW_TimerManager__FTimerInfo.md)
  - **Description:** 计时器信息
- `class` **`UERW_TimerManager`** — [ERW_TimerManager__UERW_TimerManager](EastRimWorld/Components/ERW_TimerManager__UERW_TimerManager.md)
  - **Description:** 计时器管理组件

## `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

- `struct` **`FWorkScheduleData`** — [ERW_WorkScheduleComponent__FWorkScheduleData](EastRimWorld/Components/ERW_WorkScheduleComponent__FWorkScheduleData.md)
  - **Description:** 工作日程数据
- `class` **`UERW_WorkScheduleComponent`** — [ERW_WorkScheduleComponent__UERW_WorkScheduleComponent](EastRimWorld/Components/ERW_WorkScheduleComponent__UERW_WorkScheduleComponent.md)
  - **Description:** 工作日程管理组件

## `EastRimWorld/Components/FabricateActorComponent.h`

- `struct` **`FFabricateSaveData`** — [FabricateActorComponent__FFabricateSaveData](EastRimWorld/Components/FabricateActorComponent__FFabricateSaveData.md)
  - **Description:** 制造存档数据
- `class` **`UFabricateActorComponent`** — [FabricateActorComponent__UFabricateActorComponent](EastRimWorld/Components/FabricateActorComponent__UFabricateActorComponent.md)
  - **Description:** Fabricate component managing a building's fabricate task queue, resource GOAP actions and fabricated item generation

## `EastRimWorld/Components/TradeAreaComponent.h`

- `struct` **`FTradeAreaSaveData`** — [TradeAreaComponent__FTradeAreaSaveData](EastRimWorld/Components/TradeAreaComponent__FTradeAreaSaveData.md)
  - **Description:** Trade area save data: transport goods actions, needed goods and the pending transport queue
- `class` **`UTradeAreaComponent`** — [TradeAreaComponent__UTradeAreaComponent](EastRimWorld/Components/TradeAreaComponent__UTradeAreaComponent.md)
  - **Description:** Trade area component that creates transport-goods GOAP actions and manages needed goods and the sale price favorability rate

## `EastRimWorld/Components/TreasureComponent.h`

- `struct` **`FBuyTreasureInfo`** — [TreasureComponent__FBuyTreasureInfo](EastRimWorld/Components/TreasureComponent__FBuyTreasureInfo.md)
  - **Description:** 珍宝阁购买信息
- `struct` **`FSaveItemArr`** — [TreasureComponent__FSaveItemArr](EastRimWorld/Components/TreasureComponent__FSaveItemArr.md)
  - **Description:** 珍宝阁保存信息
- `struct` **`FStallInfo`** — [TreasureComponent__FStallInfo](EastRimWorld/Components/TreasureComponent__FStallInfo.md)
  - **Description:** 珍宝阁购买信息
- `struct` **`FTreasureItem`** — [TreasureComponent__FTreasureItem](EastRimWorld/Components/TreasureComponent__FTreasureItem.md)
  - **Description:** 珍宝阁商品
- `struct` **`FTreasureItemSubData`** — [TreasureComponent__FTreasureItemSubData](EastRimWorld/Components/TreasureComponent__FTreasureItemSubData.md)
  - **Description:** 珍宝阁现存商品数量及其货架
- `struct` **`FTreasureSaveData`** — [TreasureComponent__FTreasureSaveData](EastRimWorld/Components/TreasureComponent__FTreasureSaveData.md)
  - **Description:** 珍宝阁保存信息
- `struct` **`FTreasureStatisticsInfo`** — [TreasureComponent__FTreasureStatisticsInfo](EastRimWorld/Components/TreasureComponent__FTreasureStatisticsInfo.md)
  - **Description:** 珍宝阁商品当期已售统计数据
- `struct` **`FTreasureStatisticsTotalInfo`** — [TreasureComponent__FTreasureStatisticsTotalInfo](EastRimWorld/Components/TreasureComponent__FTreasureStatisticsTotalInfo.md)
  - **Description:** 珍宝阁商品总共已售统计数据
- `class` **`UTreasureComponent`** — [TreasureComponent__UTreasureComponent](EastRimWorld/Components/TreasureComponent__UTreasureComponent.md)
  - **Description:** Treasure pavilion component managing the shop's item listing/delisting, stall slots, exchange statistics, disciple purchases and automatic replenishment, with save/load support.

## `EastRimWorld/DLC/DLCSubsystem.h`

- `enum` **`EDLCActiveState`** — [DLCSubsystem__EDLCActiveState](EastRimWorld/DLC/DLCSubsystem__EDLCActiveState.md)
  - **Description:** dlc的激活状态
- `enum` **`EDLCConfigType`** — [DLCSubsystem__EDLCConfigType](EastRimWorld/DLC/DLCSubsystem__EDLCConfigType.md)
  - **Description:** DLC的配置类型
- `struct` **`FDLCInfoConfig`** — [DLCSubsystem__FDLCInfoConfig](EastRimWorld/DLC/DLCSubsystem__FDLCInfoConfig.md)
  - **Description:** DLC的配置 作为主体包内游戏显示
- `class` **`UDLCInformationAsset`** — [DLCSubsystem__UDLCInformationAsset](EastRimWorld/DLC/DLCSubsystem__UDLCInformationAsset.md)
  - **Description:** DCL中的信息 放置于dlc包中
- `class` **`UDLCSubsystem`** — [DLCSubsystem__UDLCSubsystem](EastRimWorld/DLC/DLCSubsystem__UDLCSubsystem.md)
  - **Description:** DLC subsystem responsible for mounting DLC pak files, reading DLC information assets, querying DLC install/activation states and opening the Steam store page.

## `EastRimWorld/ERW_AreaCurve.h`

- `class` **`AERW_AreaCurve`** — [ERW_AreaCurve__AERW_AreaCurve](EastRimWorld/ERW_AreaCurve__AERW_AreaCurve.md)
  - **Description:** 地图区域曲线

## `EastRimWorld/ERW_CommonTypes.h`

- `enum` **`EBodyOrganType`** — [ERW_CommonTypes__EBodyOrganType](EastRimWorld/ERW_CommonTypes__EBodyOrganType.md)
  - **Description:** 身体部位类型
- `struct` **`FAssemblePartInfo`** — [ERW_CommonTypes__FAssemblePartInfo](EastRimWorld/ERW_CommonTypes__FAssemblePartInfo.md)
  - **Description:** 组装建筑的部位信息
- `struct` **`FAssemblePartTransform`** — [ERW_CommonTypes__FAssemblePartTransform](EastRimWorld/ERW_CommonTypes__FAssemblePartTransform.md)
  - **Description:** 组装建筑部位的Transform
- `struct` **`FBuildLightSourceData`** — [ERW_CommonTypes__FBuildLightSourceData](EastRimWorld/ERW_CommonTypes__FBuildLightSourceData.md)
  - **Description:** 建筑光源配置数据
- `struct` **`FBuildObjectData`** — [ERW_CommonTypes__FBuildObjectData](EastRimWorld/ERW_CommonTypes__FBuildObjectData.md)
  - **Description:** 建筑模型Instance的数据
- `struct` **`FCommonCondition`** — [ERW_CommonTypes__FCommonCondition](EastRimWorld/ERW_CommonTypes__FCommonCondition.md)
  - **Description:** 通用条件
- `struct` **`FConditionValue`** — [ERW_CommonTypes__FConditionValue](EastRimWorld/ERW_CommonTypes__FConditionValue.md)
  - **Description:** 通用条件判断的值
- `struct` **`FConditions`** — [ERW_CommonTypes__FConditions](EastRimWorld/ERW_CommonTypes__FConditions.md)
  - **Description:** 通用条件的数组
- `struct` **`FFillerSaveData`** — [ERW_CommonTypes__FFillerSaveData](EastRimWorld/ERW_CommonTypes__FFillerSaveData.md)
  - **Description:** 填充模型存档数据
- `struct` **`FGameplayAbilitySaveData`** — [ERW_CommonTypes__FGameplayAbilitySaveData](EastRimWorld/ERW_CommonTypes__FGameplayAbilitySaveData.md)
  - **Description:** 当前能力存档数据
- `struct` **`FGridPosition`** — [ERW_CommonTypes__FGridPosition](EastRimWorld/ERW_CommonTypes__FGridPosition.md)
  - **Description:** 格子坐标位置
- `struct` **`FGridSeamPoint`** — [ERW_CommonTypes__FGridSeamPoint](EastRimWorld/ERW_CommonTypes__FGridSeamPoint.md)
  - **Description:** 格子接缝点数据
- `struct` **`FIDs`** — [ERW_CommonTypes__FIDs](EastRimWorld/ERW_CommonTypes__FIDs.md)
  - **Description:** 包含FName的数组
- `struct` **`FLogData`** — [ERW_CommonTypes__FLogData](EastRimWorld/ERW_CommonTypes__FLogData.md)
  - **Description:** Log entry data containing the character name, formatted description and the time it occurred.
- `struct` **`FOverlockingAddInjuryData`** — [ERW_CommonTypes__FOverlockingAddInjuryData](EastRimWorld/ERW_CommonTypes__FOverlockingAddInjuryData.md)
  - **Description:** Injury data that may be inflicted during overclocking, containing the injury name, weight and affected body organ.
- `struct` **`FPathTracerSetting`** — [ERW_CommonTypes__FPathTracerSetting](EastRimWorld/ERW_CommonTypes__FPathTracerSetting.md)
  - **Description:** 样条线配置数据
- `struct` **`FPresetData`** — [ERW_CommonTypes__FPresetData](EastRimWorld/ERW_CommonTypes__FPresetData.md)
  - **Description:** 预设建筑数据
- `struct` **`FPresetInfos`** — [ERW_CommonTypes__FPresetInfos](EastRimWorld/ERW_CommonTypes__FPresetInfos.md)
  - **Description:** 预设建筑数据的集合
- `struct` **`FRobotTypeAction`** — [ERW_CommonTypes__FRobotTypeAction](EastRimWorld/ERW_CommonTypes__FRobotTypeAction.md)
  - **Description:** Structure mapping robot types to action names.
- `struct` **`FStaticMeshComponents`** — [ERW_CommonTypes__FStaticMeshComponents](EastRimWorld/ERW_CommonTypes__FStaticMeshComponents.md)
  - **Description:** 静态模型组件的集合
- `struct` **`FTargetActorInfo`** — [ERW_CommonTypes__FTargetActorInfo](EastRimWorld/ERW_CommonTypes__FTargetActorInfo.md)
  - **Description:** 目标Actor的信息
- `struct` **`FTreasureAddMoodRule`** — [ERW_CommonTypes__FTreasureAddMoodRule](EastRimWorld/ERW_CommonTypes__FTreasureAddMoodRule.md)
  - **Description:** Treasure pavilion mood rule: grants buff moods when the required disciple count and goods type count are satisfied, otherwise applies debuff moods.
- `struct` **`FUObjectData`** — [ERW_CommonTypes__FUObjectData](EastRimWorld/ERW_CommonTypes__FUObjectData.md)
  - **Description:** 包含UObject和其对应的Guid的结构
- `struct` **`FVectorData`** — [ERW_CommonTypes__FVectorData](EastRimWorld/ERW_CommonTypes__FVectorData.md)
  - **Description:** 可存档的三维Vector数据

## `EastRimWorld/ERW_ConfigTypes.h`

- `struct` **`FAutoTileMeshConfigData`** — [ERW_ConfigTypes__FAutoTileMeshConfigData](EastRimWorld/ERW_ConfigTypes__FAutoTileMeshConfigData.md)
  - **Description:** 九宫格模型配置数据结构
- `struct` **`FBreakdownActionConfigData`** — [ERW_ConfigTypes__FBreakdownActionConfigData](EastRimWorld/ERW_ConfigTypes__FBreakdownActionConfigData.md)
  - **Description:** 崩溃行为配置结构
- `struct` **`FBreakdownValueConfigData`** — [ERW_ConfigTypes__FBreakdownValueConfigData](EastRimWorld/ERW_ConfigTypes__FBreakdownValueConfigData.md)
  - **Description:** 崩溃值配置结构
- `struct` **`FBuildCombination`** — [ERW_ConfigTypes__FBuildCombination](EastRimWorld/ERW_ConfigTypes__FBuildCombination.md)
  - **Description:** 建筑组合配置结构
- `struct` **`FBuildConfigData`** — [ERW_ConfigTypes__FBuildConfigData](EastRimWorld/ERW_ConfigTypes__FBuildConfigData.md)
  - **Description:** 建筑配置结构
- `struct` **`FBuildEnergyData`** — [ERW_ConfigTypes__FBuildEnergyData](EastRimWorld/ERW_ConfigTypes__FBuildEnergyData.md)
  - **Description:** 建筑物能源相关信息
- `struct` **`FBuildPersonConfigData`** — [ERW_ConfigTypes__FBuildPersonConfigData](EastRimWorld/ERW_ConfigTypes__FBuildPersonConfigData.md)
  - **Description:** 玩家拥有此类建筑的数量
- `struct` **`FCameraConfigData`** — [ERW_ConfigTypes__FCameraConfigData](EastRimWorld/ERW_ConfigTypes__FCameraConfigData.md)
  - **Description:** 摄像机配置数据结构
- `struct` **`FEnergyGridData`** — [ERW_ConfigTypes__FEnergyGridData](EastRimWorld/ERW_ConfigTypes__FEnergyGridData.md)
  - **Description:** 能源相关信息
- `struct` **`FExtraEnvironInfo`** — [ERW_ConfigTypes__FExtraEnvironInfo](EastRimWorld/ERW_ConfigTypes__FExtraEnvironInfo.md)
  - **Description:** 建筑额外的占位信息
- `struct` **`FExtraInfos`** — [ERW_ConfigTypes__FExtraInfos](EastRimWorld/ERW_ConfigTypes__FExtraInfos.md)
  - **Description:** 建筑额外占位信息集合
- `struct` **`FFacilityNeed`** — [ERW_ConfigTypes__FFacilityNeed](EastRimWorld/ERW_ConfigTypes__FFacilityNeed.md)
  - **Description:** 房间设施需求
- `struct` **`FIdeaTriggerConfigData`** — [ERW_ConfigTypes__FIdeaTriggerConfigData](EastRimWorld/ERW_ConfigTypes__FIdeaTriggerConfigData.md)
  - **Description:** 想法触发配置结构
- `struct` **`FLevelConfigData`** — [ERW_ConfigTypes__FLevelConfigData](EastRimWorld/ERW_ConfigTypes__FLevelConfigData.md)
  - **Description:** 难度相关配置
- `struct` **`FMeshMaterialParameter`** — [ERW_ConfigTypes__FMeshMaterialParameter](EastRimWorld/ERW_ConfigTypes__FMeshMaterialParameter.md)
  - **Description:** 建筑模型材质参数
- `struct` **`FParticleEffectData`** — [ERW_ConfigTypes__FParticleEffectData](EastRimWorld/ERW_ConfigTypes__FParticleEffectData.md)
  - **Description:** 建筑粒子效果数据
- `struct` **`FPracticeBuildingOverlockingData`** — [ERW_ConfigTypes__FPracticeBuildingOverlockingData](EastRimWorld/ERW_ConfigTypes__FPracticeBuildingOverlockingData.md)
  - **Description:** Overclocking configuration data for practice buildings, including priority, probability, proportion, cost, duration, cooldown, durability loss, practice buff probability, possible inflicted injuries and display icon.
- `struct` **`FPresetBuilding`** — [ERW_ConfigTypes__FPresetBuilding](EastRimWorld/ERW_ConfigTypes__FPresetBuilding.md)
  - **Description:** 预设建筑物信息
- `struct` **`FPuppetPlatformMeshConfig`** — [ERW_ConfigTypes__FPuppetPlatformMeshConfig](EastRimWorld/ERW_ConfigTypes__FPuppetPlatformMeshConfig.md)
  - **Description:** 傀儡台
- `struct` **`FRelativeGridPoses`** — [ERW_ConfigTypes__FRelativeGridPoses](EastRimWorld/ERW_ConfigTypes__FRelativeGridPoses.md)
  - **Description:** 物体的相对格子坐标
- `struct` **`FRoomBuffIds`** — [ERW_ConfigTypes__FRoomBuffIds](EastRimWorld/ERW_ConfigTypes__FRoomBuffIds.md)
  - **Description:** Wrapper structure holding an array of room buff IDs, used in room effect append configuration.
- `struct` **`FRoomConfigData`** — [ERW_ConfigTypes__FRoomConfigData](EastRimWorld/ERW_ConfigTypes__FRoomConfigData.md)
  - **Description:** 房间配置结构
- `struct` **`FRoomInfo`** — [ERW_ConfigTypes__FRoomInfo](EastRimWorld/ERW_ConfigTypes__FRoomInfo.md)
  - **Description:** Runtime room info, including room config ID, GUID, level, contained building counts, owners and per-category scores (area/aesthetics/temperature/cleanliness/lighting/five elements).
- `struct` **`FRoomLevel`** — [ERW_ConfigTypes__FRoomLevel](EastRimWorld/ERW_ConfigTypes__FRoomLevel.md)
  - **Description:** 房间等级结构
- `struct` **`FRoomScoreData`** — [ERW_ConfigTypes__FRoomScoreData](EastRimWorld/ERW_ConfigTypes__FRoomScoreData.md)
  - **Description:** Score-range data for a single room rating category, containing the score range and level name.
- `struct` **`FRoomScoreDataArray`** — [ERW_ConfigTypes__FRoomScoreDataArray](EastRimWorld/ERW_ConfigTypes__FRoomScoreDataArray.md)
  - **Description:** Collection of score-range data for one rating type together with its maximum score.
- `struct` **`FRoomSizeTemperatureRate`** — [ERW_ConfigTypes__FRoomSizeTemperatureRate](EastRimWorld/ERW_ConfigTypes__FRoomSizeTemperatureRate.md)
  - **Description:** Configuration mapping a room size range to a temperature rate, multiplied in when settling the room temperature.
- `struct` **`FRoomTemperatureScoreData`** — [ERW_ConfigTypes__FRoomTemperatureScoreData](EastRimWorld/ERW_ConfigTypes__FRoomTemperatureScoreData.md)
  - **Description:** Configuration data mapping a room temperature range to a score.
- `class` **`UPuppetPlatformConfigurationAsset`** — [ERW_ConfigTypes__UPuppetPlatformConfigurationAsset](EastRimWorld/ERW_ConfigTypes__UPuppetPlatformConfigurationAsset.md)
  - **Description:** 傀儡台配置
- `class` **`URoomConfigAsset`** — [ERW_ConfigTypes__URoomConfigAsset](EastRimWorld/ERW_ConfigTypes__URoomConfigAsset.md)
  - **Description:** 房间配置资产

## `EastRimWorld/ERW_Enumerations.h`

- `enum` **`EAbilityUseState`** — [ERW_Enumerations__EAbilityUseState](EastRimWorld/ERW_Enumerations__EAbilityUseState.md)
  - **Description:** Ability use state enum: Inactive, Begin, Loop, or End
- `enum` **`EActorType`** — [ERW_Enumerations__EActorType](EastRimWorld/ERW_Enumerations__EActorType.md)
  - **Description:** Actor类型
- `enum` **`EAnimalBodyType`** — [ERW_Enumerations__EAnimalBodyType](EastRimWorld/ERW_Enumerations__EAnimalBodyType.md)
  - **Description:** 动物体型
- `enum` **`EAssemblePartType`** — [ERW_Enumerations__EAssemblePartType](EastRimWorld/ERW_Enumerations__EAssemblePartType.md)
  - **Description:** 建筑组装部位类型
- `enum` **`EAutoTileType`** — [ERW_Enumerations__EAutoTileType](EastRimWorld/ERW_Enumerations__EAutoTileType.md)
  - **Description:** 九宫格枚举类型
- `enum` **`EBreakdownExistType`** — [ERW_Enumerations__EBreakdownExistType](EastRimWorld/ERW_Enumerations__EBreakdownExistType.md)
  - **Description:** 崩溃存在类型
- `enum` **`EBreakdownState`** — [ERW_Enumerations__EBreakdownState](EastRimWorld/ERW_Enumerations__EBreakdownState.md)
  - **Description:** 角色崩溃状态
- `enum` **`EBreakdownType`** — [ERW_Enumerations__EBreakdownType](EastRimWorld/ERW_Enumerations__EBreakdownType.md)
  - **Description:** 崩溃类型
- `enum` **`EBuildObjectState`** — [ERW_Enumerations__EBuildObjectState](EastRimWorld/ERW_Enumerations__EBuildObjectState.md)
  - **Description:** 建造物体状态
- `enum` **`EBuildingDataType`** — [ERW_Enumerations__EBuildingDataType](EastRimWorld/ERW_Enumerations__EBuildingDataType.md)
  - **Description:** 建筑数据类型
- `enum` **`EBuildingEnableState`** — [ERW_Enumerations__EBuildingEnableState](EastRimWorld/ERW_Enumerations__EBuildingEnableState.md)
  - **Description:** 建筑物的启用状态
- `enum` **`EBuildingRunState`** — [ERW_Enumerations__EBuildingRunState](EastRimWorld/ERW_Enumerations__EBuildingRunState.md)
  - **Description:** 建筑物的运行状态
- `enum` **`EBuildingState`** — [ERW_Enumerations__EBuildingState](EastRimWorld/ERW_Enumerations__EBuildingState.md)
  - **Description:** 建筑状态
- `enum` **`EBuildingType`** — [ERW_Enumerations__EBuildingType](EastRimWorld/ERW_Enumerations__EBuildingType.md)
  - **Description:** Building type enum (bed, research facility, light, table/chair, warehouse, watchtower, energy platforms, trade area, area-control flag, etc.)
- `enum` **`ECeremonyStateType`** — [ERW_Enumerations__ECeremonyStateType](EastRimWorld/ERW_Enumerations__ECeremonyStateType.md)
  - **Description:** 仪式状态类型
- `enum` **`ECharacterHeadTipType`** — [ERW_Enumerations__ECharacterHeadTipType](EastRimWorld/ERW_Enumerations__ECharacterHeadTipType.md)
  - **Description:** 角色状态栏提示类型
- `enum` **`ECheckDirectionType`** — [ERW_Enumerations__ECheckDirectionType](EastRimWorld/ERW_Enumerations__ECheckDirectionType.md)
  - **Description:** 检查的方向类型
- `enum` **`ECommonConditionType`** — [ERW_Enumerations__ECommonConditionType](EastRimWorld/ERW_Enumerations__ECommonConditionType.md)
  - **Description:** 通用条件类型
- `enum` **`EConditionQuery`** — [ERW_Enumerations__EConditionQuery](EastRimWorld/ERW_Enumerations__EConditionQuery.md)
  - **Description:** 条件判断规则
- `enum` **`EConditionValueType`** — [ERW_Enumerations__EConditionValueType](EastRimWorld/ERW_Enumerations__EConditionValueType.md)
  - **Description:** 条件检测值类型
- `enum` **`EDoorState`** — [ERW_Enumerations__EDoorState](EastRimWorld/ERW_Enumerations__EDoorState.md)
  - **Description:** 门的状态
- `enum` **`EEastRimWorldDirectType`** — [ERW_Enumerations__EEastRimWorldDirectType](EastRimWorld/ERW_Enumerations__EEastRimWorldDirectType.md)
  - **Description:** 方向
- `enum` **`EEmbeddedWallType`** — [ERW_Enumerations__EEmbeddedWallType](EastRimWorld/ERW_Enumerations__EEmbeddedWallType.md)
  - **Description:** 嵌入式墙体类型
- `enum` **`EEnergyControlType`** — [ERW_Enumerations__EEnergyControlType](EastRimWorld/ERW_Enumerations__EEnergyControlType.md)
  - **Description:** 自动化控件类型
- `enum` **`EEnergyGridState`** — [ERW_Enumerations__EEnergyGridState](EastRimWorld/ERW_Enumerations__EEnergyGridState.md)
  - **Description:** 能量网状态
- `enum` **`EEnergyType`** — [ERW_Enumerations__EEnergyType](EastRimWorld/ERW_Enumerations__EEnergyType.md)
  - **Description:** 能源类型
- `enum` **`EEntranceArrowState`** — [ERW_Enumerations__EEntranceArrowState](EastRimWorld/ERW_Enumerations__EEntranceArrowState.md)
  - **Description:** 建筑入口箭头显示状态
- `enum` **`EEnvironType`** — [ERW_Enumerations__EEnvironType](EastRimWorld/ERW_Enumerations__EEnvironType.md)
  - **Description:** 环境类型
- `enum` **`EFacilityBelongState`** — [ERW_Enumerations__EFacilityBelongState](EastRimWorld/ERW_Enumerations__EFacilityBelongState.md)
  - **Description:** 设施归属状态
- `enum` **`EGOAPGoalCategory`** — [ERW_Enumerations__EGOAPGoalCategory](EastRimWorld/ERW_Enumerations__EGOAPGoalCategory.md)
  - **Description:** GOAP目标分类
- `enum` **`EGenerateBuildingFaultProbability`** — [ERW_Enumerations__EGenerateBuildingFaultProbability](EastRimWorld/ERW_Enumerations__EGenerateBuildingFaultProbability.md)
  - **Description:** 供能建筑故障概率变化情况
- `enum` **`EGenerateBuildingFaultType`** — [ERW_Enumerations__EGenerateBuildingFaultType](EastRimWorld/ERW_Enumerations__EGenerateBuildingFaultType.md)
  - **Description:** 供能建筑故障类型
- `enum` **`EGenerateMode`** — [ERW_Enumerations__EGenerateMode](EastRimWorld/ERW_Enumerations__EGenerateMode.md)
  - **Description:** 物体创建方式
- `enum` **`EGridDistributionType`** — [ERW_Enumerations__EGridDistributionType](EastRimWorld/ERW_Enumerations__EGridDistributionType.md)
  - **Description:** 物体在格子中分布类型
- `enum` **`EGridLineObjectType`** — [ERW_Enumerations__EGridLineObjectType](EastRimWorld/ERW_Enumerations__EGridLineObjectType.md)
  - **Description:** 沿格子线型创建的物体的类型
- `enum` **`EGridPositionType`** — [ERW_Enumerations__EGridPositionType](EastRimWorld/ERW_Enumerations__EGridPositionType.md)
  - **Description:** 格子位置类型
- `enum` **`EGroundSoilType`** — [ERW_Enumerations__EGroundSoilType](EastRimWorld/ERW_Enumerations__EGroundSoilType.md)
  - **Description:** 地面土质类型
- `enum` **`EISMType`** — [ERW_Enumerations__EISMType](EastRimWorld/ERW_Enumerations__EISMType.md)
  - **Description:** ISM类型
- `enum` **`ELandMaterial`** — [ERW_Enumerations__ELandMaterial](EastRimWorld/ERW_Enumerations__ELandMaterial.md)
  - **Description:** 地形材质类型
- `enum` **`ELineGenerateOrientation`** — [ERW_Enumerations__ELineGenerateOrientation](EastRimWorld/ERW_Enumerations__ELineGenerateOrientation.md)
  - **Description:** 线型创建物体的朝向
- `enum` **`EObjectUpdateMode`** — [ERW_Enumerations__EObjectUpdateMode](EastRimWorld/ERW_Enumerations__EObjectUpdateMode.md)
  - **Description:** 物体更新方式
- `enum` **`EOpenCloseState`** — [ERW_Enumerations__EOpenCloseState](EastRimWorld/ERW_Enumerations__EOpenCloseState.md)
  - **Description:** 打开关闭状态(门窗等)
- `enum` **`EOverlockingType`** — [ERW_Enumerations__EOverlockingType](EastRimWorld/ERW_Enumerations__EOverlockingType.md)
  - **Description:** 修炼建筑超频类型
- `enum` **`EPathTracerType`** — [ERW_Enumerations__EPathTracerType](EastRimWorld/ERW_Enumerations__EPathTracerType.md)
  - **Description:** 样条线类型
- `enum` **`EPlaceBuildingTipsType`** — [ERW_Enumerations__EPlaceBuildingTipsType](EastRimWorld/ERW_Enumerations__EPlaceBuildingTipsType.md)
  - **Description:** 放置建筑提示类型
- `enum` **`EPositionPartType`** — [ERW_Enumerations__EPositionPartType](EastRimWorld/ERW_Enumerations__EPositionPartType.md)
  - **Description:** 物体方位4部分类型
- `enum` **`EPositionType`** — [ERW_Enumerations__EPositionType](EastRimWorld/ERW_Enumerations__EPositionType.md)
  - **Description:** 方位类型
- `enum` **`ERobotType`** — [ERW_Enumerations__ERobotType](EastRimWorld/ERW_Enumerations__ERobotType.md)
  - **Description:** 机关角色类型
- `enum` **`ERoofPartType`** — [ERW_Enumerations__ERoofPartType](EastRimWorld/ERW_Enumerations__ERoofPartType.md)
  - **Description:** 屋顶部位类型
- `enum` **`ERoomEffectAppendType`** — [ERW_Enumerations__ERoomEffectAppendType](EastRimWorld/ERW_Enumerations__ERoomEffectAppendType.md)
  - **Description:** 房间效果附加类型
- `enum` **`ERoomScoreType`** — [ERW_Enumerations__ERoomScoreType](EastRimWorld/ERW_Enumerations__ERoomScoreType.md)
  - **Description:** 房间评分类型
- `enum` **`ERoomType`** — [ERW_Enumerations__ERoomType](EastRimWorld/ERW_Enumerations__ERoomType.md)
  - **Description:** 房间类型
- `enum` **`ERoomUnitShowState`** — [ERW_Enumerations__ERoomUnitShowState](EastRimWorld/ERW_Enumerations__ERoomUnitShowState.md)
  - **Description:** 房间单元显示状态
- `enum` **`ERotateOrientation`** — [ERW_Enumerations__ERotateOrientation](EastRimWorld/ERW_Enumerations__ERotateOrientation.md)
  - **Description:** 旋转朝向
- `enum` **`EStorageSpace`** — [ERW_Enumerations__EStorageSpace](EastRimWorld/ERW_Enumerations__EStorageSpace.md)
  - **Description:** Storage space type enum: outdoor, under roof, or indoor
- `enum` **`ETransBuildingType`** — [ERW_Enumerations__ETransBuildingType](EastRimWorld/ERW_Enumerations__ETransBuildingType.md)
  - **Description:** 移动建筑类型
- `enum` **`ETransportationType`** — [ERW_Enumerations__ETransportationType](EastRimWorld/ERW_Enumerations__ETransportationType.md)
  - **Description:** 交通工具类型
- `enum` **`EWallDisplayType`** — [ERW_Enumerations__EWallDisplayType](EastRimWorld/ERW_Enumerations__EWallDisplayType.md)
  - **Description:** 墙显示效果类型

## `EastRimWorld/ERW_FunctionLibrary.h`

- `class` **`UERW_FunctionLibrary`** — [ERW_FunctionLibrary__UERW_FunctionLibrary](EastRimWorld/ERW_FunctionLibrary__UERW_FunctionLibrary.md)
  - **Description:** 公共函数库类

## `EastRimWorld/ERW_HUDBase.h`

- `class` **`AERW_HUDBase`** — [ERW_HUDBase__AERW_HUDBase](EastRimWorld/ERW_HUDBase__AERW_HUDBase.md)
  - **Description:** HUD基类

## `EastRimWorld/ERW_NoiseFunctionLibrary.h`

- `class` **`UERW_NoiseFunctionLibrary`** — [ERW_NoiseFunctionLibrary__UERW_NoiseFunctionLibrary](EastRimWorld/ERW_NoiseFunctionLibrary__UERW_NoiseFunctionLibrary.md)
  - **Description:** 噪声相关功能函数库

## `EastRimWorld/ERW_SceneManager.h`

- `class` **`AERW_SceneManager`** — [ERW_SceneManager__AERW_SceneManager](EastRimWorld/ERW_SceneManager__AERW_SceneManager.md)
  - **Description:** 场景管理器类

## `EastRimWorld/Farmland/EastRimWorldFarmlandActor.h`

- `class` **`AEastRimWorldFarmlandActor`** — [EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor](EastRimWorld/Farmland/EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor.md)
  - **Description:** Farmland actor (GOAP object) that manages farmland grid data, planting and harvesting, design preview, and planting GOAP actions
- `enum` **`EFarmlandOverlapType`** — [EastRimWorldFarmlandActor__EFarmlandOverlapType](EastRimWorld/Farmland/EastRimWorldFarmlandActor__EFarmlandOverlapType.md)
  - **Description:** Farmland overlap check result type: none (not adjacent), overlapping, or adjacent
- `enum` **`EFarmlandPreviewType`** — [EastRimWorldFarmlandActor__EFarmlandPreviewType](EastRimWorld/Farmland/EastRimWorldFarmlandActor__EFarmlandPreviewType.md)
  - **Description:** Farmland preview type: none, start preview, or designing

## `EastRimWorld/Framework/ERW_FightPawn.h`

- `class` **`AERW_FightPawn`** — [ERW_FightPawn__AERW_FightPawn](EastRimWorld/Framework/ERW_FightPawn__AERW_FightPawn.md)
  - **Description:** AERW_FightPawn - 门派战俯视角战斗主角 俯视角相机 + WASD 移动 + 交互系统（旧式输入） 数据初始化、能力、特性、Buff、伤势、武学、外观等全部通过专用组件承载， 不再依赖 AEastRimWorldCharacter 类型链路。
- `struct` **`FFightPawnSkillSlotInfo`** — [ERW_FightPawn__FFightPawnSkillSlotInfo](EastRimWorld/Framework/ERW_FightPawn__FFightPawnSkillSlotInfo.md)
  - **Description:** 技能槽信息（UI 初始化用） SlotIndex = -1 表示鼠标左键普攻；0~N 表示 1234... 技能槽

## `EastRimWorld/Framework/ERW_GameInstanceBase.h`

- `enum` **`ERunGameMode`** — [ERW_GameInstanceBase__ERunGameMode](EastRimWorld/Framework/ERW_GameInstanceBase__ERunGameMode.md)
  - **Description:** GameInstance基类
- `enum` **`ERunGamePlatform`** — [ERW_GameInstanceBase__ERunGamePlatform](EastRimWorld/Framework/ERW_GameInstanceBase__ERunGamePlatform.md)
  - **Description:** Enumeration of the distribution platform the game runs on
- `class` **`UERW_GameInstanceBase`** — [ERW_GameInstanceBase__UERW_GameInstanceBase](EastRimWorld/Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)
  - **Description:** Base GameInstance class handling save/load, level loading, returning to main menu, game speed, new-game and platform configuration

## `EastRimWorld/Framework/ERW_GameModeBase.h`

- `class` **`AERW_GameModeBase`** — [ERW_GameModeBase__AERW_GameModeBase](EastRimWorld/Framework/ERW_GameModeBase__AERW_GameModeBase.md)
  - **Description:** GameMode基类
- `struct` **`FGoalBaseInfo`** — [ERW_GameModeBase__FGoalBaseInfo](EastRimWorld/Framework/ERW_GameModeBase__FGoalBaseInfo.md)
  - **Description:** GOAP目标信息

## `EastRimWorld/Framework/ERW_PlayerControllerBase.h`

- `class` **`AERW_PlayerControllerBase`** — [ERW_PlayerControllerBase__AERW_PlayerControllerBase](EastRimWorld/Framework/ERW_PlayerControllerBase__AERW_PlayerControllerBase.md)
  - **Description:** Base PlayerController class handling inventory resource management, item spawning, team character queries and main UI
- `enum` **`EObjectInfoChangeType`** — [ERW_PlayerControllerBase__EObjectInfoChangeType](EastRimWorld/Framework/ERW_PlayerControllerBase__EObjectInfoChangeType.md)
  - **Description:** PlayerController基类

## `EastRimWorld/Framework/ERW_PlayerPawn.h`

- `class` **`AERW_PlayerPawn`** — [ERW_PlayerPawn__AERW_PlayerPawn](EastRimWorld/Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)
  - **Description:** PlayerPawn基类 不可在此类中存储数据
- `enum` **`EMouseMode`** — [ERW_PlayerPawn__EMouseMode](EastRimWorld/Framework/ERW_PlayerPawn__EMouseMode.md)
  - **Description:** 鼠标操作模式枚举

## `EastRimWorld/Framework/ERW_PlayerStateBase.h`

- `class` **`AERW_PlayerStateBase`** — [ERW_PlayerStateBase__AERW_PlayerStateBase](EastRimWorld/Framework/ERW_PlayerStateBase__AERW_PlayerStateBase.md)
  - **Description:** PlayerState基类

## `EastRimWorld/Framework/FightPawnComponents/FightPawnEquipmentComponent.h`

- `class` **`UFightPawnEquipmentComponent`** — [FightPawnEquipmentComponent__UFightPawnEquipmentComponent](EastRimWorld/Framework/FightPawnComponents/FightPawnEquipmentComponent__UFightPawnEquipmentComponent.md)
  - **Description:** Player pawn equipment/appearance component: loads equipped weapons and armor from save data, attaches weapon static meshes to skeletal sockets, swaps armor appearance via Blueprint, applies custom apparels, and grants equipment abilities/tags to the ASC.

## `EastRimWorld/Framework/FightPawnComponents/FightPawnGrowUpComponent.h`

- `class` **`UFightPawnGrowUpComponent`** — [FightPawnGrowUpComponent__UFightPawnGrowUpComponent](EastRimWorld/Framework/FightPawnComponents/FightPawnGrowUpComponent__UFightPawnGrowUpComponent.md)
  - **Description:** Player-pawn martial arts / realm component: loads all martial arts data (moves, passives, internal strength, realm, books, breakthrough harvest) from save data and applies martial-arts level GEs, entry GEs, realm attributes and slot calculation; runtime leveling/breakthrough/cultivation not included.

## `EastRimWorld/Framework/FightPawnComponents/FightPawnInjuryComponent.h`

- `class` **`UFightPawnInjuryComponent`** — [FightPawnInjuryComponent__UFightPawnInjuryComponent](EastRimWorld/Framework/FightPawnComponents/FightPawnInjuryComponent__UFightPawnInjuryComponent.md)
  - **Description:** FightPawn injury component: applies per-organ injuries with gameplay effects, handles self-healing/worsening, treatment with medicine consumption, scar formation/removal, whole-body heatstroke/hypothermia injuries, plus related queries and broadcasts.

## `EastRimWorld/Framework/FightPawnComponents/FightPawnNormalAttackConfig.h`

- `class` **`UFightPawnNormalAttackConfig`** — [FightPawnNormalAttackConfig__UFightPawnNormalAttackConfig](EastRimWorld/Framework/FightPawnComponents/FightPawnNormalAttackConfig__UFightPawnNormalAttackConfig.md)
  - **Description:** FightPawn normal attack config data asset: decouples 'weapon type to player-specific normal attack ability ID' into a configurable map; after equipment loads, the normal attack GA is looked up by the main weapon type and granted to the ASC, falling back to the weapon's own EquipmentAbility if not found.

## `EastRimWorld/Framework/FightPawnComponents/FightPawnSaveDataComponent.h`

- `class` **`UFightPawnSaveDataComponent`** — [FightPawnSaveDataComponent__UFightPawnSaveDataComponent](EastRimWorld/Framework/FightPawnComponents/FightPawnSaveDataComponent__UFightPawnSaveDataComponent.md)
  - **Description:** Player-pawn save data hub: holds all FCharacterSaveData fields (except martial arts/injuries) and provides save-data initialization/write-back, ability grant/removal, characteristic management, apparel application, and state fields such as hunger, dantian and spawn point.

## `EastRimWorld/GOAP/GOAP_ActionComponent.h`

- `struct` **`FGOAPActionSaveData`** — [GOAP_ActionComponent__FGOAPActionSaveData](EastRimWorld/GOAP/GOAP_ActionComponent__FGOAPActionSaveData.md)
  - **Description:** GOAP Action存档数据
- `struct` **`FGOAP_Users`** — [GOAP_ActionComponent__FGOAP_Users](EastRimWorld/GOAP/GOAP_ActionComponent__FGOAP_Users.md)
  - **Description:** GOAP用户的数组
- `struct` **`FUserReserveData`** — [GOAP_ActionComponent__FUserReserveData](EastRimWorld/GOAP/GOAP_ActionComponent__FUserReserveData.md)
  - **Description:** 用户预留的物品数据
- `class` **`UGOAP_ActionComponent`** — [GOAP_ActionComponent__UGOAP_ActionComponent](EastRimWorld/GOAP/GOAP_ActionComponent__UGOAP_ActionComponent.md)
  - **Description:** GOAP行动组件

## `EastRimWorld/GOAP/GOAP_ActorBase.h`

- `class` **`AGOAP_ActorBase`** — [GOAP_ActorBase__AGOAP_ActorBase](EastRimWorld/GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)
  - **Description:** GOAP Actor的基类
- `struct` **`FAutoOutputWorkloadData`** — [GOAP_ActorBase__FAutoOutputWorkloadData](EastRimWorld/GOAP/GOAP_ActorBase__FAutoOutputWorkloadData.md)
  - **Description:** 自动输出工作量相关数据
- `struct` **`FCeremonyData`** — [GOAP_ActorBase__FCeremonyData](EastRimWorld/GOAP/GOAP_ActorBase__FCeremonyData.md)
  - **Description:** 仪式相关数据
- `struct` **`FEnergyData`** — [GOAP_ActorBase__FEnergyData](EastRimWorld/GOAP/GOAP_ActorBase__FEnergyData.md)
  - **Description:** 能量相关数据
- `struct` **`FFacilityBelongData`** — [GOAP_ActorBase__FFacilityBelongData](EastRimWorld/GOAP/GOAP_ActorBase__FFacilityBelongData.md)
  - **Description:** 设施归属数据
- `struct` **`FFacilityBelongSaveData`** — [GOAP_ActorBase__FFacilityBelongSaveData](EastRimWorld/GOAP/GOAP_ActorBase__FFacilityBelongSaveData.md)
  - **Description:** 设施归属存档数据
- `struct` **`FFillerSaveDatas`** — [GOAP_ActorBase__FFillerSaveDatas](EastRimWorld/GOAP/GOAP_ActorBase__FFillerSaveDatas.md)
  - **Description:** 填充模型相关数据
- `struct` **`FFuelData`** — [GOAP_ActorBase__FFuelData](EastRimWorld/GOAP/GOAP_ActorBase__FFuelData.md)
  - **Description:** 燃料相关数据
- `struct` **`FHeatSourceData`** — [GOAP_ActorBase__FHeatSourceData](EastRimWorld/GOAP/GOAP_ActorBase__FHeatSourceData.md)
  - **Description:** Heat source related data
- `struct` **`FOverlappingItemData`** — [GOAP_ActorBase__FOverlappingItemData](EastRimWorld/GOAP/GOAP_ActorBase__FOverlappingItemData.md)
  - **Description:** 建筑覆盖采集物相关数据
- `struct` **`FPuppetData`** — [GOAP_ActorBase__FPuppetData](EastRimWorld/GOAP/GOAP_ActorBase__FPuppetData.md)
  - **Description:** 傀儡相关数据
- `struct` **`FTransportationData`** — [GOAP_ActorBase__FTransportationData](EastRimWorld/GOAP/GOAP_ActorBase__FTransportationData.md)
  - **Description:** 交通工具相关数据

## `EastRimWorld/GOAP/GOAP_Data.h`

- `struct` **`FCategoryCostData`** — [GOAP_Data__FCategoryCostData](EastRimWorld/GOAP/GOAP_Data__FCategoryCostData.md)
  - **Description:** 类型对应的消耗配置结构
- `struct` **`FGOAP_Action`** — [GOAP_Data__FGOAP_Action](EastRimWorld/GOAP/GOAP_Data__FGOAP_Action.md)
  - **Description:** GOAP行动数据
- `struct` **`FGOAP_ActionIcon`** — [GOAP_Data__FGOAP_ActionIcon](EastRimWorld/GOAP/GOAP_Data__FGOAP_ActionIcon.md)
  - **Description:** GOAP行为图标
- `struct` **`FGOAP_Action_Data`** — [GOAP_Data__FGOAP_Action_Data](EastRimWorld/GOAP/GOAP_Data__FGOAP_Action_Data.md)
  - **Description:** GOAP行为信息
- `struct` **`FGOAP_Condition`** — [GOAP_Data__FGOAP_Condition](EastRimWorld/GOAP/GOAP_Data__FGOAP_Condition.md)
  - **Description:** GOAP判断条件
- `struct` **`FGOAP_Value`** — [GOAP_Data__FGOAP_Value](EastRimWorld/GOAP/GOAP_Data__FGOAP_Value.md)
  - **Description:** 用于GOAP条件判断的值
- `struct` **`FGoalAndAction`** — [GOAP_Data__FGoalAndAction](EastRimWorld/GOAP/GOAP_Data__FGoalAndAction.md)
  - **Description:** Pairing of a GOAP goal and its action data
- `struct` **`FPathGoalData`** — [GOAP_Data__FPathGoalData](EastRimWorld/GOAP/GOAP_Data__FPathGoalData.md)
  - **Description:** 路径目标数据

## `EastRimWorld/GOAP/GOAP_Enumerations.h`

- `enum` **`EGOAP_ConditionTargetType`** — [GOAP_Enumerations__EGOAP_ConditionTargetType](EastRimWorld/GOAP/GOAP_Enumerations__EGOAP_ConditionTargetType.md)
  - **Description:** GOAP前置条件检测对象
- `enum` **`EGOAP_ConditionType`** — [GOAP_Enumerations__EGOAP_ConditionType](EastRimWorld/GOAP/GOAP_Enumerations__EGOAP_ConditionType.md)
  - **Description:** GOAP前置条件类型
- `enum` **`EGOAP_ConditionValueType`** — [GOAP_Enumerations__EGOAP_ConditionValueType](EastRimWorld/GOAP/GOAP_Enumerations__EGOAP_ConditionValueType.md)
  - **Description:** GOAP前置条件检测值类型

## `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

- `enum` **`EBatchActionFindResult`** — [GOAP_ManagerComponent__EBatchActionFindResult](EastRimWorld/GOAP/GOAP_ManagerComponent__EBatchActionFindResult.md)
  - **Description:** 批量Action寻找结果
- `struct` **`FActionData`** — [GOAP_ManagerComponent__FActionData](EastRimWorld/GOAP/GOAP_ManagerComponent__FActionData.md)
  - **Description:** Actor对应的GOAP_Action的数据
- `struct` **`FBatchActionData`** — [GOAP_ManagerComponent__FBatchActionData](EastRimWorld/GOAP/GOAP_ManagerComponent__FBatchActionData.md)
  - **Description:** 批量处理的Action的数据
- `struct` **`FBatchActions`** — [GOAP_ManagerComponent__FBatchActions](EastRimWorld/GOAP/GOAP_ManagerComponent__FBatchActions.md)
  - **Description:** 批量处理的Action
- `struct` **`FBatchData`** — [GOAP_ManagerComponent__FBatchData](EastRimWorld/GOAP/GOAP_ManagerComponent__FBatchData.md)
  - **Description:** 批量处理的数据
- `struct` **`FGOAP_Actions`** — [GOAP_ManagerComponent__FGOAP_Actions](EastRimWorld/GOAP/GOAP_ManagerComponent__FGOAP_Actions.md)
  - **Description:** 包含同类型GOAP_Action的结构体
- `struct` **`FGameplayTagActions`** — [GOAP_ManagerComponent__FGameplayTagActions](EastRimWorld/GOAP/GOAP_ManagerComponent__FGameplayTagActions.md)
  - **Description:** Gameplay标签对应的Action数据
- `struct` **`FGameplayTagLayer2`** — [GOAP_ManagerComponent__FGameplayTagLayer2](EastRimWorld/GOAP/GOAP_ManagerComponent__FGameplayTagLayer2.md)
  - **Description:** 第二层标签包含GOAPAction的数据
- `struct` **`FGameplayTagLayer3`** — [GOAP_ManagerComponent__FGameplayTagLayer3](EastRimWorld/GOAP/GOAP_ManagerComponent__FGameplayTagLayer3.md)
  - **Description:** 第三场标签包含GOAPAction的数据
- `struct` **`FItemActions`** — [GOAP_ManagerComponent__FItemActions](EastRimWorld/GOAP/GOAP_ManagerComponent__FItemActions.md)
  - **Description:** 每种物品对应的Action数据
- `struct` **`FItemInfoActions`** — [GOAP_ManagerComponent__FItemInfoActions](EastRimWorld/GOAP/GOAP_ManagerComponent__FItemInfoActions.md)
  - **Description:** 物品信息对应的GOAP Action数据
- `struct` **`FOccupyObject`** — [GOAP_ManagerComponent__FOccupyObject](EastRimWorld/GOAP/GOAP_ManagerComponent__FOccupyObject.md)
  - **Description:** 占据采集物的建筑数据
- `struct` **`FPreActionData`** — [GOAP_ManagerComponent__FPreActionData](EastRimWorld/GOAP/GOAP_ManagerComponent__FPreActionData.md)
  - **Description:** 前置Action的数据
- `struct` **`FPrioriActionData`** — [GOAP_ManagerComponent__FPrioriActionData](EastRimWorld/GOAP/GOAP_ManagerComponent__FPrioriActionData.md)
  - **Description:** 优先处理的批量Action
- `struct` **`FPrioriBatchData`** — [GOAP_ManagerComponent__FPrioriBatchData](EastRimWorld/GOAP/GOAP_ManagerComponent__FPrioriBatchData.md)
  - **Description:** 优先执行的批量Action数据
- `struct` **`FSpecifiedArrestActions`** — [GOAP_ManagerComponent__FSpecifiedArrestActions](EastRimWorld/GOAP/GOAP_ManagerComponent__FSpecifiedArrestActions.md)
  - **Description:** Action set data for specified arrest targets
- `struct` **`FSpecifiedItemActions`** — [GOAP_ManagerComponent__FSpecifiedItemActions](EastRimWorld/GOAP/GOAP_ManagerComponent__FSpecifiedItemActions.md)
  - **Description:** 指定物品的Action数据
- `class` **`UGOAP_ManagerComponent`** — [GOAP_ManagerComponent__UGOAP_ManagerComponent](EastRimWorld/GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)
  - **Description:** GOAP管理组件

## `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

- `struct` **`FGOAPMemorySaveData`** — [GOAP_MemoryComponent__FGOAPMemorySaveData](EastRimWorld/GOAP/GOAP_MemoryComponent__FGOAPMemorySaveData.md)
  - **Description:** GOAP记忆存档数据
- `struct` **`FMemoryData`** — [GOAP_MemoryComponent__FMemoryData](EastRimWorld/GOAP/GOAP_MemoryComponent__FMemoryData.md)
  - **Description:** GOAP记忆数据
- `class` **`UGOAP_MemoryComponent`** — [GOAP_MemoryComponent__UGOAP_MemoryComponent](EastRimWorld/GOAP/GOAP_MemoryComponent__UGOAP_MemoryComponent.md)
  - **Description:** GOAP记忆组件

## `EastRimWorld/GOAP/GOAP_PlanComponent.h`

- `struct` **`FGOAPScoreData`** — [GOAP_PlanComponent__FGOAPScoreData](EastRimWorld/GOAP/GOAP_PlanComponent__FGOAPScoreData.md)
  - **Description:** GOAP分值数据
- `struct` **`FItemUseState`** — [GOAP_PlanComponent__FItemUseState](EastRimWorld/GOAP/GOAP_PlanComponent__FItemUseState.md)
  - **Description:** 物品使用状态
- `class` **`UGOAP_PlanComponent`** — [GOAP_PlanComponent__UGOAP_PlanComponent](EastRimWorld/GOAP/GOAP_PlanComponent__UGOAP_PlanComponent.md)
  - **Description:** 用于AI通过GOAP寻找计划的组件

## `EastRimWorld/GPUInfoLibrary.h`

- `struct` **`FGPUInfo`** — [GPUInfoLibrary__FGPUInfo](EastRimWorld/GPUInfoLibrary__FGPUInfo.md)
  - **Description:** GPU information (brand, adapter name, vendor and device IDs)
- `class` **`UGPUInfoLibrary`** — [GPUInfoLibrary__UGPUInfoLibrary](EastRimWorld/GPUInfoLibrary__UGPUInfoLibrary.md)
  - **Description:** Blueprint function library for querying GPU info and checking the vendor (NVIDIA/AMD/Intel)

## `EastRimWorld/Interface/EastRimWorldCommonInterface.h`

- `enum` **`EFindAttackTargetRule`** — [EastRimWorldCommonInterface__EFindAttackTargetRule](EastRimWorld/Interface/EastRimWorldCommonInterface__EFindAttackTargetRule.md)
  - **Description:** Rule for finding an attack target
- `enum` **`ESelectBattleAbilityRule`** — [EastRimWorldCommonInterface__ESelectBattleAbilityRule](EastRimWorld/Interface/EastRimWorldCommonInterface__ESelectBattleAbilityRule.md)
  - **Description:** 选择技能的规则

## `EastRimWorld/Inventory/CanUseInventoryItemInstance.h`

- `class` **`UCanUseInventoryItemInstance`** — [CanUseInventoryItemInstance__UCanUseInventoryItemInstance](EastRimWorld/Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)
  - **Description:** 可以使用的物品实例的基类

## `EastRimWorld/Inventory/CollectItemInstance.h`

- `class` **`UCollectItemInstance`** — [CollectItemInstance__UCollectItemInstance](EastRimWorld/Inventory/CollectItemInstance__UCollectItemInstance.md)
  - **Description:** Collectible item instance with growth speed, grow/harvest times, stage and health state

## `EastRimWorld/Inventory/FarmlandPlantInstance.h`

- `class` **`UFarmlandPlantInstance`** — [FarmlandPlantInstance__UFarmlandPlantInstance](EastRimWorld/Inventory/FarmlandPlantInstance__UFarmlandPlantInstance.md)
  - **Description:** Farmland plant instance, a collectible belonging to a specific farmland

## `EastRimWorld/Inventory/InventoryEntityActor.h`

- `class` **`AInventoryEntityActor`** — [InventoryEntityActor__AInventoryEntityActor](EastRimWorld/Inventory/InventoryEntityActor__AInventoryEntityActor.md)
  - **Description:** Substitute entity actor for an inventory item instance, providing collision, mesh display and select/hover/collect interactions

## `EastRimWorld/Inventory/InventoryItemInstance.h`

- `class` **`UInventoryItemInstance`** — [InventoryItemInstance__UInventoryItemInstance](EastRimWorld/Inventory/InventoryItemInstance__UInventoryItemInstance.md)
  - **Description:** Base inventory item instance managing item data, world representation (mesh/substitute/UI) and GOAP interactions

## `EastRimWorld/Inventory/InventoryItemSet.h`

- `class` **`AInventoryItemSet`** — [InventoryItemSet__AInventoryItemSet](EastRimWorld/Inventory/InventoryItemSet__AInventoryItemSet.md)
  - **Description:** Item set actor that manages and displays item instances in bulk via instanced static mesh components (including PCG vegetation generation)

## `EastRimWorld/Inventory/InventoryItemWidgetActor.h`

- `class` **`AInventoryItemWidgetActor`** — [InventoryItemWidgetActor__AInventoryItemWidgetActor](EastRimWorld/Inventory/InventoryItemWidgetActor__AInventoryItemWidgetActor.md)
  - **Description:** Actor that displays item UI (such as item count) via a widget component

## `EastRimWorld/Inventory/InventoryManagerComponent.h`

- `class` **`UInventoryManagerComponent`** — [InventoryManagerComponent__UInventoryManagerComponent](EastRimWorld/Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)
  - **Description:** Inventory manager component handling item instance add/remove, stacking, saving, and warehouse/trade area grid slots

## `EastRimWorld/Inventory/SelectInventorySubstituteSystem.h`

- `class` **`ASelectInventorySubstituteSystem`** — [SelectInventorySubstituteSystem__ASelectInventorySubstituteSystem](EastRimWorld/Inventory/SelectInventorySubstituteSystem__ASelectInventorySubstituteSystem.md)
  - **Description:** Inventory substitute selection system (singleton actor) managing item instance selection/hover highlighting and the info UI

## `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

- `struct` **`FAgentWarehouseTransportReservation`** — [WarehouseManagerSubsystem__FAgentWarehouseTransportReservation](EastRimWorld/Inventory/WarehouseManagerSubsystem__FAgentWarehouseTransportReservation.md)
  - **Description:** 角色搬运预约记录（仅用于中断时扣回该角色占用的容量）
- `struct` **`FTransportItemCache`** — [WarehouseManagerSubsystem__FTransportItemCache](EastRimWorld/Inventory/WarehouseManagerSubsystem__FTransportItemCache.md)
  - **Description:** 物品缓存
- `struct` **`FTransportToWarehouseCache`** — [WarehouseManagerSubsystem__FTransportToWarehouseCache](EastRimWorld/Inventory/WarehouseManagerSubsystem__FTransportToWarehouseCache.md)
  - **Description:** 物品ID 对应的缓存
- `struct` **`FWarehouseCacheState`** — [WarehouseManagerSubsystem__FWarehouseCacheState](EastRimWorld/Inventory/WarehouseManagerSubsystem__FWarehouseCacheState.md)
  - **Description:** 单个仓库在管理器中的缓存状态
- `struct` **`FWarehouseCellLayerEmptyState`** — [WarehouseManagerSubsystem__FWarehouseCellLayerEmptyState](EastRimWorld/Inventory/WarehouseManagerSubsystem__FWarehouseCellLayerEmptyState.md)
  - **Description:** 单个坐标格在某一层的空余状态（用于缓存，避免 TMap 套 TMap）
- `struct` **`FWarehouseItemReservedCapacity`** — [WarehouseManagerSubsystem__FWarehouseItemReservedCapacity](EastRimWorld/Inventory/WarehouseManagerSubsystem__FWarehouseItemReservedCapacity.md)
  - **Description:** 某仓库某物品的预约容量（不绑定具体格位）
- `class` **`UWarehouseManagerSubsystem`** — [WarehouseManagerSubsystem__UWarehouseManagerSubsystem](EastRimWorld/Inventory/WarehouseManagerSubsystem__UWarehouseManagerSubsystem.md)
  - **Description:** 仓库管理器：记录每个仓库的放置状态、空余格子、是否满仓等。 当类型为 Warehouse 的 InventoryManagerComponent 会注册到此管理器。 有物品放入/取出时标记为需要更新，在下次获取空位或状态时再执行更新。

## `EastRimWorld/MartialArts/EastRimWorldProjectileSkillEntryContext.h`

- `struct` **`FEastRimWorldProjectileSkillEntrySpawnContext`** — [EastRimWorldProjectileSkillEntryContext__FEastRimWorldProjectileSkillEntrySpawnContext](EastRimWorld/MartialArts/EastRimWorldProjectileSkillEntryContext__FEastRimWorldProjectileSkillEntrySpawnContext.md)
  - **Description:** 投射物生成时携带的技能/词条上下文（用于 CreateNewProjectileByProject）。

## `EastRimWorld/MartialArts/MartialArtsFragmentSubsystem.h`

- `enum` **`EFragmentCraftResult`** — [MartialArtsFragmentSubsystem__EFragmentCraftResult](EastRimWorld/MartialArts/MartialArtsFragmentSubsystem__EFragmentCraftResult.md)
  - **Description:** 合成结果
- `class` **`UMartialArtsFragmentSubsystem`** — [MartialArtsFragmentSubsystem__UMartialArtsFragmentSubsystem](EastRimWorld/MartialArts/MartialArtsFragmentSubsystem__UMartialArtsFragmentSubsystem.md)
  - **Description:** 武学残卷合成子系统 (世界级服务) 职责: 1) 集齐判定 (查玩家/势力收货仓库中某目标书的残卷张数) 2) 合成 (消耗 N 张残卷 + 辅料 -> 把 TargetBookID 完本书发给玩家, 复用现成给书路径) 3) "按缺张发残卷" API (供历练归来结算路调用, 实现"发缺失张"防挫败) 设计依据: Apprenticeship_FragmentCraft_Design_v1 §3/§4/§5。 复用红线: 残卷=DT_InventoryItem 物品; 产出=DT_MartialArtsBookData 完本书 (复用 AddItemToPostStation 给书); 不复用 FFormulaData (那是 GOAP 建筑配方)。 合成入口 v1 不做专用 UI: 留 Bluepri...

## `EastRimWorld/MartialArts/MartialArtsFragmentTypes.h`

- `struct` **`FMartialArtsFragmentRecipe`** — [MartialArtsFragmentTypes__FMartialArtsFragmentRecipe](EastRimWorld/MartialArts/MartialArtsFragmentTypes__FMartialArtsFragmentRecipe.md)
  - **Description:** 武学残卷合成配方 (DT_MartialArtsFragmentRecipe 行结构) 一行 = 一本可合成"完本书"的配方。设计依据: Apprenticeship_FragmentCraft_Design_v1 §3.2。 复用红线: - 残卷本体走现成 DT_InventoryItem 物品 (EItemType::Materials), 不另造武学/物品体系。 - 合成产出 = TargetBookID 指向的 DT_MartialArtsBookData "完本书" 行, 复用现成"得书即学"链路。 - 不复用 FFormulaData (那是 GOAP 建筑配方, 语义不符)。 *** BM_* 坑 (必守) *** TargetBookID / RequiredFragmentItemIDs...

## `EastRimWorld/MartialArts/MartialArtsSkillEntryChangeLightSkill.h`

- `struct` **`FLightSkillResolvedParams`** — [MartialArtsSkillEntryChangeLightSkill__FLightSkillResolvedParams](EastRimWorld/MartialArts/MartialArtsSkillEntryChangeLightSkill__FLightSkillResolvedParams.md)
  - **Description:** 轻功运行时解算参数：以技能配置行（FGameAbilityStruct 的 LightSkill 字段）为基准， 叠加该武学全部 ChangeLightSkillParam 词条后得到。每次激活轻功时即时计算。

## `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

- `struct` **`FMartialArtsSkillEntryGiveAbilitysResolve`** — [MartialArtsSkillEntryGiveAbilitys__FMartialArtsSkillEntryGiveAbilitysResolve](EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys__FMartialArtsSkillEntryGiveAbilitysResolve.md)
  - **Description:** 招式书籍技能词条 GiveAbilitys 解析结果（用于 GrantMovesBookAbilities）。
- `struct` **`FMovesBookSkillEntryAbilityState`** — [MartialArtsSkillEntryGiveAbilitys__FMovesBookSkillEntryAbilityState](EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys__FMovesBookSkillEntryAbilityState.md)
  - **Description:** 已生效的 GiveAbilitys 词条授予记录（卸载招式时移除）。
- `struct` **`FMovesBookSkillEntryGameplayEffectState`** — [MartialArtsSkillEntryGiveAbilitys__FMovesBookSkillEntryGameplayEffectState](EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys__FMovesBookSkillEntryGameplayEffectState.md)
  - **Description:** 招式书籍技能词条 GiveGameEffects 已应用记录（卸载/刷新时移除）。

## `EastRimWorld/Mod/ModEventBus.h`

- `class` **`UModEventBus`** — [ModEventBus__UModEventBus](EastRimWorld/Mod/ModEventBus__UModEventBus.md)
  - **Description:** Mod 事件总线 C++/蓝图在玩法关键节点广播事件；Mod 的 Lua 通过 RegisterModEvent 订阅。 监听随注册时的 Mod 上下文记录归属，Mod 卸载时统一清理；连续失败的回调自动摘除。

## `EastRimWorld/Mod/ModInfo.h`

- `enum` **`EModCompatIssueType`** — [ModInfo__EModCompatIssueType](EastRimWorld/Mod/ModInfo__EModCompatIssueType.md)
  - **Description:** 存档 Mod 兼容问题类型
- `enum` **`EModLoadState`** — [ModInfo__EModLoadState](EastRimWorld/Mod/ModInfo__EModLoadState.md)
  - **Description:** Mod加载状态
- `enum` **`EModType`** — [ModInfo__EModType](EastRimWorld/Mod/ModInfo__EModType.md)
  - **Description:** Mod类型
- `struct` **`FModCompatibilityIssue`** — [ModInfo__FModCompatibilityIssue](EastRimWorld/Mod/ModInfo__FModCompatibilityIssue.md)
  - **Description:** 读档时发现的单个 Mod 兼容问题（供 UI 弹窗展示）
- `struct` **`FModDataAssetJsonConfig`** — [ModInfo__FModDataAssetJsonConfig](EastRimWorld/Mod/ModInfo__FModDataAssetJsonConfig.md)
  - **Description:** ModInfo.json 中记录的数据资产 JSON 条目
- `struct` **`FModDataTableJsonConfig`** — [ModInfo__FModDataTableJsonConfig](EastRimWorld/Mod/ModInfo__FModDataTableJsonConfig.md)
  - **Description:** ModInfo.json 中记录的配置表 JSON 条目（打包时由 CreateModPlugin 写入）
- `struct` **`FModDependency`** — [ModInfo__FModDependency](EastRimWorld/Mod/ModInfo__FModDependency.md)
  - **Description:** Mod依赖信息
- `struct` **`FModMetadata`** — [ModInfo__FModMetadata](EastRimWorld/Mod/ModInfo__FModMetadata.md)
  - **Description:** Mod元数据信息
- `struct` **`FModSaveRecord`** — [ModInfo__FModSaveRecord](EastRimWorld/Mod/ModInfo__FModSaveRecord.md)
  - **Description:** 存档中记录的单个已启用 Mod（随主存档序列化，读档时用于兼容检查）
- `class` **`UModRuntimeInfo`** — [ModInfo__UModRuntimeInfo](EastRimWorld/Mod/ModInfo__UModRuntimeInfo.md)
  - **Description:** Mod运行时信息 用于在运行时管理Mod的状态

## `EastRimWorld/Mod/ModLuaLibrary.h`

- `class` **`UModLuaLibrary`** — [ModLuaLibrary__UModLuaLibrary](EastRimWorld/Mod/ModLuaLibrary__UModLuaLibrary.md)
  - **Description:** Mod Lua函数库 提供从Lua调用C++功能的接口

## `EastRimWorld/Mod/ModSubsystem.h`

- `class` **`UModSubsystem`** — [ModSubsystem__UModSubsystem](EastRimWorld/Mod/ModSubsystem__UModSubsystem.md)
  - **Description:** Mod子系统 负责管理所有Mod的加载、卸载和生命周期

## `EastRimWorld/Mod/PakLibrary.h`

- `class` **`UPakLibrary`** — [PakLibrary__UPakLibrary](EastRimWorld/Mod/PakLibrary__UPakLibrary.md)
  - **Description:** Blueprint function library for Pak file operations (mount/unmount Paks, register mount points, load classes from Paks)

## `EastRimWorld/Mod/SteamAchievementLibrary.h`

- `struct` **`FSteamAchievementInfo`** — [SteamAchievementLibrary__FSteamAchievementInfo](EastRimWorld/Mod/SteamAchievementLibrary__FSteamAchievementInfo.md)
  - **Description:** 成就信息结构体
- `class` **`USteamAchievementLibrary`** — [SteamAchievementLibrary__USteamAchievementLibrary](EastRimWorld/Mod/SteamAchievementLibrary__USteamAchievementLibrary.md)
  - **Description:** Blueprint function library for Steam achievements and stats (unlock/query achievements, read/write stats, store data to Steam)

## `EastRimWorld/Mod/SteamWorkshopLibrary.h`

- `enum` **`ESteamQueryType`** — [SteamWorkshopLibrary__ESteamQueryType](EastRimWorld/Mod/SteamWorkshopLibrary__ESteamQueryType.md)
  - **Description:** Steam Workshop UGC query ranking type (corresponds to Steam's EUGCQuery)
- `enum` **`EWorkshopItemState`** — [SteamWorkshopLibrary__EWorkshopItemState](EastRimWorld/Mod/SteamWorkshopLibrary__EWorkshopItemState.md)
  - **Description:** Workshop 项目状态
- `struct` **`FWorkshopItemDetails`** — [SteamWorkshopLibrary__FWorkshopItemDetails](EastRimWorld/Mod/SteamWorkshopLibrary__FWorkshopItemDetails.md)
  - **Description:** Workshop 项目详细信息结构体
- `class` **`USteamWorkshopLibrary`** — [SteamWorkshopLibrary__USteamWorkshopLibrary](EastRimWorld/Mod/SteamWorkshopLibrary__USteamWorkshopLibrary.md)
  - **Description:** Blueprint function library for Steam Workshop (create/upload/subscribe/download/query/vote on items)

## `EastRimWorld/Mod/SteamWorkshopSubsystem.h`

- `enum` **`EWorkshopQueryType`** — [SteamWorkshopSubsystem__EWorkshopQueryType](EastRimWorld/Mod/SteamWorkshopSubsystem__EWorkshopQueryType.md)
  - **Description:** Workshop 查询类型枚举
- `class` **`USteamWorkshopSubsystem`** — [SteamWorkshopSubsystem__USteamWorkshopSubsystem](EastRimWorld/Mod/SteamWorkshopSubsystem__USteamWorkshopSubsystem.md)
  - **Description:** Steam Workshop GameInstance subsystem that receives Steam callbacks and broadcasts upload/download/subscription/query/achievement-stats results via delegates

## `EastRimWorld/Physics/PhysicalMaterialWithTags.h`

- `class` **`UPhysicalMaterialWithTags`** — [PhysicalMaterialWithTags__UPhysicalMaterialWithTags](EastRimWorld/Physics/PhysicalMaterialWithTags__UPhysicalMaterialWithTags.md)
  - **Description:** ULyraWeaponInstance A piece of equipment representing a weapon spawned and applied to a pawn

## `EastRimWorld/Player/ERW_BaseAIController.h`

- `class` **`AERW_BaseAIController`** — [ERW_BaseAIController__AERW_BaseAIController](EastRimWorld/Player/ERW_BaseAIController__AERW_BaseAIController.md)
  - **Description:** AERW_BaseAIController —— 项目 AI 控制器公共基类 继承自 LQuickFrame 的 ALAICtrl。作为 AEastRimWorldAIController（NPC/GOAP 主控制器） 与 AERW_FightPawnAIController（门派战 FightPawn 托管控制器）的共同父类， 两者共用的逻辑（感知、团队态度、敌对判定、武器切换等）在此收敛。

## `EastRimWorld/Player/ERW_FightPawnAIController.h`

- `class` **`AERW_FightPawnAIController`** — [ERW_FightPawnAIController__AERW_FightPawnAIController](EastRimWorld/Player/ERW_FightPawnAIController__AERW_FightPawnAIController.md)
  - **Description:** AERW_FightPawnAIController —— 门派战 FightPawn 专用的轻量 AI 控制器 设计意图：FightPawn 平时由 APlayerController 控制；开启"AI 接管/托管"时， 由本控制器 Possess 并运行行为树。刻意不复用 AEastRimWorldAIController （那套硬绑 AEastRimWorldCharacter，且带 GOAP/存档，接过来会空指针崩）， 只把其中 pawn-无关的战斗核心（团队态度、感知选敌）搬过来精简使用。 - 不接 GOAP、不接存档（ISAVIOR_*） - 感知（Sight）+ 敌对列表维护 + 团队态度转发（走 FightPawn 的 IEastRimWorldTeamAgentInterface） - ...

## `EastRimWorld/Player/EastRimWorldAIController.h`

- `class` **`AEastRimWorldAIController`** — [EastRimWorldAIController__AEastRimWorldAIController](EastRimWorld/Player/EastRimWorldAIController__AEastRimWorldAIController.md)
  - **Description:** AEastRimWorldPlayerBotController The controller class used by player bots in this project.
- `struct` **`FAnimalActionAbility`** — [EastRimWorldAIController__FAnimalActionAbility](EastRimWorld/Player/EastRimWorldAIController__FAnimalActionAbility.md)
  - **Description:** 动物ActionAbility配置表结构
- `struct` **`FBlackboardSaveData`** — [EastRimWorldAIController__FBlackboardSaveData](EastRimWorld/Player/EastRimWorldAIController__FBlackboardSaveData.md)
  - **Description:** 黑板存档数据
- `struct` **`FCharacterActionAbility`** — [EastRimWorldAIController__FCharacterActionAbility](EastRimWorld/Player/EastRimWorldAIController__FCharacterActionAbility.md)
  - **Description:** Data table row for a character action ability (anim montages/sections, duration, looping, the associated GameplayAbility, clothing display, etc.)
- `struct` **`FCharacterActionAbilityAnimSections`** — [EastRimWorldAIController__FCharacterActionAbilityAnimSections](EastRimWorld/Player/EastRimWorldAIController__FCharacterActionAbilityAnimSections.md)
  - **Description:** Anim montage section configuration for a character action (start/loop/end section names, optionally distinguished by sex)

## `EastRimWorld/Player/EastRimWorldAIController_Human.h`

- `class` **`AEastRimWorldAIController_Human`** — [EastRimWorldAIController_Human__AEastRimWorldAIController_Human](EastRimWorld/Player/EastRimWorldAIController_Human__AEastRimWorldAIController_Human.md)
  - **Description:** AI controller for human characters: handles reading/copying timers, used-bed tracking, and updating/restoring GOAP goals for inner/outer sect disciples

## `EastRimWorld/Player/EastRimWorldAIController_Summons.h`

- `class` **`AEastRimWorldAIController_Summons`** — [EastRimWorldAIController_Summons__AEastRimWorldAIController_Summons](EastRimWorld/Player/EastRimWorldAIController_Summons__AEastRimWorldAIController_Summons.md)
  - **Description:** AI controller for summons: driven by the owner's controller, handles the summon's behavior state and battle behavior checks

## `EastRimWorld/PostStation/EasternEraPostStationActor.h`

- `class` **`AEasternEraPostStationActor`** — [EasternEraPostStationActor__AEasternEraPostStationActor](EastRimWorld/PostStation/EasternEraPostStationActor__AEasternEraPostStationActor.md)
  - **Description:** GOAP-based post station actor that manages NPC generation lines, martial arts sparring, trade areas and character recruitment.

## `EastRimWorld/PostStation/EasternEraTradeAreaActor.h`

- `class` **`AEasternEraTradeAreaActor`** — [EasternEraTradeAreaActor__AEasternEraTradeAreaActor](EastRimWorld/PostStation/EasternEraTradeAreaActor__AEasternEraTradeAreaActor.md)
  - **Description:** Trade area actor of the post station, managing goods transport GOAP actions and the required goods list.

## `EastRimWorld/PostStation/PostStationStruct.h`

- `enum` **`EExchangeMartialArtsResult`** — [PostStationStruct__EExchangeMartialArtsResult](EastRimWorld/PostStation/PostStationStruct__EExchangeMartialArtsResult.md)
  - **Description:** 切磋结束结果(EndExchangeMartialArts 广播时随实例带出; None=未分胜负结束, 如超时未到场取消/开始前角色死亡/读档角色缺失)
- `enum` **`EExchangeMartialArtsState`** — [PostStationStruct__EExchangeMartialArtsState](EastRimWorld/PostStation/PostStationStruct__EExchangeMartialArtsState.md)
  - **Description:** State of a martial arts sparring instance (waiting or ongoing).
- `enum` **`EPostStationGenerateState`** — [PostStationStruct__EPostStationGenerateState](EastRimWorld/PostStation/PostStationStruct__EPostStationGenerateState.md)
  - **Description:** Generation state of a post station generate line.
- `enum` **`EPostStationNPCState`** — [PostStationStruct__EPostStationNPCState](EastRimWorld/PostStation/PostStationStruct__EPostStationNPCState.md)
  - **Description:** State of a post station NPC (idle or sparring).
- `struct` **`FExchangeMartialArtsConfig`** — [PostStationStruct__FExchangeMartialArtsConfig](EastRimWorld/PostStation/PostStationStruct__FExchangeMartialArtsConfig.md)
  - **Description:** Sparring config row: win/lose awards, dialogues, player join limit, NPC generation IDs and both team IDs.
- `struct` **`FExchangeMartialArtsInstance`** — [PostStationStruct__FExchangeMartialArtsInstance](EastRimWorld/PostStation/PostStationStruct__FExchangeMartialArtsInstance.md)
  - **Description:** Runtime instance data of a sparring match: participants, sign-ins, substitutes, time limits and result.
- `struct` **`FPostStationGenerateConfig`** — [PostStationStruct__FPostStationGenerateConfig](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateConfig.md)
  - **Description:** Post station generation config row: force ID, weight, generation config IDs, destroy conditions and lifetime.
- `struct` **`FPostStationGenerateInfo`** — [PostStationStruct__FPostStationGenerateInfo](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateInfo.md)
  - **Description:** Generation info of one slot in a generate line: config, weight, available spawn pool and active instances.
- `struct` **`FPostStationGenerateInstanceInfo`** — [PostStationStruct__FPostStationGenerateInstanceInfo](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateInstanceInfo.md)
  - **Description:** Instance info of one generated post station NPC: generation GUID, occupied socket, elapsed lifetime and NPC state.
- `struct` **`FPostStationGenerateLine`** — [PostStationStruct__FPostStationGenerateLine](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateLine.md)
  - **Description:** Runtime data of one post station generate line: line config, per-slot generation infos, generate state and socket pools.
- `struct` **`FPostStationGenerateLineConfig`** — [PostStationStruct__FPostStationGenerateLineConfig](EastRimWorld/PostStation/PostStationStruct__FPostStationGenerateLineConfig.md)
  - **Description:** Post station generate line config row: linked generation config IDs, refresh timing, sockets and generate/destroy conditions.
- `class` **`UPostStationConfigAsset`** — [PostStationStruct__UPostStationConfigAsset](EastRimWorld/PostStation/PostStationStruct__UPostStationConfigAsset.md)
  - **Description:** Post station config data asset: generate line configs, trade area, sparring and prison-related parameters.

## `EastRimWorld/SaveGame/SaveGameDataActor.h`

- `class` **`ASaveGameDataActor`** — [SaveGameDataActor__ASaveGameDataActor](EastRimWorld/SaveGame/SaveGameDataActor__ASaveGameDataActor.md)
  - **Description:** Global save data actor that centrally holds unlock records, observation progress, team info, achievement counters, comprehension points, difficulty coefficients and force logs.
- `struct` **`FDifficultyRuntimeSaveData`** — [SaveGameDataActor__FDifficultyRuntimeSaveData](EastRimWorld/SaveGame/SaveGameDataActor__FDifficultyRuntimeSaveData.md)
  - **Description:** 难度运行时系数存档数据（由 Savior 自动反序列化，新游戏时由 InitSaveGameDataActor 写入）
- `struct` **`FPracticePointCD`** — [SaveGameDataActor__FPracticePointCD](EastRimWorld/SaveGame/SaveGameDataActor__FPracticePointCD.md)
  - **Description:** Cooldown data for a character gaining comprehension training/retrace points.
- `struct` **`FTeamBuffInfo`** — [SaveGameDataActor__FTeamBuffInfo](EastRimWorld/SaveGame/SaveGameDataActor__FTeamBuffInfo.md)
  - **Description:** Team buff info (team ID and its buff list) used for team buff save data.

## `EastRimWorld/SaveGame/SaveGlobalGameData.h`

- `class` **`USaveGlobalGameData`** — [SaveGlobalGameData__USaveGlobalGameData](EastRimWorld/SaveGame/SaveGlobalGameData__USaveGlobalGameData.md)
  - **Description:** 保存游戏内全局的数据

## `EastRimWorld/SkillTest/SkillTestConfigAsset.h`

- `struct` **`FTestDummyConfig`** — [SkillTestConfigAsset__FTestDummyConfig](EastRimWorld/SkillTest/SkillTestConfigAsset__FTestDummyConfig.md)
  - **Description:** 默认木桩生成配置:进入测试子关卡时按此列表自动生成靶子。
- `class` **`USkillTestConfigAsset`** — [SkillTestConfigAsset__USkillTestConfigAsset](EastRimWorld/SkillTest/SkillTestConfigAsset__USkillTestConfigAsset.md)
  - **Description:** 技能/武学测试沙盒配置资产 — 仿 UApprenticeshipConfigAsset。 获取:AERW_GameModeBase::GetSkillTestConfigAsset() (GameConfigComponent 按 EGameDataAssetType::SkillTestConfiguration 索引; 需在 GameConfigComponent.GameDataAsset 里配 DA_SkillTestConfig 软引用)。 集中测试沙盒的默认木桩、主测试角色类、以及各类按钮的默认可选ID列表。

## `EastRimWorld/SkillTest/SkillTestManager.h`

- `class` **`ASkillTestManager`** — [SkillTestManager__ASkillTestManager](EastRimWorld/SkillTest/SkillTestManager__ASkillTestManager.md)
  - **Description:** 技能/武学测试沙盒管理器(放在测试子关卡里,随子关卡流式加载/卸载)。 - BeginPlay : 读 USkillTestConfigAsset 自动生成默认木桩。 - 蓝图接口 : 克隆主测试角色 / 按ID生成人物·动物·召唤物 / 给主角色装配指定等级武学。 - EndPlay : 子关卡卸载或本Actor销毁时,销毁所有由本管理器生成的临时角色, 保证不残留、不存档(这些角色生命周期等同子关卡)。 注:生成出来的临时角色都走 SetTestActor(true) → IsSaveObject() 恒 false、bRegisterWorld=false, 所以即便它们挂在常驻关卡上、即便中途存档,也不会被写入存档/注册到世界。

## `EastRimWorld/SpawnActorSystem/GWOActorComponent.h`

- `class` **`UGWOActorComponent`** — [GWOActorComponent__UGWOActorComponent](EastRimWorld/SpawnActorSystem/GWOActorComponent__UGWOActorComponent.md)
  - **Description:** Global World Optimization (GWO) component: freezes actors, replaces static meshes and throttles tick intervals based on camera/player distance (savable).

## `EastRimWorld/SpawnActorSystem/GWOGeneralAccess.h`

- `class` **`AGWOGeneralAccess`** — [GWOGeneralAccess__AGWOGeneralAccess](EastRimWorld/SpawnActorSystem/GWOGeneralAccess__AGWOGeneralAccess.md)
  - **Description:** GWO general access actor: central registry for players, GWO components and spawners, and maintains the GWO world time.

## `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

- `struct` **`FGWOSaveFrozenActorStruct`** — [GWOSaveGame__FGWOSaveFrozenActorStruct](EastRimWorld/SpawnActorSystem/GWOSaveGame__FGWOSaveFrozenActorStruct.md)
  - **Description:** Save-data struct for a frozen actor, holding all information needed to rebuild the actor on defrost (converted from runtime FGWOFrozenActorStruct)
- `struct` **`FGWOSaveGameData`** — [GWOSaveGame__FGWOSaveGameData](EastRimWorld/SpawnActorSystem/GWOSaveGame__FGWOSaveGameData.md)
  - **Description:** Overall save data of the GWO world optimization system, containing sectors, defrost/spawn queues, spawner identifications and unique ID allocation state
- `struct` **`FGWOSaveSector`** — [GWOSaveGame__FGWOSaveSector](EastRimWorld/SpawnActorSystem/GWOSaveGame__FGWOSaveSector.md)
  - **Description:** Save data of a single sector, including location, status and the frozen actors inside it (converted from runtime FGWOSector)

## `EastRimWorld/SpawnActorSystem/GWOSectorsDirector.h`

- `class` **`AGWOSectorsDirector`** — [GWOSectorsDirector__AGWOSectorsDirector](EastRimWorld/SpawnActorSystem/GWOSectorsDirector__AGWOSectorsDirector.md)
  - **Description:** GWO sectors director actor that manages sector creation/activation/caching and actor freezing/defrosting for sector-based global world optimization, participating in save games via the Savior interfaces

## `EastRimWorld/SpawnActorSystem/GWOSpawnZoneBlocking.h`

- `class` **`AGWOSpawnZoneBlocking`** — [GWOSpawnZoneBlocking__AGWOSpawnZoneBlocking](EastRimWorld/SpawnActorSystem/GWOSpawnZoneBlocking__AGWOSpawnZoneBlocking.md)
  - **Description:** Spawn blocking zone actor with a box component; GWO spawners exclude points inside this zone when building the spawn point matrix

## `EastRimWorld/SpawnActorSystem/GWOSpawner.h`

- `class` **`AGWOSpawner`** — [GWOSpawner__AGWOSpawner](EastRimWorld/SpawnActorSystem/GWOSpawner__AGWOSpawner.md)
  - **Description:** GWO spawner actor that builds a matrix of spawn points within its box volume and spawns/manages actors in regular or wave mode, participating in save games via the Savior interfaces

## `EastRimWorld/SpawnActorSystem/GWOTypes.h`

- `enum` **`EGWOAxes`** — [GWOTypes__EGWOAxes](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOAxes.md)
  - **Description:** Axes used for distance measurement (all three axes or horizontal only)
- `enum` **`EGWOCheckFilter`** — [GWOTypes__EGWOCheckFilter](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOCheckFilter.md)
  - **Description:** Spawn point validity check mode (horizontal / check floor / check floor plus NavMesh)
- `enum` **`EGWODebugVisual`** — [GWOTypes__EGWODebugVisual](EastRimWorld/SpawnActorSystem/GWOTypes__EGWODebugVisual.md)
  - **Description:** Level of debug visualization content shown for the spawner
- `enum` **`EGWODebugVisualType`** — [GWOTypes__EGWODebugVisualType](EastRimWorld/SpawnActorSystem/GWOTypes__EGWODebugVisualType.md)
  - **Description:** Environment in which debug visualization is active (editor only, or editor and runtime)
- `enum` **`EGWOSearchSectorReturn`** — [GWOTypes__EGWOSearchSectorReturn](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOSearchSectorReturn.md)
  - **Description:** Result category returned by a sector search operation
- `enum` **`EGWOSectorStatus`** — [GWOTypes__EGWOSectorStatus](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOSectorStatus.md)
  - **Description:** Runtime status of a sector (active / cache / idle / inactive)
- `enum` **`EGWOSectorVisual`** — [GWOTypes__EGWOSectorVisual](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOSectorVisual.md)
  - **Description:** Debug visualization category of a sector
- `enum` **`EGWOShuffleType`** — [GWOTypes__EGWOShuffleType](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOShuffleType.md)
  - **Description:** How the spawner handles spawned/frozen actors when reshuffling spawn points
- `enum` **`EGWOSpawnerRunMode`** — [GWOTypes__EGWOSpawnerRunMode](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOSpawnerRunMode.md)
  - **Description:** When the spawner constructs its spawn points (editor construct or runtime construct)
- `enum` **`EGWOSpawnerType`** — [GWOTypes__EGWOSpawnerType](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOSpawnerType.md)
  - **Description:** Spawner type (regular spawning or wave spawning)
- `enum` **`EGWOTraceType`** — [GWOTypes__EGWOTraceType](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOTraceType.md)
  - **Description:** Trace shape used for spawn checks (line trace or box trace)
- `enum` **`EGWOWorkerRunType`** — [GWOTypes__EGWOWorkerRunType](EastRimWorld/SpawnActorSystem/GWOTypes__EGWOWorkerRunType.md)
  - **Description:** Spawn point working mode: use static points defined in the editor, or randomly shuffle spawn points and boxes for a dynamic world
- `struct` **`FGWOActorReplaceParameters`** — [GWOTypes__FGWOActorReplaceParameters](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOActorReplaceParameters.md)
  - **Description:** Parameters for replacing an actor with a static mesh instance (mesh and location/rotation offsets)
- `struct` **`FGWOActorSpawnStruct`** — [GWOTypes__FGWOActorSpawnStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOActorSpawnStruct.md)
  - **Description:** A single actor spawn entry with its config and runtime state (class, count, chance, distances, respawn, mesh replacement, etc.)
- `struct` **`FGWOFrozenActorStruct`** — [GWOTypes__FGWOFrozenActorStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOFrozenActorStruct.md)
  - **Description:** Full snapshot data of a frozen (backgrounded) actor, used to destroy it when far away and rebuild it when near
- `struct` **`FGWOPointStructData`** — [GWOTypes__FGWOPointStructData](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOPointStructData.md)
  - **Description:** Data of a single spawn point (box transform, instance index, activation state, and spawn entry list)
- `struct` **`FGWOReplaceInstanceMeshStruct`** — [GWOTypes__FGWOReplaceInstanceMeshStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOReplaceInstanceMeshStruct.md)
  - **Description:** Instanced replacement data grouped by static mesh (ISM component and instance transform list)
- `struct` **`FGWOReplaceMeshRuleStruct`** — [GWOTypes__FGWOReplaceMeshRuleStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOReplaceMeshRuleStruct.md)
  - **Description:** Replace-mesh rule data table row (mesh, shadow casting, collision type)
- `struct` **`FGWOSaveSpawnedActorStruct`** — [GWOTypes__FGWOSaveSpawnedActorStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOSaveSpawnedActorStruct.md)
  - **Description:** Save record of a spawned actor (class and unique ID)
- `struct` **`FGWOSector`** — [GWOTypes__FGWOSector](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOSector.md)
  - **Description:** World optimization sector data (location, status, frozen actors and spawner point lists)
- `struct` **`FGWOSpawnerIdentification`** — [GWOTypes__FGWOSpawnerIdentification](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOSpawnerIdentification.md)
  - **Description:** Identification and working data set of a single spawner (spawn lists, point sets, priority, etc.)
- `struct` **`FGWOSpawnerStruct`** — [GWOTypes__FGWOSpawnerStruct](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOSpawnerStruct.md)
  - **Description:** Spawner entry recorded in a sector (spawner actor GUID and its point index list)
- `struct` **`FGWOTime`** — [GWOTypes__FGWOTime](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOTime.md)
  - **Description:** Spawn time of day (hours plus minutes)
- `struct` **`FGWOWave`** — [GWOTypes__FGWOWave](EastRimWorld/SpawnActorSystem/GWOTypes__FGWOWave.md)
  - **Description:** Wave spawn configuration (priority and array of actor list data tables for the wave)

## `EastRimWorld/Struct/BuildingData.h`

- `struct` **`FBuildingData`** — [BuildingData__FBuildingData](EastRimWorld/Struct/BuildingData__FBuildingData.md)
  - **Description:** Building config data table row: contains category, mesh, blueprint class, seat count, service time/animations, GOAP actions and world states for a building definition
- `struct` **`FFacilityDefineData`** — [BuildingData__FFacilityDefineData](EastRimWorld/Struct/BuildingData__FFacilityDefineData.md)
  - **Description:** Facility smart object definition data: contains the interaction anim montage and the facility interaction anim montage

## `EastRimWorld/Struct/CharacterChatStruct.h`

- `enum` **`EChatType`** — [CharacterChatStruct__EChatType](EastRimWorld/Struct/CharacterChatStruct__EChatType.md)
  - **Description:** Character social chat type: stroll/eat/practice/play/work together, or other
- `enum` **`ERelationshipLevelUpType`** — [CharacterChatStruct__ERelationshipLevelUpType](EastRimWorld/Struct/CharacterChatStruct__ERelationshipLevelUpType.md)
  - **Description:** Social relationship level-up type: automatic or manual
- `struct` **`FChatConditionWeight`** — [CharacterChatStruct__FChatConditionWeight](EastRimWorld/Struct/CharacterChatStruct__FChatConditionWeight.md)
  - **Description:** Chat condition weight: random weight and the good-opinion (favorability) change it applies
- `struct` **`FChatTypeData`** — [CharacterChatStruct__FChatTypeData](EastRimWorld/Struct/CharacterChatStruct__FChatTypeData.md)
  - **Description:** 社交类型数据
- `struct` **`FSocialRelationshipConfig`** — [CharacterChatStruct__FSocialRelationshipConfig](EastRimWorld/Struct/CharacterChatStruct__FSocialRelationshipConfig.md)
  - **Description:** 社交关系配置
- `struct` **`FSocialRelationshipData`** — [CharacterChatStruct__FSocialRelationshipData](EastRimWorld/Struct/CharacterChatStruct__FSocialRelationshipData.md)
  - **Description:** 社交关系数据
- `class` **`UCharacterChatConfigAsset`** — [CharacterChatStruct__UCharacterChatConfigAsset](EastRimWorld/Struct/CharacterChatStruct__UCharacterChatConfigAsset.md)
  - **Description:** 角色聊天配置资产

## `EastRimWorld/Struct/CharacterDeathInformation.h`

- `struct` **`FCharacterDeathInformation`** — [CharacterDeathInformation__FCharacterDeathInformation](EastRimWorld/Struct/CharacterDeathInformation__FCharacterDeathInformation.md)
  - **Description:** 角色的死亡信息

## `EastRimWorld/Struct/CharacterStruct.h`

- `enum` **`EAnimalActionType`** — [CharacterStruct__EAnimalActionType](EastRimWorld/Struct/CharacterStruct__EAnimalActionType.md)
  - **Description:** 动物习性
- `enum` **`EAnimalAgeStage`** — [CharacterStruct__EAnimalAgeStage](EastRimWorld/Struct/CharacterStruct__EAnimalAgeStage.md)
  - **Description:** 动物成长阶段
- `enum` **`EAnimalFoodType`** — [CharacterStruct__EAnimalFoodType](EastRimWorld/Struct/CharacterStruct__EAnimalFoodType.md)
  - **Description:** 动物饮食类型
- `enum` **`EAnimalFunc`** — [CharacterStruct__EAnimalFunc](EastRimWorld/Struct/CharacterStruct__EAnimalFunc.md)
  - **Description:** 动物升级可获得的功能
- `enum` **`EBodyStateType`** — [CharacterStruct__EBodyStateType](EastRimWorld/Struct/CharacterStruct__EBodyStateType.md)
  - **Description:** 身体状态类型
- `enum` **`ECharacterNameType`** — [CharacterStruct__ECharacterNameType](EastRimWorld/Struct/CharacterStruct__ECharacterNameType.md)
  - **Description:** 角色名称类型
- `enum` **`ECharacterTemperatureStateType`** — [CharacterStruct__ECharacterTemperatureStateType](EastRimWorld/Struct/CharacterStruct__ECharacterTemperatureStateType.md)
  - **Description:** 角色温度状态
- `enum` **`EDiscipleAvatarType`** — [CharacterStruct__EDiscipleAvatarType](EastRimWorld/Struct/CharacterStruct__EDiscipleAvatarType.md)
  - **Description:** 立绘用途类型（对应 FCharacterAvatarConfig 与 FEastRimWorldCharacterData 的各立绘字段）
- `enum` **`EEastRimWorldSummonsType`** — [CharacterStruct__EEastRimWorldSummonsType](EastRimWorld/Struct/CharacterStruct__EEastRimWorldSummonsType.md)
  - **Description:** Summons control type: control-only, auto, or both auto and controllable
- `enum` **`EHitType`** — [CharacterStruct__EHitType](EastRimWorld/Struct/CharacterStruct__EHitType.md)
  - **Description:** 受击类型
- `enum` **`EHobbyType`** — [CharacterStruct__EHobbyType](EastRimWorld/Struct/CharacterStruct__EHobbyType.md)
  - **Description:** 爱好类型
- `enum` **`EHurtLevel`** — [CharacterStruct__EHurtLevel](EastRimWorld/Struct/CharacterStruct__EHurtLevel.md)
  - **Description:** 伤害程度
- `enum` **`EOrganStatusUIType`** — [CharacterStruct__EOrganStatusUIType](EastRimWorld/Struct/CharacterStruct__EOrganStatusUIType.md)
  - **Description:** 器官状态UI类型
- `enum` **`EStandpointType`** — [CharacterStruct__EStandpointType](EastRimWorld/Struct/CharacterStruct__EStandpointType.md)
  - **Description:** 立场观点
- `struct` **`FAbilityInfo`** — [CharacterStruct__FAbilityInfo](EastRimWorld/Struct/CharacterStruct__FAbilityInfo.md)
  - **Description:** Runtime ability info: ability class, active flag, remaining cooldown and ability level
- `struct` **`FAnimalCultivationConfig`** — [CharacterStruct__FAnimalCultivationConfig](EastRimWorld/Struct/CharacterStruct__FAnimalCultivationConfig.md)
  - **Description:** 动物修炼配置数据 每个怪物类型对应的修炼配置
- `struct` **`FAnimalCultivationLevelUpgrade`** — [CharacterStruct__FAnimalCultivationLevelUpgrade](EastRimWorld/Struct/CharacterStruct__FAnimalCultivationLevelUpgrade.md)
  - **Description:** 动物修炼等级升级功能配置 用于配置到达某个等级时增加的各项功能（经验值、行为树、Goals、能力、Buff、属性、掉落组、模型等）
- `struct` **`FAttributeSetSaveData`** — [CharacterStruct__FAttributeSetSaveData](EastRimWorld/Struct/CharacterStruct__FAttributeSetSaveData.md)
  - **Description:** 属性存档数据
- `struct` **`FCarryWeaponsInfo`** — [CharacterStruct__FCarryWeaponsInfo](EastRimWorld/Struct/CharacterStruct__FCarryWeaponsInfo.md)
  - **Description:** Carried weapon info: weapon ID and the list of weapon mesh/socket entries for it
- `struct` **`FCharacterAttributeSaveData`** — [CharacterStruct__FCharacterAttributeSaveData](EastRimWorld/Struct/CharacterStruct__FCharacterAttributeSaveData.md)
  - **Description:** 角色属性存档数据
- `struct` **`FCharacterAttributeUpgradeConfig`** — [CharacterStruct__FCharacterAttributeUpgradeConfig](EastRimWorld/Struct/CharacterStruct__FCharacterAttributeUpgradeConfig.md)
  - **Description:** 角色属性升级配置
- `struct` **`FCharacterAvatarConfig`** — [CharacterStruct__FCharacterAvatarConfig](EastRimWorld/Struct/CharacterStruct__FCharacterAvatarConfig.md)
  - **Description:** 角色立绘配置（DT_CharacterAvatarConfig 表行，EGameConfigType::CharacterAvatarConfig） 一行集中一套立绘，使用方通过 AERW_GameModeBase::GetCharacterAvatarConfig(ID) 获取
- `struct` **`FCharacterBaseInfoData`** — [CharacterStruct__FCharacterBaseInfoData](EastRimWorld/Struct/CharacterStruct__FCharacterBaseInfoData.md)
  - **Description:** 角色的基础信息
- `struct` **`FCharacterLoyaltyConfig`** — [CharacterStruct__FCharacterLoyaltyConfig](EastRimWorld/Struct/CharacterStruct__FCharacterLoyaltyConfig.md)
  - **Description:** 角色忠诚度配置
- `struct` **`FCharacterOrganConfig`** — [CharacterStruct__FCharacterOrganConfig](EastRimWorld/Struct/CharacterStruct__FCharacterOrganConfig.md)
  - **Description:** 角色器官配置
- `struct` **`FCharacterOrganUIConfig`** — [CharacterStruct__FCharacterOrganUIConfig](EastRimWorld/Struct/CharacterStruct__FCharacterOrganUIConfig.md)
  - **Description:** 角色器官显示UI显示配置（综合显示多个器官的汇总值）
- `struct` **`FCharacterTeamInfo`** — [CharacterStruct__FCharacterTeamInfo](EastRimWorld/Struct/CharacterStruct__FCharacterTeamInfo.md)
  - **Description:** Character team info: team ID and the behavior trees used per place/battle type
- `struct` **`FCharacterTemperatureInfluence`** — [CharacterStruct__FCharacterTemperatureInfluence](EastRimWorld/Struct/CharacterStruct__FCharacterTemperatureInfluence.md)
  - **Description:** 角色温度影响
- `struct` **`FEastRimWorldAnimalData`** — [CharacterStruct__FEastRimWorldAnimalData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldAnimalData.md)
  - **Description:** Animal config data (extends character data): body type, diet, growth stages, taming, output, mating and cultivation settings
- `struct` **`FEastRimWorldCharacterData`** — [CharacterStruct__FEastRimWorldCharacterData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldCharacterData.md)
  - **Description:** Base character config data table row: name, sex, attributes, initial GEs/GAs, equipment, animations, team info, drops, etc.
- `struct` **`FEastRimWorldCharacterFirstName`** — [CharacterStruct__FEastRimWorldCharacterFirstName](EastRimWorld/Struct/CharacterStruct__FEastRimWorldCharacterFirstName.md)
  - **Description:** Character surname data table row: the family name
- `struct` **`FEastRimWorldCharacterName`** — [CharacterStruct__FEastRimWorldCharacterName](EastRimWorld/Struct/CharacterStruct__FEastRimWorldCharacterName.md)
  - **Description:** Character given-name data table row: name list and the sex it applies to
- `struct` **`FEastRimWorldHumanData`** — [CharacterStruct__FEastRimWorldHumanData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldHumanData.md)
  - **Description:** Human character config data (extends character data): customization ID, height/weight, background story, traveler/merchant and prisoner settings
- `struct` **`FEastRimWorldSummonsData`** — [CharacterStruct__FEastRimWorldSummonsData](EastRimWorld/Struct/CharacterStruct__FEastRimWorldSummonsData.md)
  - **Description:** 召唤物的数据
- `struct` **`FExchangeRuleData`** — [CharacterStruct__FExchangeRuleData](EastRimWorld/Struct/CharacterStruct__FExchangeRuleData.md)
  - **Description:** Martial-arts exchange (sparring) rule data: random flag, allow flag and per-subtype toggle map
- `struct` **`FGameplayEffectInfo`** — [CharacterStruct__FGameplayEffectInfo](EastRimWorld/Struct/CharacterStruct__FGameplayEffectInfo.md)
  - **Description:** Runtime GameplayEffect info: effect class, stack count and duration
- `struct` **`FGameplayTeamBehaviorTree`** — [CharacterStruct__FGameplayTeamBehaviorTree](EastRimWorld/Struct/CharacterStruct__FGameplayTeamBehaviorTree.md)
  - **Description:** Team behavior tree config: the behavior tree a team uses for a given place type and battle type
- `struct` **`FGameplayTeamGoals`** — [CharacterStruct__FGameplayTeamGoals](EastRimWorld/Struct/CharacterStruct__FGameplayTeamGoals.md)
  - **Description:** 阵营的goals
- `struct` **`FGameplayTeamInfo`** — [CharacterStruct__FGameplayTeamInfo](EastRimWorld/Struct/CharacterStruct__FGameplayTeamInfo.md)
  - **Description:** 团队信息
- `struct` **`FGoals`** — [CharacterStruct__FGoals](EastRimWorld/Struct/CharacterStruct__FGoals.md)
  - **Description:** 团队信息
- `struct` **`FGrowthInfo`** — [CharacterStruct__FGrowthInfo](EastRimWorld/Struct/CharacterStruct__FGrowthInfo.md)
  - **Description:** Animal growth info: growth value required for the stage and the animal ID it turns into (empty if unchanged)
- `struct` **`FHobbyConfig`** — [CharacterStruct__FHobbyConfig](EastRimWorld/Struct/CharacterStruct__FHobbyConfig.md)
  - **Description:** 爱好配置表
- `struct` **`FHungryEffectConfig`** — [CharacterStruct__FHungryEffectConfig](EastRimWorld/Struct/CharacterStruct__FHungryEffectConfig.md)
  - **Description:** 饥饿伤势配置表
- `struct` **`FInjuryConfig`** — [CharacterStruct__FInjuryConfig](EastRimWorld/Struct/CharacterStruct__FInjuryConfig.md)
  - **Description:** 伤势配置解构
- `struct` **`FInjuryEffectConfig`** — [CharacterStruct__FInjuryEffectConfig](EastRimWorld/Struct/CharacterStruct__FInjuryEffectConfig.md)
  - **Description:** 伤势效果配置表
- `struct` **`FInjuryEffectInstance`** — [CharacterStruct__FInjuryEffectInstance](EastRimWorld/Struct/CharacterStruct__FInjuryEffectInstance.md)
  - **Description:** 伤势效果实施对象
- `struct` **`FInjuryMedicine`** — [CharacterStruct__FInjuryMedicine](EastRimWorld/Struct/CharacterStruct__FInjuryMedicine.md)
  - **Description:** Medicine info required to treat an injury: amount, treat addition and visibility flag
- `struct` **`FOrganAttackedShareConfig`** — [CharacterStruct__FOrganAttackedShareConfig](EastRimWorld/Struct/CharacterStruct__FOrganAttackedShareConfig.md)
  - **Description:** 器官收到伤害的分摊配置表
- `struct` **`FOrganStatus`** — [CharacterStruct__FOrganStatus](EastRimWorld/Struct/CharacterStruct__FOrganStatus.md)
  - **Description:** 器官状态
- `struct` **`FPlaceInitGameplayEffect`** — [CharacterStruct__FPlaceInitGameplayEffect](EastRimWorld/Struct/CharacterStruct__FPlaceInitGameplayEffect.md)
  - **Description:** Place initial GE config: GameplayEffects initially applied for a given place type and battle type (e.g. continuous satiety drain)
- `struct` **`FTeamBuffData`** — [CharacterStruct__FTeamBuffData](EastRimWorld/Struct/CharacterStruct__FTeamBuffData.md)
  - **Description:** 对应阵营的buff
- `struct` **`FTeamChangeInformationInfo`** — [CharacterStruct__FTeamChangeInformationInfo](EastRimWorld/Struct/CharacterStruct__FTeamChangeInformationInfo.md)
  - **Description:** 存储的团队关系关联信息
- `struct` **`FWeaponsInfo`** — [CharacterStruct__FWeaponsInfo](EastRimWorld/Struct/CharacterStruct__FWeaponsInfo.md)
  - **Description:** Weapon socket/mesh info: weapon static mesh component, hand-held socket name and carry socket name
- `struct` **`FWorkAttributeLevelConfig`** — [CharacterStruct__FWorkAttributeLevelConfig](EastRimWorld/Struct/CharacterStruct__FWorkAttributeLevelConfig.md)
  - **Description:** 工作属性等级配置
- `class` **`UDefaultTeamInfoAsset`** — [CharacterStruct__UDefaultTeamInfoAsset](EastRimWorld/Struct/CharacterStruct__UDefaultTeamInfoAsset.md)
  - **Description:** 默认的阵营信息资产

## `EastRimWorld/Struct/CommonEnum.h`

- `enum` **`EArmorType`** — [CommonEnum__EArmorType](EastRimWorld/Struct/CommonEnum__EArmorType.md)
  - **Description:** Armor type: helmet, bracer, armor, pants, shoes, eyes
- `enum` **`EAutoUseCharacterType`** — [CommonEnum__EAutoUseCharacterType](EastRimWorld/Struct/CommonEnum__EAutoUseCharacterType.md)
  - **Description:** 自动使用角色类型
- `enum` **`EBattleType`** — [CommonEnum__EBattleType](EastRimWorld/Struct/CommonEnum__EBattleType.md)
  - **Description:** 战斗类型
- `enum` **`EBattlefieldRolesType`** — [CommonEnum__EBattlefieldRolesType](EastRimWorld/Struct/CommonEnum__EBattlefieldRolesType.md)
  - **Description:** 战场角色类型
- `enum` **`ECharacterBehaviorState`** — [CommonEnum__ECharacterBehaviorState](EastRimWorld/Struct/CommonEnum__ECharacterBehaviorState.md)
  - **Description:** Character behavior state: covers combat, sleeping, eating, various work jobs, medical care, taming, prisoner handling and more
- `enum` **`ECharacterSectCombatCommandState`** — [CommonEnum__ECharacterSectCombatCommandState](EastRimWorld/Struct/CommonEnum__ECharacterSectCombatCommandState.md)
  - **Description:** Character command state in sect combat: follow player, guard, or attack
- `enum` **`ECharacterType`** — [CommonEnum__ECharacterType](EastRimWorld/Struct/CommonEnum__ECharacterType.md)
  - **Description:** 角色类型
- `enum` **`EDifficultyOption`** — [CommonEnum__EDifficultyOption](EastRimWorld/Struct/CommonEnum__EDifficultyOption.md)
  - **Description:** 难度选项
- `enum` **`EEquipmentType`** — [CommonEnum__EEquipmentType](EastRimWorld/Struct/CommonEnum__EEquipmentType.md)
  - **Description:** Equipment type: weapon, armor, or tool
- `enum` **`EFabricateType`** — [CommonEnum__EFabricateType](EastRimWorld/Struct/CommonEnum__EFabricateType.md)
  - **Description:** 设备用途类型
- `enum` **`EFiveElementType`** — [CommonEnum__EFiveElementType](EastRimWorld/Struct/CommonEnum__EFiveElementType.md)
  - **Description:** 五行类型
- `enum` **`EGroundInventoryType`** — [CommonEnum__EGroundInventoryType](EastRimWorld/Struct/CommonEnum__EGroundInventoryType.md)
  - **Description:** 地面物品类型
- `enum` **`EHungryDegree`** — [CommonEnum__EHungryDegree](EastRimWorld/Struct/CommonEnum__EHungryDegree.md)
  - **Description:** 饥饿程度
- `enum` **`EItemType`** — [CommonEnum__EItemType](EastRimWorld/Struct/CommonEnum__EItemType.md)
  - **Description:** 物品分类枚举
- `enum` **`EJobTitleType`** — [CommonEnum__EJobTitleType](EastRimWorld/Struct/CommonEnum__EJobTitleType.md)
  - **Description:** Job title type: none or leader
- `enum` **`EManageType`** — [CommonEnum__EManageType](EastRimWorld/Struct/CommonEnum__EManageType.md)
  - **Description:** 设备用途类型
- `enum` **`EMartialArtsAttributeClassification`** — [CommonEnum__EMartialArtsAttributeClassification](EastRimWorld/Struct/CommonEnum__EMartialArtsAttributeClassification.md)
  - **Description:** 武学属性分类
- `enum` **`EOnWorldState`** — [CommonEnum__EOnWorldState](EastRimWorld/Struct/CommonEnum__EOnWorldState.md)
  - **Description:** 角色在世界中的状态
- `enum` **`EPlaceJobType`** — [CommonEnum__EPlaceJobType](EastRimWorld/Struct/CommonEnum__EPlaceJobType.md)
  - **Description:** 城镇职位类型
- `enum` **`ERobotActiveType`** — [CommonEnum__ERobotActiveType](EastRimWorld/Struct/CommonEnum__ERobotActiveType.md)
  - **Description:** Robot activation state type: normal, active, or dormant
- `enum` **`ESpeciesType`** — [CommonEnum__ESpeciesType](EastRimWorld/Struct/CommonEnum__ESpeciesType.md)
  - **Description:** Species type: human, beast, birds, robot human, robot beast, or robot birds
- `enum` **`ESummonsBattleType`** — [CommonEnum__ESummonsBattleType](EastRimWorld/Struct/CommonEnum__ESummonsBattleType.md)
  - **Description:** 召唤物战斗类型（战场准备时选择）
- `enum` **`EWorldPlaceType`** — [CommonEnum__EWorldPlaceType](EastRimWorld/Struct/CommonEnum__EWorldPlaceType.md)
  - **Description:** 世界地点类型

## `EastRimWorld/Struct/CommonLogStruct.h`

- `enum` **`ECommonLogGenerateCondition`** — [CommonLogStruct__ECommonLogGenerateCondition](EastRimWorld/Struct/CommonLogStruct__ECommonLogGenerateCondition.md)
  - **Description:** 日志的条件类型
- `enum` **`ECommonLogGroup`** — [CommonLogStruct__ECommonLogGroup](EastRimWorld/Struct/CommonLogStruct__ECommonLogGroup.md)
  - **Description:** 日志分组
- `enum` **`ECommonLogParameterType`** — [CommonLogStruct__ECommonLogParameterType](EastRimWorld/Struct/CommonLogStruct__ECommonLogParameterType.md)
  - **Description:** 日志的参数类型
- `enum` **`ECommonLogType`** — [CommonLogStruct__ECommonLogType](EastRimWorld/Struct/CommonLogStruct__ECommonLogType.md)
  - **Description:** 日志类型
- `struct` **`FCommonLogData`** — [CommonLogStruct__FCommonLogData](EastRimWorld/Struct/CommonLogStruct__FCommonLogData.md)
  - **Description:** Common Log Data data structure.
- `struct` **`FCommonLogInfo`** — [CommonLogStruct__FCommonLogInfo](EastRimWorld/Struct/CommonLogStruct__FCommonLogInfo.md)
  - **Description:** Common Log Info data structure.

## `EastRimWorld/Struct/CommonStruct.h`

- `enum` **`EBuffOriginType`** — [CommonStruct__EBuffOriginType](EastRimWorld/Struct/CommonStruct__EBuffOriginType.md)
  - **Description:** Buff的来源类型
- `enum` **`EBuffType`** — [CommonStruct__EBuffType](EastRimWorld/Struct/CommonStruct__EBuffType.md)
  - **Description:** Buff的类型
- `enum` **`EFabricateRule`** — [CommonStruct__EFabricateRule](EastRimWorld/Struct/CommonStruct__EFabricateRule.md)
  - **Description:** 制造规则
- `enum` **`EFabricateState`** — [CommonStruct__EFabricateState](EastRimWorld/Struct/CommonStruct__EFabricateState.md)
  - **Description:** 制造的状态
- `enum` **`EPlayerPawnType`** — [CommonStruct__EPlayerPawnType](EastRimWorld/Struct/CommonStruct__EPlayerPawnType.md)
  - **Description:** Pawn的类型
- `enum` **`ETalentType`** — [CommonStruct__ETalentType](EastRimWorld/Struct/CommonStruct__ETalentType.md)
  - **Description:** 天赋类型
- `struct` **`FBehaviorTargetInfo`** — [CommonStruct__FBehaviorTargetInfo](EastRimWorld/Struct/CommonStruct__FBehaviorTargetInfo.md)
  - **Description:** Behavior Target Info data structure.
- `struct` **`FCharacteristicInfo`** — [CommonStruct__FCharacteristicInfo](EastRimWorld/Struct/CommonStruct__FCharacteristicInfo.md)
  - **Description:** 角色特性
- `struct` **`FCharacteristicInfoArray`** — [CommonStruct__FCharacteristicInfoArray](EastRimWorld/Struct/CommonStruct__FCharacteristicInfoArray.md)
  - **Description:** Characteristic Info Array data structure.
- `struct` **`FCommonBuff`** — [CommonStruct__FCommonBuff](EastRimWorld/Struct/CommonStruct__FCommonBuff.md)
  - **Description:** 通用BUFF
- `struct` **`FDropItemInfo`** — [CommonStruct__FDropItemInfo](EastRimWorld/Struct/CommonStruct__FDropItemInfo.md)
  - **Description:** 掉落物品信息
- `struct` **`FDropSetConfig`** — [CommonStruct__FDropSetConfig](EastRimWorld/Struct/CommonStruct__FDropSetConfig.md)
  - **Description:** 掉落配置
- `struct` **`FEquipmentQualityRange`** — [CommonStruct__FEquipmentQualityRange](EastRimWorld/Struct/CommonStruct__FEquipmentQualityRange.md)
  - **Description:** 装备的品质区间
- `struct` **`FEquipmentRandomPool`** — [CommonStruct__FEquipmentRandomPool](EastRimWorld/Struct/CommonStruct__FEquipmentRandomPool.md)
  - **Description:** 装备的随机池子
- `struct` **`FFabricateEquipmentData`** — [CommonStruct__FFabricateEquipmentData](EastRimWorld/Struct/CommonStruct__FFabricateEquipmentData.md)
  - **Description:** 装备的制造
- `struct` **`FFabricateTaskData`** — [CommonStruct__FFabricateTaskData](EastRimWorld/Struct/CommonStruct__FFabricateTaskData.md)
  - **Description:** 制造任务信息
- `struct` **`FFormulaData`** — [CommonStruct__FFormulaData](EastRimWorld/Struct/CommonStruct__FFormulaData.md)
  - **Description:** 配方
- `struct` **`FGenerateEquipmentData`** — [CommonStruct__FGenerateEquipmentData](EastRimWorld/Struct/CommonStruct__FGenerateEquipmentData.md)
  - **Description:** 生成装备的数据
- `struct` **`FGuidArr`** — [CommonStruct__FGuidArr](EastRimWorld/Struct/CommonStruct__FGuidArr.md)
  - **Description:** Guid Arr data structure.
- `struct` **`FItemSimpleData`** — [CommonStruct__FItemSimpleData](EastRimWorld/Struct/CommonStruct__FItemSimpleData.md)
  - **Description:** Item Simple Data data structure.
- `struct` **`FLoadingTipInfo`** — [CommonStruct__FLoadingTipInfo](EastRimWorld/Struct/CommonStruct__FLoadingTipInfo.md)
  - **Description:** Loading Tip Info data structure.
- `struct` **`FLoadingTipInfoArray`** — [CommonStruct__FLoadingTipInfoArray](EastRimWorld/Struct/CommonStruct__FLoadingTipInfoArray.md)
  - **Description:** Loading Tip Info Array data structure.
- `struct` **`FNameIDArray`** — [CommonStruct__FNameIDArray](EastRimWorld/Struct/CommonStruct__FNameIDArray.md)
  - **Description:** Name ID Array data structure.
- `class` **`ULoadingWidgetAsset`** — [CommonStruct__ULoadingWidgetAsset](EastRimWorld/Struct/CommonStruct__ULoadingWidgetAsset.md)
  - **Description:** Loading Widget Asset UObject type.

## `EastRimWorld/Struct/CommonTaskStruct.h`

- `enum` **`EAwardType`** — [CommonTaskStruct__EAwardType](EastRimWorld/Struct/CommonTaskStruct__EAwardType.md)
  - **Description:** Award Type enum type.
- `enum` **`EBeginnerGuideEventType`** — [CommonTaskStruct__EBeginnerGuideEventType](EastRimWorld/Struct/CommonTaskStruct__EBeginnerGuideEventType.md)
  - **Description:** 新手引导任务开始事件类型
- `enum` **`EBeginnerGuideTipsType`** — [CommonTaskStruct__EBeginnerGuideTipsType](EastRimWorld/Struct/CommonTaskStruct__EBeginnerGuideTipsType.md)
  - **Description:** 新手引导Tips类型
- `enum` **`EBeginnerGuideUnlockType`** — [CommonTaskStruct__EBeginnerGuideUnlockType](EastRimWorld/Struct/CommonTaskStruct__EBeginnerGuideUnlockType.md)
  - **Description:** 新手引导解锁类型
- `enum` **`ECommonTaskConditionType`** — [CommonTaskStruct__ECommonTaskConditionType](EastRimWorld/Struct/CommonTaskStruct__ECommonTaskConditionType.md)
  - **Description:** 任务类型
- `enum` **`ECommonTaskExecuteState`** — [CommonTaskStruct__ECommonTaskExecuteState](EastRimWorld/Struct/CommonTaskStruct__ECommonTaskExecuteState.md)
  - **Description:** 任务的执行状态
- `enum` **`ECommonTaskType`** — [CommonTaskStruct__ECommonTaskType](EastRimWorld/Struct/CommonTaskStruct__ECommonTaskType.md)
  - **Description:** 任务的分类
- `enum` **`ECompleteState`** — [CommonTaskStruct__ECompleteState](EastRimWorld/Struct/CommonTaskStruct__ECompleteState.md)
  - **Description:** 完成状态
- `enum` **`EConditionValueCompareType`** — [CommonTaskStruct__EConditionValueCompareType](EastRimWorld/Struct/CommonTaskStruct__EConditionValueCompareType.md)
  - **Description:** 条件数值比较类型
- `enum` **`EConditionValueUpdateType`** — [CommonTaskStruct__EConditionValueUpdateType](EastRimWorld/Struct/CommonTaskStruct__EConditionValueUpdateType.md)
  - **Description:** 条件数值更新类型
- `enum` **`EPublisherType`** — [CommonTaskStruct__EPublisherType](EastRimWorld/Struct/CommonTaskStruct__EPublisherType.md)
  - **Description:** 发布者类型
- `enum` **`ESideQuestExtraReward`** — [CommonTaskStruct__ESideQuestExtraReward](EastRimWorld/Struct/CommonTaskStruct__ESideQuestExtraReward.md)
  - **Description:** 支线任务额外奖励类型
- `enum` **`ESideQuestPublisher`** — [CommonTaskStruct__ESideQuestPublisher](EastRimWorld/Struct/CommonTaskStruct__ESideQuestPublisher.md)
  - **Description:** Side Quest Publisher enum type.
- `enum` **`ETaskAcceptState`** — [CommonTaskStruct__ETaskAcceptState](EastRimWorld/Struct/CommonTaskStruct__ETaskAcceptState.md)
  - **Description:** 任务的领取状态
- `enum` **`ETaskCategory`** — [CommonTaskStruct__ETaskCategory](EastRimWorld/Struct/CommonTaskStruct__ETaskCategory.md)
  - **Description:** 任务子类型
- `enum` **`ETaskExtraParameterType`** — [CommonTaskStruct__ETaskExtraParameterType](EastRimWorld/Struct/CommonTaskStruct__ETaskExtraParameterType.md)
  - **Description:** Task Extra Parameter Type enum type.
- `enum` **`ETriggerFunctionType`** — [CommonTaskStruct__ETriggerFunctionType](EastRimWorld/Struct/CommonTaskStruct__ETriggerFunctionType.md)
  - **Description:** 触发额外功能类型
- `enum` **`ETriggerTimingType`** — [CommonTaskStruct__ETriggerTimingType](EastRimWorld/Struct/CommonTaskStruct__ETriggerTimingType.md)
  - **Description:** 触发额外功能的时机
- `struct` **`FBeginnerGuideDialogue`** — [CommonTaskStruct__FBeginnerGuideDialogue](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuideDialogue.md)
  - **Description:** 新手引导对话配置结构
- `struct` **`FBeginnerGuideDialogueContent`** — [CommonTaskStruct__FBeginnerGuideDialogueContent](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuideDialogueContent.md)
  - **Description:** 新手引导对话内容
- `struct` **`FBeginnerGuidePopup`** — [CommonTaskStruct__FBeginnerGuidePopup](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuidePopup.md)
  - **Description:** 新手引导弹窗配置结构
- `struct` **`FBeginnerGuidePopupContent`** — [CommonTaskStruct__FBeginnerGuidePopupContent](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuidePopupContent.md)
  - **Description:** 新手引导弹窗内容
- `struct` **`FBeginnerGuideTips`** — [CommonTaskStruct__FBeginnerGuideTips](EastRimWorld/Struct/CommonTaskStruct__FBeginnerGuideTips.md)
  - **Description:** 新手引导Tips配置结构
- `struct` **`FCommonAward`** — [CommonTaskStruct__FCommonAward](EastRimWorld/Struct/CommonTaskStruct__FCommonAward.md)
  - **Description:** 达成任务的条件
- `struct` **`FCommonTaskCondition`** — [CommonTaskStruct__FCommonTaskCondition](EastRimWorld/Struct/CommonTaskStruct__FCommonTaskCondition.md)
  - **Description:** 达成任务的条件
- `struct` **`FCommonTaskInfo`** — [CommonTaskStruct__FCommonTaskInfo](EastRimWorld/Struct/CommonTaskStruct__FCommonTaskInfo.md)
  - **Description:** 任务
- `struct` **`FCommonTaskInstance`** — [CommonTaskStruct__FCommonTaskInstance](EastRimWorld/Struct/CommonTaskStruct__FCommonTaskInstance.md)
  - **Description:** 任务
- `struct` **`FTaskCategoryDetail`** — [CommonTaskStruct__FTaskCategoryDetail](EastRimWorld/Struct/CommonTaskStruct__FTaskCategoryDetail.md)
  - **Description:** 任务类别信息
- `struct` **`FTaskSelectableAward`** — [CommonTaskStruct__FTaskSelectableAward](EastRimWorld/Struct/CommonTaskStruct__FTaskSelectableAward.md)
  - **Description:** Task Selectable Award data structure.
- `struct` **`FTriggerFunction`** — [CommonTaskStruct__FTriggerFunction](EastRimWorld/Struct/CommonTaskStruct__FTriggerFunction.md)
  - **Description:** 触发额外功能

## `EastRimWorld/Struct/ConditionStruct.h`

- `enum` **`ECondType`** — [ConditionStruct__ECondType](EastRimWorld/Struct/ConditionStruct__ECondType.md)
  - **Description:** 条件类型
- `struct` **`FCompareCondition`** — [ConditionStruct__FCompareCondition](EastRimWorld/Struct/ConditionStruct__FCompareCondition.md)
  - **Description:** Compare Condition data structure.

## `EastRimWorld/Struct/ConsumableStruct.h`

- `enum` **`EConsumableConditionType`** — [ConsumableStruct__EConsumableConditionType](EastRimWorld/Struct/ConsumableStruct__EConsumableConditionType.md)
  - **Description:** 耗材条件类型
- `enum` **`EConsumableEffectType`** — [ConsumableStruct__EConsumableEffectType](EastRimWorld/Struct/ConsumableStruct__EConsumableEffectType.md)
  - **Description:** 耗材效果类型
- `struct` **`FConsumableCondition`** — [ConsumableStruct__FConsumableCondition](EastRimWorld/Struct/ConsumableStruct__FConsumableCondition.md)
  - **Description:** 耗材使用条件（独立配置表 耗材表中按ID引用）
- `struct` **`FConsumableData`** — [ConsumableStruct__FConsumableData](EastRimWorld/Struct/ConsumableStruct__FConsumableData.md)
  - **Description:** 耗材
- `struct` **`FConsumableEffectData`** — [ConsumableStruct__FConsumableEffectData](EastRimWorld/Struct/ConsumableStruct__FConsumableEffectData.md)
  - **Description:** 耗材效果

## `EastRimWorld/Struct/DiplomacyStruct.h`

- `class` **`UPlayerDiplomacyConfigAsset`** — [DiplomacyStruct__UPlayerDiplomacyConfigAsset](EastRimWorld/Struct/DiplomacyStruct__UPlayerDiplomacyConfigAsset.md)
  - **Description:** Player Diplomacy Config Asset UObject type.

## `EastRimWorld/Struct/FarmlandStruct.h`

- `struct` **`FDesignFarmlandGridData`** — [FarmlandStruct__FDesignFarmlandGridData](EastRimWorld/Struct/FarmlandStruct__FDesignFarmlandGridData.md)
  - **Description:** Design Farmland Grid Data data structure.
- `struct` **`FFarmlandData`** — [FarmlandStruct__FFarmlandData](EastRimWorld/Struct/FarmlandStruct__FFarmlandData.md)
  - **Description:** Farmland Data data structure.
- `struct` **`FPlantTypeTabInfo`** — [FarmlandStruct__FPlantTypeTabInfo](EastRimWorld/Struct/FarmlandStruct__FPlantTypeTabInfo.md)
  - **Description:** Plant Type Tab Info data structure.
- `class` **`UFarmlandConfigAsset`** — [FarmlandStruct__UFarmlandConfigAsset](EastRimWorld/Struct/FarmlandStruct__UFarmlandConfigAsset.md)
  - **Description:** 田地配置资产

## `EastRimWorld/Struct/ForceStruct.h`

- `struct` **`FForceData`** — [ForceStruct__FForceData](EastRimWorld/Struct/ForceStruct__FForceData.md)
  - **Description:** 势力表结构体
- `struct` **`FForceSkillData`** — [ForceStruct__FForceSkillData](EastRimWorld/Struct/ForceStruct__FForceSkillData.md)
  - **Description:** 势力给主角的Growup属性加成
- `struct` **`FPassGameConditionDescribe`** — [ForceStruct__FPassGameConditionDescribe](EastRimWorld/Struct/ForceStruct__FPassGameConditionDescribe.md)
  - **Description:** 通关条件表结构体

## `EastRimWorld/Struct/ItemStruct.h`

- `enum` **`ECharacterAttributeCategoryType`** — [ItemStruct__ECharacterAttributeCategoryType](EastRimWorld/Struct/ItemStruct__ECharacterAttributeCategoryType.md)
  - **Description:** 人物属性显示分类
- `enum` **`ECollectItemType`** — [ItemStruct__ECollectItemType](EastRimWorld/Struct/ItemStruct__ECollectItemType.md)
  - **Description:** 采集物分类枚举
- `enum` **`ECollectLifeState`** — [ItemStruct__ECollectLifeState](EastRimWorld/Struct/ItemStruct__ECollectLifeState.md)
  - **Description:** 采集物生命状态
- `enum` **`ECollectPlantType`** — [ItemStruct__ECollectPlantType](EastRimWorld/Struct/ItemStruct__ECollectPlantType.md)
  - **Description:** 采集物种植分类
- `enum` **`EFoodType`** — [ItemStruct__EFoodType](EastRimWorld/Struct/ItemStruct__EFoodType.md)
  - **Description:** 食物分类枚举
- `enum` **`EGrowStageType`** — [ItemStruct__EGrowStageType](EastRimWorld/Struct/ItemStruct__EGrowStageType.md)
  - **Description:** 生长阶段类型
- `enum` **`EInventoryItemSetType`** — [ItemStruct__EInventoryItemSetType](EastRimWorld/Struct/ItemStruct__EInventoryItemSetType.md)
  - **Description:** 物品所在管理器的类型
- `enum` **`EInventoryItemStateType`** — [ItemStruct__EInventoryItemStateType](EastRimWorld/Struct/ItemStruct__EInventoryItemStateType.md)
  - **Description:** 物品状态
- `enum` **`EItemUseState`** — [ItemStruct__EItemUseState](EastRimWorld/Struct/ItemStruct__EItemUseState.md)
  - **Description:** 物品被使用的状态
- `enum` **`EResourceCategories`** — [ItemStruct__EResourceCategories](EastRimWorld/Struct/ItemStruct__EResourceCategories.md)
  - **Description:** 资源UI显示分类枚举
- `enum` **`EToolType`** — [ItemStruct__EToolType](EastRimWorld/Struct/ItemStruct__EToolType.md)
  - **Description:** Tool Type enum type.
- `struct` **`FAllTypeItemDrop`** — [ItemStruct__FAllTypeItemDrop](EastRimWorld/Struct/ItemStruct__FAllTypeItemDrop.md)
  - **Description:** All Type Item Drop data structure.
- `struct` **`FCharacterApparel`** — [ItemStruct__FCharacterApparel](EastRimWorld/Struct/ItemStruct__FCharacterApparel.md)
  - **Description:** 角色防具
- `struct` **`FCharacterAttributeInfo`** — [ItemStruct__FCharacterAttributeInfo](EastRimWorld/Struct/ItemStruct__FCharacterAttributeInfo.md)
  - **Description:** 属性的详细信息
- `struct` **`FCharacterEquipment`** — [ItemStruct__FCharacterEquipment](EastRimWorld/Struct/ItemStruct__FCharacterEquipment.md)
  - **Description:** 角色装备
- `struct` **`FCharacterMainSkillUIConfig`** — [ItemStruct__FCharacterMainSkillUIConfig](EastRimWorld/Struct/ItemStruct__FCharacterMainSkillUIConfig.md)
  - **Description:** 属性的详细信息
- `struct` **`FCharacterTool`** — [ItemStruct__FCharacterTool](EastRimWorld/Struct/ItemStruct__FCharacterTool.md)
  - **Description:** 角色工具
- `struct` **`FCharacterWeapon`** — [ItemStruct__FCharacterWeapon](EastRimWorld/Struct/ItemStruct__FCharacterWeapon.md)
  - **Description:** 角色武器
- `struct` **`FCollectItem`** — [ItemStruct__FCollectItem](EastRimWorld/Struct/ItemStruct__FCollectItem.md)
  - **Description:** 资源参数(采集物，矿物)
- `struct` **`FCollectSaveData`** — [ItemStruct__FCollectSaveData](EastRimWorld/Struct/ItemStruct__FCollectSaveData.md)
  - **Description:** Collect Save Data data structure.
- `struct` **`FCollectSaveDataList`** — [ItemStruct__FCollectSaveDataList](EastRimWorld/Struct/ItemStruct__FCollectSaveDataList.md)
  - **Description:** Collect Save Data List data structure.
- `struct` **`FCollectedGroup`** — [ItemStruct__FCollectedGroup](EastRimWorld/Struct/ItemStruct__FCollectedGroup.md)
  - **Description:** 产出组
- `struct` **`FCollectedProduct`** — [ItemStruct__FCollectedProduct](EastRimWorld/Struct/ItemStruct__FCollectedProduct.md)
  - **Description:** 采集产出
- `struct` **`FEfficiencyByTemperature`** — [ItemStruct__FEfficiencyByTemperature](EastRimWorld/Struct/ItemStruct__FEfficiencyByTemperature.md)
  - **Description:** 温度与效率的关联 0<=T<=20 E=100% 21<=T<=40 E=50% T无范围E=0 策划直接填
- `struct` **`FEquipmentAttribute`** — [ItemStruct__FEquipmentAttribute](EastRimWorld/Struct/ItemStruct__FEquipmentAttribute.md)
  - **Description:** 装备属性
- `struct` **`FExplorationReward`** — [ItemStruct__FExplorationReward](EastRimWorld/Struct/ItemStruct__FExplorationReward.md)
  - **Description:** Exploration Reward data structure.
- `struct` **`FExplorationRewards`** — [ItemStruct__FExplorationRewards](EastRimWorld/Struct/ItemStruct__FExplorationRewards.md)
  - **Description:** Exploration Rewards data structure.
- `struct` **`FFarmlandPlantSaveData`** — [ItemStruct__FFarmlandPlantSaveData](EastRimWorld/Struct/ItemStruct__FFarmlandPlantSaveData.md)
  - **Description:** Farmland Plant Save Data data structure.
- `struct` **`FFarmlandPlantSaveDataList`** — [ItemStruct__FFarmlandPlantSaveDataList](EastRimWorld/Struct/ItemStruct__FFarmlandPlantSaveDataList.md)
  - **Description:** Farmland Plant Save Data List data structure.
- `struct` **`FGroupCorrespondingAnim`** — [ItemStruct__FGroupCorrespondingAnim](EastRimWorld/Struct/ItemStruct__FGroupCorrespondingAnim.md)
  - **Description:** Group Corresponding Anim data structure.
- `struct` **`FGrowStage`** — [ItemStruct__FGrowStage](EastRimWorld/Struct/ItemStruct__FGrowStage.md)
  - **Description:** 生长阶段
- `struct` **`FInventoryGeneralData`** — [ItemStruct__FInventoryGeneralData](EastRimWorld/Struct/ItemStruct__FInventoryGeneralData.md)
  - **Description:** 物品总表结构体
- `struct` **`FInventoryItem`** — [ItemStruct__FInventoryItem](EastRimWorld/Struct/ItemStruct__FInventoryItem.md)
  - **Description:** 物品结构体
- `struct` **`FItemClassify`** — [ItemStruct__FItemClassify](EastRimWorld/Struct/ItemStruct__FItemClassify.md)
  - **Description:** 物品分类
- `struct` **`FItemNumData`** — [ItemStruct__FItemNumData](EastRimWorld/Struct/ItemStruct__FItemNumData.md)
  - **Description:** Item Num Data data structure.
- `struct` **`FOutputData`** — [ItemStruct__FOutputData](EastRimWorld/Struct/ItemStruct__FOutputData.md)
  - **Description:** 资源产出数据
- `struct` **`FOutputDatas`** — [ItemStruct__FOutputDatas](EastRimWorld/Struct/ItemStruct__FOutputDatas.md)
  - **Description:** Output Datas data structure.
- `struct` **`FOutputInformation`** — [ItemStruct__FOutputInformation](EastRimWorld/Struct/ItemStruct__FOutputInformation.md)
  - **Description:** 资源产出的展示信息
- `struct` **`FOutputInformations`** — [ItemStruct__FOutputInformations](EastRimWorld/Struct/ItemStruct__FOutputInformations.md)
  - **Description:** 资源产出的展示信息
- `struct` **`FPuppetModificationInfo`** — [ItemStruct__FPuppetModificationInfo](EastRimWorld/Struct/ItemStruct__FPuppetModificationInfo.md)
  - **Description:** 傀儡装备改造相关结构体
- `struct` **`FResourcePackage`** — [ItemStruct__FResourcePackage](EastRimWorld/Struct/ItemStruct__FResourcePackage.md)
  - **Description:** 新游戏资源包
- `struct` **`FResourceTypeTextForTag`** — [ItemStruct__FResourceTypeTextForTag](EastRimWorld/Struct/ItemStruct__FResourceTypeTextForTag.md)
  - **Description:** 资源分类名结构只在右上角展示分类
- `struct` **`FStackModel`** — [ItemStruct__FStackModel](EastRimWorld/Struct/ItemStruct__FStackModel.md)
  - **Description:** 定义堆叠模型的结构体
- `struct` **`FTemperatureRange`** — [ItemStruct__FTemperatureRange](EastRimWorld/Struct/ItemStruct__FTemperatureRange.md)
  - **Description:** Temperature Range data structure.
- `struct` **`FTravelerGoodsConfig`** — [ItemStruct__FTravelerGoodsConfig](EastRimWorld/Struct/ItemStruct__FTravelerGoodsConfig.md)
  - **Description:** 商人商品配置
- `struct` **`FTravelerGoodsInfo`** — [ItemStruct__FTravelerGoodsInfo](EastRimWorld/Struct/ItemStruct__FTravelerGoodsInfo.md)
  - **Description:** 商人商品配置
- `struct` **`FTravelerGoodsItem`** — [ItemStruct__FTravelerGoodsItem](EastRimWorld/Struct/ItemStruct__FTravelerGoodsItem.md)
  - **Description:** 商人商品项配置
- `struct` **`FUseItemSaveData`** — [ItemStruct__FUseItemSaveData](EastRimWorld/Struct/ItemStruct__FUseItemSaveData.md)
  - **Description:** Use Item Save Data data structure.
- `struct` **`FWarehouseSmallGrid`** — [ItemStruct__FWarehouseSmallGrid](EastRimWorld/Struct/ItemStruct__FWarehouseSmallGrid.md)
  - **Description:** 仓库中每个小格子信息

## `EastRimWorld/Struct/MartialArts.h`

- `enum` **`EBookClassificationType`** — [MartialArts__EBookClassificationType](EastRimWorld/Struct/MartialArts__EBookClassificationType.md)
  - **Description:** 书籍分类
- `enum` **`EComprehendResult`** — [MartialArts__EComprehendResult](EastRimWorld/Struct/MartialArts__EComprehendResult.md)
  - **Description:** 参悟（重洗词条）操作结果
- `enum` **`EMartialArtsBookType`** — [MartialArts__EMartialArtsBookType](EastRimWorld/Struct/MartialArts__EMartialArtsBookType.md)
  - **Description:** 武学书籍顶层类型（图鉴左侧顶层标签分组用）
- `enum` **`EMartialArtsErrorType`** — [MartialArts__EMartialArtsErrorType](EastRimWorld/Struct/MartialArts__EMartialArtsErrorType.md)
  - **Description:** 武学的错误类型
- `enum` **`EMartialArtsMajorCategories`** — [MartialArts__EMartialArtsMajorCategories](EastRimWorld/Struct/MartialArts__EMartialArtsMajorCategories.md)
  - **Description:** 武学大类
- `enum` **`EMartialArtsMajorUsageType`** — [MartialArts__EMartialArtsMajorUsageType](EastRimWorld/Struct/MartialArts__EMartialArtsMajorUsageType.md)
  - **Description:** 武学大类
- `enum` **`EMartialCannotUse`** — [MartialArts__EMartialCannotUse](EastRimWorld/Struct/MartialArts__EMartialCannotUse.md)
  - **Description:** 武学禁用学习状态
- `struct` **`FAbilityTargetEntriesEffect`** — [MartialArts__FAbilityTargetEntriesEffect](EastRimWorld/Struct/MartialArts__FAbilityTargetEntriesEffect.md)
  - **Description:** 技能触发的词条效果
- `struct` **`FBookInfo`** — [MartialArts__FBookInfo](EastRimWorld/Struct/MartialArts__FBookInfo.md)
  - **Description:** 书籍
- `struct` **`FFMartialArtsCateInfo`** — [MartialArts__FFMartialArtsCateInfo](EastRimWorld/Struct/MartialArts__FFMartialArtsCateInfo.md)
  - **Description:** 武学大类信息
- `struct` **`FMartialArtsBookCategoryData`** — [MartialArts__FMartialArtsBookCategoryData](EastRimWorld/Struct/MartialArts__FMartialArtsBookCategoryData.md)
  - **Description:** 武学书籍种类
- `struct` **`FMartialArtsBookData`** — [MartialArts__FMartialArtsBookData](EastRimWorld/Struct/MartialArts__FMartialArtsBookData.md)
  - **Description:** 武学书籍
- `struct` **`FMartialArtsComprehendSession`** — [MartialArts__FMartialArtsComprehendSession](EastRimWorld/Struct/MartialArts__FMartialArtsComprehendSession.md)
  - **Description:** 当前的参悟会话（瞬态，不存档；确认/取消后清空）
- `struct` **`FMartialArtsComprehendSlot`** — [MartialArts__FMartialArtsComprehendSlot](EastRimWorld/Struct/MartialArts__FMartialArtsComprehendSlot.md)
  - **Description:** 单个词条槽位的参悟预览（参悟前 vs 参悟后）
- `struct` **`FMartialArtsEntries`** — [MartialArts__FMartialArtsEntries](EastRimWorld/Struct/MartialArts__FMartialArtsEntries.md)
  - **Description:** 武学词条
- `struct` **`FMartialArtsLearnData`** — [MartialArts__FMartialArtsLearnData](EastRimWorld/Struct/MartialArts__FMartialArtsLearnData.md)
  - **Description:** 学习的武学信息
- `struct` **`FMartialArtsLevel`** — [MartialArts__FMartialArtsLevel](EastRimWorld/Struct/MartialArts__FMartialArtsLevel.md)
  - **Description:** 武学等级
- `struct` **`FMartialArtsLevelConfig`** — [MartialArts__FMartialArtsLevelConfig](EastRimWorld/Struct/MartialArts__FMartialArtsLevelConfig.md)
  - **Description:** 武学等级配置
- `struct` **`FMartialArtsSaveHandle`** — [MartialArts__FMartialArtsSaveHandle](EastRimWorld/Struct/MartialArts__FMartialArtsSaveHandle.md)
  - **Description:** 学习武学后保存的信息
- `struct` **`FRealmData`** — [MartialArts__FRealmData](EastRimWorld/Struct/MartialArts__FRealmData.md)
  - **Description:** 境界数据
- `struct` **`FReduceCoolDownConfig`** — [MartialArts__FReduceCoolDownConfig](EastRimWorld/Struct/MartialArts__FReduceCoolDownConfig.md)
  - **Description:** 冷却时间减少的配置

## `EastRimWorld/Struct/MonsterNestStruct.h`

- `struct` **`FMonsterNestStruct`** — [MonsterNestStruct__FMonsterNestStruct](EastRimWorld/Struct/MonsterNestStruct__FMonsterNestStruct.md)
  - **Description:** Monster Nest Struct data structure.

## `EastRimWorld/Struct/NewGameStruct.h`

- `struct` **`FCharacteristicNumWeight`** — [NewGameStruct__FCharacteristicNumWeight](EastRimWorld/Struct/NewGameStruct__FCharacteristicNumWeight.md)
  - **Description:** Characteristic Num Weight data structure.
- `struct` **`FNewGamePlace`** — [NewGameStruct__FNewGamePlace](EastRimWorld/Struct/NewGameStruct__FNewGamePlace.md)
  - **Description:** New Game Place data structure.
- `class` **`UNewGameConfigAsset`** — [NewGameStruct__UNewGameConfigAsset](EastRimWorld/Struct/NewGameStruct__UNewGameConfigAsset.md)
  - **Description:** 新游戏流程配置资产

## `EastRimWorld/Struct/ObserveStruct.h`

- `enum` **`EObserveObjectType`** — [ObserveStruct__EObserveObjectType](EastRimWorld/Struct/ObserveStruct__EObserveObjectType.md)
  - **Description:** 观察对象类型
- `struct` **`FObserveObjectsRecordMap`** — [ObserveStruct__FObserveObjectsRecordMap](EastRimWorld/Struct/ObserveStruct__FObserveObjectsRecordMap.md)
  - **Description:** Observe Objects Record Map data structure.
- `struct` **`FObserveProgressesMap`** — [ObserveStruct__FObserveProgressesMap](EastRimWorld/Struct/ObserveStruct__FObserveProgressesMap.md)
  - **Description:** Observe Progresses Map data structure.
- `struct` **`FObserveUnlockInfo`** — [ObserveStruct__FObserveUnlockInfo](EastRimWorld/Struct/ObserveStruct__FObserveUnlockInfo.md)
  - **Description:** Observe Unlock Info data structure.
- `struct` **`FObservedObjectsRecord`** — [ObserveStruct__FObservedObjectsRecord](EastRimWorld/Struct/ObserveStruct__FObservedObjectsRecord.md)
  - **Description:** Observed Objects Record data structure.

## `EastRimWorld/Struct/StoryBackgroundStruct.h`

- `struct` **`FStoryBackgroundAnswerData`** — [StoryBackgroundStruct__FStoryBackgroundAnswerData](EastRimWorld/Struct/StoryBackgroundStruct__FStoryBackgroundAnswerData.md)
  - **Description:** 故事背景选项
- `struct` **`FStoryBackgroundData`** — [StoryBackgroundStruct__FStoryBackgroundData](EastRimWorld/Struct/StoryBackgroundStruct__FStoryBackgroundData.md)
  - **Description:** 故事背景选项（新的）
- `struct` **`FStoryBackgroundQuestionData`** — [StoryBackgroundStruct__FStoryBackgroundQuestionData](EastRimWorld/Struct/StoryBackgroundStruct__FStoryBackgroundQuestionData.md)
  - **Description:** 故事背景问题

## `EastRimWorld/Struct/TechnologyStruct.h`

- `enum` **`ETechCategory`** — [TechnologyStruct__ETechCategory](EastRimWorld/Struct/TechnologyStruct__ETechCategory.md)
  - **Description:** 科技类型
- `enum` **`ETechLevel`** — [TechnologyStruct__ETechLevel](EastRimWorld/Struct/TechnologyStruct__ETechLevel.md)
  - **Description:** 科技等级
- `enum` **`ETechPointType`** — [TechnologyStruct__ETechPointType](EastRimWorld/Struct/TechnologyStruct__ETechPointType.md)
  - **Description:** 科技点数类型
- `enum` **`ETechPrograssState`** — [TechnologyStruct__ETechPrograssState](EastRimWorld/Struct/TechnologyStruct__ETechPrograssState.md)
  - **Description:** 科技研究状态
- `enum` **`ETechUnlockItemType`** — [TechnologyStruct__ETechUnlockItemType](EastRimWorld/Struct/TechnologyStruct__ETechUnlockItemType.md)
  - **Description:** 科技解锁内容类型
- `struct` **`FTechCategoryUIConfigStruct`** — [TechnologyStruct__FTechCategoryUIConfigStruct](EastRimWorld/Struct/TechnologyStruct__FTechCategoryUIConfigStruct.md)
  - **Description:** 科技分类UI配置表结构
- `struct` **`FTechPointConverConfigStruct`** — [TechnologyStruct__FTechPointConverConfigStruct](EastRimWorld/Struct/TechnologyStruct__FTechPointConverConfigStruct.md)
  - **Description:** 科技点数转化配置表结构
- `struct` **`FTechUnlockItemConigStruct`** — [TechnologyStruct__FTechUnlockItemConigStruct](EastRimWorld/Struct/TechnologyStruct__FTechUnlockItemConigStruct.md)
  - **Description:** 科技解锁物品配置表结构
- `struct` **`FTechnologyConfigStruct`** — [TechnologyStruct__FTechnologyConfigStruct](EastRimWorld/Struct/TechnologyStruct__FTechnologyConfigStruct.md)
  - **Description:** 科技配置表结构
- `struct` **`FTechnologyItemStruct`** — [TechnologyStruct__FTechnologyItemStruct](EastRimWorld/Struct/TechnologyStruct__FTechnologyItemStruct.md)
  - **Description:** 科技项目研发进度

## `EastRimWorld/System/Apprenticeship/ApprenticeshipConfigAsset.h`

- `class` **`UApprenticeshipConfigAsset`** — [ApprenticeshipConfigAsset__UApprenticeshipConfigAsset](EastRimWorld/System/Apprenticeship/ApprenticeshipConfigAsset__UApprenticeshipConfigAsset.md)
  - **Description:** 弟子历练配置资产 — 仿 UGamePlayConfigurationAsset。 获取:AERW_GameModeBase::GetApprenticeshipConfigAsset() (GameConfigComponent 按 EGameDataAssetType::ApprenticeshipConfiguration 索引; 需在 GameConfigComponent.GameDataAsset 里配 DA_ApprenticeshipConfig 软引用)。 集中历练系统所有可调数值,替代 AApprenticeshipManager 里的硬编码。 未配置时管理器回退到本类 CDO(即下面这些默认初值),不会崩。

## `EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow.h`

- `enum` **`EApprenticeshipConditionType`** — [ApprenticeshipDataRow__EApprenticeshipConditionType](EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow__EApprenticeshipConditionType.md)
  - **Description:** 历练事件触发条件类型(可扩展)
- `enum` **`EApprenticeshipEventImportance`** — [ApprenticeshipDataRow__EApprenticeshipEventImportance](EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow__EApprenticeshipEventImportance.md)
  - **Description:** 历练事件重要度
- `enum` **`EApprenticeshipEventType`** — [ApprenticeshipDataRow__EApprenticeshipEventType](EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow__EApprenticeshipEventType.md)
  - **Description:** 历练事件类型
- `struct` **`FApprenticeshipEventCondition`** — [ApprenticeshipDataRow__FApprenticeshipEventCondition](EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow__FApprenticeshipEventCondition.md)
  - **Description:** Apprenticeship Event Condition data structure.
- `struct` **`FApprenticeshipEventRow`** — [ApprenticeshipDataRow__FApprenticeshipEventRow](EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow__FApprenticeshipEventRow.md)
  - **Description:** 历练事件 DataTable 行结构 配套资产: DT_ApprenticeshipEvents (路径由策划在编辑器里建)

## `EastRimWorld/System/Apprenticeship/ApprenticeshipDispatchWidget.h`

- `class` **`UApprenticeshipDispatchWidget`** — [ApprenticeshipDispatchWidget__UApprenticeshipDispatchWidget](EastRimWorld/System/Apprenticeship/ApprenticeshipDispatchWidget__UApprenticeshipDispatchWidget.md)
  - **Description:** 派遣弹框控件基类 — 负责从 AApprenticeshipManager 查询城市奖励类型概览, 并按策划配置的优先级过滤后暴露给蓝图显示"特产"图标。 使用方式: 1. 在编辑器蓝图子类里填 SpecialOutputPriority(高→低排列期望展示的 Type) 2. 填 SpecialOutputDisplayText(可选;无配置则回退枚举 DisplayName) 3. 调 GetCitySpecialOutputs(CityGuid, MaxCount) 取文本列表绑定到 UI 控件

## `EastRimWorld/System/Apprenticeship/ApprenticeshipManager.h`

- `class` **`AApprenticeshipManager`** — [ApprenticeshipManager__AApprenticeshipManager](EastRimWorld/System/Apprenticeship/ApprenticeshipManager__AApprenticeshipManager.md)
  - **Description:** 弟子历练管理器 — 单一 Actor 管理器(纯数据驱动) 取代 UApprenticeshipComponent + UApprenticeshipSubsystem + UApprenticeshipDispatchManager + UApprenticeshipMapIconManager。 全部历练以 FApprenticeshipRecord(纯数据)承载在 Records 里;玩家/NPC 同一套流程, 差异仅 bIsNPC + 收益分流。地图移动与表现归 AWorldMapManage,本管理器只做数据计算, 状态变化(出发/逗留/转城/归途)时调用 AWorldMapManage 更新 2D 移动。 驱动: - 每日推进:绑定 AWorldDirector::OnGameDayChang...
- `struct` **`FApprenticeshipTempDestination`** — [ApprenticeshipManager__FApprenticeshipTempDestination](EastRimWorld/System/Apprenticeship/ApprenticeshipManager__FApprenticeshipTempDestination.md)
  - **Description:** [涌现 §4.8 江湖现洞府] 临时历练目的地 — 涌现侦测沉寂地"现洞府"后运行时注册, 让该地点(可非中心城)成为可派遣历练目的地并叠加专属探宝事件, 到期自动失效。

## `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

- `enum` **`EApprenticeshipRewardType`** — [ApprenticeshipRewardTypes__EApprenticeshipRewardType](EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)
  - **Description:** ───────────────────────────────────────────────────────────── 奖励类型(列举旧硬编码全部类型 + 新增装备/历练点/回溯点) ─────────────────────────────────────────────────────────────
- `struct` **`FApprenticeshipRandomReward`** — [ApprenticeshipRewardTypes__FApprenticeshipRandomReward](EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes__FApprenticeshipRandomReward.md)
  - **Description:** ───────────────────────────────────────────────────────────── 带权重的随机奖励候选(引用 RewardID, 便于复用) ─────────────────────────────────────────────────────────────
- `struct` **`FApprenticeshipReward`** — [ApprenticeshipRewardTypes__FApprenticeshipReward](EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes__FApprenticeshipReward.md)
  - **Description:** ───────────────────────────────────────────────────────────── 单个奖励(DT_ApprenticeshipReward 行, 继承 FDataBase; RowName/ID = RewardID) 被集合的 FixedRewardIDs / RandomRewards 通过 RewardID 引用, 可跨集合复用 ─────────────────────────────────────────────────────────────
- `struct` **`FApprenticeshipRewardPoolRow`** — [ApprenticeshipRewardTypes__FApprenticeshipRewardPoolRow](EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes__FApprenticeshipRewardPoolRow.md)
  - **Description:** ───────────────────────────────────────────────────────────── 奖励池(DT_RewardPool 行, 继承 FDataBase; RowName/ID = PoolID, 事件行 RewardPoolID 引用) ─────────────────────────────────────────────────────────────
- `struct` **`FApprenticeshipRewardSet`** — [ApprenticeshipRewardTypes__FApprenticeshipRewardSet](EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes__FApprenticeshipRewardSet.md)
  - **Description:** ───────────────────────────────────────────────────────────── 奖励集合(DT_ApprenticeshipRewardSet 行, 继承 FDataBase; RowName/ID = SetID) 被奖励池的 RewardSets 通过 SetID 引用, 可跨池复用 ─────────────────────────────────────────────────────────────
- `struct` **`FApprenticeshipRewardSetRef`** — [ApprenticeshipRewardTypes__FApprenticeshipRewardSetRef](EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes__FApprenticeshipRewardSetRef.md)
  - **Description:** ───────────────────────────────────────────────────────────── 奖励池内的集合引用(SetID + 抽中权重) ─────────────────────────────────────────────────────────────

## `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

- `enum` **`EApprenticeshipState`** — [ApprenticeshipTypes__EApprenticeshipState](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__EApprenticeshipState.md)
  - **Description:** 弟子历练状态机 — 7 个状态 完全来自 DiscipleApprenticeship_System.md §2
- `struct` **`FApprenticeshipCityInfo`** — [ApprenticeshipTypes__FApprenticeshipCityInfo](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipCityInfo.md)
  - **Description:** 可派目的城快照(派遣面板)
- `struct` **`FApprenticeshipDetailInfo`** — [ApprenticeshipTypes__FApprenticeshipDetailInfo](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipDetailInfo.md)
  - **Description:** 单条历练详情快照(玩家点开某在途弟子)
- `struct` **`FApprenticeshipDiscipleInfo`** — [ApprenticeshipTypes__FApprenticeshipDiscipleInfo](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipDiscipleInfo.md)
  - **Description:** 可派弟子快照(派遣面板选人)
- `struct` **`FApprenticeshipDispatchCityPreview`** — [ApprenticeshipTypes__FApprenticeshipDispatchCityPreview](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipDispatchCityPreview.md)
  - **Description:** 派遣面板 — 单座目的城的显示快照(好感 + 可获奖励类型概览)
- `struct` **`FApprenticeshipDispatchInfo`** — [ApprenticeshipTypes__FApprenticeshipDispatchInfo](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipDispatchInfo.md)
  - **Description:** 在途弟子快照(历练面板列表)
- `struct` **`FApprenticeshipEventHistoryItem`** — [ApprenticeshipTypes__FApprenticeshipEventHistoryItem](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipEventHistoryItem.md)
  - **Description:** 详情-单条经历事件(事件名 + 触发时间)
- `struct` **`FApprenticeshipEventLogEntry`** — [ApprenticeshipTypes__FApprenticeshipEventLogEntry](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipEventLogEntry.md)
  - **Description:** 单条历练事件历史项(事件 ID + 触发时间),供详情 UI 按时间罗列经历
- `struct` **`FApprenticeshipExpEntry`** — [ApprenticeshipTypes__FApprenticeshipExpEntry](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipExpEntry.md)
  - **Description:** 详情-单项武学经验(分类短名 + 累计经验)
- `struct` **`FApprenticeshipGrantedInjury`** — [ApprenticeshipTypes__FApprenticeshipGrantedInjury](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipGrantedInjury.md)
  - **Description:** 历练中受的一处伤势(归来时构造 FInjuryEffectInstance 挂到弟子)
- `struct` **`FApprenticeshipHarvest`** — [ApprenticeshipTypes__FApprenticeshipHarvest](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipHarvest.md)
  - **Description:** 历练成果累积 — 归来时结算 来源: DiscipleApprenticeship_System.md §3
- `struct` **`FApprenticeshipHarvestView`** — [ApprenticeshipTypes__FApprenticeshipHarvestView](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipHarvestView.md)
  - **Description:** 详情-总收获(按奖励类型分组)
- `struct` **`FApprenticeshipRecord`** — [ApprenticeshipTypes__FApprenticeshipRecord](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipRecord.md)
  - **Description:** Apprenticeship Record data structure.
- `struct` **`FApprenticeshipRelationEntry`** — [ApprenticeshipTypes__FApprenticeshipRelationEntry](EastRimWorld/System/Apprenticeship/ApprenticeshipTypes__FApprenticeshipRelationEntry.md)
  - **Description:** 详情-单项关系变化(门派 Guid + 名称 + Delta)

## `EastRimWorld/System/AreaControl/AreaControlTypes.h`

- `enum` **`EAreaHungerState`** — [AreaControlTypes__EAreaHungerState](EastRimWorld/System/AreaControl/AreaControlTypes__EAreaHungerState.md)
  - **Description:** 饥饿越区状态机当前态（挂 UERW_AreaAssignmentComponent）。
- `enum` **`EAreaType`** — [AreaControlTypes__EAreaType](EastRimWorld/System/AreaControl/AreaControlTypes__EAreaType.md)
  - **Description:** 区域类型。Function 为 Phase2 功能区 buff 预留，本期不实装。
- `struct` **`FAreaBuildingData`** — [AreaControlTypes__FAreaBuildingData](EastRimWorld/System/AreaControl/AreaControlTypes__FAreaBuildingData.md)
  - **Description:** 区域配置数据。 【核心】存进旗建筑的 BuildingData[EBuildingDataType::Area]（FInstancedStruct）， 随 FBuildObjectSaveData.BuildingData 存档复原——不靠建筑子类、不靠裸 SaveGame 字段。 字段标 SaveGame 以随 BuildingData 序列化（仿 FEnergyData）。
- `struct` **`FAreaFilter`** — [AreaControlTypes__FAreaFilter](EastRimWorld/System/AreaControl/AreaControlTypes__FAreaFilter.md)
  - **Description:** 地理过滤器：OBB 点内判定（Z 不约束），传给 GOAP 做候选目标剔除。 运行期临时对象，不存档。bAllowAll=true 时一切放行（通用/待修复/越区/俘虏/带队/战斗软化）。
- `struct` **`FAreaPaletteEntry`** — [AreaControlTypes__FAreaPaletteEntry](EastRimWorld/System/AreaControl/AreaControlTypes__FAreaPaletteEntry.md)
  - **Description:** 调色板单项（默认 12 槽，色值待美术填，R8）。

## `EastRimWorld/System/AreaControl/AreaPaletteAsset.h`

- `class` **`UAreaPaletteAsset`** — [AreaPaletteAsset__UAreaPaletteAsset](EastRimWorld/System/AreaControl/AreaPaletteAsset__UAreaPaletteAsset.md)
  - **Description:** Area Palette Asset UObject type.

## `EastRimWorld/System/AreaControl/ERW_AreaAssignmentComponent.h`

- `class` **`UERW_AreaAssignmentComponent`** — [ERW_AreaAssignmentComponent__UERW_AreaAssignmentComponent](EastRimWorld/System/AreaControl/ERW_AreaAssignmentComponent__UERW_AreaAssignmentComponent.md)
  - **Description:** RW Area Assignment Component UObject type.

## `EastRimWorld/System/AreaControl/ERW_AreaSubsystem.h`

- `class` **`UERW_AreaSubsystem`** — [ERW_AreaSubsystem__UERW_AreaSubsystem](EastRimWorld/System/AreaControl/ERW_AreaSubsystem__UERW_AreaSubsystem.md)
  - **Description:** RW Area Subsystem UObject type.

## `EastRimWorld/System/BreakThrough/BreakThroughManager.h`

- `class` **`ABreakThroughManager`** — [BreakThroughManager__ABreakThroughManager](EastRimWorld/System/BreakThrough/BreakThroughManager__ABreakThroughManager.md)
  - **Description:** 角色突破管理器

## `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

- `enum` **`EBreakThroughState`** — [BreakThroughStruct__EBreakThroughState](EastRimWorld/System/BreakThrough/BreakThroughStruct__EBreakThroughState.md)
  - **Description:** 突破状态
- `struct` **`FBreakThroughInfo`** — [BreakThroughStruct__FBreakThroughInfo](EastRimWorld/System/BreakThrough/BreakThroughStruct__FBreakThroughInfo.md)
  - **Description:** 突破信息实例
- `struct` **`FSkillPoolConfig`** — [BreakThroughStruct__FSkillPoolConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FSkillPoolConfig.md)
  - **Description:** 技能池配置
- `struct` **`FTrainingRoomConfig`** — [BreakThroughStruct__FTrainingRoomConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FTrainingRoomConfig.md)
  - **Description:** 练功房配置
- `struct` **`FTrainingRoomLevelConfig`** — [BreakThroughStruct__FTrainingRoomLevelConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FTrainingRoomLevelConfig.md)
  - **Description:** 练功房等级配置
- `struct` **`FWeatherBonusConfig`** — [BreakThroughStruct__FWeatherBonusConfig](EastRimWorld/System/BreakThrough/BreakThroughStruct__FWeatherBonusConfig.md)
  - **Description:** 天气加成配置
- `class` **`UBreakThroughConfigurationAsset`** — [BreakThroughStruct__UBreakThroughConfigurationAsset](EastRimWorld/System/BreakThrough/BreakThroughStruct__UBreakThroughConfigurationAsset.md)
  - **Description:** 突破配置资产

## `EastRimWorld/System/Consumable/ConsumableConfigAsset.h`

- `class` **`UConsumableConfigAsset`** — [ConsumableConfigAsset__UConsumableConfigAsset](EastRimWorld/System/Consumable/ConsumableConfigAsset__UConsumableConfigAsset.md)
  - **Description:** 耗材配置资产 — 仿 UApprenticeshipConfigAsset。 获取:AERW_GameModeBase::GetConsumableConfigAsset() (GameConfigComponent 按 EGameDataAssetType::ConsumableConfiguration 索引; 需在 GameConfigComponent.GameDataAsset 里配 DA_ConsumableConfig 软引用)。

## `EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorSubsystem.h`

- `class` **`UERW_ControlBehaviorSubsystem`** — [ERW_ControlBehaviorSubsystem__UERW_ControlBehaviorSubsystem](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorSubsystem__UERW_ControlBehaviorSubsystem.md)
  - **Description:** RW Control Behavior Subsystem UObject type.

## `EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes.h`

- `enum` **`EControlBehaviorCondition`** — [ERW_ControlBehaviorTypes__EControlBehaviorCondition](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes__EControlBehaviorCondition.md)
  - **Description:** Control Behavior Condition enum type.
- `enum` **`EHumanBehaviorExecuteResult`** — [ERW_ControlBehaviorTypes__EHumanBehaviorExecuteResult](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes__EHumanBehaviorExecuteResult.md)
  - **Description:** Human Behavior Execute Result enum type.
- `enum` **`ENoPublishActionType`** — [ERW_ControlBehaviorTypes__ENoPublishActionType](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes__ENoPublishActionType.md)
  - **Description:** No Publish Action Type enum type.
- `enum` **`ETargetBehaviorType`** — [ERW_ControlBehaviorTypes__ETargetBehaviorType](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes__ETargetBehaviorType.md)
  - **Description:** Target Behavior Type enum type.
- `struct` **`FControlBehaviorActionType`** — [ERW_ControlBehaviorTypes__FControlBehaviorActionType](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes__FControlBehaviorActionType.md)
  - **Description:** 行为动作类型（公共按钮 / 不发布类 GOAP 行为）
- `struct` **`FTargetBehaviorInfo`** — [ERW_ControlBehaviorTypes__FTargetBehaviorInfo](EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes__FTargetBehaviorInfo.md)
  - **Description:** Target Behavior Info data structure.

## `EastRimWorld/System/Dialogue/DialogueManager.h`

- `class` **`ADialogueManager`** — [DialogueManager__ADialogueManager](EastRimWorld/System/Dialogue/DialogueManager__ADialogueManager.md)
  - **Description:** Dialogue Manager actor type.

## `EastRimWorld/System/Dialogue/DialogueStruct.h`

- `enum` **`EDialogueActorType`** — [DialogueStruct__EDialogueActorType](EastRimWorld/System/Dialogue/DialogueStruct__EDialogueActorType.md)
  - **Description:** 对话发起者或者被发起的类型
- `enum` **`EDialogueCharacterInfoType`** — [DialogueStruct__EDialogueCharacterInfoType](EastRimWorld/System/Dialogue/DialogueStruct__EDialogueCharacterInfoType.md)
  - **Description:** 显示角色信息类型
- `enum` **`EDialogueOptionType`** — [DialogueStruct__EDialogueOptionType](EastRimWorld/System/Dialogue/DialogueStruct__EDialogueOptionType.md)
  - **Description:** Dialogue Option Type enum type.
- `enum` **`EDialogueTriggerFunctionType`** — [DialogueStruct__EDialogueTriggerFunctionType](EastRimWorld/System/Dialogue/DialogueStruct__EDialogueTriggerFunctionType.md)
  - **Description:** 触发额外功能类型
- `struct` **`FDialogueGroup`** — [DialogueStruct__FDialogueGroup](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueGroup.md)
  - **Description:** 对话组
- `struct` **`FDialogueGroupItem`** — [DialogueStruct__FDialogueGroupItem](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueGroupItem.md)
  - **Description:** Dialogue Group Item data structure.
- `struct` **`FDialogueInfo`** — [DialogueStruct__FDialogueInfo](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueInfo.md)
  - **Description:** 对话信息
- `struct` **`FDialogueOption`** — [DialogueStruct__FDialogueOption](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueOption.md)
  - **Description:** 对话选项
- `struct` **`FDialogueRandOptions`** — [DialogueStruct__FDialogueRandOptions](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueRandOptions.md)
  - **Description:** Dialogue Rand Options data structure.
- `struct` **`FDialogueRandOptionsArray`** — [DialogueStruct__FDialogueRandOptionsArray](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueRandOptionsArray.md)
  - **Description:** Dialogue Rand Options Array data structure.
- `struct` **`FDialogueSpec`** — [DialogueStruct__FDialogueSpec](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueSpec.md)
  - **Description:** 具体对话
- `struct` **`FDialogueTriggerFunctionData`** — [DialogueStruct__FDialogueTriggerFunctionData](EastRimWorld/System/Dialogue/DialogueStruct__FDialogueTriggerFunctionData.md)
  - **Description:** Dialogue Trigger Function Data data structure.

## `EastRimWorld/System/Dominion/DominionConfigAsset.h`

- `class` **`UDominionConfigAsset`** — [DominionConfigAsset__UDominionConfigAsset](EastRimWorld/System/Dominion/DominionConfigAsset__UDominionConfigAsset.md)
  - **Description:** 世界势力割据配置资产 — 仿 UApprenticeshipConfigAsset。 获取:AERW_GameModeBase::GetDominionConfigAsset() (GameConfigComponent 按 EGameDataAssetType::DominionConfiguration 索引; 需在 GameConfigComponent.GameDataAsset 里配 DA_DominionConfig 软引用)。 集中割据系统所有可调数值;未配置时管理器回退到本类 CDO(下面默认初值),不会崩。

## `EastRimWorld/System/Dominion/DominionManager.h`

- `class` **`ADominionManager`** — [DominionManager__ADominionManager](EastRimWorld/System/Dominion/DominionManager__ADominionManager.md)
  - **Description:** 世界势力割据管理器 — 单一 Actor 管理器(纯数据驱动,参考 AApprenticeshipManager) 职责: 1. 城市门派容量:每城按城市等级有附属门派容量上限,满员不可加入(只有 CenterCity 可承载附属门派) 2. 依附与纳税:附属门派(必为 NPC,玩家不会成为附属门派)周期向城主纳税(NPC 城主得积分,玩家城主 1:1 得铜币) 3. 周期积分加成:附属门派定期积分按所在城市等级/繁荣度百分比加成(钩在 AWorldForce::OnGameDayChanged) 4. NPC 城主治理:按性格(激进/中立/保守)周期自动 驱逐/加税/批准迁入 5. 城市易主:城内门派转依附新城主(钩在 AWorldPlace::OccupyPlace → OnCityOwnerChan...

## `EastRimWorld/System/Dominion/DominionTypes.h`

- `enum` **`ELordAttackPermission`** — [DominionTypes__ELordAttackPermission](EastRimWorld/System/Dominion/DominionTypes__ELordAttackPermission.md)
  - **Description:** 城主对玩家攻打城内门派的态度许可
- `enum` **`ESectLeaveCityReason`** — [DominionTypes__ESectLeaveCityReason](EastRimWorld/System/Dominion/DominionTypes__ESectLeaveCityReason.md)
  - **Description:** 门派离城原因
- `struct` **`FCityDominionState`** — [DominionTypes__FCityDominionState](EastRimWorld/System/Dominion/DominionTypes__FCityDominionState.md)
  - **Description:** 一座城市的割据状态(key=城市Guid)
- `struct` **`FDominionIntelInfo`** — [DominionTypes__FDominionIntelInfo](EastRimWorld/System/Dominion/DominionTypes__FDominionIntelInfo.md)
  - **Description:** 交流-索取情报返回的城市情报快照(不存档)
- `struct` **`FGovernanceTendency`** — [DominionTypes__FGovernanceTendency](EastRimWorld/System/Dominion/DominionTypes__FGovernanceTendency.md)
  - **Description:** 城主性格治理倾向(配置:激进/中立/保守 各一份)
- `struct` **`FSectDominionInfo`** — [DominionTypes__FSectDominionInfo](EastRimWorld/System/Dominion/DominionTypes__FSectDominionInfo.md)
  - **Description:** 单个门派的割据全局记录(key=势力Guid)
- `struct` **`FSectResidencyInfo`** — [DominionTypes__FSectResidencyInfo](EastRimWorld/System/Dominion/DominionTypes__FSectResidencyInfo.md)
  - **Description:** 一个附属门派在某城的进驻信息(随城市记录)

## `EastRimWorld/System/Emergence/Bridges/IronVeinBridge.h`

- `class` **`UIronVeinBridge`** — [IronVeinBridge__UIronVeinBridge](EastRimWorld/System/Emergence/Bridges/IronVeinBridge__UIronVeinBridge.md)
  - **Description:** Iron Vein Bridge UObject type.

## `EastRimWorld/System/Emergence/Bridges/RivalRaidBridge.h`

- `class` **`URivalRaidBridge`** — [RivalRaidBridge__URivalRaidBridge](EastRimWorld/System/Emergence/Bridges/RivalRaidBridge__URivalRaidBridge.md)
  - **Description:** Rival Raid Bridge UObject type.

## `EastRimWorld/System/Emergence/Bridges/SwordMeetBridge.h`

- `class` **`USwordMeetBridge`** — [SwordMeetBridge__USwordMeetBridge](EastRimWorld/System/Emergence/Bridges/SwordMeetBridge__USwordMeetBridge.md)
  - **Description:** Sword Meet Bridge UObject type.

## `EastRimWorld/System/Emergence/Core/EmergenceDirectorSubsystem.h`

- `class` **`AEmergenceDirector`** — [EmergenceDirectorSubsystem__AEmergenceDirector](EastRimWorld/System/Emergence/Core/EmergenceDirectorSubsystem__AEmergenceDirector.md)
  - **Description:** 涌现导演 — v3.0 的"江湖导演"。 【存档】曾是 UWorldSubsystem, 但 Savior 不持久化世界子系统的 SaveGame 字段(沉寂闭环/冷却/快照/桥记录会丢)。 故改为单一 Actor 管理器(纯数据驱动, 与 ADominionManager / AApprenticeshipManager 同写法): ALActor + ISAVIOR_Serializable + ISAVIOR_Procedural, SaveGame 字段随 Actor 经 Savior 入档。 由 UWorldManagerSystem::FindOrCreateWorldManageActors 用 StaticClass 直接 spawn; 单例 GetEmergenceDirector()。...

## `EastRimWorld/System/Emergence/Data/EmergenceConfigAsset.h`

- `class` **`UEmergenceConfigAsset`** — [EmergenceConfigAsset__UEmergenceConfigAsset](EastRimWorld/System/Emergence/Data/EmergenceConfigAsset__UEmergenceConfigAsset.md)
  - **Description:** Emergence Config Asset UObject type.

## `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

- `enum` **`EEmergenceLogActionType`** — [EmergenceTypes__EEmergenceLogActionType](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergenceLogActionType.md)
  - **Description:** 日志点击动作类型(可扩展, 存档稳定: 只可在 MAX 前追加)
- `enum` **`EEmergenceLogLinkFlag`** — [EmergenceTypes__EEmergenceLogLinkFlag](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergenceLogLinkFlag.md)
  - **Description:** 涌现日志实体超链接类型(按位开关; 每条日志文案单独配哪些类型渲染为可点击超链接)
- `enum` **`EEmergencePressureDim`** — [EmergenceTypes__EEmergencePressureDim](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergencePressureDim.md)
  - **Description:** 涌现压力维度 — 策划案 §2 的 10 个正向压力维度。 每个维度做两件事: ① 决定题材(压力越高对应题材越容易冒) ② 指向对象(记下令它最高的具体对象)。 注意: 这是"正向压力"。反向闸门(防刷屏)单独用 FEmergenceReverseGate 表达, 不在此枚举内。 ⚠️ 存档稳定性: 本枚举作 FEmergencePressureSnapshot::Pressures 的 TMap key 入档, 序列化按数值。**只可在 MAX 前追加新维度, 不可重排/插入中段**, 否则旧档键值错位。
- `enum` **`EEmergenceSlotType`** — [EmergenceTypes__EEmergenceSlotType](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergenceSlotType.md)
  - **Description:** 压力对象类型 — 该维压力指向的世界对象是什么(事件从快照取对象时判断进哪个候选池语义)。
- `enum` **`EEmergentBridgeType`** — [EmergenceTypes__EEmergentBridgeType](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergentBridgeType.md)
  - **Description:** 事件桥类型(存档稳定: 只可在 MAX 前追加, 不可重排/删值)
- `enum` **`EEmergentEventCategory`** — [EmergenceTypes__EEmergentEventCategory](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergentEventCategory.md)
  - **Description:** 涌现事件题材分类 — 策划案 §4 的 13 类。 事件库(DT_EmergentEvents)每行用此枚举归类; 题材权重表按此分类挂权重。
- `enum` **`EEmergentSpecialHandling`** — [EmergenceTypes__EEmergentSpecialHandling](EastRimWorld/System/Emergence/Data/EmergenceTypes__EEmergentSpecialHandling.md)
  - **Description:** 事件特殊落地处理 — 某些事件冒出后需 SpawnRow 做额外硬逻辑(非通用通道分发/PlaceQuest)。 用枚举区分, 避免按 EventID 硬编码。可扩展: 只在 MAX 前追加。
- `struct` **`FEmergenceDirectorSignals`** — [EmergenceTypes__FEmergenceDirectorSignals](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceDirectorSignals.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── Director 维护并传入压力库的"世界外部信号"。 缺失的底层信号(沉滞天数 / 火并冷却 / 上季快照)不假装世界已有, 由 Director 闭环维护后传入。 ─────────────────────────────────────────────────────────────────────────────
- `struct` **`FEmergenceEventBridgeRecord`** — [EmergenceTypes__FEmergenceEventBridgeRecord](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceEventBridgeRecord.md)
  - **Description:** 事件桥统一存档记录。Director 持 TArray 入档; 读档时按 BridgeType 动态重建对应派生桥。 各事件的状态结构体经 FInstancedStruct 多态存储(Savior 支持), 按 BridgeType 决定其内实际类型。
- `struct` **`FEmergenceForceSeasonSnapshot`** — [EmergenceTypes__FEmergenceForceSeasonSnapshot](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceForceSeasonSnapshot.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── 兴衰压力·暴起子项的"上季势力快照" — Director 每季滚存, 供 SurgeRatio 环比(本季/上季)。 只含 POD(float/int), Savior 嵌套序列化安全(无裸指针)。 ─────────────────────────────────────────────────────────────────────────────
- `struct` **`FEmergenceIronVeinState`** — [EmergenceTypes__FEmergenceIronVeinState](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceIronVeinState.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── 玄铁矿脉(IronVein) — 活跃实例状态(Director 持有, 入档)。 以据点产出周期为节拍: 每拍发起一次连环攻打 + 求助判定; 持续 RemainingCycles 拍后移除特产并结束。 只含 POD/FText/FName, Savior 嵌套序列化安全。 ─────────────────────────────────────────────────────────────────────────────
- `struct` **`FEmergenceLogAction`** — [EmergenceTypes__FEmergenceLogAction](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceLogAction.md)
  - **Description:** 日志的一个可点击动作 — 随事件/阶段不同(如触发一段对话)。随日志条目入档。 点击执行走 UEmergenceLogComponent::ExecuteLogAction(会先做阶段有效性判定)。
- `struct` **`FEmergenceLogText`** — [EmergenceTypes__FEmergenceLogText](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceLogText.md)
  - **Description:** 涌现日志文案 — 文本 + 本条日志中哪些实体类型渲染为可点击超链接(未勾选的以纯文本渲染)。 尾随动作链接(对话/报名, 由 Actions 的 Label 生成)不受此开关控制——那是事件的功能入口。
- `struct` **`FEmergencePlaceQuestState`** — [EmergenceTypes__FEmergencePlaceQuestState](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergencePlaceQuestState.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── 限时地点事件 — 活跃实例状态(Director 持有, 入档)。 桥据此在"被注入历练事件触发(已触发)"或"临时目的地到期(限时结束)"时播报结果。 只含 POD(FName/FGuid/int/bool/数组), Savior 嵌套序列化安全。 ─────────────────────────────────────────────────────────────────────────────
- `struct` **`FEmergencePressure`** — [EmergenceTypes__FEmergencePressure](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergencePressure.md)
  - **Description:** 单维压力 — 一个压力维度的评估结果。 Value 归一化到 [0,1]; RankedObjects 是"令该维度压力最高的对象组"(策划案 §2 "指向对象", 按压力降序前若干位), 事件落地/结算直接从快照取对象(单对象维取 ObjectA, 成对维取 A+B; 建议在前几位里随机, 避免连续事件总取同一对象)。
- `struct` **`FEmergencePressureObject`** — [EmergenceTypes__FEmergencePressureObject](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergencePressureObject.md)
  - **Description:** 压力指向对象条目 — 单对象维只填 ObjectA(如最沉寂地/最重伤弟子); 成对维两个都填(如结仇: ObjectA+ObjectB=一对仇家)。
- `struct` **`FEmergencePressureSnapshot`** — [EmergenceTypes__FEmergencePressureSnapshot](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergencePressureSnapshot.md)
  - **Description:** 江湖压力快照 — 一拍心跳评估出的完整世界压力。存档持久化(供 UI / 读档即时显示)。 这是"导演大脑"的核心读数。第一步"冒不冒"合成 TotalPressure 掷骰; 第二步"冒哪个"按各维度强度给题材加权; 事件落地/结算经 GetRankedObjects/GetRandomObject 直接从快照取参与对象(槽位机制已删)。
- `struct` **`FEmergencePressureTuning`** — [EmergenceTypes__FEmergencePressureTuning](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergencePressureTuning.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── 压力调参 — 各维度归一化阈值/系数 + 合成权重 集中所有"凭直觉拍的数值"(策划案 §9.4), 由 UEmergenceConfigAsset 持有, PIE 调手感。 默认值与原 UEmergencePressureLibrary constexpr 一致, 不配资产时退 CDO 默认即原行为。 ─────────────────────────────────────────────────────────────────────────────
- `struct` **`FEmergenceReverseGate`** — [EmergenceTypes__FEmergenceReverseGate](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceReverseGate.md)
  - **Description:** 反向闸门(防刷屏) — 策划案 §2 "反向闸门"。 与 10 个正向压力语义相反, 不管题材只管节流: 玩家正经历危机时压低/关闭冒事。 Throttle ∈ [0,1]: 1=完全放行, 0=完全关闭。
- `struct` **`FEmergenceRivalRaidState`** — [EmergenceTypes__FEmergenceRivalRaidState](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceRivalRaidState.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── 强袭宿敌(RivalRaid) — 含玩家"驻地致命对决"的活跃实例(Director 持有, 入档)。 不含玩家分支为即时结算, 无状态; 含玩家分支对决走驿站切磋系统, 桥只记等待/结果。 ─────────────────────────────────────────────────────────────────────────────
- `struct` **`FEmergenceSwordMeetState`** — [EmergenceTypes__FEmergenceSwordMeetState](EastRimWorld/System/Emergence/Data/EmergenceTypes__FEmergenceSwordMeetState.md)
  - **Description:** ───────────────────────────────────────────────────────────────────────────── 论剑大会(SwordMeet) — 活跃实例(Director 持有, 入档; 单实例)。 英雄帖发出后, 持续 DurationSeconds 再出三甲; 期间玩家可参赛(记录所选弟子)。 ─────────────────────────────────────────────────────────────────────────────

## `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

- `struct` **`FEmergencePlaceQuestDef`** — [EmergentEventRow__FEmergencePlaceQuestDef](EastRimWorld/System/Emergence/Data/EmergentEventRow__FEmergencePlaceQuestDef.md)
  - **Description:** 限时地点事件配置 — 本事件落地时向"从快照选出的 Place"注入一条限时/限次的历练事件。 奖励不在此配 —— 由被注入的历练事件行(ApprenticeshipEventIDs)的 RewardPoolID(掉落集)负责。
- `struct` **`FEmergentEventRow`** — [EmergentEventRow__FEmergentEventRow](EastRimWorld/System/Emergence/Data/EmergentEventRow__FEmergentEventRow.md)
  - **Description:** 涌现事件库数据行 — 对应 DT_EmergentEvents。继承项目数据表统一基类 FDataBase(提供 ID + Comment)。 主键 = ID(来自 FDataBase)。新增事件直接在表里加行即可, 无需改 C++ (可扩展性核心)。
- `struct` **`FIronVeinDef`** — [EmergentEventRow__FIronVeinDef](EastRimWorld/System/Emergence/Data/EmergentEventRow__FIronVeinDef.md)
  - **Description:** 玄铁矿脉配置 — 事件落地时向地点注入特产, 以产出周期为节拍连环攻打 + 求助军械, 持续 DurationCycles 个周期后移除特产并结束。(SpecialHandling=IronVein 时生效)
- `struct` **`FRivalRaidDef`** — [EmergentEventRow__FRivalRaidDef](EastRimWorld/System/Emergence/Data/EmergentEventRow__FRivalRaidDef.md)
  - **Description:** 强袭宿敌配置 — 最仇对各出最强弟子决斗。不含玩家=即时数据定胜负; 含玩家=驻地致命对决。 (SpecialHandling=RivalRaid 时生效)
- `struct` **`FSwordMeetDef`** — [EmergentEventRow__FSwordMeetDef](EastRimWorld/System/Emergence/Data/EmergentEventRow__FSwordMeetDef.md)
  - **Description:** 论剑大会配置 — 势力前N各出1人(掌门外最强), 玩家可参赛(选n名); 持续后按战力加权出三甲+声望奖励。 不观赛只数据结算。(SpecialHandling=SwordMeet 时生效)

## `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

- `enum` **`EEmergenceLogLinkType`** — [EmergenceLogComponent__EEmergenceLogLinkType](EastRimWorld/System/Emergence/Log/EmergenceLogComponent__EEmergenceLogLinkType.md)
  - **Description:** 日志超链接点击动作类型(由 wid 前缀在 C++ 内转换后直接广播; 可扩展: 只可在末尾追加)
- `struct` **`FEmergenceLogEntry`** — [EmergenceLogComponent__FEmergenceLogEntry](EastRimWorld/System/Emergence/Log/EmergenceLogComponent__FEmergenceLogEntry.md)
  - **Description:** 涌现事件日志条目 —— 一条江湖事件记录。随 ASaveGameDataActor 经 Savior 入档。
- `struct` **`FEmergenceLogLinkPayload`** — [EmergenceLogComponent__FEmergenceLogLinkPayload](EastRimWorld/System/Emergence/Log/EmergenceLogComponent__FEmergenceLogLinkPayload.md)
  - **Description:** 日志超链接点击载荷 — 广播用结构体(便于扩展; wid 载荷支持多 Guid: "类型:Guid1,Guid2,...")。 新链接类型加字段/枚举即可, 不动委托签名。
- `class` **`UEmergenceLogComponent`** — [EmergenceLogComponent__UEmergenceLogComponent](EastRimWorld/System/Emergence/Log/EmergenceLogComponent__UEmergenceLogComponent.md)
  - **Description:** 涌现系统专有日志组件(仿 UCommonLogComponent, 挂 ASaveGameDataActor, ISAVIOR 入档)。

## `EastRimWorld/System/Emergence/Pipeline/EmergencePressureLibrary.h`

- `class` **`UEmergencePressureLibrary`** — [EmergencePressureLibrary__UEmergencePressureLibrary](EastRimWorld/System/Emergence/Pipeline/EmergencePressureLibrary__UEmergencePressureLibrary.md)
  - **Description:** 压力评估静态库。Director 每拍心跳调用 EvaluateAll 拿到完整快照。 单维方法也独立暴露, 便于调试 / 单测 / 蓝图查看。

## `EastRimWorld/System/Energy/EnergySplineActor.h`

- `class` **`AEnergySplineActor`** — [EnergySplineActor__AEnergySplineActor](EastRimWorld/System/Energy/EnergySplineActor__AEnergySplineActor.md)
  - **Description:** Energy Spline Actor actor type.
- `enum` **`EEnergyLineType`** — [EnergySplineActor__EEnergyLineType](EastRimWorld/System/Energy/EnergySplineActor__EEnergyLineType.md)
  - **Description:** 线的类型

## `EastRimWorld/System/Energy/EnergySystem.h`

- `class` **`UEnergySystem`** — [EnergySystem__UEnergySystem](EastRimWorld/System/Energy/EnergySystem__UEnergySystem.md)
  - **Description:** Energy System UObject type.

## `EastRimWorld/System/EventGenerateCharacterComponent.h`

- `class` **`UEventGenerateCharacterComponent`** — [EventGenerateCharacterComponent__UEventGenerateCharacterComponent](EastRimWorld/System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)
  - **Description:** Event Generate Character Component UObject type.

## `EastRimWorld/System/GameplayTagStack.h`

- `struct` **`FGameplayTagStack`** — [GameplayTagStack__FGameplayTagStack](EastRimWorld/System/GameplayTagStack__FGameplayTagStack.md)
  - **Description:** Represents one stack of a gameplay tag (tag + count)
- `struct` **`FGameplayTagStackContainer`** — [GameplayTagStack__FGameplayTagStackContainer](EastRimWorld/System/GameplayTagStack__FGameplayTagStackContainer.md)
  - **Description:** Container of gameplay tag stacks

## `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

- `enum` **`ELetterDialogueType`** — [BirdLetterSystem__ELetterDialogueType](EastRimWorld/System/Letterpaper/BirdLetterSystem__ELetterDialogueType.md)
  - **Description:** 信件发起类型
- `struct` **`FBuildingNumData`** — [BirdLetterSystem__FBuildingNumData](EastRimWorld/System/Letterpaper/BirdLetterSystem__FBuildingNumData.md)
  - **Description:** Building Num Data data structure.
- `struct` **`FCharacterLetterData`** — [BirdLetterSystem__FCharacterLetterData](EastRimWorld/System/Letterpaper/BirdLetterSystem__FCharacterLetterData.md)
  - **Description:** Character Letter Data data structure.
- `struct` **`FLetterPaperConfig`** — [BirdLetterSystem__FLetterPaperConfig](EastRimWorld/System/Letterpaper/BirdLetterSystem__FLetterPaperConfig.md)
  - **Description:** 对话碎片表
- `class` **`UBirdLetterSystem`** — [BirdLetterSystem__UBirdLetterSystem](EastRimWorld/System/Letterpaper/BirdLetterSystem__UBirdLetterSystem.md)
  - **Description:** Bird Letter System UObject type.

## `EastRimWorld/System/MonsterNest/MonsterNestActor.h`

- `class` **`AMonsterNestActor`** — [MonsterNestActor__AMonsterNestActor](EastRimWorld/System/MonsterNest/MonsterNestActor__AMonsterNestActor.md)
  - **Description:** Monster Nest Actor actor type.

## `EastRimWorld/System/RandomDiscipleGenerator.h`

- `class` **`URandomDiscipleGenerator`** — [RandomDiscipleGenerator__URandomDiscipleGenerator](EastRimWorld/System/RandomDiscipleGenerator__URandomDiscipleGenerator.md)
  - **Description:** 随机弟子生成器。 根据 FRandomDiscipleConfig 在运行时动态组装一个新弟子的 FCharacterSaveData， 不依赖 DT_CharacterPresetConfig 预设表行。 关键约定： OutSaveData.CharacterID = Config.TemplateCharacterID（指向 DT_HumanData 行，供系统查表） OutSaveData.CharacterGuid = 由调用方在外部设置（保证 SAVIOR 注册正确） 两者职责不同，不可混用。

## `EastRimWorld/System/Sound/AN_PlaySound.h`

- `class` **`UAN_PlaySound`** — [AN_PlaySound__UAN_PlaySound](EastRimWorld/System/Sound/AN_PlaySound__UAN_PlaySound.md)
  - **Description:** N Play Sound UObject type.

## `EastRimWorld/System/Sound/PlaySoundSystem.h`

- `enum` **`EPlayUiSoundEnum`** — [PlaySoundSystem__EPlayUiSoundEnum](EastRimWorld/System/Sound/PlaySoundSystem__EPlayUiSoundEnum.md)
  - **Description:** ui音效类型
- `enum` **`ESoundChangeEvent`** — [PlaySoundSystem__ESoundChangeEvent](EastRimWorld/System/Sound/PlaySoundSystem__ESoundChangeEvent.md)
  - **Description:** Sound Change Event enum type.
- `enum` **`ESoundOperateType`** — [PlaySoundSystem__ESoundOperateType](EastRimWorld/System/Sound/PlaySoundSystem__ESoundOperateType.md)
  - **Description:** Sound Operate Type enum type.
- `struct` **`FAkAudioEventInfo`** — [PlaySoundSystem__FAkAudioEventInfo](EastRimWorld/System/Sound/PlaySoundSystem__FAkAudioEventInfo.md)
  - **Description:** Ak Audio Event Info data structure.
- `struct` **`FAkAudioSoundChangeEvent`** — [PlaySoundSystem__FAkAudioSoundChangeEvent](EastRimWorld/System/Sound/PlaySoundSystem__FAkAudioSoundChangeEvent.md)
  - **Description:** Ak Audio Sound Change Event data structure.
- `struct` **`FGameSoundInfo`** — [PlaySoundSystem__FGameSoundInfo](EastRimWorld/System/Sound/PlaySoundSystem__FGameSoundInfo.md)
  - **Description:** Game Sound Info data structure.
- `struct` **`FSoundChangeEventConfig`** — [PlaySoundSystem__FSoundChangeEventConfig](EastRimWorld/System/Sound/PlaySoundSystem__FSoundChangeEventConfig.md)
  - **Description:** Sound Change Event Config data structure.
- `struct` **`FSoundOperateConfig`** — [PlaySoundSystem__FSoundOperateConfig](EastRimWorld/System/Sound/PlaySoundSystem__FSoundOperateConfig.md)
  - **Description:** Sound Operate Config data structure.
- `class` **`UPlaySoundSystem`** — [PlaySoundSystem__UPlaySoundSystem](EastRimWorld/System/Sound/PlaySoundSystem__UPlaySoundSystem.md)
  - **Description:** Play Sound System UObject type.
- `class` **`UPlaySoundSystemSetUp`** — [PlaySoundSystem__UPlaySoundSystemSetUp](EastRimWorld/System/Sound/PlaySoundSystem__UPlaySoundSystemSetUp.md)
  - **Description:** Play Sound System Set Up UObject type.

## `EastRimWorld/System/Sound/SoundActor.h`

- `class` **`ASoundActor`** — [SoundActor__ASoundActor](EastRimWorld/System/Sound/SoundActor__ASoundActor.md)
  - **Description:** Sound Actor actor type.

## `EastRimWorld/System/Squad/ERW_SplinePathActor.h`

- `class` **`AERW_SplinePathActor`** — [ERW_SplinePathActor__AERW_SplinePathActor](EastRimWorld/System/Squad/ERW_SplinePathActor__AERW_SplinePathActor.md)
  - **Description:** 样条路径 Actor：在编辑器中拖动样条线点即可绘制路径。 - 运行时把样条采样为 TArray<FVector>，喂给 UERW_SquadSubsystem 作默认路径。 - 样条的"闭合(Closed Loop)"开关对应环形路径。

## `EastRimWorld/System/Squad/ERW_SquadFormation.h`

- `enum` **`ESquadMemberState`** — [ERW_SquadFormation__ESquadMemberState](EastRimWorld/System/Squad/ERW_SquadFormation__ESquadMemberState.md)
  - **Description:** 队员状态：决定走/跑以及移动方式
- `struct` **`FSquadMember`** — [ERW_SquadFormation__FSquadMember](EastRimWorld/System/Squad/ERW_SquadFormation__FSquadMember.md)
  - **Description:** Squad Member data structure.
- `class` **`UERW_SquadFormation`** — [ERW_SquadFormation__UERW_SquadFormation](EastRimWorld/System/Squad/ERW_SquadFormation__UERW_SquadFormation.md)
  - **Description:** 单个编组（纵队）。 - 沿预设地面路径(PathPoints)以"虚拟头点"推进。 - 队员按弧长偏移(HeadDistance - SlotIndex*Spacing)排成纵队。 - 散兵入队先跑(Joining)，到位后转走(InFormation)。

## `EastRimWorld/System/Squad/ERW_SquadSubsystem.h`

- `class` **`UERW_SquadSubsystem`** — [ERW_SquadSubsystem__UERW_SquadSubsystem](EastRimWorld/System/Squad/ERW_SquadSubsystem__UERW_SquadSubsystem.md)
  - **Description:** 编组子系统：统一管理所有纵队编组。 - 场景里可有多条样条路径，入队角色先选离自己最近的样条。 - 同一样条上：未满编组优先就近加入；都满则在该样条上开新编组， 新编组头点设到角色在该样条上的最近点。 - 每帧驱动所有编组的 Tick。

## `EastRimWorld/System/Task/BeginnerGuideComponent.h`

- `struct` **`FBeginnerGuideSaveData`** — [BeginnerGuideComponent__FBeginnerGuideSaveData](EastRimWorld/System/Task/BeginnerGuideComponent__FBeginnerGuideSaveData.md)
  - **Description:** 新手引导存档数据
- `class` **`UBeginnerGuideComponent`** — [BeginnerGuideComponent__UBeginnerGuideComponent](EastRimWorld/System/Task/BeginnerGuideComponent__UBeginnerGuideComponent.md)
  - **Description:** Beginner Guide Component UObject type.

## `EastRimWorld/System/Task/CommonTaskComponent.h`

- `class` **`UCommonTaskComponent`** — [CommonTaskComponent__UCommonTaskComponent](EastRimWorld/System/Task/CommonTaskComponent__UCommonTaskComponent.md)
  - **Description:** Common Task Component UObject type.

## `EastRimWorld/System/Task/TaskSubsystem.h`

- `class` **`UTaskSubsystem`** — [TaskSubsystem__UTaskSubsystem](EastRimWorld/System/Task/TaskSubsystem__UTaskSubsystem.md)
  - **Description:** Task Subsystem UObject type.

## `EastRimWorld/System/Tournament/TournamentBattleManager.h`

- `class` **`ATournamentBattleManager`** — [TournamentBattleManager__ATournamentBattleManager](EastRimWorld/System/Tournament/TournamentBattleManager__ATournamentBattleManager.md)
  - **Description:** 门派比武战斗管理器 专门用于管理门派比武的战斗场景
- `struct` **`FDamageInfo`** — [TournamentBattleManager__FDamageInfo](EastRimWorld/System/Tournament/TournamentBattleManager__FDamageInfo.md)
  - **Description:** Damage Info data structure.
- `struct` **`FTournamentBattleCharacterInfo`** — [TournamentBattleManager__FTournamentBattleCharacterInfo](EastRimWorld/System/Tournament/TournamentBattleManager__FTournamentBattleCharacterInfo.md)
  - **Description:** 门派比武战斗角色信息

## `EastRimWorld/System/Tournament/TournamentManager.h`

- `class` **`ATournamentManager`** — [TournamentManager__ATournamentManager](EastRimWorld/System/Tournament/TournamentManager__ATournamentManager.md)
  - **Description:** 武林大会管理器

## `EastRimWorld/System/Tournament/TournamentStruct.h`

- `enum` **`EOffFieldOperationType`** — [TournamentStruct__EOffFieldOperationType](EastRimWorld/System/Tournament/TournamentStruct__EOffFieldOperationType.md)
  - **Description:** 场外操作类型
- `enum` **`ESectStatus`** — [TournamentStruct__ESectStatus](EastRimWorld/System/Tournament/TournamentStruct__ESectStatus.md)
  - **Description:** 战斗状态
- `enum` **`ETournamentBattleState`** — [TournamentStruct__ETournamentBattleState](EastRimWorld/System/Tournament/TournamentStruct__ETournamentBattleState.md)
  - **Description:** 门派比武战斗状态
- `enum` **`ETournamentState`** — [TournamentStruct__ETournamentState](EastRimWorld/System/Tournament/TournamentStruct__ETournamentState.md)
  - **Description:** 比赛状态
- `enum` **`ETournamentType`** — [TournamentStruct__ETournamentType](EastRimWorld/System/Tournament/TournamentStruct__ETournamentType.md)
  - **Description:** 比赛类型
- `struct` **`FAnnualRewardConfig`** — [TournamentStruct__FAnnualRewardConfig](EastRimWorld/System/Tournament/TournamentStruct__FAnnualRewardConfig.md)
  - **Description:** 年度奖励配置
- `struct` **`FOffFieldOperationInfo`** — [TournamentStruct__FOffFieldOperationInfo](EastRimWorld/System/Tournament/TournamentStruct__FOffFieldOperationInfo.md)
  - **Description:** 场外操作信息
- `struct` **`FOffFieldOperationInstance`** — [TournamentStruct__FOffFieldOperationInstance](EastRimWorld/System/Tournament/TournamentStruct__FOffFieldOperationInstance.md)
  - **Description:** 场外操作信息
- `struct` **`FSectReputationInfo`** — [TournamentStruct__FSectReputationInfo](EastRimWorld/System/Tournament/TournamentStruct__FSectReputationInfo.md)
  - **Description:** 门派声望信息
- `struct` **`FTournamentBattleInfo`** — [TournamentStruct__FTournamentBattleInfo](EastRimWorld/System/Tournament/TournamentStruct__FTournamentBattleInfo.md)
  - **Description:** 单场比赛战斗信息
- `struct` **`FTournamentGroupInfo`** — [TournamentStruct__FTournamentGroupInfo](EastRimWorld/System/Tournament/TournamentStruct__FTournamentGroupInfo.md)
  - **Description:** 比赛分组信息
- `struct` **`FTournamentInstance`** — [TournamentStruct__FTournamentInstance](EastRimWorld/System/Tournament/TournamentStruct__FTournamentInstance.md)
  - **Description:** 比赛信息
- `struct` **`FTournamentRankReputation`** — [TournamentStruct__FTournamentRankReputation](EastRimWorld/System/Tournament/TournamentStruct__FTournamentRankReputation.md)
  - **Description:** 行进的路径点
- `struct` **`FTournamentRule`** — [TournamentStruct__FTournamentRule](EastRimWorld/System/Tournament/TournamentStruct__FTournamentRule.md)
  - **Description:** 比赛规则
- `struct` **`FTournamentSectInfo`** — [TournamentStruct__FTournamentSectInfo](EastRimWorld/System/Tournament/TournamentStruct__FTournamentSectInfo.md)
  - **Description:** 势力的比赛信息
- `struct` **`FTournamentSpawnPoint`** — [TournamentStruct__FTournamentSpawnPoint](EastRimWorld/System/Tournament/TournamentStruct__FTournamentSpawnPoint.md)
  - **Description:** 行进的路径点

## `EastRimWorld/System/Tournament/TournamentSubsystem.h`

- `class` **`UTournamentSubsystem`** — [TournamentSubsystem__UTournamentSubsystem](EastRimWorld/System/Tournament/TournamentSubsystem__UTournamentSubsystem.md)
  - **Description:** 门派比武系统子系统

## `EastRimWorld/Teams/AsyncAction_ObserveTeam.h`

- `class` **`UAsyncAction_ObserveTeam`** — [AsyncAction_ObserveTeam__UAsyncAction_ObserveTeam](EastRimWorld/Teams/AsyncAction_ObserveTeam__UAsyncAction_ObserveTeam.md)
  - **Description:** Watches for team changes in the specified object

## `EastRimWorld/Teams/EastRimWorldTeamStatics.h`

- `class` **`UEastRimWorldTeamStatics`** — [EastRimWorldTeamStatics__UEastRimWorldTeamStatics](EastRimWorld/Teams/EastRimWorldTeamStatics__UEastRimWorldTeamStatics.md)
  - **Description:** A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

- `enum` **`EEastRimWorldTeamComparison`** — [EastRimWorldTeamSubsystem__EEastRimWorldTeamComparison](EastRimWorld/Teams/EastRimWorldTeamSubsystem__EEastRimWorldTeamComparison.md)
  - **Description:** Result of comparing the team affiliation for two actors
- `struct` **`FEastRimWorldTeamTrackingInfo`** — [EastRimWorldTeamSubsystem__FEastRimWorldTeamTrackingInfo](EastRimWorld/Teams/EastRimWorldTeamSubsystem__FEastRimWorldTeamTrackingInfo.md)
  - **Description:** East Rim World Team Tracking Info data structure.
- `class` **`UEastRimWorldTeamSubsystem`** — [EastRimWorldTeamSubsystem__UEastRimWorldTeamSubsystem](EastRimWorld/Teams/EastRimWorldTeamSubsystem__UEastRimWorldTeamSubsystem.md)
  - **Description:** A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## `EastRimWorld/Tests/ModOverrideTestTypes.h`

- `enum` **`EModOTestColor`** — [ModOverrideTestTypes__EModOTestColor](EastRimWorld/Tests/ModOverrideTestTypes__EModOTestColor.md)
  - **Description:** 两个 UEnum 共享短名 Red/Green/Blue，但底层整数和 UEnum* 不同， 用来模拟 Mod 与 Runtime 之间「跨命名空间但语义相同」的枚举。
- `enum` **`EModOTestModColor`** — [ModOverrideTestTypes__EModOTestModColor](EastRimWorld/Tests/ModOverrideTestTypes__EModOTestModColor.md)
  - **Description:** Mod O Test Mod Color enum type.
- `struct` **`FModOTestItem`** — [ModOverrideTestTypes__FModOTestItem](EastRimWorld/Tests/ModOverrideTestTypes__FModOTestItem.md)
  - **Description:** Mod O Test Item data structure.
- `struct` **`FModOTestModItem`** — [ModOverrideTestTypes__FModOTestModItem](EastRimWorld/Tests/ModOverrideTestTypes__FModOTestModItem.md)
  - **Description:** Mod O Test Mod Item data structure.
- `struct` **`FModOTestModRow`** — [ModOverrideTestTypes__FModOTestModRow](EastRimWorld/Tests/ModOverrideTestTypes__FModOTestModRow.md)
  - **Description:** Mod O Test Mod Row data structure.
- `struct` **`FModOTestRuntimeRow`** — [ModOverrideTestTypes__FModOTestRuntimeRow](EastRimWorld/Tests/ModOverrideTestTypes__FModOTestRuntimeRow.md)
  - **Description:** Mod O Test Runtime Row data structure.

## `EastRimWorld/Tools/WuxueStringTableImporter.h`

- `class` **`UWuxueStringTableImporter`** — [WuxueStringTableImporter__UWuxueStringTableImporter](EastRimWorld/Tools/WuxueStringTableImporter__UWuxueStringTableImporter.md)
  - **Description:** Editor-only 批量工具：从 CSV 把 Key/SourceString 灌进指定 StringTable 资产。 Python 用： unreal.WuxueStringTableImporter.import_string_table_csv( "/Game/Configs/StringTable/Item_StringTable.Item_StringTable", "H:/Esvn/Tools/.../Item_StringTable.csv")

## `EastRimWorld/UI/Common/CommonModuleBase.h`

- `class` **`UCommonModuleBase`** — [CommonModuleBase__UCommonModuleBase](EastRimWorld/UI/Common/CommonModuleBase__UCommonModuleBase.md)
  - **Description:** Common Module Base UObject type.

## `EastRimWorld/UI/Common/EastRimWorldSceneTextWidget.h`

- `class` **`UEastRimWorldSceneTextWidget`** — [EastRimWorldSceneTextWidget__UEastRimWorldSceneTextWidget](EastRimWorld/UI/Common/EastRimWorldSceneTextWidget__UEastRimWorldSceneTextWidget.md)
  - **Description:** East Rim World Scene Text Widget UObject type.

## `EastRimWorld/UI/Common/EastRimWorldTabButtonBase.h`

- `class` **`UEastRimWorldTabButtonBase`** — [EastRimWorldTabButtonBase__UEastRimWorldTabButtonBase](EastRimWorld/UI/Common/EastRimWorldTabButtonBase__UEastRimWorldTabButtonBase.md)
  - **Description:** East Rim World Tab Button Base UObject type.

## `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

- `struct` **`FEastRimWorldTabDescriptor`** — [EastRimWorldTabListWidgetBase__FEastRimWorldTabDescriptor](EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase__FEastRimWorldTabDescriptor.md)
  - **Description:** East Rim World Tab Descriptor data structure.
- `class` **`UEastRimWorldTabListWidgetBase`** — [EastRimWorldTabListWidgetBase__UEastRimWorldTabListWidgetBase](EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase__UEastRimWorldTabListWidgetBase.md)
  - **Description:** East Rim World Tab List Widget Base UObject type.

## `EastRimWorld/UI/Common/EastRimWorldWidgetFactory.h`

- `class` **`UEastRimWorldWidgetFactory`** — [EastRimWorldWidgetFactory__UEastRimWorldWidgetFactory](EastRimWorld/UI/Common/EastRimWorldWidgetFactory__UEastRimWorldWidgetFactory.md)
  - **Description:** East Rim World Widget Factory UObject type.

## `EastRimWorld/UI/Common/PopTipWidget.h`

- `class` **`UPopTipWidget`** — [PopTipWidget__UPopTipWidget](EastRimWorld/UI/Common/PopTipWidget__UPopTipWidget.md)
  - **Description:** Pop Tip Widget UObject type.

## `EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator.h`

- `struct` **`FRichSHyperlinkRow`** — [RichTextBlockSHyperlinkDecorator__FRichSHyperlinkRow](EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator__FRichSHyperlinkRow.md)
  - **Description:** Simple struct for rich text styles
- `struct` **`FWikiUIConfig`** — [RichTextBlockSHyperlinkDecorator__FWikiUIConfig](EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator__FWikiUIConfig.md)
  - **Description:** wiki结构表
- `class` **`URichTextBlockSHyperlinkDecorator`** — [RichTextBlockSHyperlinkDecorator__URichTextBlockSHyperlinkDecorator](EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator__URichTextBlockSHyperlinkDecorator.md)
  - **Description:** Allows you to setup an image decorator that can be configured to map certain keys to certain images. We recommend you subclass this as a blueprint to configure the instance. Understands the format <img id="NameOfBrushInTable"></>

## `EastRimWorld/UI/ERWComboBoxString.h`

- `class` **`UERWComboBoxString`** — [ERWComboBoxString__UERWComboBoxString](EastRimWorld/UI/ERWComboBoxString__UERWComboBoxString.md)
  - **Description:** The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.

## `EastRimWorld/UI/ERW_CurveRoadFunctionLibrary.h`

- `struct` **`FMoveItemRouteLeg`** — [ERW_CurveRoadFunctionLibrary__FMoveItemRouteLeg](EastRimWorld/UI/ERW_CurveRoadFunctionLibrary__FMoveItemRouteLeg.md)
  - **Description:** moveitem 移动路线的一段缓存:对应一条 WBP_CurveRoad 的 城A→城B 子路由(Road 为空时走 PosA→PosB 直线兜底)
- `class` **`UERW_CurveRoadFunctionLibrary`** — [ERW_CurveRoadFunctionLibrary__UERW_CurveRoadFunctionLibrary](EastRimWorld/UI/ERW_CurveRoadFunctionLibrary__UERW_CurveRoadFunctionLibrary.md)
  - **Description:** 曲线路径工具库:对一组有序点(路点)按弧长取曲线上的点/切线。 与 ERW_CurveRoadWidget 同一套曲线(bSmooth=true 走 Catmull-Rom 经过各点,false 走直线折线)。 典型用法:世界地图 move item 按"时间百分比 -> 弧长百分比 -> 曲线坐标"沿曲线匀速移动。

## `EastRimWorld/UI/ERW_CurveRoadWidget.h`

- `struct` **`FCurveRoadCity`** — [ERW_CurveRoadWidget__FCurveRoadCity](EastRimWorld/UI/ERW_CurveRoadWidget__FCurveRoadCity.md)
  - **Description:** 一条路能达到的城市:id + 在路面(本控件)局部空间的连接点(分支末端)
- `class` **`UERW_CurveRoadWidget`** — [ERW_CurveRoadWidget__UERW_CurveRoadWidget](EastRimWorld/UI/ERW_CurveRoadWidget__UERW_CurveRoadWidget.md)
  - **Description:** 自绘曲线道路控件。 在控件局部空间内,于起点(StartPoint)与终点(EndPoint)之间绘制一条三次贝塞尔曲线, 并把曲线渲染成一条带贴图/材质(RoadBrush)的"道路"。可按百分比取曲线上坐标与切线。 取点(GetPointAtPercent)与绘制(NativePaint)共用 GetEffectiveControlPoints, 保证"画出来的线"与"取出来的点"始终是同一条曲线。

## `EastRimWorld/UI/ERW_ListViewFunctionLibrary.h`

- `class` **`UERW_ListViewFunctionLibrary`** — [ERW_ListViewFunctionLibrary__UERW_ListViewFunctionLibrary](EastRimWorld/UI/ERW_ListViewFunctionLibrary__UERW_ListViewFunctionLibrary.md)
  - **Description:** ListView 滚动工具库(适用于 ListView / TileView / TreeView,后两者均派生自 UListView)。 "只在已经在底部时才自动贴底"的标准用法(聊天记录等): 1) 往数据数组塞新项 **之前**,先调 IsListViewScrolledToBottom 存成 bool(bWasAtBottom); 2) 塞数据并 SetListItems / AddItem / RequestRefresh; 3) Branch(bWasAtBottom):为真才调 ScrollListViewToBottom。 这样翻历史时不打扰,停在底部时才跟最新。注意判断必须在"加数据前"做—— 加完再判断的话新末项还没显示,会误判为不在底部。

## `EastRimWorld/UI/ERW_RoadBranchWidget.h`

- `class` **`UERW_RoadBranchWidget`** — [ERW_RoadBranchWidget__UERW_RoadBranchWidget](EastRimWorld/UI/ERW_RoadBranchWidget__UERW_RoadBranchWidget.md)
  - **Description:** 一条分支容器。放在 ERW_CurveRoadWidget 的 MarkerSlot 中,带目标城市 id; 内部按子项顺序摆红点(形状点),末端红点 = 通向该城市的连接点。 约定:本控件应铺满 MarkerSlot(anchors 0-1, offset 0),使内部红点的 CanvasPanelSlot 坐标 直接等于路面(ERW_CurveRoadWidget)局部坐标,无需跨层换算。

## `EastRimWorld/UI/ERW_WorldMapMoveItemBase.h`

- `class` **`UERW_WorldMapMoveItemBase`** — [ERW_WorldMapMoveItemBase__UERW_WorldMapMoveItemBase](EastRimWorld/UI/ERW_WorldMapMoveItemBase__UERW_WorldMapMoveItemBase.md)
  - **Description:** 世界地图移动图标(moveitem)C++ 基类。把"按城市顺序沿曲线路求当前坐标"的逻辑全放这里: - RoadContainer = WB_WorldMap1 的 CanvasPanel_127(里面是若干 WBP_CurveRoad) - UpdateMoveItem(MoveInfo):按 MovePointMap 的有序城市,逐段在路里取 GetPointOnRoute, 结果直接设到自身 CanvasPanelSlot;路线(城市序列)变化时才重建缓存,平时零遍历。 WB_WorldMapMoveItem 应 reparent 到本类。

## `EastRimWorld/UI/EastRimWorldActivatableWidget.h`

- `class` **`UEastRimWorldActivatableWidget`** — [EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget](EastRimWorld/UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)
  - **Description:** An activatable widget that automatically drives the desired input config when activated

## `EastRimWorld/UI/EasternEraDialogDescriptor.h`

- `class` **`UEasternEraDialogDescriptor`** — [EasternEraDialogDescriptor__UEasternEraDialogDescriptor](EastRimWorld/UI/EasternEraDialogDescriptor__UEasternEraDialogDescriptor.md)
  - **Description:** Eastern Era Dialog Descriptor UObject type.

## `EastRimWorld/UI/Foundation/CommonSidePushBase.h`

- `class` **`UCommonSidePushBase`** — [CommonSidePushBase__UCommonSidePushBase](EastRimWorld/UI/Foundation/CommonSidePushBase__UCommonSidePushBase.md)
  - **Description:** Common Side Push Base UObject type.

## `EastRimWorld/UI/Foundation/EastRimWorldActionWidget.h`

- `class` **`UEastRimWorldActionWidget`** — [EastRimWorldActionWidget__UEastRimWorldActionWidget](EastRimWorld/UI/Foundation/EastRimWorldActionWidget__UEastRimWorldActionWidget.md)
  - **Description:** An action widget that will get the icon of key that is currently assigned to the common input action on this widget

## `EastRimWorld/UI/Foundation/EastRimWorldButtonBase.h`

- `class` **`UEastRimWorldButtonBase`** — [EastRimWorldButtonBase__UEastRimWorldButtonBase](EastRimWorld/UI/Foundation/EastRimWorldButtonBase__UEastRimWorldButtonBase.md)
  - **Description:** East Rim World Button Base UObject type.

## `EastRimWorld/UI/Foundation/EastRimWorldConfirmationScreen.h`

- `class` **`UEastRimWorldConfirmationScreen`** — [EastRimWorldConfirmationScreen__UEastRimWorldConfirmationScreen](EastRimWorld/UI/Foundation/EastRimWorldConfirmationScreen__UEastRimWorldConfirmationScreen.md)
  - **Description:** East Rim World Confirmation Screen UObject type.

## `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

- `enum` **`EMijiCollectState`** — [WuxueMijiTujianWidget__EMijiCollectState](EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget__EMijiCollectState.md)
  - **Description:** 秘籍收集状态
- `struct` **`FMijiBookVM`** — [WuxueMijiTujianWidget__FMijiBookVM](EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget__FMijiBookVM.md)
  - **Description:** 秘籍书视图模型
- `struct` **`FMijiCategoryVM`** — [WuxueMijiTujianWidget__FMijiCategoryVM](EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget__FMijiCategoryVM.md)
  - **Description:** 秘籍分类视图模型
- `struct` **`FMijiMoveVM`** — [WuxueMijiTujianWidget__FMijiMoveVM](EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget__FMijiMoveVM.md)
  - **Description:** 秘籍招式视图模型
- `struct` **`FMijiTierVM`** — [WuxueMijiTujianWidget__FMijiTierVM](EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget__FMijiTierVM.md)
  - **Description:** 秘籍层级（词条）视图模型——对应武学书的一个修炼层（FMartialArtsLevel）
- `class` **`UWuxueMijiTujianWidget`** — [WuxueMijiTujianWidget__UWuxueMijiTujianWidget](EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget__UWuxueMijiTujianWidget.md)
  - **Description:** 武学秘籍图鉴 控制器 Widget。 逻辑层：拉取分类 + 书籍配置，计算每本书的收集状态，缓存 VM，供蓝图侧展示。 视觉与列表装配由 WBP（BlueprintImplementableEvent 回调）完成。

## `EastRimWorld/UI/Struct/UIStruct.h`

- `enum` **`ECommonBtnTipType`** — [UIStruct__ECommonBtnTipType](EastRimWorld/UI/Struct/UIStruct__ECommonBtnTipType.md)
  - **Description:** Common Btn Tip Type enum type.
- `enum` **`ECommonButtonType`** — [UIStruct__ECommonButtonType](EastRimWorld/UI/Struct/UIStruct__ECommonButtonType.md)
  - **Description:** Common Button Type enum type.
- `enum` **`EEastRimWorldWidgetInputMode`** — [UIStruct__EEastRimWorldWidgetInputMode](EastRimWorld/UI/Struct/UIStruct__EEastRimWorldWidgetInputMode.md)
  - **Description:** East Rim World Widget Input Mode enum type.
- `enum` **`EGameMenuBtmCloseType`** — [UIStruct__EGameMenuBtmCloseType](EastRimWorld/UI/Struct/UIStruct__EGameMenuBtmCloseType.md)
  - **Description:** Game Menu Btm Close Type enum type.
- `enum` **`EGameMenuBtmOpenType`** — [UIStruct__EGameMenuBtmOpenType](EastRimWorld/UI/Struct/UIStruct__EGameMenuBtmOpenType.md)
  - **Description:** Game Menu Btm Open Type enum type.
- `enum` **`ETipItemTypeEnum`** — [UIStruct__ETipItemTypeEnum](EastRimWorld/UI/Struct/UIStruct__ETipItemTypeEnum.md)
  - **Description:** Tip Item Type Enum enum type.
- `enum` **`ETitleTypeEnum`** — [UIStruct__ETitleTypeEnum](EastRimWorld/UI/Struct/UIStruct__ETitleTypeEnum.md)
  - **Description:** Title Type Enum enum type.
- `enum` **`EWorkScheduleType`** — [UIStruct__EWorkScheduleType](EastRimWorld/UI/Struct/UIStruct__EWorkScheduleType.md)
  - **Description:** 工作日程类型
- `struct` **`FAchievementUIConfigData`** — [UIStruct__FAchievementUIConfigData](EastRimWorld/UI/Struct/UIStruct__FAchievementUIConfigData.md)
  - **Description:** / 成就UI配置结构
- `struct` **`FBuildingUIConfig`** — [UIStruct__FBuildingUIConfig](EastRimWorld/UI/Struct/UIStruct__FBuildingUIConfig.md)
  - **Description:** Building UI Config data structure.
- `struct` **`FCommonButton`** — [UIStruct__FCommonButton](EastRimWorld/UI/Struct/UIStruct__FCommonButton.md)
  - **Description:** Common Button data structure.
- `struct` **`FCommonUIConfig`** — [UIStruct__FCommonUIConfig](EastRimWorld/UI/Struct/UIStruct__FCommonUIConfig.md)
  - **Description:** Common UI Config data structure.
- `struct` **`FModuleUIConfig`** — [UIStruct__FModuleUIConfig](EastRimWorld/UI/Struct/UIStruct__FModuleUIConfig.md)
  - **Description:** Module UI Config data structure.
- `struct` **`FSkillAssign`** — [UIStruct__FSkillAssign](EastRimWorld/UI/Struct/UIStruct__FSkillAssign.md)
  - **Description:** Skill Assign data structure.
- `struct` **`FTabInfo`** — [UIStruct__FTabInfo](EastRimWorld/UI/Struct/UIStruct__FTabInfo.md)
  - **Description:** Tab Info data structure.
- `struct` **`FTipsUIContent`** — [UIStruct__FTipsUIContent](EastRimWorld/UI/Struct/UIStruct__FTipsUIContent.md)
  - **Description:** Tips UI Content data structure.
- `struct` **`FWorkPriorityUIConfigData`** — [UIStruct__FWorkPriorityUIConfigData](EastRimWorld/UI/Struct/UIStruct__FWorkPriorityUIConfigData.md)
  - **Description:** 工作优先级UI配置结构
- `struct` **`FWorkScheduleUIConfigData`** — [UIStruct__FWorkScheduleUIConfigData](EastRimWorld/UI/Struct/UIStruct__FWorkScheduleUIConfigData.md)
  - **Description:** 工作日程UI配置结构

## `EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem.h`

- `class` **`UEastRimWorldUIManagerSubsystem`** — [EastRimWorldUIManagerSubsystem__UEastRimWorldUIManagerSubsystem](EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem__UEastRimWorldUIManagerSubsystem.md)
  - **Description:** East Rim World UI Manager Subsystem UObject type.

## `EastRimWorld/UI/TotalWorld/TotalWorldMap.h`

- `class` **`UTotalWorldMap`** — [TotalWorldMap__UTotalWorldMap](EastRimWorld/UI/TotalWorld/TotalWorldMap__UTotalWorldMap.md)
  - **Description:** Total World Map UObject type.

## `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

- `struct` **`FForceAffiliationRow`** — [ForceAffiliationRow__FForceAffiliationRow](EastRimWorld/WorldSystem/ForceAffiliationRow__FForceAffiliationRow.md)
  - **Description:** 派系归属行 — 对应 DT_ForceAffiliation.csv (B1, ~88 行) 列结构: Name(主键), DisplayName, MainCityID, Region, Alignment, TerritoryNotes 描述每个武林门派/势力所在区域、主城、阵营归属.
- `struct` **`FForceFavorabilityRow`** — [ForceAffiliationRow__FForceFavorabilityRow](EastRimWorld/WorldSystem/ForceAffiliationRow__FForceFavorabilityRow.md)
  - **Description:** 势力初始好感度行 — 对应 DT_ForceFavorabilityInit.csv (B2, ~50 行) 列结构: Name(主键), ForceA, ForceB, InitFavorability(int), Reason 描述游戏初始化时两个势力之间预设的好感值.
- `struct` **`FStrongholdRow`** — [ForceAffiliationRow__FStrongholdRow](EastRimWorld/WorldSystem/ForceAffiliationRow__FStrongholdRow.md)
  - **Description:** 据点配置行 — 对应 DT_StrongholdConfig.csv (B2, ~11 行) 列结构: Name(主键), DisplayName, GeoLocation, MainPurpose1/2/3, Population, Alignment 描述武林重要据点 (门派山门/城市) 的地理位置与主要用途.

## `EastRimWorld/WorldSystem/RelationLedgerTypes.h`

- `enum` **`ERelationAxis`** — [RelationLedgerTypes__ERelationAxis](EastRimWorld/WorldSystem/RelationLedgerTypes__ERelationAxis.md)
  - **Description:** 关系三轴 — 恩 / 仇 / 情 来源: MasterLine §三 Layer3 "恩/仇/情 三轴"
- `enum` **`ERelationTag`** — [RelationLedgerTypes__ERelationTag](EastRimWorld/WorldSystem/RelationLedgerTypes__ERelationTag.md)
  - **Description:** 关系标签枚举 — 代表双方之间发生过的决定性事件 推断: 参照 MasterLine §四 模块3 提到的 Annihilator/SavedLife/BloodFeud 等
- `struct` **`FRelationLedger`** — [RelationLedgerTypes__FRelationLedger](EastRimWorld/WorldSystem/RelationLedgerTypes__FRelationLedger.md)
  - **Description:** 关系账本 — 挂在 AWorldForce (门派) 或 AEastRimWorldCharacter 上 记录与"另一方"的完整关系状态, 支持存档 使用方法: AddDelta(ERelationAxis::Grace, +20.f); // LLOG 记录 HasTag(ERelationTag::BloodFeud); Decay(DeltaTime); // 每游戏日调用一次
- `class` **`URelationLedgerLibrary`** — [RelationLedgerTypes__URelationLedgerLibrary](EastRimWorld/WorldSystem/RelationLedgerTypes__URelationLedgerLibrary.md)
  - **Description:** ───────────────────────────────────────────── 蓝图函数库 — 暴露 FRelationLedger 修改器给蓝图 USTRUCT 成员函数无法直接 UFUNCTION, 通过伴生库转发 ─────────────────────────────────────────────

## `EastRimWorld/WorldSystem/WorldArea.h`

- `class` **`AWorldArea`** — [WorldArea__AWorldArea](EastRimWorld/WorldSystem/WorldArea__AWorldArea.md)
  - **Description:** World Area actor type.

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleCoreManager.h`

- `class` **`AWorldBattleCoreManager`** — [WorldBattleCoreManager__AWorldBattleCoreManager](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleCoreManager__AWorldBattleCoreManager.md)
  - **Description:** 战场核心编排器（重构 PR-A）。 - 关卡放置 Actor + static Instance 单例（与 AWorldBattleManager 同构，非 GameMode 持有）。 - 本类只做"总指挥/结算编排"，【不持有任何运行时战场容器】 （BattlefieldInformation 留 AWorldBattleManager / Battles 留 AWorldSectBattleManager / 周期化队列留 TickManager）。 - PR-A 仅迁入完整结算 ResolvePlaceDisposal；CreateBattlefieldUnified / DispatchBattle 为后续 PR-B/PR-C。
- `enum` **`EBattleJoinLayer`** — [WorldBattleCoreManager__EBattleJoinLayer](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleCoreManager__EBattleJoinLayer.md)
  - **Description:** [PR-B] 入伍分发的"目标层"——一场战斗可能同时有两层运行时，按层(而非 EBattleType)区分入伍去向。 单凭 EBattleType 区分不开：一场 SectBattle 同时要入【占旗层】(SectMng)和【行军层】(BattleMng)，类型都是 SectBattle。

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

- `class` **`AWorldBattleManager`** — [WorldBattleManager__AWorldBattleManager](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__AWorldBattleManager.md)
  - **Description:** World Battle Manager actor type.
- `struct` **`FCharacterTypes`** — [WorldBattleManager__FCharacterTypes](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__FCharacterTypes.md)
  - **Description:** Character Types data structure.
- `struct` **`FCompositeKey`** — [WorldBattleManager__FCompositeKey](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__FCompositeKey.md)
  - **Description:** Composite Key data structure.
- `struct` **`FWorldBattleCharacterInfo`** — [WorldBattleManager__FWorldBattleCharacterInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager__FWorldBattleCharacterInfo.md)
  - **Description:** World Battle Character Info data structure.

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

- `enum` **`EBattleCriticalEffectType`** — [WorldBattleReportStruct__EBattleCriticalEffectType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct__EBattleCriticalEffectType.md)
  - **Description:** 关键事件对 BattleAdvantage 的效果类型。
- `enum` **`ETimedBattlePhase`** — [WorldBattleReportStruct__ETimedBattlePhase](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct__ETimedBattlePhase.md)
  - **Description:** 周期化抽象战的 4 阶段（文档 §10）。按 PhaseElapsed/TotalDuration 推进。
- `enum` **`EWarReportTrigger`** — [WorldBattleReportStruct__EWarReportTrigger](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct__EWarReportTrigger.md)
  - **Description:** 战报适用的战局态势（Trigger 列）。Any = 不限态势，始终可选。
- `struct` **`FBattleCriticalMomentRow`** — [WorldBattleReportStruct__FBattleCriticalMomentRow](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct__FBattleCriticalMomentRow.md)
  - **Description:** DT_BattleCriticalMoments 的每行数据。 文档 § 12 的五条事件对应关系（RowName → 字段）： KM_LeaderDuel : FixedDelta = +30.0 （掌门对决，攻方赢+30） KM_TraitorReveal : FixedDelta = +20.0 （叛徒倒戈，攻方+20） KM_HeritageScroll : InvertRatio = 0.5 （传承显灵，弱势翻转50%） KM_HeavyRain : GainMultiplier = 0.3 （暴雨，Gain×0.3，本PR返回0，后续扩展） KM_Ambush : FixedDelta = ±40.0 （伏兵，随机一方+40，AdvantageSign 随机）
- `struct` **`FWarReportRow`** — [WorldBattleReportStruct__FWarReportRow](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct__FWarReportRow.md)
  - **Description:** DT_WarReports 的每行数据。继承 FTableRowBase（UE DataTable 行基类）。 ID 用 RowName（如 WR_001），无需单独字段。 文案占位符（runtime 替换后广播）： {AttackerName} = 攻方势力名称 {PlaceName} = 目标据点名称

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

- `enum` **`EAbilityFunctionType`** — [WorldBattleStruct__EAbilityFunctionType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EAbilityFunctionType.md)
  - **Description:** 战略技能功能类型
- `enum` **`EAutoTargetType`** — [WorldBattleStruct__EAutoTargetType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EAutoTargetType.md)
  - **Description:** 自动释放时选择的目标类型
- `enum` **`EBattleTeamType`** — [WorldBattleStruct__EBattleTeamType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EBattleTeamType.md)
  - **Description:** 战斗阵营类型
- `enum` **`EBattlefieldStateType`** — [WorldBattleStruct__EBattlefieldStateType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EBattlefieldStateType.md)
  - **Description:** 战斗类型
- `enum` **`ECharacterCureState`** — [WorldBattleStruct__ECharacterCureState](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__ECharacterCureState.md)
  - **Description:** 角色治疗状态
- `enum` **`ECheckBattleReason`** — [WorldBattleStruct__ECheckBattleReason](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__ECheckBattleReason.md)
  - **Description:** 玩家方战斗结果
- `enum` **`ELandscapeType`** — [WorldBattleStruct__ELandscapeType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__ELandscapeType.md)
  - **Description:** 战场地形类型
- `enum` **`EPlayerBattleResult`** — [WorldBattleStruct__EPlayerBattleResult](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EPlayerBattleResult.md)
  - **Description:** 玩家方战斗结果
- `enum` **`EStratagemAbilityTargetType`** — [WorldBattleStruct__EStratagemAbilityTargetType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EStratagemAbilityTargetType.md)
  - **Description:** 律令的全局作用对象
- `enum` **`EStratagemAbilityType`** — [WorldBattleStruct__EStratagemAbilityType](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__EStratagemAbilityType.md)
  - **Description:** 战略技能类型
- `struct` **`FAutoReleaseStrategyRule`** — [WorldBattleStruct__FAutoReleaseStrategyRule](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FAutoReleaseStrategyRule.md)
  - **Description:** 自动释放战略规则
- `struct` **`FAutoUseCharacterRule`** — [WorldBattleStruct__FAutoUseCharacterRule](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FAutoUseCharacterRule.md)
  - **Description:** 自动释放战略规则
- `struct` **`FBattleRuleset`** — [WorldBattleStruct__FBattleRuleset](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleRuleset.md)
  - **Description:** 战斗规则
- `struct` **`FBattleSettlementRequest`** — [WorldBattleStruct__FBattleSettlementRequest](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleSettlementRequest.md)
  - **Description:** [PR-A 阶段1] 统一战后结算输入结构（本阶段仅定义；Make 适配函数后续 PR 再补）。
- `struct` **`FBattleTeamInfo`** — [WorldBattleStruct__FBattleTeamInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleTeamInfo.md)
  - **Description:** 参与战斗的阵营信息
- `struct` **`FBattleTeamState`** — [WorldBattleStruct__FBattleTeamState](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleTeamState.md)
  - **Description:** 战斗阵营状态
- `struct` **`FBattlefieldAward`** — [WorldBattleStruct__FBattlefieldAward](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattlefieldAward.md)
  - **Description:** 战场结果
- `struct` **`FBattlefieldInformation`** — [WorldBattleStruct__FBattlefieldInformation](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattlefieldInformation.md)
  - **Description:** 战场信息
- `struct` **`FBattlefieldResult`** — [WorldBattleStruct__FBattlefieldResult](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattlefieldResult.md)
  - **Description:** 战场结果
- `struct` **`FCharacterBattleInfo`** — [WorldBattleStruct__FCharacterBattleInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterBattleInfo.md)
  - **Description:** 角色的战斗信息
- `struct` **`FCharacterCureInfo`** — [WorldBattleStruct__FCharacterCureInfo](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterCureInfo.md)
  - **Description:** 角色的治疗信息
- `struct` **`FCharacterRealmRelevancyData`** — [WorldBattleStruct__FCharacterRealmRelevancyData](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterRealmRelevancyData.md)
  - **Description:** 角色境界关联的数据
- `struct` **`FCharactersWanderMessage`** — [WorldBattleStruct__FCharactersWanderMessage](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharactersWanderMessage.md)
  - **Description:** 开始游荡的角色信息
- `struct` **`FPostwarCharacterDispose`** — [WorldBattleStruct__FPostwarCharacterDispose](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FPostwarCharacterDispose.md)
  - **Description:** 战场结果
- `struct` **`FStratagemAbility`** — [WorldBattleStruct__FStratagemAbility](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FStratagemAbility.md)
  - **Description:** 战略技能
- `struct` **`FStratagemAbilityFunction`** — [WorldBattleStruct__FStratagemAbilityFunction](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FStratagemAbilityFunction.md)
  - **Description:** 战略技能
- `struct` **`FTeamBaseInformation`** — [WorldBattleStruct__FTeamBaseInformation](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FTeamBaseInformation.md)
  - **Description:** 基地信息
- `struct` **`FTeamBasePoint`** — [WorldBattleStruct__FTeamBasePoint](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct__FTeamBasePoint.md)
  - **Description:** 行进的路径点

## `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

- `class` **`AWorldBattleTickManager`** — [WorldBattleTickManager__AWorldBattleTickManager](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager__AWorldBattleTickManager.md)
  - **Description:** AWorldBattleTickManager — 周期化抽象战管理器（PR-7 实装）。 - 承接 FIFO 排队队列（PendingBattleQueue）与活跃推演场（ActiveTimedBattleGuids + TimedBattleRecords）。 - StartTimedBattle：建抽象战记录 + 占用并发名额 + 起 5 秒周期定时器推进。 - 4 阶段状态机（集结/交战/僵持/决战）+ 5 秒 Tick 势头公式（BattleAdvantage ±100）。 - EndBattle：势头到 ±100 时触发三选一处置结算（复用 AWorldForce 处置入口）后出队联动。 - 战报 / 关键事件：本 PR 只埋回调钩子点 + TODO PR-8；关键事件对 Advantage ...
- `struct` **`FPendingTimedBattle`** — [WorldBattleTickManager__FPendingTimedBattle](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager__FPendingTimedBattle.md)
  - **Description:** 一条尚未开打的周期化进攻请求。超并发上限时入队，等有空位再出队分流。
- `struct` **`FTimedBattleRecord`** — [WorldBattleTickManager__FTimedBattleRecord](EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager__FTimedBattleRecord.md)
  - **Description:** 一场正在推演中的周期化抽象战运行时数据（SaveGame，与队列 FPendingTimedBattle 分开存）。

## `EastRimWorld/WorldSystem/WorldBuildingLightManager.h`

- `class` **`AWorldBuildingLightManager`** — [WorldBuildingLightManager__AWorldBuildingLightManager](EastRimWorld/WorldSystem/WorldBuildingLightManager__AWorldBuildingLightManager.md)
  - **Description:** 建筑夜景灯光管理：黑夜时在摄像机一定范围内，用池化灯光组件（最多 20 个）显示已注册建筑的灯具配置。 灯光组件挂在本 Actor 上，不使用时隐藏。

## `EastRimWorld/WorldSystem/WorldCharacterData.h`

- `struct` **`FBreakThroughHarvest`** — [WorldCharacterData__FBreakThroughHarvest](EastRimWorld/WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)
  - **Description:** Break Through Harvest data structure.
- `struct` **`FCharacterSaveData`** — [WorldCharacterData__FCharacterSaveData](EastRimWorld/WorldSystem/WorldCharacterData__FCharacterSaveData.md)
  - **Description:** Character Save Data data structure.

## `EastRimWorld/WorldSystem/WorldDirector.h`

- `class` **`AWorldDirector`** — [WorldDirector__AWorldDirector](EastRimWorld/WorldSystem/WorldDirector__AWorldDirector.md)
  - **Description:** World Director actor type.
- `struct` **`FApplyTeamBuffData`** — [WorldDirector__FApplyTeamBuffData](EastRimWorld/WorldSystem/WorldDirector__FApplyTeamBuffData.md)
  - **Description:** 施加的阵营buff
- `struct` **`FDeployableCityOption`** — [WorldDirector__FDeployableCityOption](EastRimWorld/WorldSystem/WorldDirector__FDeployableCityOption.md)
  - **Description:** 出征出发地点下拉选项：玩家可作为起点的城(城 SGUID + 显示城名)。仅作 UI 临时返回值, 不入存档(故字段不标 SaveGame)

## `EastRimWorld/WorldSystem/WorldEconomyFunctionLibrary.h`

- `class` **`UWorldEconomyFunctionLibrary`** — [WorldEconomyFunctionLibrary__UWorldEconomyFunctionLibrary](EastRimWorld/WorldSystem/WorldEconomyFunctionLibrary__UWorldEconomyFunctionLibrary.md)
  - **Description:** World Economy Function Library UObject type.

## `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

- `enum` **`EWorldPlaceOrderStage`** — [WorldEconomyStruct__EWorldPlaceOrderStage](EastRimWorld/WorldSystem/WorldEconomyStruct__EWorldPlaceOrderStage.md)
  - **Description:** 治安阶段(0-100 分四段:动荡 / 混乱 / 纷扰 / 安宁) 区间划分(与 GetOrderStage 实现一致;策划文档原文 40-49 与 50-79 段有重叠, 本实现以"50 为界把 50-79 归 纷扰,40-49 归 混乱"作为最终规则): - Turbulence(动荡):0-19 - Chaos (混乱):20-49 - Disturb (纷扰):50-79 - Peace (安宁):80-100
- `struct` **`FRefugeeBatch`** — [WorldEconomyStruct__FRefugeeBatch](EastRimWorld/WorldSystem/WorldEconomyStruct__FRefugeeBatch.md)
  - **Description:** 单股流民(用于据点之间转移)
- `struct` **`FWorldPlaceEconomyState`** — [WorldEconomyStruct__FWorldPlaceEconomyState](EastRimWorld/WorldSystem/WorldEconomyStruct__FWorldPlaceEconomyState.md)
  - **Description:** 据点税收 / 流民相关的累计计数(SaveGame)
- `struct` **`FWorldPlaceRiotState`** — [WorldEconomyStruct__FWorldPlaceRiotState](EastRimWorld/WorldSystem/WorldEconomyStruct__FWorldPlaceRiotState.md)
  - **Description:** 据点暴乱运行时状态

## `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

- `class` **`AWorldEventManagerActor`** — [WorldEventManagerActor__AWorldEventManagerActor](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__AWorldEventManagerActor.md)
  - **Description:** World Event Manager Actor actor type.
- `enum` **`EWorldEventChangeStateType`** — [WorldEventManagerActor__EWorldEventChangeStateType](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__EWorldEventChangeStateType.md)
  - **Description:** 世界事件改变状态的类型
- `enum` **`EWorldEventStateType`** — [WorldEventManagerActor__EWorldEventStateType](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__EWorldEventStateType.md)
  - **Description:** 世界事件的状态
- `enum` **`EWorldEventType`** — [WorldEventManagerActor__EWorldEventType](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__EWorldEventType.md)
  - **Description:** 世界事件类型
- `enum` **`EWorldEventUnlockConditionType`** — [WorldEventManagerActor__EWorldEventUnlockConditionType](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__EWorldEventUnlockConditionType.md)
  - **Description:** 世界的解锁条件类型
- `struct` **`FUnlockedPauseSlotInfo`** — [WorldEventManagerActor__FUnlockedPauseSlotInfo](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FUnlockedPauseSlotInfo.md)
  - **Description:** 解锁暂停插槽的信息
- `struct` **`FWorldEventDetail`** — [WorldEventManagerActor__FWorldEventDetail](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FWorldEventDetail.md)
  - **Description:** 世界事件详细信息
- `struct` **`FWorldEventInfo`** — [WorldEventManagerActor__FWorldEventInfo](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FWorldEventInfo.md)
  - **Description:** 世界事件生成信息
- `struct` **`FWorldEventSpawnConfig`** — [WorldEventManagerActor__FWorldEventSpawnConfig](EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor__FWorldEventSpawnConfig.md)
  - **Description:** 世界事件生成信息

## `EastRimWorld/WorldSystem/WorldForce.h`

- `class` **`AWorldForce`** — [WorldForce__AWorldForce](EastRimWorld/WorldSystem/WorldForce__AWorldForce.md)
  - **Description:** World Force actor type.

## `EastRimWorld/WorldSystem/WorldLightActor.h`

- `class` **`AWorldLightActor`** — [WorldLightActor__AWorldLightActor](EastRimWorld/WorldSystem/WorldLightActor__AWorldLightActor.md)
  - **Description:** World Light Actor actor type.
- `enum` **`EWorldLightType`** — [WorldLightActor__EWorldLightType](EastRimWorld/WorldSystem/WorldLightActor__EWorldLightType.md)
  - **Description:** 世界光照类型

## `EastRimWorld/WorldSystem/WorldManagerSystem.h`

- `class` **`UWorldManagerSystem`** — [WorldManagerSystem__UWorldManagerSystem](EastRimWorld/WorldSystem/WorldManagerSystem__UWorldManagerSystem.md)
  - **Description:** World Manager System UObject type.

## `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

- `struct` **`FWorldMapItemLayoutInfo`** — [WorldMapLayoutStruct__FWorldMapItemLayoutInfo](EastRimWorld/WorldSystem/WorldMapLayoutStruct__FWorldMapItemLayoutInfo.md)
  - **Description:** 世界地图据点(城市)布局配置。 独立表 DT_WorldMapItemLayout，行名(KEY) = 城市 ForceID。 用于保存 / 还原 WB_WorldMap1 -> CanvasPanel_55 下 WB_WorldMapCityItem 的 2D 坐标与控件参数。 还原：城市 item 在 Construct 里按自身 ForceID 查本表，命中则 SetPosition(自身 CanvasSlot) 并回填参数。 城市是 CanvasPanel_55 直接子控件，offset 与 SetPosition 同坐标空间，原样写回即 1:1 复现，不需几何换算。
- `struct` **`FWorldMapRoadBranchConfig`** — [WorldMapLayoutStruct__FWorldMapRoadBranchConfig](EastRimWorld/WorldSystem/WorldMapLayoutStruct__FWorldMapRoadBranchConfig.md)
  - **Description:** 曲线路一条分支的配置：CityId + [岔路口] + 各红点(按序，末点 = 通向该城的连接点)，局部坐标。对应内部 FCurveRoadBranchData
- `struct` **`FWorldMapRoadCityLink`** — [WorldMapLayoutStruct__FWorldMapRoadCityLink](EastRimWorld/WorldSystem/WorldMapLayoutStruct__FWorldMapRoadCityLink.md)
  - **Description:** 曲线路单条连接：CityId + 在路面(控件)局部空间的连接点。对应 UERW_CurveRoadWidget 的 FCurveRoadCity
- `struct` **`FWorldMapRoadConfigInfo`** — [WorldMapLayoutStruct__FWorldMapRoadConfigInfo](EastRimWorld/WorldSystem/WorldMapLayoutStruct__FWorldMapRoadConfigInfo.md)
  - **Description:** 世界地图曲线路(WBP_CurveRoad / UERW_CurveRoadWidget)配置。 独立表 DT_WorldMapRoadConfig，行名(KEY) = 路 id。 覆盖 UERW_CurveRoadWidget 的全部可编辑字段(形状 / 渲染 / 路网) + 它在 CanvasPanel_127 的 slot。 还原：由新增的 UERW_CurveRoadWidget::ApplyConfig 读本行 → 设属性 + (数据建网) + 重绘。 - bHasFork=false：单路径，用 Start/End/TurnPoints + ConnectedCities。 - bHasFork=true ：分叉网络，用 ForkPoint + Branches(每分支末点通向一城)。

## `EastRimWorld/WorldSystem/WorldMapManage.h`

- `class` **`AWorldMapManage`** — [WorldMapManage__AWorldMapManage](EastRimWorld/WorldSystem/WorldMapManage__AWorldMapManage.md)
  - **Description:** World Map Manage actor type.

## `EastRimWorld/WorldSystem/WorldPlace.h`

- `class` **`AWorldPlace`** — [WorldPlace__AWorldPlace](EastRimWorld/WorldSystem/WorldPlace__AWorldPlace.md)
  - **Description:** World Place actor type.

## `EastRimWorld/WorldSystem/WorldPlaceSpecialEffectSubsystem.h`

- `class` **`UWorldPlaceSpecialEffectSubsystem`** — [WorldPlaceSpecialEffectSubsystem__UWorldPlaceSpecialEffectSubsystem](EastRimWorld/WorldSystem/WorldPlaceSpecialEffectSubsystem__UWorldPlaceSpecialEffectSubsystem.md)
  - **Description:** 管理各地点的特殊效果（全局效果）：每个 AWorldPlace 独立数值，配置在 FWorldPlaceInfo，拥有效果存档、数值读档后重算。

## `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

- `enum` **`EWorldBattleRuntimeState`** — [WorldBattleRuntimeStruct__EWorldBattleRuntimeState](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldBattleRuntimeState.md)
  - **Description:** World Battle Runtime State enum type.
- `enum` **`EWorldBattleRuntimeTeamRole`** — [WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md)
  - **Description:** World Battle Runtime Team Role enum type.
- `enum` **`EWorldSectBattleEventSpawnPointType`** — [WorldBattleRuntimeStruct__EWorldSectBattleEventSpawnPointType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleEventSpawnPointType.md)
  - **Description:** 门派战事件刷新坐标类型。事件表只配置类型，具体坐标从当前门派布局表中按类型随机取。
- `enum` **`EWorldSectBattleEventTargetCamp`** — [WorldBattleRuntimeStruct__EWorldSectBattleEventTargetCamp](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleEventTargetCamp.md)
  - **Description:** 门派战事件目标阵营。主要用于加 Buff 事件，决定 Buff 加给进攻方、防守方、中立方或双方。
- `enum` **`EWorldSectBattleEventType`** — [WorldBattleRuntimeStruct__EWorldSectBattleEventType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleEventType.md)
  - **Description:** 门派战事件类型。事件库根据这个字段决定执行刷怪、刷宝箱还是加 Buff。
- `enum` **`EWorldSectBattleFlagOwner`** — [WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md)
  - **Description:** 门派战旗子的初始归属。
- `enum` **`EWorldSectBattleFlagType`** — [WorldBattleRuntimeStruct__EWorldSectBattleFlagType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md)
  - **Description:** World Sect Battle Flag Type enum type.
- `struct` **`FSectBattleLootItem`** — [WorldBattleRuntimeStruct__FSectBattleLootItem](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FSectBattleLootItem.md)
  - **Description:** 门派战拾取的战利品（队伍共享）。一条 = 一种物品（同 id 累加数量）。供 UI 展示战利品/背包列表。
- `struct` **`FWorldBattleRuntimeInfo`** — [WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md)
  - **Description:** 一场门派战的最小运行数据。
- `struct` **`FWorldBattleRuntimeJoinTeamInfo`** — [WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo.md)
  - **Description:** 蓝图加入战场时填写的数据。 势力 Guid 和 TeamID 不在这里填，JoinBattle 会从 WorldForce 自动读取。 当前门派战只根据 TeamRole 决定生成规则，不再区分玩家队字段。
- `struct` **`FWorldBattleRuntimeTeam`** — [WorldBattleRuntimeStruct__FWorldBattleRuntimeTeam](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldBattleRuntimeTeam.md)
  - **Description:** 门派战中的一支队伍。这里只记录身份数据，不记录点数、抽卡、小兵等玩法资源。
- `struct` **`FWorldSectBattleEventConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleEventConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleEventConfig.md)
  - **Description:** 门派战事件库配置。士气库、击杀库、财富库、倒计时库四张表共用这个结构。
- `struct` **`FWorldSectBattleEventSpawnPointConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleEventSpawnPointConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleEventSpawnPointConfig.md)
  - **Description:** 门派战事件刷新点配置。每个门派可以为进攻方、防守方、中立分别配置多个坐标，事件执行时按类型随机取一个。
- `struct` **`FWorldSectBattleFlagConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleFlagConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagConfig.md)
  - **Description:** 门派战旗子配置，用于创建 DataTable。
- `struct` **`FWorldSectBattleFlagPointConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md)
  - **Description:** 门派战中一个旗子的点位配置。
- `struct` **`FWorldSectBattleNormalChestDropConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleNormalChestDropConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleNormalChestDropConfig.md)
  - **Description:** Normal chest drop index table. DropItemConfigID points to DT_DropItemConfig.
- `struct` **`FWorldSectBattleSectConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleSectConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleSectConfig.md)
  - **Description:** World Sect Battle Sect Config data structure.
- `struct` **`FWorldSectBattleSpecialChestDropConfig`** — [WorldBattleRuntimeStruct__FWorldSectBattleSpecialChestDropConfig](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleSpecialChestDropConfig.md)
  - **Description:** Special chest drop index table. DropItemConfigID points to DT_DropItemConfig.

## `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

- `class` **`AWorldSectBattleManager`** — [WorldSectBattleManager__AWorldSectBattleManager](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__AWorldSectBattleManager.md)
  - **Description:** World Sect Battle Manager actor type.
- `enum` **`ESectBattleBuffKind`** — [WorldSectBattleManager__ESectBattleBuffKind](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__ESectBattleBuffKind.md)
  - **Description:** 门派战 buff 显示分类（供 UI 区分士气 / 事件 buff）。
- `enum` **`EWorldSectBattleEndReason`** — [WorldSectBattleManager__EWorldSectBattleEndReason](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__EWorldSectBattleEndReason.md)
  - **Description:** World Sect Battle End Reason enum type.
- `enum` **`EWorldSectBattleEventTriggerType`** — [WorldSectBattleManager__EWorldSectBattleEventTriggerType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__EWorldSectBattleEventTriggerType.md)
  - **Description:** World Sect Battle Event Trigger Type enum type.
- `struct` **`FHeadBuffDisplay`** — [WorldSectBattleManager__FHeadBuffDisplay](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__FHeadBuffDisplay.md)
  - **Description:** 头顶 buff 图标的单格显示数据（已算好转圈% + 剩余秒，UI 直接喂给 WBP_Buff，不用查表/算时间）。
- `struct` **`FSectBattleBuffDisplayItem`** — [WorldSectBattleManager__FSectBattleBuffDisplayItem](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__FSectBattleBuffDisplayItem.md)
  - **Description:** 单条 buff 的显示数据（UI 直接读，不必接触角色实例）。
- `struct` **`FSectBattleCharacterBuffDisplay`** — [WorldSectBattleManager__FSectBattleCharacterBuffDisplay](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__FSectBattleCharacterBuffDisplay.md)
  - **Description:** 一个角色（带进战场的弟子 / FightPawn）的整组 buff 显示数据。
- `struct` **`FSectBattleTeamCompositionInfo`** — [WorldSectBattleManager__FSectBattleTeamCompositionInfo](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__FSectBattleTeamCompositionInfo.md)
  - **Description:** 攻/防某一方的编制构成（按门派层级细分），供 UI 显示"内门弟子 / 外门弟子 / 支援"人数。
- `struct` **`FWorldSectBattleDiscipleSettlementInfo`** — [WorldSectBattleManager__FWorldSectBattleDiscipleSettlementInfo](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__FWorldSectBattleDiscipleSettlementInfo.md)
  - **Description:** World Sect Battle Disciple Settlement Info data structure.
- `struct` **`FWorldSectBattleFlagRuntimeInfo`** — [WorldSectBattleManager__FWorldSectBattleFlagRuntimeInfo](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager__FWorldSectBattleFlagRuntimeInfo.md)
  - **Description:** World Sect Battle Flag Runtime Info data structure.

## `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem.h`

- `enum` **`ESBMessageType`** — [WorldSectBattleMessageSubsystem__ESBMessageType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem__ESBMessageType.md)
  - **Description:** 门派战弹窗消息类型。UI 据此分支：Text 显示 Description；Item 显示 ItemName/ItemIcon（入队时由调用方给好，本系统不查表）。 后续要加新类型（如公告/成就等）直接加枚举值 + 在 MessageDisplaySecondsByType 配一条间隔即可， 队列/定时器/派发逻辑按类型通用，不用改代码。
- `struct` **`FSectBattleMessageEntry`** — [WorldSectBattleMessageSubsystem__FSectBattleMessageEntry](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem__FSectBattleMessageEntry.md)
  - **Description:** 单条弹窗消息。各类型共用同一结构体，靠 MessageType 区分有效字段。
- `class` **`UWorldSectBattleMessageSubsystem`** — [WorldSectBattleMessageSubsystem__UWorldSectBattleMessageSubsystem](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem__UWorldSectBattleMessageSubsystem.md)
  - **Description:** 门派战通用弹窗消息系统（从 UWorldSectBattleRecordSubsystem::EnqueueSectBattleEventText 抽出，去掉对 “战斗记录”的依赖，做成通用消息队列）。 每种 MessageType 各自拥有独立的队列 + 定时器（见 Channels），互不影响、互不占用对方的发放节奏， 各自按 MessageDisplaySecondsByType 里配置的时长依次发放，避免同类型多条消息同时广播打断/叠加 UI 弹窗动画。 DispatchNextMessage 按传入的 MessageType 定位其 channel 处理，新增消息类型无需新增派发函数。

## `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

- `enum` **`ESBBattleEventType`** — [WorldSectBattleRecordSubsystem__ESBBattleEventType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem__ESBBattleEventType.md)
  - **Description:** 战场记录细分类型（仅 RecordType==BattleEvent 时有意义）。 文案直接挂在每个枚举值的 UMETA(Content=...) 上，占位符用有序参数 【0】/【1】（富文本标签透传给 RichTextBlock）： 【0】= 主体（击杀者 / 占领方 / 复活者 / 开箱者 / 我方阵营名） 【1】= 客体（被杀者 / 旗帜名 / 旗帜数量）
- `enum` **`ESBRecordFilter`** — [WorldSectBattleRecordSubsystem__ESBRecordFilter](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem__ESBRecordFilter.md)
  - **Description:** GetRecordItems 的查询过滤维度。刻意与 ESBRecordType 分开：后者是「每条记录固有分类」 （不存在 All），本枚举仅用于查询筛选，故独立定义并额外提供 All。
- `enum` **`ESBRecordType`** — [WorldSectBattleRecordSubsystem__ESBRecordType](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem__ESBRecordType.md)
  - **Description:** 门派战记录顶层分类。UI 以此决定渲染样式/列表分组。
- `struct` **`FSectBattleEventEntry`** — [WorldSectBattleRecordSubsystem__FSectBattleEventEntry](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem__FSectBattleEventEntry.md)
  - **Description:** 单条门派战记录。
- `class` **`USectBattleRecordItemData`** — [WorldSectBattleRecordSubsystem__USectBattleRecordItemData](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem__USectBattleRecordItemData.md)
  - **Description:** CommonListView 列表项数据对象。一条 = 一行记录，暂时只承载 Content（已格式化的富文本）。 CommonListView 的数据源必须是 UObject*，故用本类包装 FSectBattleEventEntry.Content。 Entry Widget 实现 IUserObjectListEntry，在 OnListItemObjectSet 里把本对象的 Content 灌进 RichTextBlock。
- `class` **`UWorldSectBattleRecordSubsystem`** — [WorldSectBattleRecordSubsystem__UWorldSectBattleRecordSubsystem](EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem__UWorldSectBattleRecordSubsystem.md)
  - **Description:** 门派战记录系统（与 AWorldSectBattleManager 解耦）。 职责单一：收集战斗过程事件 → 从 UI_StringTable 取文案并按命名参数格式化 → 存储 + 广播给 UI。 管理器只在事件点（击杀 / 复活 / 占旗 / 开箱）调用本系统薄接口并喂入名字等参数，不持有任何记录/查表逻辑。 UI 通过 Get() 拿到本系统，绑定 OnRecordAdded 实时追加、或 GetRecords() 初始化拉取一次。

## `EastRimWorld/WorldSystem/WorldStruct.h`

- `enum` **`EAgreementDutyType`** — [WorldStruct__EAgreementDutyType](EastRimWorld/WorldSystem/WorldStruct__EAgreementDutyType.md)
  - **Description:** 协议责任类型
- `enum` **`EAgreementType`** — [WorldStruct__EAgreementType](EastRimWorld/WorldSystem/WorldStruct__EAgreementType.md)
  - **Description:** 协议类型
- `enum` **`EAttackSuccessOperateType`** — [WorldStruct__EAttackSuccessOperateType](EastRimWorld/WorldSystem/WorldStruct__EAttackSuccessOperateType.md)
  - **Description:** 攻打成功后操作类型
- `enum` **`ECaptureCharacterDisposalType`** — [WorldStruct__ECaptureCharacterDisposalType](EastRimWorld/WorldSystem/WorldStruct__ECaptureCharacterDisposalType.md)
  - **Description:** 俘虏的角色处置类型
- `enum` **`EERWSeason`** — [WorldStruct__EERWSeason](EastRimWorld/WorldSystem/WorldStruct__EERWSeason.md)
  - **Description:** 世界季节
- `enum` **`EERWWeather`** — [WorldStruct__EERWWeather](EastRimWorld/WorldSystem/WorldStruct__EERWWeather.md)
  - **Description:** 世界天气
- `enum` **`EEffectLevelType`** — [WorldStruct__EEffectLevelType](EastRimWorld/WorldSystem/WorldStruct__EEffectLevelType.md)
  - **Description:** GE等级来源类型
- `enum` **`EEnemyAttackStateType`** — [WorldStruct__EEnemyAttackStateType](EastRimWorld/WorldSystem/WorldStruct__EEnemyAttackStateType.md)
  - **Description:** Enemy Attack State Type enum type.
- `enum` **`EForceAimType`** — [WorldStruct__EForceAimType](EastRimWorld/WorldSystem/WorldStruct__EForceAimType.md)
  - **Description:** 宗旨类型
- `enum` **`EForceAttackType`** — [WorldStruct__EForceAttackType](EastRimWorld/WorldSystem/WorldStruct__EForceAttackType.md)
  - **Description:** 攻击行为
- `enum` **`EForceFavorabilityType`** — [WorldStruct__EForceFavorabilityType](EastRimWorld/WorldSystem/WorldStruct__EForceFavorabilityType.md)
  - **Description:** 好感度类型
- `enum` **`EForceJobType`** — [WorldStruct__EForceJobType](EastRimWorld/WorldSystem/WorldStruct__EForceJobType.md)
  - **Description:** 势力职位表
- `enum` **`EForceOperationType`** — [WorldStruct__EForceOperationType](EastRimWorld/WorldSystem/WorldStruct__EForceOperationType.md)
  - **Description:** 势力操作
- `enum` **`EForceRelativeType`** — [WorldStruct__EForceRelativeType](EastRimWorld/WorldSystem/WorldStruct__EForceRelativeType.md)
  - **Description:** 势力关系亲密度(需要废弃，和 EForceFavorabilityType 重复了)
- `enum` **`EForceState`** — [WorldStruct__EForceState](EastRimWorld/WorldSystem/WorldStruct__EForceState.md)
  - **Description:** 势力此时的状态
- `enum` **`EForceType`** — [WorldStruct__EForceType](EastRimWorld/WorldSystem/WorldStruct__EForceType.md)
  - **Description:** 势力类型
- `enum` **`EGenerateCharacterSourceType`** — [WorldStruct__EGenerateCharacterSourceType](EastRimWorld/WorldSystem/WorldStruct__EGenerateCharacterSourceType.md)
  - **Description:** 生成角色状态类型
- `enum` **`EGenerationActorType`** — [WorldStruct__EGenerationActorType](EastRimWorld/WorldSystem/WorldStruct__EGenerationActorType.md)
  - **Description:** 生成的类型
- `enum` **`EGenerationRuleType`** — [WorldStruct__EGenerationRuleType](EastRimWorld/WorldSystem/WorldStruct__EGenerationRuleType.md)
  - **Description:** 生成的规则类型
- `enum` **`EGenerationStateType`** — [WorldStruct__EGenerationStateType](EastRimWorld/WorldSystem/WorldStruct__EGenerationStateType.md)
  - **Description:** 生成角色状态类型
- `enum` **`EInfluenceType`** — [WorldStruct__EInfluenceType](EastRimWorld/WorldSystem/WorldStruct__EInfluenceType.md)
  - **Description:** 影响的类型
- `enum` **`EInitiatesPromptTargetType`** — [WorldStruct__EInitiatesPromptTargetType](EastRimWorld/WorldSystem/WorldStruct__EInitiatesPromptTargetType.md)
  - **Description:** 发起提示的对象
- `enum` **`EMonsterAttackState`** — [WorldStruct__EMonsterAttackState](EastRimWorld/WorldSystem/WorldStruct__EMonsterAttackState.md)
  - **Description:** 生成角色状态类型
- `enum` **`ENPCCultivateCharacterType`** — [WorldStruct__ENPCCultivateCharacterType](EastRimWorld/WorldSystem/WorldStruct__ENPCCultivateCharacterType.md)
  - **Description:** NPC势力角色培养方式
- `enum` **`EPlaceBuildActionType`** — [WorldStruct__EPlaceBuildActionType](EastRimWorld/WorldSystem/WorldStruct__EPlaceBuildActionType.md)
  - **Description:** Place Build Action Type enum type.
- `enum` **`EPlaceBuildFuncType`** — [WorldStruct__EPlaceBuildFuncType](EastRimWorld/WorldSystem/WorldStruct__EPlaceBuildFuncType.md)
  - **Description:** Place Build Func Type enum type.
- `enum` **`EPlaceDisposalType`** — [WorldStruct__EPlaceDisposalType](EastRimWorld/WorldSystem/WorldStruct__EPlaceDisposalType.md)
  - **Description:** 地点的处置类型
- `enum` **`EPlaceOutputResourceStateType`** — [WorldStruct__EPlaceOutputResourceStateType](EastRimWorld/WorldSystem/WorldStruct__EPlaceOutputResourceStateType.md)
  - **Description:** 城镇产出物资状态类型
- `enum` **`EPunishmentType`** — [WorldStruct__EPunishmentType](EastRimWorld/WorldSystem/WorldStruct__EPunishmentType.md)
  - **Description:** 处罚类型
- `enum` **`ESectSearchTargetType`** — [WorldStruct__ESectSearchTargetType](EastRimWorld/WorldSystem/WorldStruct__ESectSearchTargetType.md)
  - **Description:** 搜索攻击目标（优先级 12+1 级，PR-4）
- `enum` **`ETeamUnitType`** — [WorldStruct__ETeamUnitType](EastRimWorld/WorldSystem/WorldStruct__ETeamUnitType.md)
  - **Description:** 单位类型
- `enum` **`EThreatType`** — [WorldStruct__EThreatType](EastRimWorld/WorldSystem/WorldStruct__EThreatType.md)
  - **Description:** 威胁类型
- `enum` **`ETipInteractionType`** — [WorldStruct__ETipInteractionType](EastRimWorld/WorldSystem/WorldStruct__ETipInteractionType.md)
  - **Description:** 提示交互类型
- `enum` **`ETipsSeverity`** — [WorldStruct__ETipsSeverity](EastRimWorld/WorldSystem/WorldStruct__ETipsSeverity.md)
  - **Description:** 提示的分级
- `enum` **`ETipsType`** — [WorldStruct__ETipsType](EastRimWorld/WorldSystem/WorldStruct__ETipsType.md)
  - **Description:** 提示类型
- `enum` **`EUpgradeErrorType`** — [WorldStruct__EUpgradeErrorType](EastRimWorld/WorldSystem/WorldStruct__EUpgradeErrorType.md)
  - **Description:** 升级错误信息
- `enum` **`EWorldForceWeaponType`** — [WorldStruct__EWorldForceWeaponType](EastRimWorld/WorldSystem/WorldStruct__EWorldForceWeaponType.md)
  - **Description:** 势力武器类型
- `enum` **`EWorldMapMoveType`** — [WorldStruct__EWorldMapMoveType](EastRimWorld/WorldSystem/WorldStruct__EWorldMapMoveType.md)
  - **Description:** 世界地图移动类型
- `enum` **`EWorldMoveState`** — [WorldStruct__EWorldMoveState](EastRimWorld/WorldSystem/WorldStruct__EWorldMoveState.md)
  - **Description:** World Move State enum type.
- `enum` **`EWorldPlaceBuildRunState`** — [WorldStruct__EWorldPlaceBuildRunState](EastRimWorld/WorldSystem/WorldStruct__EWorldPlaceBuildRunState.md)
  - **Description:** 城镇建筑设施运行状态
- `enum` **`EWorldPlaceBuildType`** — [WorldStruct__EWorldPlaceBuildType](EastRimWorld/WorldSystem/WorldStruct__EWorldPlaceBuildType.md)
  - **Description:** 城镇建筑设施类型
- `enum` **`EWorldPlaceSpecialEffectType`** — [WorldStruct__EWorldPlaceSpecialEffectType](EastRimWorld/WorldSystem/WorldStruct__EWorldPlaceSpecialEffectType.md)
  - **Description:** 地点特殊效果类型（全局效果，每个 AWorldPlace 独立数值）
- `enum` **`EWorldPlaceStateType`** — [WorldStruct__EWorldPlaceStateType](EastRimWorld/WorldSystem/WorldStruct__EWorldPlaceStateType.md)
  - **Description:** 世界地点状态
- `enum` **`EWorldPointType`** — [WorldStruct__EWorldPointType](EastRimWorld/WorldSystem/WorldStruct__EWorldPointType.md)
  - **Description:** 提示类型
- `struct` **`FAttackEarlyWarning`** — [WorldStruct__FAttackEarlyWarning](EastRimWorld/WorldSystem/WorldStruct__FAttackEarlyWarning.md)
  - **Description:** 攻击预警
- `struct` **`FBattleBuffGroup`** — [WorldStruct__FBattleBuffGroup](EastRimWorld/WorldSystem/WorldStruct__FBattleBuffGroup.md)
  - **Description:** 战斗buff集合
- `struct` **`FCaptureDisposal`** — [WorldStruct__FCaptureDisposal](EastRimWorld/WorldSystem/WorldStruct__FCaptureDisposal.md)
  - **Description:** 俘虏的处置
- `struct` **`FCharacterWorldMoveInfo`** — [WorldStruct__FCharacterWorldMoveInfo](EastRimWorld/WorldSystem/WorldStruct__FCharacterWorldMoveInfo.md)
  - **Description:** 角色世界地图移动信息
- `struct` **`FCharacterWorldMoveInfo2D`** — [WorldStruct__FCharacterWorldMoveInfo2D](EastRimWorld/WorldSystem/WorldStruct__FCharacterWorldMoveInfo2D.md)
  - **Description:** 角色2d世界地图移动信息
- `struct` **`FCharacterWorldPlaceData`** — [WorldStruct__FCharacterWorldPlaceData](EastRimWorld/WorldSystem/WorldStruct__FCharacterWorldPlaceData.md)
  - **Description:** 驻扎角色的城镇数据
- `struct` **`FCommonTips`** — [WorldStruct__FCommonTips](EastRimWorld/WorldSystem/WorldStruct__FCommonTips.md)
  - **Description:** Common Tips data structure.
- `struct` **`FCommonTipsArr`** — [WorldStruct__FCommonTipsArr](EastRimWorld/WorldSystem/WorldStruct__FCommonTipsArr.md)
  - **Description:** Common Tips Arr data structure.
- `struct` **`FCultivateAttributeValueWeight`** — [WorldStruct__FCultivateAttributeValueWeight](EastRimWorld/WorldSystem/WorldStruct__FCultivateAttributeValueWeight.md)
  - **Description:** NPC培养角色属性加值权重
- `struct` **`FCultivateAttributeWeight`** — [WorldStruct__FCultivateAttributeWeight](EastRimWorld/WorldSystem/WorldStruct__FCultivateAttributeWeight.md)
  - **Description:** NPC培养角色属性抽取权重
- `struct` **`FCustomApparelsSkin`** — [WorldStruct__FCustomApparelsSkin](EastRimWorld/WorldSystem/WorldStruct__FCustomApparelsSkin.md)
  - **Description:** 服饰外观数据
- `struct` **`FEffectLevelData`** — [WorldStruct__FEffectLevelData](EastRimWorld/WorldSystem/WorldStruct__FEffectLevelData.md)
  - **Description:** GE等级信息
- `struct` **`FEnemyAttackGenerationConfig`** — [WorldStruct__FEnemyAttackGenerationConfig](EastRimWorld/WorldSystem/WorldStruct__FEnemyAttackGenerationConfig.md)
  - **Description:** 敌对势力袭击配置
- `struct` **`FEnemyForceAttackGenerationInfo`** — [WorldStruct__FEnemyForceAttackGenerationInfo](EastRimWorld/WorldSystem/WorldStruct__FEnemyForceAttackGenerationInfo.md)
  - **Description:** Enemy Force Attack Generation Info data structure.
- `struct` **`FFGuidArr`** — [WorldStruct__FFGuidArr](EastRimWorld/WorldSystem/WorldStruct__FFGuidArr.md)
  - **Description:** FGuidArr
- `struct` **`FForceAimInfo`** — [WorldStruct__FForceAimInfo](EastRimWorld/WorldSystem/WorldStruct__FForceAimInfo.md)
  - **Description:** 势力宗旨配置表
- `struct` **`FForceApparelSetArray`** — [WorldStruct__FForceApparelSetArray](EastRimWorld/WorldSystem/WorldStruct__FForceApparelSetArray.md)
  - **Description:** 门派外观套装数组（UHT 不支持 TMap 值为 TArray，需此包装）
- `struct` **`FForceAttackTypeConfig`** — [WorldStruct__FForceAttackTypeConfig](EastRimWorld/WorldSystem/WorldStruct__FForceAttackTypeConfig.md)
  - **Description:** 势力攻击行为配置
- `struct` **`FForceCreateCondition`** — [WorldStruct__FForceCreateCondition](EastRimWorld/WorldSystem/WorldStruct__FForceCreateCondition.md)
  - **Description:** 势力创建条件
- `struct` **`FForceFavorabilityConfig`** — [WorldStruct__FForceFavorabilityConfig](EastRimWorld/WorldSystem/WorldStruct__FForceFavorabilityConfig.md)
  - **Description:** 势力好感度配置
- `struct` **`FForceFavorabilityInfo`** — [WorldStruct__FForceFavorabilityInfo](EastRimWorld/WorldSystem/WorldStruct__FForceFavorabilityInfo.md)
  - **Description:** 势力好感信息
- `struct` **`FForceInitFavorability`** — [WorldStruct__FForceInitFavorability](EastRimWorld/WorldSystem/WorldStruct__FForceInitFavorability.md)
  - **Description:** 势力间好感度初始配置
- `struct` **`FForceLevelInfo`** — [WorldStruct__FForceLevelInfo](EastRimWorld/WorldSystem/WorldStruct__FForceLevelInfo.md)
  - **Description:** 势力等级信息（势力声望级别配置）
- `struct` **`FForceMemberJobInfo`** — [WorldStruct__FForceMemberJobInfo](EastRimWorld/WorldSystem/WorldStruct__FForceMemberJobInfo.md)
  - **Description:** 势力人员职位信息
- `struct` **`FForceMoveGifInfo`** — [WorldStruct__FForceMoveGifInfo](EastRimWorld/WorldSystem/WorldStruct__FForceMoveGifInfo.md)
  - **Description:** 势力移动gif配置
- `struct` **`FForcePurpose`** — [WorldStruct__FForcePurpose](EastRimWorld/WorldSystem/WorldStruct__FForcePurpose.md)
  - **Description:** 门派宗旨
- `struct` **`FForceSubClassInfo`** — [WorldStruct__FForceSubClassInfo](EastRimWorld/WorldSystem/WorldStruct__FForceSubClassInfo.md)
  - **Description:** 势力堂口信息（内门、外门、外事）
- `struct` **`FForceWarInfo`** — [WorldStruct__FForceWarInfo](EastRimWorld/WorldSystem/WorldStruct__FForceWarInfo.md)
  - **Description:** 势力战争信息
- `struct` **`FGarrisonRatio`** — [WorldStruct__FGarrisonRatio](EastRimWorld/WorldSystem/WorldStruct__FGarrisonRatio.md)
  - **Description:** 驻守比例
- `struct` **`FGenerationData`** — [WorldStruct__FGenerationData](EastRimWorld/WorldSystem/WorldStruct__FGenerationData.md)
  - **Description:** Generation Data data structure.
- `struct` **`FGenerationInstanceInfo`** — [WorldStruct__FGenerationInstanceInfo](EastRimWorld/WorldSystem/WorldStruct__FGenerationInstanceInfo.md)
  - **Description:** 生成的实例
- `struct` **`FGenerationProbabilityInfluence`** — [WorldStruct__FGenerationProbabilityInfluence](EastRimWorld/WorldSystem/WorldStruct__FGenerationProbabilityInfluence.md)
  - **Description:** 生成的概率影响
- `struct` **`FGenerationRuleData`** — [WorldStruct__FGenerationRuleData](EastRimWorld/WorldSystem/WorldStruct__FGenerationRuleData.md)
  - **Description:** 生成的规则
- `struct` **`FGenerationSetData`** — [WorldStruct__FGenerationSetData](EastRimWorld/WorldSystem/WorldStruct__FGenerationSetData.md)
  - **Description:** 生成的信息
- `struct` **`FInstanceGenerationActorInfo`** — [WorldStruct__FInstanceGenerationActorInfo](EastRimWorld/WorldSystem/WorldStruct__FInstanceGenerationActorInfo.md)
  - **Description:** 实例信息
- `struct` **`FMediaConfig`** — [WorldStruct__FMediaConfig](EastRimWorld/WorldSystem/WorldStruct__FMediaConfig.md)
  - **Description:** Media Config data structure.
- `struct` **`FMonsterAttackSetting`** — [WorldStruct__FMonsterAttackSetting](EastRimWorld/WorldSystem/WorldStruct__FMonsterAttackSetting.md)
  - **Description:** 怪物巢穴攻击设置
- `struct` **`FMonsterGenerationConfig`** — [WorldStruct__FMonsterGenerationConfig](EastRimWorld/WorldSystem/WorldStruct__FMonsterGenerationConfig.md)
  - **Description:** 怪物生成
- `struct` **`FMonsterGenerationInfo`** — [WorldStruct__FMonsterGenerationInfo](EastRimWorld/WorldSystem/WorldStruct__FMonsterGenerationInfo.md)
  - **Description:** 怪物生成
- `struct` **`FMonsterNestInfo`** — [WorldStruct__FMonsterNestInfo](EastRimWorld/WorldSystem/WorldStruct__FMonsterNestInfo.md)
  - **Description:** Monster Nest Info data structure.
- `struct` **`FNPCCultivateCharacterTypeData`** — [WorldStruct__FNPCCultivateCharacterTypeData](EastRimWorld/WorldSystem/WorldStruct__FNPCCultivateCharacterTypeData.md)
  - **Description:** NPC势力角色培养方式
- `struct` **`FNPCForceArmorPool`** — [WorldStruct__FNPCForceArmorPool](EastRimWorld/WorldSystem/WorldStruct__FNPCForceArmorPool.md)
  - **Description:** NPC Force Armor Pool data structure.
- `struct` **`FPawnSaveInfo`** — [WorldStruct__FPawnSaveInfo](EastRimWorld/WorldSystem/WorldStruct__FPawnSaveInfo.md)
  - **Description:** pawn的存储信息 位置 旋转 弹簧臂等
- `struct` **`FPlaceBuildAction`** — [WorldStruct__FPlaceBuildAction](EastRimWorld/WorldSystem/WorldStruct__FPlaceBuildAction.md)
  - **Description:** Place Build Action data structure.
- `struct` **`FPlaceBuildLevelInfo`** — [WorldStruct__FPlaceBuildLevelInfo](EastRimWorld/WorldSystem/WorldStruct__FPlaceBuildLevelInfo.md)
  - **Description:** Place Build Level Info data structure.
- `struct` **`FPlaceDisposal`** — [WorldStruct__FPlaceDisposal](EastRimWorld/WorldSystem/WorldStruct__FPlaceDisposal.md)
  - **Description:** Place Disposal data structure.
- `struct` **`FPlaceDistanceTimeAndSpeed`** — [WorldStruct__FPlaceDistanceTimeAndSpeed](EastRimWorld/WorldSystem/WorldStruct__FPlaceDistanceTimeAndSpeed.md)
  - **Description:** 角色世界地图移动信息预设
- `struct` **`FPlaceLevelDistinguishInfo`** — [WorldStruct__FPlaceLevelDistinguishInfo](EastRimWorld/WorldSystem/WorldStruct__FPlaceLevelDistinguishInfo.md)
  - **Description:** Place Level Distinguish Info data structure.
- `struct` **`FPlaceLevelInfo`** — [WorldStruct__FPlaceLevelInfo](EastRimWorld/WorldSystem/WorldStruct__FPlaceLevelInfo.md)
  - **Description:** 地点等级信息
- `struct` **`FPlaceLevelOutPut`** — [WorldStruct__FPlaceLevelOutPut](EastRimWorld/WorldSystem/WorldStruct__FPlaceLevelOutPut.md)
  - **Description:** 城镇等级产出
- `struct` **`FPositionArr`** — [WorldStruct__FPositionArr](EastRimWorld/WorldSystem/WorldStruct__FPositionArr.md)
  - **Description:** Position Arr data structure.
- `struct` **`FRaidEventElementInfo`** — [WorldStruct__FRaidEventElementInfo](EastRimWorld/WorldSystem/WorldStruct__FRaidEventElementInfo.md)
  - **Description:** 事件队列信息（事件冷却队列，袭击事件执行队列）
- `struct` **`FRaidRuleset`** — [WorldStruct__FRaidRuleset](EastRimWorld/WorldSystem/WorldStruct__FRaidRuleset.md)
  - **Description:** 袭击规则（触发模式）
- `struct` **`FRandomDiscipleConfig`** — [WorldStruct__FRandomDiscipleConfig](EastRimWorld/WorldSystem/WorldStruct__FRandomDiscipleConfig.md)
  - **Description:** 随机弟子生成配置（DT_RandomDiscipleConfig 表行，EGameConfigType::RandomDiscipleConfig） 使用方通过 AERW_GameModeBase::GetRandomDiscipleConfig(ID) 获取： 1) EGenerationActorType::SpawnRandomDisciple 生成配置（FGenerationData.RandomDiscipleConfigID） 2) NPC势力招募培养（FWorldNPCForceConfig.RecruitRandomDiscipleConfigID）
- `struct` **`FSeasonMaterialInfo`** — [WorldStruct__FSeasonMaterialInfo](EastRimWorld/WorldSystem/WorldStruct__FSeasonMaterialInfo.md)
  - **Description:** 季节变化材质配置表
- `struct` **`FSeasonWeathersInfo`** — [WorldStruct__FSeasonWeathersInfo](EastRimWorld/WorldSystem/WorldStruct__FSeasonWeathersInfo.md)
  - **Description:** 季节天气配置表（参考 UDS_Weather_Settings）
- `struct` **`FSubClassApparelConfig`** — [WorldStruct__FSubClassApparelConfig](EastRimWorld/WorldSystem/WorldStruct__FSubClassApparelConfig.md)
  - **Description:** 势力服饰限制表（此表中没有的数据，就是无限制）
- `struct` **`FThreatPoolInfo`** — [WorldStruct__FThreatPoolInfo](EastRimWorld/WorldSystem/WorldStruct__FThreatPoolInfo.md)
  - **Description:** 威胁池信息
- `struct` **`FTransportationInfo`** — [WorldStruct__FTransportationInfo](EastRimWorld/WorldSystem/WorldStruct__FTransportationInfo.md)
  - **Description:** 交通工具信息
- `struct` **`FTransportationResourceInfo`** — [WorldStruct__FTransportationResourceInfo](EastRimWorld/WorldSystem/WorldStruct__FTransportationResourceInfo.md)
  - **Description:** 交通工具信息
- `struct` **`FWorldAgreement`** — [WorldStruct__FWorldAgreement](EastRimWorld/WorldSystem/WorldStruct__FWorldAgreement.md)
  - **Description:** World Agreement data structure.
- `struct` **`FWorldAreaInfo`** — [WorldStruct__FWorldAreaInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldAreaInfo.md)
  - **Description:** World Area Info data structure.
- `struct` **`FWorldForceInfo`** — [WorldStruct__FWorldForceInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldForceInfo.md)
  - **Description:** 势力信息
- `struct` **`FWorldMoveInfoPreset`** — [WorldStruct__FWorldMoveInfoPreset](EastRimWorld/WorldSystem/WorldStruct__FWorldMoveInfoPreset.md)
  - **Description:** 角色世界地图移动信息预设
- `struct` **`FWorldNPCForceConfig`** — [WorldStruct__FWorldNPCForceConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldNPCForceConfig.md)
  - **Description:** NPC势力信息
- `struct` **`FWorldNPCForceTroops`** — [WorldStruct__FWorldNPCForceTroops](EastRimWorld/WorldSystem/WorldStruct__FWorldNPCForceTroops.md)
  - **Description:** World NPC Force Troops data structure.
- `struct` **`FWorldPlaceBuildConfig`** — [WorldStruct__FWorldPlaceBuildConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceBuildConfig.md)
  - **Description:** World Place Build Config data structure.
- `struct` **`FWorldPlaceBuildInfo`** — [WorldStruct__FWorldPlaceBuildInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceBuildInfo.md)
  - **Description:** World Place Build Info data structure.
- `struct` **`FWorldPlaceEffectConfig`** — [WorldStruct__FWorldPlaceEffectConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceEffectConfig.md)
  - **Description:** 城镇效果
- `struct` **`FWorldPlaceEffectInfo`** — [WorldStruct__FWorldPlaceEffectInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceEffectInfo.md)
  - **Description:** World Place Effect Info data structure.
- `struct` **`FWorldPlaceInfo`** — [WorldStruct__FWorldPlaceInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceInfo.md)
  - **Description:** World Place Info data structure.
- `struct` **`FWorldPlaceJobConfig`** — [WorldStruct__FWorldPlaceJobConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceJobConfig.md)
  - **Description:** 城镇职位配置
- `struct` **`FWorldPlaceLightInfluenceInfo`** — [WorldStruct__FWorldPlaceLightInfluenceInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceLightInfluenceInfo.md)
  - **Description:** World Place Light Influence Info data structure.
- `struct` **`FWorldPlaceLightInfo`** — [WorldStruct__FWorldPlaceLightInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceLightInfo.md)
  - **Description:** 光照信息
- `struct` **`FWorldPlaceSpecialEffectConfig`** — [WorldStruct__FWorldPlaceSpecialEffectConfig](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceSpecialEffectConfig.md)
  - **Description:** 地点特殊效果配置（对应数据表行）；参数直接写在配置中，按效果类型使用对应字段即可
- `struct` **`FWorldPlaceTemperatureInfo`** — [WorldStruct__FWorldPlaceTemperatureInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceTemperatureInfo.md)
  - **Description:** 温度信息
- `struct` **`FWorldPlaceWeatherInfo`** — [WorldStruct__FWorldPlaceWeatherInfo](EastRimWorld/WorldSystem/WorldStruct__FWorldPlaceWeatherInfo.md)
  - **Description:** 天气信息
- `struct` **`FWorldPointSave2d`** — [WorldStruct__FWorldPointSave2d](EastRimWorld/WorldSystem/WorldStruct__FWorldPointSave2d.md)
  - **Description:** 2d地图关键点的保存
- `class` **`URaidConfigurationAsset`** — [WorldStruct__URaidConfigurationAsset](EastRimWorld/WorldSystem/WorldStruct__URaidConfigurationAsset.md)
  - **Description:** 袭击配置资产
- `class` **`UWorldForceConfigurationAsset`** — [WorldStruct__UWorldForceConfigurationAsset](EastRimWorld/WorldSystem/WorldStruct__UWorldForceConfigurationAsset.md)
  - **Description:** World Force Configuration Asset UObject type.

## `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathFunctionLibrary.h`

- `class` **`UWorldMapPathFunctionLibrary`** — [WorldMapPathFunctionLibrary__UWorldMapPathFunctionLibrary](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathFunctionLibrary__UWorldMapPathFunctionLibrary.md)
  - **Description:** 世界地图路径查找蓝图函数库 提供易于使用的路径查找接口

## `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

- `enum` **`EFindPathType`** — [WorldMapPathSubsystem__EFindPathType](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__EFindPathType.md)
  - **Description:** 查找路径
- `enum` **`EPathfindingError`** — [WorldMapPathSubsystem__EPathfindingError](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__EPathfindingError.md)
  - **Description:** 路径查找错误类型
- `struct` **`FPathfindingConfig`** — [WorldMapPathSubsystem__FPathfindingConfig](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__FPathfindingConfig.md)
  - **Description:** 性能配置
- `struct` **`FPathfindingResult`** — [WorldMapPathSubsystem__FPathfindingResult](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__FPathfindingResult.md)
  - **Description:** 路径查找结果
- `struct` **`FPathfindingStats`** — [WorldMapPathSubsystem__FPathfindingStats](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__FPathfindingStats.md)
  - **Description:** 性能统计
- `class` **`UWorldMapPathSubsystem`** — [WorldMapPathSubsystem__UWorldMapPathSubsystem](EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem__UWorldMapPathSubsystem.md)
  - **Description:** 优化的世界地图路径子系统

## `EastRimWorld/WorldSystem/WroldMapPath/WorldMapWayPoint.h`

- `class` **`AWorldMapWayPoint`** — [WorldMapWayPoint__AWorldMapWayPoint](EastRimWorld/WorldSystem/WroldMapPath/WorldMapWayPoint__AWorldMapWayPoint.md)
  - **Description:** World Map Way Point actor type.
