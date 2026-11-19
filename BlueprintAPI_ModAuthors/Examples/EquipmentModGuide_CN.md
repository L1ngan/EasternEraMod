# 装备 Mod 制作指南（武器、防具、工具）

> 适用：带 Mod 配置表 JSON 覆盖功能的游戏版本（2026 年 11 月）。
> 基础知识（Mod 目录、ModInfo.json 字段、JSON 覆盖规则、控制台与日志、打包上传）见《EastRimWorld Mod 开发指南》（同目录 [ModDevelopmentGuide_CN.md](ModDevelopmentGuide_CN.md)），本文只讲装备。
> 配套示例：本仓库的 [`Content/Mods/QingShuangJian`](../../Content/Mods/QingShuangJian/)（说明见 [QingShuangJian/README.md](QingShuangJian/README.md)），就是第 4 节的《青霜剑》，整个文件夹复制到游戏的 `Content/Mods/` 下即可用（附带测试命令，发布前删掉）。
> 只改外观、给宗门时装界面加衣服，看《[宗门时装 Mod 制作指南](SectApparelModGuide_CN.md)》。

---

## 0. 一页看懂

- **一件能在建筑里打造的装备** = 装备行（武器 / 防具 / 工具表）+ 属性词条 + 生成表 + 品质区间 + 制造随机池 + 配方，共 6 张表，全部手写 JSON，不用写代码，不用装虚幻编辑器。
- **只想让玩家直接拿到**（掉落、初始装备、Lua 发放）的装备，只要装备行和属性词条两张表。
- **最省事的写法**：装备行、配方这两种字段很多的表，用 SDK 结构名加 `TemplateID`，整行复制一件官方同类装备，只写你要改的字段（名字、数值、模型）。动作、插槽、出招技能、搬运方式全部跟着官方走。见第 3 节。
- **新模型、新图标**才需要 SDK 做资源打 pak；只换名字和数值、借用官方模型时纯 JSON 就够。
- **不想手写 JSON**：字段多的武器、防具、工具、配方表可以在 SDK 编辑器里建数据表、像填表格一样填，保存时自动导出 JSON；词条、生成表、品质区间、随机池四张只能手写。每张表该选哪个行结构见第 13 节。
- **Mod 改不了的**：新的属性种类（只能从附录 A 的 86 种里选）、装备面板的显示方式；商人货物和开局资源包这两张表没开放 JSON（可以用 Lua 改，见 6.5）。

---

## 1. 装备在游戏里怎么运作

| 规则 | 说明 |
|---|---|
| 三类装备 | **武器**（同时只拿一把）、**防具**（按槽位各一件：帽子 `Helmet`、上衣 `Armor`、裤子 `Pants`、鞋 `Shoes` 等）、**工具**（同时一件）。三类分别在武器表、防具表、工具表里。 |
| 主属性 | 装备行自己的 `MainAttributes`，**固定**，每件都有。 |
| 副属性 | 只有"随机生成"的装备才有（打造、掉落时选了随机属性、`qsj.post` 之类）：从生成表的候选池里**随机抽 N 条**，N 由品质区间决定。 |
| 数值 | 每条词条的数值是固定的，**没有浮动、没有品质系数**。想让高品质更强，就给不同品质各做一行装备、各配一套词条（官方就是这么做的）。 |
| 品质 | 打造时由品质值落在哪个品质区间决定（第 5 节）。**存档只存装备行 ID，不存品质**，读档后品质按装备行自己的 `ItemQuality` 显示，所以每个品质档要单独一行装备，行里的 `ItemQuality` 和区间一致。 |
| 穿上 / 卸下 | 穿上时主、副属性一次性加到弟子身上，卸下时整份撤掉；装备行的 `EquipmentAbility`（出招技能）同时授予 / 收回。 |
| 门槛 | 装备没有境界、属性门槛，任何弟子都能穿。 |
| 耐久 | `MaxItemDurability` 是耐久上限，`-1` 表示没有耐久。武器每出一招扣 `AttackLossDurability`，防具挨打扣 `BeAttakedLossDurability`，工具干活扣 `CollectLossDurability`。耐久扣到 0，装备**直接销毁**。 |
| 存档 | 存的是装备行 ID、抽到的词条 ID、耐久和穿戴状态；读档时按 ID 回表取最新数据。所以**改了 Mod 里的数值，老存档里的装备会跟着变**；**停用 Mod 后，读档时这些装备会被丢弃**。 |

---

## 2. 要配哪些表

```
配方 FormulaData：挂在哪个建筑、耗什么料、工作量
 └─ OutputItemID ─→ 制造随机池 FabricateEquipmentData
                     └─ 池子：所需材料 ─→ 品质区间列表
                          └─→ 品质区间 EquipmentQualityRange：品质值范围、品质、副属性条数
                               └─ GenerateEquipmentID ─→ 生成表 GenerateEquipmentData：副属性候选池
                                    └─ EquipmentID ─→ 装备行 WeaponConfig / EquipmentConfig / ToolConfig：主属性、模型、技能
                                         └─ MainAttributes / SubAttributes ─→ 属性词条 EquipmentAttributes
                                              └─ AttributeInfo ─→ 官方属性表 DT_CharacterAttributeInfo（只读，附录 A）
```

| 表 | `ConfigType` | 推荐 `StructName` | `bOverrideData` | 必需？ |
|---|---|---|---|---|
| 属性词条 | `EquipmentAttributes` | `/Script/EastRimWorld.EquipmentAttribute` | `false` | 自定数值时需要（也可直接引用官方词条） |
| 武器 | `WeaponConfig` | `/Script/CreateModPlugin.ModCharacterWeapon`（带模板） | `true` | 做武器时必需 |
| 防具 | `EquipmentConfig` | `/Script/CreateModPlugin.ModCharacterApparel`（带模板） | `true` | 做防具时必需 |
| 工具 | `ToolConfig` | `/Script/CreateModPlugin.ModCharacterTool`（带模板） | `true` | 做工具时必需 |
| 生成表 | `GenerateEquipmentData` | `/Script/EastRimWorld.GenerateEquipmentData` | `false` | 打造、随机掉落时必需 |
| 品质区间 | `EquipmentQualityRange` | `/Script/EastRimWorld.EquipmentQualityRange` | `false` | 打造、随机掉落时必需 |
| 制造随机池 | `FabricateEquipmentData` | `/Script/EastRimWorld.FabricateEquipmentData` | `false` | 打造时必需 |
| 配方 | `FormulaData` | `/Script/CreateModPlugin.ModFormulaData`（带模板） | `true` | 打造时必需 |

为什么有的用 `/Script/CreateModPlugin.Mod…`、有的用 `/Script/EastRimWorld.…`，见下一节。在 SDK 编辑器里建表时每张表选哪个结构，见第 13 节。

---

## 3. 两个必须先懂的写法

### 3.1 模板行 `TemplateID`：整行复制官方装备

武器行有 60 多个字段（模型、插槽、出招技能、动作混合空间、搬运动作、保质期、温度……），一个个写既费事又容易漏。SDK 结构（`/Script/CreateModPlugin.Mod…`）都多一个 `TemplateID` 字段：

- 新行**先整行复制** `TemplateID` 指向的官方行，再把你写的字段盖上去。
- 模板只能是**同一张表**里已有的行（官方行，或同一个 JSON 里写在前面的行）。
- 游戏结构名（`/Script/EastRimWorld.…`）没有 `TemplateID`，没写的字段都是程序默认值（多半是 0 或空），要自己写全。

用模板时这几条要记住（2026-11-17 已在游戏里实测）：

1. **`bOverrideData` 设 `true`**。这样你写的数组（如 `MainAttributes`）会整个替换模板的数组；设成 `false` 会把你的数组**追加**到模板数组后面，主属性就变成"官方的 + 你的"两份。
2. **`ID` 必须写，且等于行名**。不写会继承模板的 ID，等于又改了一遍官方那一行。
3. **布尔字段（`b` 开头、`true`/`false` 的）不管写没写都会生效**，没写就是 SDK 结构的默认值。比如拳套的 `bSecondaryWeapon`（双手各一只）官方是 `true`，用拳套做模板时必须显式写 `"bSecondaryWeapon": true`，否则会变成单手。
4. **有几个字段 SDK 结构写不进去，只能继承模板**：武器的 `WeaponType`、`ItemGradeLevel`、`RouteAcquiringDescribe`、`ToolType`；防具的 `ArmorType` 在 2026-11 之后的游戏版本里已能写（写了以你写的为准），更早的版本也只能继承。所以**做什么类型的武器就选什么类型的模板**（做刀选刀、做枪选枪），防具同理选同一槽位的模板。
5. **写成默认值的字段不生效**：比如想把耐久改成 `-1`（无耐久），而 `-1` 恰好是默认值，就改不掉模板的值。遇到这种情况换一个本来就符合的模板，或改用游戏结构名写全字段。
6. 空数组 `[]` 清不掉模板的数组（空数组被当成"没写"）。

