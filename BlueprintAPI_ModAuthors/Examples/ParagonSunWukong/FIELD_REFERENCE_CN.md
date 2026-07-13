# ParagonSunWukong JSON 字段说明

本文覆盖示例中出现的字段。JSON 字段匹配忽略大小写、空格和下划线，但建议保留导出器生成的原名。

## 1. ModInfo.json

| 字段 | 类型 | 说明 |
|---|---|---|
| `ModId` | string | 必填且唯一的 Mod 标识；示例实例为 `WK_100` |
| `ModName` | string | 界面中显示的名称 |
| `Version` | string | Mod 版本，参与存档兼容检查 |
| `Author` | string | 作者名 |
| `Description` | string | Mod 描述 |
| `Icon` | string | 相对 Mod 根目录的图标路径 |
| `MainLuaFile` | string | Lua 入口文件，默认 `Main.lua` |
| `ModInformationAssetPath` | string | 旧版信息资产路径；当前运行时已改为只从 JSON 加载配置，保留仅为工具兼容 |
| `NewGameLoad` | bool | 是否在新游戏流程加载 |
| `MinGameVersion` | string | 最低游戏版本 |
| `ModToolVersion` | string | 打包工具版本，通常由工具写入 |
| `IncludeGameplayTags` | bool | 是否包含自定义 GameplayTags ini |
| `GameplayTagsIniFile` | string | 打包工具使用的 GameplayTags ini 相对路径；未启用时为空 |
| `AdditionalAssets` | array | 打包工具额外收集的 Content 相对资源路径 |
| `Dependencies` | array | Mod 依赖列表 |
| `Dependencies[].ModId` | string | 被依赖 Mod 的唯一 ID |
| `Dependencies[].MinVersion` | string | 被依赖 Mod 的最低版本 |
| `Dependencies[].Required` | bool | `true` 表示缺失依赖时不应加载 |
| `PublishedFileId` | string | Steam 创意工坊 ID，上传后写入 |
| `DataTableConfigs` | array | 需在加载期应用的 DataTable JSON |
| `DataAssetConfigs` | array | 需在加载期应用的 DataAsset JSON；本示例为空 |

### DataTableConfigs 条目

| 字段 | 说明 |
|---|---|
| `ConfigType` | 配置类型键，用于找到目标数据表 |
| `JsonFile` | 相对 Mod 根目录的 JSON 文件 |
| `StructName` | 表行结构的 Unreal 完整类型路径 |
| `bOverrideData` | `false` 为合并（推荐）；`true` 使数组/Map 整体替换 |

## 2. 配置 JSON 公共外层

| 字段 | 说明 |
|---|---|
| `StructName` | 必须与 `ModInfo.json` 条目一致 |
| `Rows` | 行名到行数据的对象 |
| `Rows.WuKong_GreatSage` | 本示例的新角色行；三张表共用该逻辑 ID |

## 3. CharacterAnatomyProfiles.json

| 路径 | 说明 |
|---|---|
| `body.mesh` | 角色主 SkeletalMesh 的硬引用 |
| `body.anim Instance Class` | 默认动画蓝图生成类 |
| `body.skin Material Sets` | 皮肤材质组列表 |
| `body.skin Texture Sets` | 皮肤纹理组 Map |
| `body.eyes Material Sets` | 眼睛材质组列表 |
| `body.face Variants.group Name` | 脸部变体组名 |
| `body.face Variants.iDs` | 该组包含的脸部变体 ID |
| `heads` | 可选头部数据列表 |
| `default Customization Profile` | 未指定独立预设时使用的完整默认外观 |
| `default Customization Profile.meta Data.name` | 预设名 |
| `default Customization Profile.meta Data.anatomy` | 引用的人体结构行名 |
| `default Customization Profile.meta Data.iD` | 预设 GUID |
| `default Customization Profile.meta Data.showInEditor` | 是否在损人编辑器中可见 |
| `default Customization Profile.meta Data.race` | 种族 |
| `default Customization Profile.meta Data.gender` | 性别 |
| `default Customization Profile.meta Data.generation` | 年龄代际 |
| `default Customization Profile.basebody` | 头部、皮肤、眼睛、Morph 与动画参数 |
| `default Customization Profile.hairstyle` | 发型资源及全局材质参数 |
| `default Customization Profile.groom` | Groom 资源及全局材质参数 |
| `default Customization Profile.apparel` | 服饰资源及全局材质参数 |
| `default Customization Profile.equipment` | 装备外观资源及全局材质参数 |
| `default Customization Profile.attachments` | 附件资源及全局材质参数 |
| `default Customization Profile.avatar` | 默认头像资源 |
| `default Customization Profile.characterEquipmentIds` | 外观预设绑定的装备 ID Map |
| `showApparel` | 是否显示服饰层 |

## 4. CharacterAppearancePreset.json