### 3.2 合并规则：往官方行里"追加"时

改官方已有的行（比如往官方掉落集、科技里加一项）时用**合并模式** `bOverrideData: false`、游戏结构名、只写要加的字段：

- 数组、Map 是**追加**，不会删掉官方原有的项。
- 普通字段只有写了"非默认值"才生效。
- **布尔字段同样总会写入**：如果那张表的结构里有布尔字段，合并时会被改成默认值。例如科技表 `TechnologyConfig` 的 `Enable` 默认 `true`，合并后会把一项被官方关掉的科技打开。改官方行之前先看清结构里有没有布尔字段。

---

## 4. 示例：《青霜剑》（逐步）

在铁匠铺（`Smithy`，游戏里叫"打铁台"）打造一把剑，绿 / 紫 / 橙三档品质，ModId 为 `QingShuangJian`。示例里所有新行都带前缀 `QSJ_`。

### 4.1 目录

```
Content/Mods/QingShuangJian/
├── ModInfo.json
├── Main.lua                         （可选：测试命令，发布前删掉）
└── Config/
    ├── EquipmentAttributes.json     属性词条
    ├── WeaponConfig.json            武器（3 档各一行）
    ├── GenerateEquipmentData.json   生成表（3 档各一行）
    ├── EquipmentQualityRange.json   品质区间（3 行）
    ├── FabricateEquipmentData.json  制造随机池（1 行）
    └── FormulaData.json             配方（1 行）
```

所有文件用 **UTF-8** 保存。

### 4.2 ModInfo.json

```json
{
  "ModId": "QingShuangJian",
  "ModName": "青霜剑",
  "Version": "1.0.0",
  "Author": "你的名字",
  "Description": "新增一把可在铁匠铺打造的剑《青霜剑》",
  "MainLuaFile": "Main.lua",
  "LogLevel": "Log",
  "DataTableConfigs": [
    { "ConfigType": "EquipmentAttributes",    "JsonFile": "Config/EquipmentAttributes.json",    "StructName": "/Script/EastRimWorld.EquipmentAttribute",     "bOverrideData": false },
    { "ConfigType": "WeaponConfig",           "JsonFile": "Config/WeaponConfig.json",           "StructName": "/Script/CreateModPlugin.ModCharacterWeapon",  "bOverrideData": true },
    { "ConfigType": "GenerateEquipmentData",  "JsonFile": "Config/GenerateEquipmentData.json",  "StructName": "/Script/EastRimWorld.GenerateEquipmentData",  "bOverrideData": false },
    { "ConfigType": "EquipmentQualityRange",  "JsonFile": "Config/EquipmentQualityRange.json",  "StructName": "/Script/EastRimWorld.EquipmentQualityRange",  "bOverrideData": false },
    { "ConfigType": "FabricateEquipmentData", "JsonFile": "Config/FabricateEquipmentData.json", "StructName": "/Script/EastRimWorld.FabricateEquipmentData", "bOverrideData": false },
    { "ConfigType": "FormulaData",            "JsonFile": "Config/FormulaData.json",            "StructName": "/Script/CreateModPlugin.ModFormulaData",      "bOverrideData": true }
  ]
}
```

- `LogLevel: "Log"` 只是为了让测试命令的日志写进文件（`ModLogs/QingShuangJian.log`），发布时可以删掉。
- 不用 Lua 就删掉 `MainLuaFile` 和 `Main.lua`。

### 4.3 属性词条

每条词条 = 一种属性 + 一个数值。主属性、副属性都从这里引用。

```json
{
  "StructName": "/Script/EastRimWorld.EquipmentAttribute",
  "Rows": {
    "QSJ_MinAtk_Orange": {
      "ID": "QSJ_MinAtk_Orange",
      "AttributeInfo": { "DataTable": "/Game/Configs/CharacterAttribute/DT_CharacterAttributeInfo.DT_CharacterAttributeInfo", "RowName": "MinAttack" },
      "AttributeValue": 172,
      "ItemQuality": "Orange"
    },
    "QSJ_SlashCrit_Orange": {
      "ID": "QSJ_SlashCrit_Orange",
      "AttributeInfo": { "DataTable": "/Game/Configs/CharacterAttribute/DT_CharacterAttributeInfo.DT_CharacterAttributeInfo", "RowName": "SlashCriticalDamage" },
      "AttributeValue": 0.15,
      "ItemQuality": "Orange"
    }
  }
}
```

（完整的 12 行见示例文件，三档各有最小 / 最大攻击、命中，紫、橙另加悟性，橙再加挥砍暴击伤害。）

| 字段 | 说明 |
|---|---|
| `ID` | 必须等于行名。 |
| `AttributeInfo` | `DataTable` 照抄上面的路径；`RowName` 填附录 A 的"属性行名"。**只能用附录 A 里的属性**，别的属性写了也不生效。 |
| `AttributeValue` | 数值。附录 A 标"百分比"的属性按小数写：`0.15` = 15%。 |
| `ItemQuality` | 这条词条的品质色，只影响界面显示，不影响抽取。 |

**也可以不自建，直接引用官方词条 ID**（附录 A 的"官方用例"一列，以及官方表里形如 `SubAtt_Weapon_Lv02_Orange_SlashIncrease` 的副属性词条）。示例的副属性池就全用的官方词条。

> 同一件装备的主属性里**不要放两条同一种属性**：主属性同种属性后一条会顶掉前一条；副属性同种属性是累加的。

### 4.4 武器行（用模板）

```json
{
  "StructName": "/Script/CreateModPlugin.ModCharacterWeapon",
  "Rows": {
    "QSJ_Sword_Orange": {
      "TemplateID": "Sword_Lv02_Orange",
      "ID": "QSJ_Sword_Orange",
      "ItemName": "青霜剑",
      "ItemDescription": "剑身泛青，寒气逼人。传说铸成之夜，满山落霜。",
      "FormatItemDescription": { "TextMain": "剑身泛青，寒气逼人。传说铸成之夜，满山落霜。" },
      "ItemQuality": "Orange",
      "MainAttributes": ["QSJ_MinAtk_Orange", "QSJ_MaxAtk_Orange", "QSJ_Acc_Orange", "QSJ_Comp_Orange", "QSJ_SlashCrit_Orange"],
      "WeaponStaticMesh": "/Game/Art/Meshes/Weapon/wuqi/W_Jian_01/W_Jian_01.W_Jian_01",
      "ItemIcon": "/Game/Art/UI/GameMain/WeaponIcon/W_Jian_01.W_Jian_01",
      "ItemPrice": 720,
      "ForMulaId": "QSJ_Formula"
    }
  }
}
```

- 模板 `Sword_Lv02_Orange` 是官方二阶橙色剑《离殇剑》。绿、紫两档分别用 `Sword_Lv02_Green`、`Sword_Lv02_Purple` 做模板（示例文件里三行都有）。
- 从模板继承下来的（实测核对过）：武器类型 `Sword`、出招技能 `Weapon_ShordB`/`Weapon_ShordB+`、拔剑 / 收剑技能、手持 / 背负插槽、剑类动作混合空间、每招耗耐久 5、耐久上限、搬运动作、点击 / 悬停界面、物品标签 `Inventory.Item.Weapon.LV2.Sword`、二阶。
- 换成了自己的：名字、描述、品质、主属性、模型（借用官方四阶剑《赤霄剑》的模型 `W_Jian_01`）、图标、价格。
- `ItemName` / `ItemDescription` / `FormatItemDescription.TextMain` 三处写同样的文字（不同界面读不同字段）。
- `ForMulaId` 填对应配方 ID。

### 4.5 生成表（副属性候选池）

```json
{
  "StructName": "/Script/EastRimWorld.GenerateEquipmentData",
  "Rows": {
    "QSJ_Gen_Orange": {
      "ID": "QSJ_Gen_Orange",
      "EquipmentType": "Weapon",
      "EquipmentName": "青霜剑",
      "EquipmentID": "QSJ_Sword_Orange",
      "SubAttributes": [
        "SubAtt_Weapon_Lv02_Orange_CharacterAttackAccuracy",
        "SubAtt_Weapon_Lv02_Orange_Dodge",
        "SubAtt_Weapon_Lv02_Orange_Comprehension",
        "SubAtt_Weapon_Lv02_Orange_SlashIncrease",
        "SubAtt_Weapon_Lv02_Orange_SlashFixedAttack",
        "SubAtt_Weapon_Lv02_Orange_SlashCriticalDamage",
        "SubAtt_Weapon_Lv02_Orange_TrueQiIncrease",
        "SubAtt_Weapon_Lv02_Orange_ShieldRecoverSpeed"
      ]
    }
  }
}
```

| 字段 | 说明 |
|---|---|
| `EquipmentType` | `Weapon` / `Armor` / `Tool`，决定 `EquipmentID` 去哪张表找。 |
| `EquipmentID` | 装备行行名。**写错不会报错**，会生成一件"空装备"，存档后消失。 |
| `SubAttributes` | 副属性候选池：生成时洗牌，取前 N 条（N = 品质区间的 `SubAttributesNumber`）。不够 N 条就有几条取几条；同一个 ID 写两遍可能被同时抽中。 |
| `MainAttributes` | 额外主属性，会**追加**在装备行的主属性后面。一般留空，主属性写在装备行里。 |
| `EquipmentAbility` | 额外技能候选池（技能表 `GameAbility` 的 ID），取前 `AbilityNumber` 条。官方装备都没用，一般留空。 |

### 4.6 品质区间

```json
{
  "StructName": "/Script/EastRimWorld.EquipmentQualityRange",
  "Rows": {
    "QSJ_Q_Green":  { "ID": "QSJ_Q_Green",  "MinQualityValue": 0,    "MaxQualityValue": 9049,   "SubAttributesNumber": 1, "AbilityNumber": 0, "Quality": "Green",  "GenerateEquipmentID": ["QSJ_Gen_Green"] },
    "QSJ_Q_Purple": { "ID": "QSJ_Q_Purple", "MinQualityValue": 9050, "MaxQualityValue": 9349,   "SubAttributesNumber": 2, "AbilityNumber": 0, "Quality": "Purple", "GenerateEquipmentID": ["QSJ_Gen_Purple"] },
    "QSJ_Q_Orange": { "ID": "QSJ_Q_Orange", "MinQualityValue": 9350, "MaxQualityValue": 999999, "SubAttributesNumber": 3, "AbilityNumber": 0, "Quality": "Orange", "GenerateEquipmentID": ["QSJ_Gen_Orange"] }
  }
}
```

| 字段 | 说明 |
|---|---|
| `MinQualityValue` / `MaxQualityValue` | 品质值范围，两端都含。**几个区间要首尾相接、从 0 覆盖到一个很大的数**，打造出的品质值落在空档里会**什么都不产出**（材料照扣）。门槛怎么定见第 5 节。 |
| `Quality` | 这一档的品质：`White` / `Green` / `Blue` / `Purple` / `Orange` / `Golden`。 |
| `SubAttributesNumber` | 抽几条副属性。官方：白 0~1、绿 1、蓝 1~2、紫 2、橙 2~3、金 3。 |
| `AbilityNumber` | 抽几个技能。**默认是 1**，不用技能请写 `0`。 |
| `GenerateEquipmentID` | 生成表行名，可以写多个，等概率随机挑一个（例如同一档里有"剑"和"刀"两种外形）。 |

### 4.7 制造随机池

```json
{
  "StructName": "/Script/EastRimWorld.FabricateEquipmentData",
  "Rows": {
    "QSJ_Fab": {
      "ID": "QSJ_Fab",
      "EquipmentRandomPools": [
        { "RequiredResources": { "10506": 60 }, "EquipmentQualityRange": ["QSJ_Q_Green", "QSJ_Q_Purple", "QSJ_Q_Orange"] }
      ]
    }
  }
}
```

- `RequiredResources` 里的物品 ID 必须出现在配方的 `NecessityConsumingResource` 里（这里是 `10506` 生铁锭），否则这个池子匹配不上，**打造完什么都不出**。
- `EquipmentQualityRange` 按顺序找第一个包含品质值的区间。
- **一行只放一个池子**。放多个池子时，游戏实际用的是"最后一个有材料匹配的池子"，不是匹配最多的那个，容易出意外。
- 这张表**不能用 SDK 结构**（SDK 里这个字段是名字数组，和游戏结构对不上，会被整段丢掉），一定用 `/Script/EastRimWorld.FabricateEquipmentData`。
- 行名里别带 `Weapon`、`Equipment`、`Pendant` 这几个词：打造出金色品质时，游戏按这几个词判定解锁成就。

### 4.8 配方（用模板）

```json
{
  "StructName": "/Script/CreateModPlugin.ModFormulaData",
  "Rows": {
    "QSJ_Formula": {
      "TemplateID": "Formula_Smithy_1002",
      "ID": "QSJ_Formula",
      "Name": "青霜剑",
      "FormulaIcon": "/Game/Art/UI/GameMain/WeaponIcon/W_Jian_01.W_Jian_01",
      "FormatDescription": { "TextMain": "打造一把青霜剑。打造者手艺越好，越容易出紫、橙品质。" },
      "NecessityConsumingResource": { "10506": 60, "10101": 80 },
      "OutputItemID": "QSJ_Fab",
      "CanUnlockByItem": true
    }
  }
}
```

- 模板 `Formula_Smithy_1002` 是官方打铁台的《离殇剑》配方。继承下来的：建筑 `Smithy`、按钮 `MakeWeapons`（打铁台的"打造武器"）、工作动作 `Work_Forge`、目标 `Smithing`、产出类型 `Equipment`、工作量 5000、制造等级要求（0 级）、每次打造给打造者 360 制造经验。
- `OutputItemID` 填**制造随机池的行名**（`QSJ_Fab`），不是武器行名。
- `NecessityConsumingResource`：`物品 ID → 数量`。`10506` 生铁锭、`10101` 原木。
- **解锁**：`CanUnlockByItem: true` 且不写 `UnlockItemTags` = 一开局就能用。想做成研究科技后才解锁，见 6.1。`bIsUnLock` 写了也没用（游戏每次自己算）。
- 配方描述用 `FormatDescription.TextMain`；模板里的 `TextParams` 会留着，你的文字里不写 `{Item}` 这类占位符就不受影响。

### 4.9 测试命令（Main.lua，可选）

示例带了两条控制台命令和一条打造日志，方便不用真的攒材料就验证（发行版开控制台见开发指南 7.1）：

| 命令 | 作用 |
|---|---|
| `qsj.give Orange` | 给第一个本门弟子直接装上橙色青霜剑（固定装备，只有主属性）。弟子原来的武器会被换下。 |
| `qsj.post Purple 2` | 往驿站发 2 把紫色青霜剑，按品质区间随机抽副属性，和打造出来的一样。 |
| （自动）打造日志 | 铁匠铺每打出一把，日志记一行 `crafted QSJ_Fab quality=…`。 |

关键写法（完整见 [Main.lua](../../Content/Mods/QingShuangJian/Main.lua)）：

```lua
-- 直接装备：弟子的控制器上调 GiveEquipmentByWeaponID（防具用 GiveEquipmentByArmorID）
local Ok = Character:GetController():GiveEquipmentByWeaponID("QSJ_Sword_Orange")

-- 发到驿站：Id 填品质区间行名 + bRandomAttribute=true 是随机属性；Id 填武器行名 + false 是固定装备
local Item = UE.FItemSimpleData()
Item.Id = "QSJ_Q_Purple"
Item.Type = UE.EGroundInventoryType.Equipment
Item.Num = 2                 -- 默认是 0，必须写
Item.bRandomAttribute = true
local Items = UE.TMap(UE.FName, UE.FItemSimpleData)
Items:Add("QSJ_Q_Purple", Item)
UE.AWorldDirector.GetWorldDirector():AddItemToPostStation(Items, true)

-- 打造事件：Params.ItemId 是配方的 OutputItemID（随机池行名），Params.Quality 是品质名
UE.UModEventBus.RegisterModEvent("OnItemCrafted", function(EventName, Payload, Params) ... end)
```

这两条命令会顶掉弟子的武器、往存档里加东西，请在**备份存档**上用，发布前删掉。

### 4.10 进游戏验证

1. Mod 列表里启用，进入一个有打铁台的存档。
2. 打开打铁台的"打造武器"，列表里应有《青霜剑》，材料是生铁锭 60、原木 80。
3. 下单、备料，等弟子打造；或者用 `qsj.post` 直接拿几把看看。
4. 在物品详情里核对名称、品质、主属性、副属性条数；让弟子装上，看属性面板。

2026-11-17 在编辑器里用本示例实测（读一个有打铁台、29 名弟子的存档）的结果：

| 检查 | 结果 |
|---|---|
| 6 张表的新行 | 全部进表；模板继承的字段与官方《离殇剑》一致；品质、主属性是自己的。 |
| 打铁台配方列表 | 出现《青霜剑》，已解锁。 |
| 打造（直接指定品质值） | 5000 → 绿、8875 → 绿、9100 → 紫、9500 → 橙，与品质区间一致。 |
| 打造产出 | 品质值 9500 打出 1 把橙色青霜剑，玩家库存里多了 1 把 `QSJ_Sword_Orange`。 |
| 弟子从绿色换到橙色 | 最小攻击 +94、最大攻击 +104、命中 +50、悟性 +5、挥砍暴击伤害 +15%，正好等于两档主属性之差。 |
| `qsj.post Purple 2` | 驿站收到 2 把紫色青霜剑。 |