| 路径 | 说明 |
|---|---|
| `meta Data.name` | 外观预设名 |
| `meta Data.anatomy` | 人体结构行名，必须对应 `CharacterAnatomyProfiles` |
| `meta Data.iD` | 外观预设的唯一 GUID |
| `meta Data.showInEditor` | 是否在损人编辑器显示 |
| `meta Data.race` | 种族，示例为 `Human` |
| `meta Data.gender` | 性别，示例为 `Male` |
| `meta Data.generation` | 年龄代际，示例为 `Adult` |
| `basebody.head.index` | 头部变体索引 |
| `basebody.skin.material Index` | 皮肤材质组索引 |
| `basebody.skin.texture Sets` | 皮肤纹理组列表 |
| `basebody.skin.scalar Parameters` | 皮肤标量材质参数 Map |
| `basebody.skin.hDR Vector Parameters` | 皮肤 HDR 颜色材质参数 Map |
| `basebody.skin.hDR Vector Parameters.baseColorMul.h/s/v/a/intensity` | `baseColorMul` 的色相/饱和度/明度/Alpha/强度 |
| `basebody.eyes.material Index` | 眼睛材质组索引 |
| `basebody.eyes.scalar Parameters` | 眼睛标量材质参数 Map |
| `basebody.eyes.hDR Vector Parameters` | 眼睛 HDR 颜色材质参数 Map |
| `basebody.morph Targets.eye_01/eye_02/nose_01/mouth_01/jaw_01/ear_01` | 眼、鼻、嘴、下颌和耳的 Morph Target 权重 |
| `basebody.morph Target Groups` | Morph Target 组权重 Map |
| `basebody.anim Instance Alphas.age` | 年龄动画实例混合值 |
| `basebody.anim Instance Alphas.size` | 体型动画实例混合值 |
| `hairstyle/groom/apparel/equipment/attachments.data Assets` | 各外观分类的资源列表 |
| `hairstyle/groom/apparel/equipment/attachments.global Scalar Parameters` | 各分类全局标量材质参数 |
| `hairstyle/groom/apparel/equipment/attachments.global HDR Vector Parameters` | 各分类全局 HDR 材质参数 |
| `avatar` | 外观预设头像资源 |
| `characterEquipmentIds` | 外观预设绑定的装备 ID Map |

## 5. CharacterConfig.json 角色字段

| 字段 | 说明 |
|---|---|
| `customizationId` | 外观预设行 ID |
| `height`, `weight` | 身高与体重 |
| `backgroundStory` | 背景故事 |
| `refuseText`, `acceptText`, `joinText` | 投靠拒绝、接受和加入时的文本 |
| `initCharacteristicIds` | 初始特性 ID 数组 |
| `characterName`, `characterFirstName` | 名与姓 |
| `sex` | `true` 男，`false` 女 |
| `age` | 年龄 |
| `deathAnimMontage` | 死亡动画蒙太奇资源 |
| `deathMontageSection` | 可用的死亡蒙太奇 Section 名列表 |
| `avatar`, `half_Avatar`, `half_TourAvatar`, `smallTourAvatar`, `half_UIAvatar` | 不同 UI 场景使用的头像/立绘 |
| `hitAnimMontage.normalLeftHit/normalRightHit/normalBackHit/normalFrontHit` | 左/右/后/前受击蒙太奇 |
| `initWeapon` | 初始武器 ID |
| `initArmor.armor/pants/shoes` | 初始上装、下装和鞋 ID |
| `sightRadius` | AI 视野范围 |
| `loseSightRadius` | AI 丢失目标的视野范围 |
| `reportTeamTeamRadius` | 团队感知通报范围 |
| `baseHealingRate` | 角色配置层的基础愈合速度 |
| `bCanBeTreat` | 能否被治疗 |
| `bCanChooseNewGame` | 新游戏时能否被选为队员 |
| `controlEffectAnimMontage` | GameplayTag 到控制效果蒙太奇的 Map |
| `initInternalStrength` | 初始内功 ID |
| `initMoves` | 初始招式 ID 数组 |
| `initPassive` | 初始被动 ID 数组 |
| `attributes` | 属性名到 float 的 Map，详见下节 |
| `templateId` | 用于初始化的角色模板 ID |
| `iD` | 角色配置行的逻辑 ID |

## 6. attributes 全字段