出问题时：
- 控制台 `Mod.Status` 看加载状态与错误。纯 JSON 的 Mod 日志里有一条 `No pak files or content directory found for mod`，意思是没有资源包，属正常。
- 配方列表里没有：查配方的 `ID`、`TemplateID`、`CanUnlockByItem`。
- 打造完什么都没出：查随机池的材料 ID 是否在配方的消耗里、品质区间是否覆盖到了实际品质值、生成表的 `EquipmentID` 是否写对。
- 装上没属性：查词条的 `AttributeInfo.RowName` 是否在附录 A 里、词条 `ID` 是否等于行名。
- `qsj.post` 时日志里会有两条 `UDataTable::FindRow ... requested row 'QSJ_Q_Purple' not in DataTable`（驿站拿品质区间行名去别的表查名字），不影响发放。

---

## 5. 品质值怎么算、门槛怎么定

打造时，弟子每干一下活：

- 工作量 + 弟子的**制造速度**（属性 `ManufacturingSpeed`）；
- 品质值 + 制造速度 × (1 + 随机整数(1~30) ÷ 20)，也就是每下 ×1.05 到 ×2.5，平均 ×1.775。

工作量攒够配方的 `RequiredWorkload` 就完工，此时：

- **品质值平均约等于 `RequiredWorkload` × 1.775**；
- 每下的随机数是独立的，干的下数越多越接近平均值。制造速度越高，下数越少，结果越分散，越容易打出高品质（也更容易打出低品质）；最后一下可能超出工作量，品质值也会多一点。

官方所有装备配方的工作量都是 5000，品质门槛都是：

| 品质 | 起始品质值 | 相当于工作量的 |
|---|---|---|
| 白 | 0 | — |
| 绿 | 8900 | ×1.78（略高于平均） |
| 蓝 | 9050 | ×1.81 |
| 紫 | 9200 | ×1.84 |
| 橙 | 9350 | ×1.87 |
| 金 | 9450 | ×1.89 |

**改了工作量，门槛要按同样的倍数改**，否则会全部落在最低档或最高档。比如工作量改成 10000，绿色起点就是 17800。

只有配方的 `GoalID` 是 `Smithing`、`Tailor`、`Art`、`MakeItem`、`RefineMetal` 时才累计品质值；做装备请用这几种（抄官方装备配方做模板就自动对了）。

---

## 6. 其他获取途径

### 6.1 研究科技后才能打造

不写 `CanUnlockByItem`（或写 `false`），改为挂到一项科技上：

1. 解锁项表 `TechUnlockItemConig` 新增一行：

```json
{
  "StructName": "/Script/EastRimWorld.TechUnlockItemConigStruct",
  "Rows": {
    "QSJ_Unlock": {
      "ID": "QSJ_Unlock",
      "DisplayName": "青霜剑",
      "FormatItemDesc": { "TextMain": "可在打铁台打造青霜剑" },
      "Icon": "/Game/Art/UI/GameMain/WeaponIcon/W_Jian_01.W_Jian_01",
      "UnlockType": "Recipe",
      "UnlockItemsIds": ["QSJ_Formula"]
    }
  }
}
```

2. 科技表 `TechnologyConfig` 里找一项官方科技，合并模式往它的 `UnlockItemIds` 追加：

```json
{
  "StructName": "/Script/EastRimWorld.TechnologyConfigStruct",
  "Rows": { "1203": { "UnlockItemIds": ["QSJ_Unlock"] } }
}
```

`1203` 是官方解锁离殇剑配方的那项科技。注意第 3.2 节：科技结构里有布尔字段 `Enable`（默认 `true`），合并时会被写成 `true`。

### 6.2 掉落

掉落集表 `DropSetConfig`（结构 `/Script/EastRimWorld.DropSetConfig`）的 `DropSet`（按权重抽）或 `MustDrop`（必掉）里加一项：

```json
"QSJ_Q_Orange":    { "Weight": 10, "Num": 1, "ItemType": "Equipment", "bRandomAttribute": true },
"QSJ_Sword_Green": { "Weight": 30, "Num": 1, "ItemType": "Equipment", "bRandomAttribute": false }
```

- 随机属性装备：键填**品质区间行名**、`bRandomAttribute: true`。
- 固定装备：键填**装备行名**、`bRandomAttribute: false`。
- 必须用游戏结构名（SDK 结构没有 `bRandomAttribute`）。

### 6.3 角色初始装备

自制角色（`CharacterConfig`）的 `InitWeapon` 填武器行名，`InitArmor` 填 `{ "槽位": 防具行名 }`。固定装备，没有副属性。

### 6.4 Lua 直接发放

见 4.9：`GiveEquipmentByWeaponID` / `GiveEquipmentByArmorID` 直接穿到弟子身上；`AddItemToPostStation` 发到驿站。

### 6.5 商人货物、开局资源包

`TravelerGoodsConfig`（商人货物）、`NewGameResourcePackages`（开局资源包）还不在 `ConfigType` 里，不能用 JSON 追加。可以在 Lua 里用 `UE.UModLuaLibrary.ReplaceDataTableRow` 改运行时的表（见开发指南 4.5），每次进入游戏世界都要重做。

---

## 7. 做防具和工具

### 7.1 防具

- 表 `EquipmentConfig`，SDK 结构 `/Script/CreateModPlugin.ModCharacterApparel`。
- 槽位 `ArmorType`：2026-11 之后的游戏版本写了就生效，更早的版本只能从模板继承；为兼容旧版本，仍建议**选同一槽位的官方行做模板**（第 10.2 节）。
- 外观由 `ApparelMaleDataAsset` / `ApparelFemaleDataAsset`（男 / 女外观资产）决定；只填一个性别时，另一个性别穿上看不到外观。借用官方外观时直接从官方行复制这两个路径，或者干脆继承模板的。
- 生成表 `EquipmentType` 写 `Armor`。
- 被攻击时扣耐久 `BeAttakedLossDurability`。
- 只要外观、给宗门时装界面加衣服，看《宗门时装 Mod 制作指南》。

### 7.2 工具

- 表 `ToolConfig`，SDK 结构 `/Script/CreateModPlugin.ModCharacterTool`，生成表 `EquipmentType` 写 `Tool`。
- 一个弟子同时只用一件工具。官方工具包（`Toolkit_Wood_*`、`Toolkit_Iron_*`、`Toolkit_Silver_*`、`Toolkit_Gold_*`）主属性是采矿速度、农耕速度、制造速度，`CollectLossDurability` 为 40。
- 工具起作用主要靠主属性（干活速度类属性）。

---

## 8. 新模型、新图标（SDK）

表格仍然手写 JSON（第 4 节全部照用），SDK 只负责做资源并打成 pak：

1. SDK 里 **Tools → Modding → 创建 Mod**，ModId 与 JSON 一致。
2. 资源放在 `Content/Mods/<ModId>/` 下：
   - **武器模型**：导入静态网格（Static Mesh）。握持点按官方武器模型摆：模型原点在握把处，沿官方同类武器的朝向（拿官方模型对比最省事）。挂点用的是角色骨骼上的插槽（剑 `hand_r_Weapn` / 背负 `Ueq_Sword` 等），一般继承模板即可。
   - **图标**：PNG 导入，贴图组设为 UI（`UserInterface2D`），关 Mip。
   - **地上的模型** `ItemModel`（放在地上 / 货架上显示的样子）：同样是静态网格，不做就继承模板的。
3. 打包。打包输出在 SDK 工程的 `Mods/<ModId>/`。
4. JSON 里把路径换成自己的，例如 `"WeaponStaticMesh": "/Game/Mods/QingShuangJian/SM_QingShuang.SM_QingShuang"`、`"ItemIcon": "/Game/Mods/QingShuangJian/UI/T_QingShuang.T_QingShuang"`。
5. **打包器不会把手写的 `Config/*.json` 拷进输出目录**，并且会按 `DA_ModDataAsset` 改写 `ModInfo.json` 的 `DataTableConfigs`。每次打包后把 `Config/` 复制进输出目录，再核对 `ModInfo.json` 的 `DataTableConfigs` 是不是第 4.2 节那几项，不是就改回来。
6. **防具的新外观**要做外观资产（`BP_CDA_Apparel_*` 系列），目前 SDK 还缺上衣、裤子、鞋、帽子这几个槽位的外观类，详见《宗门时装 Mod 制作指南》第 6 节。

---

## 9. 字段参考

### 9.1 武器行（`WeaponConfig`）

**武器专有**

| 字段 | 说明 | 用模板时 |
|---|---|---|
| `WeaponType` | `Sword` 剑 / `Blade` 刀 / `Spear` 枪 / `Bow` 弓 / `Fist` 拳套 / `Hammer` 锤 / `Ax` 斧 / `HiddenWeapon` 暗器 / `Firearm` 火器。决定能配合哪些武学招式（招式要求的武器类型在技能表里）。 | **只能继承**，选同类型模板 |
| `EquipWeaponAbility` / `DemountWeaponAbility` | 拔出 / 收起武器的技能 ID（如 `EquipWeapon_Shord` / `UnloadingWeapon_Shord`）。**必填**，缺了武器可能拿不到手上。 | 继承 |
| `HandParentSocket` / `CarryParentSocket` | 手持 / 背负时挂在哪个骨骼插槽。 | 继承 |
| `WeaponStaticMesh` | 武器模型（静态网格）。 | 可改 |
| `bSecondaryWeapon` + `Secondary…` 三项 | 双持（如拳套左右手各一只）：第二件的手持插槽、背负插槽、模型。 | `bSecondaryWeapon` 每次都会写入，双持武器必须显式写 `true` |
| `BattleBlendSpace` | 战斗移动动作。 | 继承 |
| `AttackLossDurability` | 每出一招扣多少耐久。 | 可改 |
| `WeaponInjuryType` | 伤害类型显示文字。 | 可改 |

**装备共有**（武器、防具、工具都有）

| 字段 | 说明 |
|---|---|
| `EquipmentType` | `Weapon` / `Armor` / `Tool`，必须与所在的表一致。模板已经对了，一般不写。 |
| `MainAttributes` | 主属性词条 ID 列表（固定）。 |
| `SubAttributes` | 固定副属性，一般留空（随机副属性写在生成表里）。 |
| `EquipmentAbility` | 装上后授予的技能 ID（技能表 `GameAbility`）。官方武器都是该武器类型的两条普攻技能，如剑 `Weapon_ShordB` / `Weapon_ShordB+`、枪 `Weapon_SpearA` / `Weapon_SpearA+`，**保持模板的**。 |

**物品通用字段**（对装备有意义的）

| 字段 | 说明 |
|---|---|
| `ID` | 必填，等于行名。**武器、防具、工具三张表的行名不能重复**（读档时按防具 → 武器 → 工具的顺序找）。 |
| `ItemName` / `ItemDescription` / `FormatItemDescription.TextMain` | 名字、描述，后两个写同样的文字。 |
| `ItemQuality` | 品质，与品质区间那一档一致。 |
| `ItemIcon` | 图标。 |
| `ItemModel` / `StackModels` | 放在地上 / 货架上时的模型。 |
| `GroundInventoryType` | 固定 `Equipment`（填错存档后读不回来）。 |
| `GameplayTag` | 物品标签，用于库存分类、仓库筛选。用官方已有的标签（如 `Inventory.Item.Weapon.LV2.Sword`），模板的就行。 |
| `GOAPActions` | 弟子搬运它要用的动作，固定 `["GetItem", "TransItem"]`。**不能为空**，空的话弟子不会把它搬进仓库。 |
| `InformationWidget` / `TipInformationWidget` | 点击 / 悬停的界面：武器 `WeaponInfo` / `WeaponTip`，防具、工具 `EquipmentInfo` / `EquipmentTip`。 |
| `MaxItemDurability` | 耐久上限，官方武器 960000（相当于用不坏）。不要耐久填 `-1`，**不要填 0**（第一次扣耐久就销毁）。 |
| `ItemPrice` / `GrowScore` / `ItemWeight` | 价格、成长分、重量。 |
| `ItemGrade` / `ItemGradeLevel` | 品阶文字 / 数字。弟子在珍宝阁换装备时先比品阶数字再比品质。`ItemGradeLevel` 只能继承模板。 |
| `ForMulaId` | 打造它的配方 ID。 |
| 保质期、温度、存放衰减 | 照模板。 |

### 9.2 防具行（`EquipmentConfig`）专有

| 字段 | 说明 |
|---|---|
| `ArmorType` | `Helmet` 帽子 / `Armor` 上衣 / `Pants` 裤 / `Shoes` 鞋 / `Accessory` 饰品 / `Hairpin` 发簪 / `Underwear` 下身内衣 / `UpperUnderwear` 上身内衣 / `Socks` 袜 / `Back` 披挂（后六个 2026-11 新增，装备面板暂不显示）。2026-11 之后的版本写了就生效，更早的版本只能继承模板；槽位和模板不同时，男女外观资产不继承模板，只用你写的。外观资产的类须与槽对应（开发指南 4.9「多层服饰」）。 |
| `ApparelMaleDataAsset` / `ApparelFemaleDataAsset` | 男 / 女外观资产路径。 |
| `MaterialVariantsIndex` | 外观资产里的材质变体序号，`-1` 不用。官方外观资产目前都没有材质变体，填了也没效果。 |
| `MaterialColor` | 外观颜色参数。弟子身上贴外观时不读这个字段，**不要依赖它换色**。 |
| `BeAttakedLossDurability` | 被攻击时扣多少耐久。 |

### 9.3 工具行（`ToolConfig`）专有

| 字段 | 说明 |
|---|---|
| `CollectLossDurability` | 干活时扣多少耐久。 |
| `ToolType` | 目前只有 `None`，不用管。 |

### 9.4 配方（`FormulaData`）

| 字段 | 说明 |
|---|---|
| `ID` | 必填，等于行名。 |
| `Name` | 配方名。 |
| `BuildingID` | 在哪个建筑上打造（第 10.3 节）。 |
| `CommonButtonType` | 建筑上的哪个按钮下面列出（第 10.3 节）。 |
| `ActionID` / `GoalID` | 弟子干活用的动作 / 目标，照同建筑的官方配方（第 10.3 节）。`GoalID` 决定是否累计品质值（第 5 节）。 |
| `OutputResourceType` | 装备填 `Equipment`。 |
| `OutputItemID` | 装备填**制造随机池行名**。 |
| `OutputItemNumber` | 一次打几件，每件单独随机。 |
| `NecessityConsumingResource` | 必耗材料 `{ 物品 ID: 数量 }`。 |
| `SelectableResourceTag` / `SelectableResourceNumber` / `SelectableTypeNumber` | 可选材料（玩家从某一类材料里任选凑够数量）。用可选材料时，随机池按池子里写的材料的标签是否属于这一类来匹配，**和玩家实际选了哪种无关**。 |
| `RequiredWorkload` | 工作量，见第 5 节。 |
| `RequiredAttributes` / `AddToMakerAttributes` | 打造者要求的属性 / 完工后给打造者加的属性（经验）。键是属性，手写麻烦，继承模板即可。 |
| `CanUnlockByItem` / `UnlockItemTags` | 拿到某类物品后解锁；`true` 且标签留空 = 一开局就解锁。 |
| `FormulaIcon` / `FormatDescription` | 图标、描述。 |
| `ConsumingTime` | 界面上显示的耗时，不影响实际。 |

### 9.5 其他几张表

已在第 4.3、4.5、4.6、4.7 节逐字段说明。

---

## 10. 官方参考

### 10.1 武器模板

| 类型 | 官方行（`Lv01`~`Lv04` × `White`/`Green`/`Blue`/`Purple`/`Orange`/`Golden`） | 名字（一阶 / 二阶） |
|---|---|---|
| 剑 `Sword` | `Sword_Lv02_Orange` 等 | 斩风剑 / 离殇剑 / 清川剑 / 赤霄剑 |
| 枪 `Spear` | `Spear_Lv02_Orange` 等 | 轻会枪 / 绿沉枪 |
| 弓 `Bow` | `Bow_Lv02_Orange` 等 | 木羽弓 / 破天弓 |
| 拳套 `Fist` | `Fist_Lv02_Orange` 等（双持，`bSecondaryWeapon` 要写 `true`） | 敲山拳套 / 磐石拳套 |
| 锤 `Hammer`、刀 `Blade`、斧 `Ax`、暗器 `HiddenWeapon` | 如 `Hammer_Iron`、`Blade_Iron`、`Axe_Stone`、`HidderWeapon_Iron`（官方拼写如此） | — |

官方剑的主属性参考（最小攻击 = 最大攻击）：

| 阶 | 白 | 绿 | 蓝 | 紫 | 橙 | 金 |
|---|---|---|---|---|---|---|
| 一阶 斩风剑 | 27 | 48 | 74 | 91 | 113 | 135 |
| 二阶 离殇剑 | 43 | 61 | 87 | 122 | 161 | 214 |
| 三阶 清川剑 | 70 | 89 | 139 | 196 | 266 | 336 |
| 四阶 赤霄剑 | 109 | 179 | 249 | 319 | 389 | 458 |

另有命中；橙、金还有三种暴击伤害 +10%~19% 和闪避。

### 10.2 防具模板