| 字段 | 说明 |
|---|---|
| `maxNutritionValue`, `nutritionValue` | 营养值上限与初始值 |
| `maxTiredValue`, `tiredValue` | 疲劳值上限与初始值 |
| `maxHappyValue`, `happyValue` | 快乐值上限与初始值 |
| `moveSpeed`, `runSpeed` | 移动速度与跑步速度 |
| `freeWeight` | 可用负重 |
| `intelligenceLevel`, `socialContactLevel`, `cureLevel` | 智力、社交、治疗技能等级 |
| `moodValue` | 心情值 |
| `artLevel`, `farmingLevel`, `constructionLevel`, `miningLevel` | 艺术、耕种、建造、采矿技能等级 |
| `cookingLevel`, `animalLevel`, `makeLevel` | 烹饪、动物、制造技能等级 |
| `minAttack`, `maxAttack` | 最小与最大攻击 |
| `maxHead`, `head` | 头部耐久上限与初始值 |
| `maxLeftEye`, `leftEye`, `maxRightEye`, `rightEye` | 左/右眼耐久上限与初始值 |
| `maxLeftEar`, `leftEar`, `maxRightEar`, `rightEar` | 左/右耳耐久上限与初始值 |
| `maxMouth`, `mouth` | 口部耐久上限与初始值 |
| `maxBody`, `body` | 躯干耐久上限与初始值 |
| `maxViscera`, `viscera` | 内脏耐久上限与初始值 |
| `maxDantian`, `dantian` | 丹田耐久上限与初始值 |
| `maxXiaYin`, `xiaYin` | 下阴部位耐久上限与初始值 |
| `maxLeftArm`, `leftArm`, `maxRightArm`, `rightArm` | 左/右臂耐久上限与初始值 |
| `maxLeftLeg`, `leftLeg`, `maxRightLeg`, `rightLeg` | 左/右腿耐久上限与初始值 |
| `minPre`, `maxPre` | Pre 属性的最小/最大值（源结构未附更详细注释） |
| `currentShield`, `maxShield` | 当前护盾与护盾上限 |
| `shieldRecoverSpeed`, `shieldRecoverSpeedPercentage` | 护盾恢复速度与百分比系数 |
| `comprehension`, `aptitude` | 悟性与资质 |
| `baseHealingRate`, `healing` | 属性系统的基础愈合速度与愈合能力 |
| `danTianExperienceBonus`, `yinExperienceBonus`, `neutralExperienceBonus`, `positiveExperienceBonus` | 丹田、阴性、中性、阳性经验加成 |
| `lightSkillExperienceBonus`, `hardSkillExperienceBonus`, `internalStrengthExperienceBonus` | 轻功、硬功、内功经验加成 |
| `bladeStabsExperienceBonus`, `spearAndHalberdExperienceBonus`, `swordsExperienceBonus` | 刀刺、枪戟、剑类经验加成 |
| `axeClubsExperienceBonus`, `fistsAndPalmsExperienceBonus`, `hammersAndMacesExperienceBonus` | 斧棍、拳掌、锤锦经验加成 |
| `hiddenWeaponsExperienceBonus`, `longRangeExperienceBonus` | 暗器与远程经验加成 |
| `maxRotValue`, `rotValue` | 腐化/腐烂值上限与初始值 |
| `pierceResistance`, `slashResistance`, `bluntResistance` | 穿刺、斩击、钝击抗性 |
| `crit`, `slashCritical`, `bluntCritical` | 通用暴击、斩击暴击、钝击暴击 |
| `characterAttackAccuracy`, `dodge` | 攻击命中与闪避 |
| `curMaxHead`, `curMaxLeftEye`, `curMaxRightEye`, `curMaxLeftEar`, `curMaxRightEar` | 运行时当前的头/眼/耳有效上限 |
| `curMaxMouth`, `curBody`, `curMaxViscera`, `curMaxDantian`, `curMaxXiaYin` | 运行时当前的口/躯干/内脏/丹田/下阴有效值或上限 |
| `curMaxLeftArm`, `curMaxRightArm`, `curMaxLeftLeg`, `curMaxRightLeg` | 运行时当前的四肢有效上限 |
| `maxInspiration`, `inspiration` | 灵感上限与初始值 |
| `nutritionValueReduceSpeed`, `nutritionValueReduceSpeedPercent` | 营养值减少速度与百分比系数 |
| `tiredValueReduceSpeed`, `tiredValueReduceSpeedPercent` | 疲劳值减少速度与百分比系数 |
| `tiredValueIncreaseSpeed`, `tiredValueincreaseSpeedPercent` | 疲劳值增加速度与百分比系数 |
| `nutritionValueincreaseSpeed`, `nutritionValueincreaseSpeedPercent1` | 营养值增加速度与百分比系数；保留源字段名末尾 `1` |
| `happyValueReduceSpeed`, `happyValueReduceSpeedPercent` | 快乐值减少速度与百分比系数 |
| `happyValueincreaseSpeed`, `happyValueincreaseSpeedPercent` | 快乐值增加速度与百分比系数 |
| `defence` | 防御 |
| `knockDownValue`, `maxKnockDownValue` | 当前与最大击倒值 |

> `attributes` 是动态 `TMap<FName, float>`。字段可用性仍取决于当前游戏版本中属性系统的实际注册名称；请保持导出文件的原始拼写。