| 槽位 | 官方行（`Lv_01`~`Lv_04` × 品质） | 主属性 |
|---|---|---|
| 上衣 `Armor` | `Armor_Lv_02_Orange` 等 | 躯干、内脏最大健康，防御，罡气，温度耐受 |
| 裤 `Pants` | `Pants_Lv_02_Orange` 等 | 左右腿最大健康 |
| 鞋 `Shoes` | `Shoes_Lv_02_Orange` 等 | 防御、温度耐受、跑步速度 |
| 帽子 `Helmet` | `Hats_Lv_02_Orange` 等 | 头部最大健康、防御、罡气 |

> 加"最大健康"类属性要成对加：`MaxBody` + `CurBody`、`MaxHead` + `CurMaxHead`、`MaxLeftLeg` + `CurMaxLeftLeg` 等，官方都是两条一起配。

### 10.3 打造装备的建筑

| 建筑 `BuildingID` | 按钮 `CommonButtonType` | `ActionID` | `GoalID` | 可做模板的官方配方 |
|---|---|---|---|---|
| 打铁台 `Smithy` | `MakeWeapons` | `Work_Forge` | `Smithing` | `Formula_Smithy_1001`（斩风剑）、`Formula_Smithy_1002`（离殇剑） |
| `StarSmithy` | `MakeWeapons` | `Work_StarForge` | `Smithing` | `Formula_StarSmithy_1001` |
| 手工台 `WorkBench` | `MakeWeapons` / `MakeMenu` | `Work_Make` | `Smithing` / `MakeItem` | `Formula_WorkBench_2002` |
| 缝纫台 `SewingTable` | `SewShirt` 上衣 / `SewPants` 裤 / `SewShoes` 鞋 | `Work_SewingTable` | `Tailor` | `Formula_SewingTable_1001`（上衣）、`Formula_SewingTable_1005`（裤）、`Formula_SewingTable_1007`（鞋） |
| `CraftBench` | `SewHat` 帽子 | `Work_Art` | `Art` | `Formula_SewingTable_1022` |

常用材料 ID：`10101` 原木、`10103` 干草、`10105` 石头、`10107` 铁矿石、`10108` 金矿石、`10506` 生铁锭。

---

## 11. 限制与注意

1. **属性只能用附录 A 的 86 种**。装备属性靠一份固定的效果资产生效，里面没有的属性写了不生效；属性表本身也没开放给 Mod。
2. **装备自带技能**（`EquipmentAbility`）只能引用技能表里已有的技能；武器的普攻技能必须和武器类型匹配，保持模板的。
3. **品质不进存档**，每个品质档单独一行装备（第 1 节）。
4. **别在用着 Mod 装备的存档里停用 Mod**：读档时这些装备会被丢弃，重新启用也回不来。
5. 改 Mod 里的数值会影响老存档里已有的装备（读档按 ID 回表）；改生成表、品质区间只影响以后新生成的。
6. 品质区间要从 0 覆盖到很大的数，否则落到空档什么都不出，材料照扣。
7. 一个制造随机池行只放一个池子。
8. 行名带 ModId 前缀；**与官方同名就是改官方那一行**。武器、防具、工具三张表之间行名也不能重复。
9. 文字直接写中文只有一种语言；要多语言需要在 SDK 里做字符串表。
10. 游戏更新后，如果官方改了模板行或词条的 ID，引用它们的 Mod 要跟着改。

---

## 12. 制作检查清单

- [ ] 每一行都写了 `ID`，等于行名，带 ModId 前缀
- [ ] 用 `TemplateID` 的表 `bOverrideData` 是 `true`；模板与要做的武器类型 / 防具槽位一致
- [ ] 双持武器显式写了 `"bSecondaryWeapon": true`
- [ ] 每个品质档单独一行装备，`ItemQuality` 与品质区间一致
- [ ] 词条的属性都在附录 A 里；主属性里没有两条同种属性
- [ ] 生成表 `EquipmentType`、`EquipmentID` 正确
- [ ] 品质区间首尾相接、覆盖 0 到很大的数；`AbilityNumber` 不用就写 0；门槛与工作量匹配（第 5 节）
- [ ] 随机池只有一个池子，材料 ID 出现在配方的必耗材料里；随机池用游戏结构名
- [ ] 配方 `OutputItemID` 填的是随机池行名；解锁方式已配
- [ ] `MaxItemDurability` 不是 0；`GOAPActions` 不为空
- [ ] 进游戏：配方出现 → 能打造 → 品质对 → 装上属性对 → 存档读档后还在

---

## 13. 在 SDK 编辑器里用表格配置（不手写 JSON）

SDK 里每种配置都有对应的 **Mod 结构**（CreateModPlugin 里名字以 `Mod` 开头的结构，路径 `/Script/CreateModPlugin.Mod…`）。可以在 SDK 编辑器里用它建数据表（DataTable），像填表格一样逐行填，保存时 SDK 自动导出成 JSON。

SDK 里**没有游戏结构**（`/Script/EastRimWorld.…`），编辑器里建表只能选 Mod 结构。Mod 结构和游戏结构有几处对不上（第 3.1 节第 4 条），再加上官方属性表不在 SDK 里，一共有四张表在编辑器里配不好，只能手写 JSON（13.2）。

### 13.1 步骤

1. **Tools → Modding → 创建 Mod**，生成 `Content/Mods/<ModId>/` 和其中的 `DA_ModDataAsset`。
2. 在 `Content/Mods/<ModId>/` 里右键 → **杂项 → 数据表格**（Miscellaneous → Data Table），"选取行结构"选 13.2 表里的结构。
3. 打开数据表，**添加**一行：
   - 行名就是 `ID`，`ID` 字段再填一遍同样的名字；
   - `Template ID` 填官方模板行；
   - 只填要改的字段，其余保持默认（默认值不会覆盖模板，见第 3.1 节）。
4. 打开 `DA_ModDataAsset`，在 **Data Tables** 里加一项：`Mod Config Type` 选配置类型，`Data Table` 选刚建的表，`Override Data` 按 13.2 表勾选。**每种配置类型只登记一张表**（导出文件按配置类型命名，同类型登记两张会互相覆盖）。
5. **保存 `DA_ModDataAsset`**。SDK 会：
   - 把每张登记的表导出为 `Config/<配置类型>.json`（如 `Config/WeaponConfig.json`）；
   - 把 `ModInfo.json` 的 `DataTableConfigs` **整个改写**成 DA 里登记的这几项，`StructName` 自动填表的行结构。

   打包时再导出一次。导出的 JSON 是 UTF-16 编码、所有字段都写出（字段名首字母小写，如 `templateId`），游戏照常读；不要手改它，下次保存会被覆盖。

填表时：

- SDK 里没有的官方模型、图标（如 `W_Jian_01`），资源选择框里选不到。在字段上粘贴路径文本（如 `/Game/Art/Meshes/Weapon/wuqi/W_Jian_01/W_Jian_01.W_Jian_01`）即可，软引用不要求资源在 SDK 里；不改就留空，继承模板的。
- **指向官方数据表的"数据表行句柄"在 SDK 里存不住**（例如词条的 `Attribute Info` 要指向官方属性表 `DT_CharacterAttributeInfo`）：这些官方表不在 SDK 里，保存后导出成 `None`，游戏里查不到。词条表因此只能手写。
- `Item Name`、`Item Description` 直接输入文字；`Format Item Description` 展开后填 `Text Main`。
- 布尔勾选框一律会生效（第 3.1 节第 3 条），用拳套等双持武器做模板时记得勾上 `b Secondary Weapon`。

### 13.2 每张表选哪个结构

| 配置 | `Mod Config Type` | 建表时选的行结构 | `Override Data` | 能否在 SDK 表里配 |
|---|---|---|---|---|
| 属性词条 | `EquipmentAttributes` | （`ModEquipmentAttribute`） | — | **手写 JSON**。`Attribute Info` 要指向官方属性表，SDK 里没有这张表，保存后变成 `None`，装上没有属性（已实测）。只引用官方词条 ID 时不需要这张表。 |
| 武器 | `WeaponConfig` | `ModCharacterWeapon` | 勾 | 能。`Weapon Type` 列填了无效，必须填 `Template ID` 选同类型的官方武器。 |
| 防具 | `EquipmentConfig` | `ModCharacterApparel` | 勾 | 能。`Armor Type` 列填了无效，靠模板选槽位。 |
| 工具 | `ToolConfig` | `ModCharacterTool` | 勾 | 能。 |
| 配方 | `FormulaData` | `ModFormulaData` | 勾 | 能。 |
| 生成表 | `GenerateEquipmentData` | （`ModGenerateEquipmentData`） | — | **手写 JSON**。`Equipment Type` 列填了无效，不用模板时会生成空装备。 |
| 品质区间 | `EquipmentQualityRange` | （`ModEquipmentQualityRange`） | — | **手写 JSON**。`Quality` 列填了无效；用模板继承品质时，最低一档"从 0 开始"又写不进去（0 是默认值，会继承模板的起点），留下空档。 |
| 制造随机池 | `FabricateEquipmentData` | （`ModFabricateEquipmentData`） | — | **手写 JSON**。这个结构的池子字段和游戏对不上，整段会被丢掉。 |
| 科技 | `TechnologyConfig` | `ModTechnologyConfigStruct` | 不勾 | 能。往官方科技追加解锁项时比游戏结构更安全（Mod 结构没有 `Enable` 布尔字段，不会改动科技开关）。 |
| 解锁项 | `TechUnlockItemConig` | `ModTechUnlockItemConigStruct` | 不勾 | 能。 |
| 掉落集 | `DropSetConfig` | `ModDropSetConfig` | 不勾 | 只能放固定装备：没有"随机属性"开关；`Num` 默认是 0，要填。随机属性装备用手写 JSON（第 6.2 节）。 |
| 角色 | `CharacterConfig` | `ModHumanData` | 不勾 | 初始装备 `Init Weapon`、`Init Armor` 能填。 |

### 13.3 表格和手写 JSON 混用

一件可打造的装备，通常是武器、配方两张用 SDK 表，词条、生成表、品质区间、随机池四张手写（第 4.3、4.5~4.7 节的文件原样放进 `Config/`）。要注意：

1. **每次保存 `DA_ModDataAsset` 或打包后**，`ModInfo.json` 的 `DataTableConfigs` 只剩 DA 里登记的表，要把四张手写表的登记加回去（照第 4.2 节对应的四行）。
2. **打包只把 DA 导出的 JSON 拷进输出目录**，四个手写的 JSON 要自己复制进输出目录的 `Config/`。
3. 手写 JSON 的文件名不要和导出的重名（导出名就是配置类型名）。四张手写表的配置类型和 SDK 表不同，按第 4 节的文件名放不会冲突。

2026-11-17 按本节做法实测：在 SDK 里用 `ModCharacterWeapon`、`ModFormulaData` 重建青霜剑的武器、配方两张表（内容与示例相同），保存 DA 自动导出；另四张手写，加回登记后进游戏按第 4.10 节复测，进表、打造落档、装备属性、驿站发放都与手写 JSON 版一致。同一轮里用 `ModEquipmentAttribute` 在 SDK 建的词条表导出后 `Attribute Info` 变成 `None`，装上没有任何属性，这就是词条表必须手写的原因。

---

## 附录 A：可用属性（86 种）

下表是官方装备词条实际用到的全部属性，词条的 `AttributeInfo.RowName` 只能填这里的"属性行名"。标"百分比"的按小数写（`0.1` = 10%）。"官方用例"可以直接当词条 ID 引用。

| 属性行名（`RowName`） | 中文名 | 写法 | 官方用例（词条 ID = 值） |
|---|---|---|---|
| `MaxAttack` | 最大攻击 | 数值 | `MaxAttack_1`=1、`MaxAttack_2`=2 |
| `MinAttack` | 最小攻击 | 数值 | `MinAttack_1`=1、`MinAttack_2`=2 |
| `MaxShield` | 最大罡气 | 数值 | `GangQi_100`=100、`GangQi_200`=200 |
| `PierceResistance` | 穿刺抗性 | 数值 | `PierceResistance+1`=1、`PierceResistance+2`=2 |
| `SlashResistance` | 挥砍抗性 | 数值 | `SlashResistance+1`=1、`SlashResistance+2`=2 |
| `BluntResistance` | 钝击抗性 | 数值 | `BluntResistance+1`=1、`BluntResistance+2`=2 |
| `Defence` | 防御 | 数值 | `Armor_Lv_01_White_Defence`=2、`Armor_Lv_01_Green_Defence`=9 |
| `MinPre` | 最低温度耐受 | 数值 | `MinPre-0`=0、`MinPre-1`=-1 |
| `MaxPre` | 最高温度耐受 | 数值 | `MaxPre+1`=1、`MaxPre+2`=2 |
| `CharacterAttackAccuracy` | 命中 | 数值 | `Accuracy+1`=1、`Accuracy+2`=2 |
| `PierceCriticalDamage` | 穿刺暴击伤害 | 百分比（0.1=10%） | `PierceCritical+1`=0.01、`PierceCritical+2`=0.02 |
| `SlashCriticalDamage` | 挥砍暴击伤害 | 百分比（0.1=10%） | `SlashCritical+1`=0.01、`SlashCritical+2`=0.02 |
| `BluntCriticalDamage` | 钝击暴击伤害 | 百分比（0.1=10%） | `BluntCritical+1`=0.01、`BluntCritical+2`=0.02 |
| `Dodge` | 闪避 | 数值 | `Dodge+1`=1、`Dodge+2`=2 |
| `Comprehension` | 悟性 | 数值 | `Comprehension+1`=1、`Comprehension+2`=2 |
| `Aptitude` | 资质 | 数值 | `Aptitude+1`=1、`Aptitude+2`=2 |
| `MoveSpeed` | 移动速度 | 数值 | `MoveSpeed+1`=1、`MoveSpeed+2`=2 |
| `FreeWeight` | 负重 | 数值 | `FreeWeight+15`=15、`FreeWeight+25`=25 |
| `RateOfConstruction` | 建造速度 | 数值 | `RateConstruction_40`=41、`RateConstruction_50`=51 |
| `MiningSpeed` | 采矿速度 | 数值 | `MiningSpeed+50`=26、`MiningSpeed+55`=28 |
| `FarmingSpeed` | 务农速度 | 数值 | `FarmingSpeed+50`=26、`FarmingSpeed+55`=28 |
| `PoisonResistance` | 毒素抗性 | 数值 | `PoisonResistance+2`=2、`PoisonResistance+5`=5 |
| `MaxBody` | 躯干最大健康 | 数值 | `Body+50`=50、`Body+75`=75 |
| `CurBody` | 当前躯干最大上限 | 数值 | `CurBody+50`=50、`CurBody+75`=75 |
| `TrueQiResistance` | 真气抗性 | 数值 | `TrueQiResistance+2`=2、`TrueQiResistance+5`=5 |
| `MaxHead` | 头部最大健康 | 数值 | `Head+10`=10、`Head+20`=20 |
| `MaxLeftLeg` | 左腿最大健康 | 数值 | `LeftLeg+15`=15、`LeftLeg+20`=20 |
| `CurMaxLeftLeg` | 当前左腿最大健康 | 数值 | `CurLeftLeg+15`=15、`CurLeftLeg+20`=20 |
| `MaxRightLeg` | 右腿最大健康 | 数值 | `RightLeg+15`=15、`RightLeg+20`=20 |
| `CurMaxRightLeg` | 当前右腿最大健康 | 数值 | `CurRightLeg+15`=15、`CurRightLeg+20`=20 |
| `RunSpeed` | 跑步速度 | 数值 | `Shoes_Lv_01_White_RunSpeed`=5、`Shoes_Lv_01_Green_RunSpeed`=6 |
| `SubjoinTrueQiAttack` | 真气附伤 | 数值 | `SubjoinTrueQiAttack+5`=5、`SubjoinTrueQiAttack+10`=10 |
| `PierceIncrease` | 穿刺增幅 | 百分比（0.1=10%） | `PierceIncrease+5`=0.05、`SubAtt_Weapon_Lv01_White_PierceIncrease`=0.01 |
| `SlashIncrease` | 挥砍增幅 | 百分比（0.1=10%） | `SlashIncrease+5`=0.05、`SubAtt_Weapon_Lv01_White_SlashIncrease`=0.01 |
| `BluntIncrease` | 钝击增幅 | 百分比（0.1=10%） | `BluntIncrease+5`=0.05、`SubAtt_Weapon_Lv01_White_BluntIncrease`=0.01 |
| `SubjoinPoisonAttack` | 毒素附伤 | 数值 | `SubjoinPoisonAttack+5`=5、`SubAtt_Weapon_Lv01_White_SubjoinPoisonAttack`=1 |
| `PoisonIncrease` | 毒素增幅 | 百分比（0.1=10%） | `PoisonIncrease+5`=0.05、`SubAtt_Weapon_Lv01_White_PoisonIncrease`=0.01 |
| `TrueQiIncrease` | 真气增幅 | 百分比（0.1=10%） | `TrueQiIncrease+5`=0.05、`SubAtt_Weapon_Lv01_White_TrueQiIncrease`=0.01 |
| `PierceFixedAttack` | 穿刺伤害 | 数值 | `SubAtt_Weapon_Lv01_White_PierceFixedAttack`=5、`SubAtt_Weapon_Lv01_Green_PierceFixedAttack`=13 |
| `SlashFixedAttack` | 挥砍伤害 | 数值 | `SubAtt_Weapon_Lv01_White_SlashFixedAttack`=5、`SubAtt_Weapon_Lv01_Green_SlashFixedAttack`=13 |
| `BluntFixedAttack` | 钝击伤害 | 数值 | `SubAtt_Weapon_Lv01_White_BluntFixedAttack`=5、`SubAtt_Weapon_Lv01_Green_BluntFixedAttack`=13 |
| `PoisonFixedAttack` | 毒素伤害 | 数值 | `SubAtt_Weapon_Lv01_White_PoisonFixedAttack`=5、`SubAtt_Weapon_Lv01_Green_PoisonFixedAttack`=13 |
| `TrueQiFixedAttack` | 真气伤害 | 数值 | `SubAtt_Weapon_Lv01_White_TrueQiFixedAttack`=5、`SubAtt_Weapon_Lv01_Green_TrueQiFixedAttack`=13 |
| `KnockBack` | 击退强度 | 数值 | `SubAtt_Weapon_Lv01_White_KnockBack`=1、`SubAtt_Weapon_Lv01_Green_KnockBack`=2 |
| `KnockDown` | 倒地强度 | 数值 | `SubAtt_Weapon_Lv01_White_KnockDown`=1、`SubAtt_Weapon_Lv01_Green_KnockDown`=2 |
| `KnockUp` | 击飞强度 | 数值 | `SubAtt_Weapon_Lv01_White_KnockUp`=1、`SubAtt_Weapon_Lv01_Green_KnockUp`=2 |
| `KnockUpResistance` | 击飞抗性 | 数值 | `SubAtt_Weapon_Lv01_White_KnockUpResistance`=1、`SubAtt_Weapon_Lv01_Green_KnockUpResistance`=2 |
| `KnockBackResistance` | 击退抗性 | 数值 | `SubAtt_Weapon_Lv01_White_KnockBackResistance`=1、`SubAtt_Weapon_Lv01_Green_KnockBackResistance`=2 |
| `KnockDownResistance` | 倒地抗性 | 数值 | `SubAtt_Weapon_Lv01_White_KnockDownResistance`=1、`SubAtt_Weapon_Lv01_Green_KnockDownResistance`=2 |
| `ShieldRecoverSpeed` | 罡气恢复速度 | 数值 | `SubAtt_Weapon_Lv01_White_ShieldRecoverSpeed`=1、`SubAtt_Weapon_Lv01_Green_ShieldRecoverSpeed`=2 |
| `ShieldRecoverSpeedPercentage` | 罡气恢复速度百分比 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_ShieldRecoverSpeedPercentage`=0.01、`SubAtt_Weapon_Lv01_Green_ShieldRecoverSpeedPercentage`=0.02 |
| `FarmingExperienceBonus` | 务农技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_FarmingLevel`=0.05、`SubAtt_Weapon_Lv01_Green_FarmingLevel`=0.07 |
| `ConstructionExperienceBonus` | 建造技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_ConstructionLevel`=0.05、`SubAtt_Weapon_Lv01_Green_ConstructionLevel`=0.07 |
| `MiningExperienceBonus` | 挖掘技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_MiningLevel`=0.05、`SubAtt_Weapon_Lv01_Green_MiningLevel`=0.07 |
| `CookingExperienceBonus` | 烹饪技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_CookingLevel`=0.05、`SubAtt_Weapon_Lv01_Green_CookingLevel`=0.07 |
| `AnimalExperienceBonus` | 动物技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_AnimalLevel`=0.05、`SubAtt_Weapon_Lv01_Green_AnimalLevel`=0.07 |
| `MakeExperienceBonus` | 制作技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_MakeLevel`=0.05、`SubAtt_Weapon_Lv01_Green_MakeLevel`=0.07 |
| `ArtExperienceBonus` | 艺术技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_ArtLevel`=0.05、`SubAtt_Weapon_Lv01_Green_ArtLevel`=0.07 |
| `CureExperienceBonus` | 治疗技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_CureLevel`=0.05、`SubAtt_Weapon_Lv01_Green_CureLevel`=0.07 |
| `SocialContactExperienceBonus` | 纵横技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_SocialContactLevel`=0.05、`SubAtt_Weapon_Lv01_Green_SocialContactLevel`=0.07 |
| `IntelligenceExperienceBonus` | 智力技能经验加成 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_White_IntelligenceLevel`=0.05、`SubAtt_Weapon_Lv01_Green_IntelligenceLevel`=0.07 |
| `QualityOfTreatment` | 治疗质量 | 数值 | `SubAtt_Weapon_Lv01_White_QualityOfTreatment`=5、`SubAtt_Weapon_Lv01_Green_QualityOfTreatment`=10 |
| `SpeedOfTreatment` | 治疗速度 | 数值 | `SubAtt_Weapon_Lv01_White_SpeedOfTreatment`=5、`SubAtt_Weapon_Lv01_Green_SpeedOfTreatment`=10 |
| `ReadingSpeed` | 阅读速度 | 数值 | `SubAtt_Weapon_Lv01_White_ReadingSpeed`=5、`SubAtt_Weapon_Lv01_Green_ReadingSpeed`=10 |
| `PlantingSpeed` | 种植速度 | 数值 | `SubAtt_Weapon_Lv01_White_PlantingSpeed`=5、`SubAtt_Weapon_Lv01_Green_PlantingSpeed`=10 |
| `CookingSpeed` | 烹饪速度 | 数值 | `SubAtt_Weapon_Lv01_White_CookingSpeed`=5、`SubAtt_Weapon_Lv01_Green_CookingSpeed`=10 |
| `SlaughterSpeed` | 屠宰速度 | 数值 | `SubAtt_Weapon_Lv01_White_SlaughterSpeed`=5、`SubAtt_Weapon_Lv01_Green_SlaughterSpeed`=10 |
| `DrugMakingSpeed` | 制药速度 | 数值 | `SubAtt_Weapon_Lv01_White_DrugMakingSpeed`=5、`SubAtt_Weapon_Lv01_Green_DrugMakingSpeed`=10 |
| `BrewingSpeed` | 酿酒速度 | 数值 | `SubAtt_Weapon_Lv01_White_BrewingSpeed`=5、`SubAtt_Weapon_Lv01_Green_BrewingSpeed`=10 |
| `MeltingSpeed` | 熔炼速度 | 数值 | `SubAtt_Weapon_Lv01_White_MeltingSpeed`=5、`SubAtt_Weapon_Lv01_Green_MeltingSpeed`=10 |
| `ResearchRate` | 研究速度 | 数值 | `SubAtt_Weapon_Lv01_White_ResearchRate`=5、`SubAtt_Weapon_Lv01_Green_ResearchRate`=10 |
| `SurgerySpeed` | 手术速度 | 数值 | `SubAtt_Weapon_Lv01_White_SurgerySpeed`=5、`SubAtt_Weapon_Lv01_Green_SurgerySpeed`=10 |
| `MaxViscera` | 内脏最大健康 | 数值 | `Armor_Lv_01_Green_MaxViscera`=50、`Armor_Lv_01_Blue_MaxViscera`=75 |
| `CurMaxViscera` | 当前内脏最大健康 | 数值 | `Armor_Lv_01_Green_CurMaxViscera`=50、`Armor_Lv_01_Blue_CurMaxViscera`=75 |
| `CurMaxHead` | 当前头部最大健康 | 数值 | `Hats_Lv_01_Green_CurMaxHead`=50、`Hats_Lv_01_Blue_CurMaxHead`=75 |
| `Crit` | 暴击 | 数值 | `Pendant_back_07_Green_Crit`=10、`Pendant_back_07_Blue_Crit`=13 |
| `RemoteFixedAttack` | 远程伤害 | 数值 | `SubAtt_Weapon_Lv01_Blue_RemoteFixedAttack`=18、`SubAtt_Weapon_Lv01_Golden_RemoteFixedAttack`=39 |
| `RemoteIncrease` | 远程增幅 | 百分比（0.1=10%） | `SubAtt_Weapon_Lv01_Blue_RemoteIncrease`=0.03、`SubAtt_Weapon_Lv01_Golden_RemoteIncrease`=0.06 |
| `ManufacturingSpeed` | 制造速度 | 数值 | `ManufacturingSpeed+50`=26、`ManufacturingSpeed+55`=28 |
| `GlobalWorkAddition` | 全局工作速度加成 | 百分比（0.1=10%） | `GlobalWork_5`=0.05、`GlobalWork_10`=0.1 |
| `PierceDamage` | 穿刺伤害 | 数值 | `PierceDamage+5`=5 |
| `SlashDamage` | 挥砍伤害 | 数值 | `SlashDamage+5`=5 |
| `BluntDamage` | 钝击伤害 | 数值 | `BluntDamage+5`=5 |
| `PoisonDamage` | 毒素伤害 | 数值 | `PoisonDamage+5`=5 |
| `TrueQiDamage` | 真气伤害 | 数值 | `TrueQiDamage+5`=5 |
| `NeutralExperienceBonus` | 中性武学经验加成 | 百分比（0.1=10%） | `NeutralExperience_0.1`=0.1 |
