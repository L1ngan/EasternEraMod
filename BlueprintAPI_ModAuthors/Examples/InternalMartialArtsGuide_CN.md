# 自制内功武学 Mod 制作指南

> 适用：带 Mod 配置表 JSON 覆盖功能的游戏版本（2026 年 11 月）。
> 基础知识（Mod 目录、ModInfo.json 字段、JSON 覆盖规则、控制台与日志、打包上传）见《EastRimWorld Mod 开发指南》（同目录 [ModDevelopmentGuide_CN.md](ModDevelopmentGuide_CN.md)），本文只讲内功。
> 附录：[官方 45 门内功的每层词条与效果](InternalMartialArtsGuide_Appendix_CN.md)，挑现成效果时查它。
> 配套示例：本仓库的 [`Content/Mods/QingXinJue`](../../Content/Mods/QingXinJue/)（说明见 [QingXinJue/README.md](QingXinJue/README.md)），就是第 4 节的《清心诀》，整个文件夹复制到游戏的 `Content/Mods/` 下即可用（附带测试命令，发布前删掉）。

---

## 0. 一页看懂

- 一门内功 = **一本武学书**（书本身就是物品，同时带全部武学数据）+ **每一层生效的词条** + **挂进图鉴分类**（玩家才有兑换入口）。
- 不用写代码。最简单的做法只需要 `ModInfo.json` 加 3 个 JSON 文件，不用装虚幻编辑器。
- 效果数值有两种来源：
  - **做法 A（纯 JSON）**：引用官方现成的词条或 GameplayEffect（下称 GE），自由组合到各层。
  - **做法 B（自建效果）**：在 SDK 里自己做 GE（任意属性、任意数值）和图标，打成 pak，表格仍然手写 JSON。
- Mod 改不了的：等级表只能从官方 4 档里选；门派传授、驿站兑换、NPC 门派内功池这几张表还没开放给 Mod。详见第 7 节。

---

## 1. 内功在游戏里怎么运作

做之前先了解规则，否则数值很容易配得离谱。

| 规则 | 说明 |
|---|---|
| 只能运转一门 | 每个弟子同一时间只装备一门内功。 |
| 换修有损耗 | 换成另一门内功时，原内功等级清零，原内功**总经验的 90%** 转给新内功。 |
| 习得 | 拿到秘籍 → 弟子研读（要满足书上的**境界要求**和**属性要求**，研读需要 `ReadingTime` 时长）→ 学会后在武学界面装为内功。 |
| 经验来源 | 内功分**阴性 / 中正 / 阳性**三类，各自吃对应类别的武学经验（修炼等途径获得）。丹田未开（且尚不能开）的弟子，修炼只涨丹田，不涨内功。内功满级后不再获得经验。 |
| 等级 | 由书上指定的**等级表**决定每级要多少经验、最高几级。 |
| 境界 | 内功每升一级会累计"武学分"（同样来自等级表），**弟子能达到的境界只看所修内功的武学分**，招式、被动不提供武学分。其中略有小成(2)、融会贯通(4)、神乎其技(7)、登峰造极(10)、神功盖世(13)、一代宗师(16) 还要突破才能进入。境界越高，招式槽越多。各档等级表能支撑到的境界见第 6 节。 |
| 效果 ① 等级成长 | 书上的"等级 GE"按内功**当前等级**缩放，提供罡气上限、攻击、命中、闪避、暴击、防御、各部位生命、内力运转等基础成长。 |
| 效果 ② 分层词条 | 书里每个"层"（例如第 1、5、10、15 层）挂若干词条。达到该层后词条**永久生效并叠加**（练到 10 层时，1、5、10 层的词条同时有效）；换修内功时全部撤掉。 |

---

## 2. 要配哪些表

```
MartialArtsBook（武学书：物品 + 武学本体）  ← 必需
 ├─ LevelConfig ─────────→ 官方等级表 DT_MartialArtsLevelConfig（只能选 4 行之一）
 ├─ LevelGameplayEffect ─→ 等级成长 GE（建议用官方 GE_BookBase_*）
 └─ MartialArtsLevels { 层号 → 词条 ID 列表 }
                              └─→ MartialArtsEntries（词条）  ← 可直接用官方词条，也可自建
                                     └─ EffectiveAfterEquippingGameplayEffects → GE

MartialArtsBookCategory（图鉴分类）.MartialArtsBooks 里加上书 ID  ← 建议
 → 书出现在武学图鉴，并可用残卷兑换（兑换的书送到驿站）
```

| ConfigType | StructName（手写 JSON 用这个） | 作用 |
|---|---|---|
| `MartialArtsBook` | `/Script/EastRimWorld.MartialArtsBookData` | 书 / 内功本体 |
| `MartialArtsEntries` | `/Script/EastRimWorld.MartialArtsEntries` | 每层的词条效果 |
| `MartialArtsBookCategory` | `/Script/EastRimWorld.MartialArtsBookCategoryData` | 图鉴分类 |

> 为什么用 `/Script/EastRimWorld.…` 而不是 SDK 里的 `/Script/CreateModPlugin.Mod…`：两种游戏都认，但游戏结构名的字段与官方表完全一致，不需要中间转换，最稳。SDK 镜像结构是给 SDK 编辑器里建表用的，内功这里用不上（原因见第 5 节）。

---

## 3. 选做法

| | 做法 A：纯 JSON | 做法 B：自建效果 |
|---|---|---|
| 工具 | 任意文本编辑器 | 再加 SDK（虚幻编辑器 + CreateModPlugin）用来做 GE、导入图标、打 pak |
| 能定的 | 名字、描述、品质、阴阳属性、阅读要求、等级上限（4 档选 1）、每层效果（从官方效果里组合）、兑换价 | 以上全部，再加任意属性加成数值、自己的图标和书本模型 |
| 发布内容 | `ModInfo.json` + `Config/*.json` | 再加 `.pak` |

建议先用做法 A 把整套流程跑通，再换成自建效果。

---

## 4. 做法 A：纯 JSON（逐步）

以一门**绿色·中正**内功《清心诀》为例，ModId 为 `QingXinJue`。

### 4.1 建目录

在游戏的 `Content/Mods/` 下新建文件夹（Mod 目录位置同开发指南第 1 节）：

```
Content/Mods/QingXinJue/
├── ModInfo.json
└── Config/
    ├── MartialArtsEntries.json       （可选：自建词条时才需要）
    ├── MartialArtsBook.json
    └── MartialArtsBookCategory.json
```

所有文件用 **UTF-8** 保存。

### 4.2 ModInfo.json

```json
{
  "ModId": "QingXinJue",
  "ModName": "清心诀",
  "Version": "1.0.0",
  "Author": "你的名字",
  "Description": "新增一门绿色中正内功《清心诀》",
  "DataTableConfigs": [
    { "ConfigType": "MartialArtsEntries",      "JsonFile": "Config/MartialArtsEntries.json",      "StructName": "/Script/EastRimWorld.MartialArtsEntries",           "bOverrideData": false },
    { "ConfigType": "MartialArtsBook",         "JsonFile": "Config/MartialArtsBook.json",         "StructName": "/Script/EastRimWorld.MartialArtsBookData",          "bOverrideData": false },
    { "ConfigType": "MartialArtsBookCategory", "JsonFile": "Config/MartialArtsBookCategory.json", "StructName": "/Script/EastRimWorld.MartialArtsBookCategoryData", "bOverrideData": false }
  ]
}
```

- `"NewGameLoad"` 不用设：设成 `true` 只是让 Mod 在点“新游戏”时提前加载，读档时照常加载，对内功配置没有影响（2026-11-13 更正，之前写的“读档时不加载”是错的）。
- 不自建词条就删掉第一行配置。

### 4.3 词条（可选）

**最省事：直接引用官方词条 ID**，跳过这一步。比如第 5 层想要龟息功第 5 层的效果，书里那一层直接写 `"Power_GuiXi_05"`。附录列出了全部官方内功词条的 ID 和效果。

**想把几个效果合到一层**时，自建词条行，把多个 GE 放在一起：

```json
{
  "StructName": "/Script/EastRimWorld.MartialArtsEntries",
  "Rows": {
    "QingXinJue_L1": {
      "ID": "QingXinJue_L1",
      "Comment": "清心诀第1层：罡气上限+850、悟性+3、修炼经验+8%",
      "EffectiveAfterEquippingGameplayEffects": [
        "/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JiChu_01.GE_Power_JiChu_01_C",
        "/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_GuiXi_L1.GE_Book_GuiXi_L1_C"
      ]
    }
  }
}
```

词条字段：

| 字段 | 说明 |
|---|---|
| `ID` | **必填，必须和行名一模一样**。游戏按 ID 判断词条是否有效，留空整条不生效。 |
| `Comment` | 备注，游戏里不显示。 |
| `EffectiveAfterEquippingGameplayEffects` | 达到该层后施加到弟子身上的 GE 列表。GE 路径格式：`/Game/路径/资产名.资产名_C`（附录里每个官方 GE 都给了完整路径）。 |
| `SelfGameplayTags` | 达到该层后给弟子加的标签（进阶）。 |
| `GiveAbility` | 达到该层后授予的技能 ID（对应技能表 GameAbility）。 |
| `ReduceCooldown` / `AbilityTargetEntriesEffects` | 减冷却 / 出招附加效果，进阶用法，字段见 SDK 类型文档。 |

> **注意**：附录里标了"授予技能"的官方词条（如草上飞第 5 层"放轻功招进草上飞窗"），特殊机制是靠技能实现的，只抄它的 GE 不会生效。要这种效果就**整条引用官方词条 ID**，不要自建。

### 4.4 武学书（核心）

完整示例（绿色·中正，最高 15 级，第 1/5/10/15 层有词条；混用了自建词条和官方词条）：

```json
{
  "StructName": "/Script/EastRimWorld.MartialArtsBookData",
  "Rows": {
    "QingXinJue_Internal": {
      "ID": "QingXinJue_Internal",
      "Comment": "绿色-内功-中正-清心诀",

      "ItemName": "清心诀",
      "ItemDescription": "道家入门心法，清心寡欲，以静制动。",
      "FormatItemDescription": { "TextMain": "道家入门心法，清心寡欲，以静制动。" },
      "RouteAcquiringDescribe": "武学图鉴残卷兑换",

      "GroundInventoryType": "Book",
      "BookClassificationType": "MartialArts",
      "MajorCategories": "InternalPower",
      "AttributeClassification": "Neutral",
      "UsageType": "Passive",
      "ItemQuality": "Green",

      "LevelConfig": {
        "DataTable": "/Game/Configs/MartialArts/DT_MartialArtsLevelConfig.DT_MartialArtsLevelConfig",
        "RowName": "InternalGreenMaxLv15"
      },
      "LevelGameplayEffect": "/Game/Blueprints/AbilitySystem/GameplayEffect/Book/BookBaseAttribute/GE_BookBase_Green.GE_BookBase_Green_C",

      "MartialArtsLevels": {
        "1":  { "Level": 1,  "MartialArtsEntries": ["QingXinJue_L1"],   "LevelName": "第1层",
                "EntriesDescribe": "罡气上限+850、悟性+3、修炼经验+8%。",
                "FormatEntriesDescribe": { "TextMain": "罡气上限+850、悟性+3、修炼经验+8%。" } },
        "5":  { "Level": 5,  "MartialArtsEntries": ["Power_GuiXi_05"],  "LevelName": "第5层",
                "EntriesDescribe": "罡气上限+300、资质+3、罡气恢复加快。",
                "FormatEntriesDescribe": { "TextMain": "罡气上限+300、资质+3、罡气恢复加快。" } },
        "10": { "Level": 10, "MartialArtsEntries": ["Power_JiChu_10"],  "LevelName": "第10层",
                "EntriesDescribe": "资质+15。",
                "FormatEntriesDescribe": { "TextMain": "资质+15。" } },
        "15": { "Level": 15, "MartialArtsEntries": ["Power_GuiXi_15"],  "LevelName": "第15层",
                "EntriesDescribe": "罡气上限+225、修炼经验+7%。",
                "FormatEntriesDescribe": { "TextMain": "罡气上限+225、修炼经验+7%。" } }
      },

      "CoolDownTime": -1,
      "SkillEntryTag": "内功·中正",
      "FormatSkillEntryTag": { "TextMain": "内功·中正" },
      "MartialArtsIcon": "/Game/Art/UI/Charactor/WuXue/Ver2/C_JiChu_Internal.C_JiChu_Internal",

      "RealmLevel": 1,
      "ReadingTime": 60,
      "bCanReadRepeatedly": false,
      "CopyTime": 300,
      "MaxCopyNum": 1,
      "ComprehendCost": 15,
      "ExchangeFragmentCost": { "Blue": 500 },

      "MaxStackSize": 1,
      "SmallGridCount": 1,
      "ItemPrice": 300,
      "GrowScore": 300,
      "ItemWeight": 0.5,
      "MaxItemDurability": 30,
      "ItemShelfLife": 384000,
      "ItemIcon": "/Game/Art/UI/GameMain/ResourceIcon/T_Ziyuan_icon_lvsemiji.T_Ziyuan_icon_lvsemiji",
      "ItemModel": "/Game/Art/Meshes/Buiding/BaiJian/ShuJi/Item_Book_Internal01.Item_Book_Internal01",
      "StackModels": [
        { "MinCapacity": 1, "MaxCapacity": 1, "StackModel": "/Game/Art/Meshes/Buiding/BaiJian/ShuJi/Item_Book_Internal01.Item_Book_Internal01" }
      ],
      "GameplayTag": { "TagName": "Inventory.Item.MartialBook.Lv" },
      "InformationWidget": "BookInfo",
      "TipInformationWidget": "BookTip",
      "GOAPActions": ["GetItem", "TransItem"],
      "SocketName": { "GetItem": "peng", "TransItem": "peng", "Transport": "peng" },
      "StorageSpaceDecayRate": { "OutDoor": 1.0, "UnderRoof": 0.75, "InDoor": 0.5 },
      "TemperatureThreshold": [ { "MinTemperature": -999, "MaxTemperature": 999, "Efficiency": 1 } ]
    }
  }
}
```

字段说明（只列内功相关和必须照填的）：

**武学部分**

| 字段 | 填法 |
|---|---|
| `ID` | **必填，必须等于行名**。行名建议加 ModId 前缀，避免和官方或别的 Mod 撞名——**行名和官方相同会直接改掉官方那本书**。 |
| `MajorCategories` | 固定 `InternalPower`（内功）。 |
| `AttributeClassification` | `Yin` 阴性 / `Neutral` 中正 / `Positive` 阳性，三选一。官方内功只用这三种，决定吃哪类经验；填别的值经验与初始等级都会不对。 |
| `UsageType` | 固定 `Passive`。 |
| `CoolDownTime` | 固定 `-1`（内功没有冷却）。 |
| `LevelConfig` | 等级表，只能从下表 4 行里选一行，`DataTable` 路径照抄。 |
| `LevelGameplayEffect` | 等级成长 GE，建议与品质对应的官方 GE（见第 6 节）。 |
| `MartialArtsLevels` | 键是层号（字符串形式的数字），值里的 `Level` **必须与层号相同**；层号从 1 开始，不能超过等级表的最高等级。`MartialArtsEntries` 写词条 ID（自建或官方）。层号可以任意挑，官方绿色用 1/5/10/15，橙色用 1/5/10/20/30/40/50。 |
| `EntriesDescribe` / `FormatEntriesDescribe` | 该层效果的描述文字，两个都填同样内容。游戏不会自动根据词条生成描述，**写的和实际效果对不上玩家也看不出来**，请自己核对。 |
| `LevelName` | 层名。 |
| `SkillEntryTag` / `FormatSkillEntryTag` | 图鉴里"类型："后面显示的文字。 |
| `MartialArtsIcon` | 武学图标（软引用路径）。做法 A 只能借用官方图标。 |

**阅读与获取**

| 字段 | 填法 |
|---|---|
| `RealmLevel` | 研读所需最低境界。官方绿、蓝为 1，紫为 1~2，橙为 2~4。 |
| `Attributes` | 研读所需属性门槛（官方用"智力"：绿 1、橙 8）。这个字段的键是属性类型，手写格式繁琐；需要时在 SDK 里用属性选择器配好、导出后照抄那一段，不需要就整行省略（=没有属性门槛）。 |
| `ReadingTime` | 研读时长。官方：绿 60、蓝 100、紫 240、橙 200~240。 |
| `bCanReadRepeatedly` / `CopyTime` / `MaxCopyNum` | 能否重复研读 / 抄录时长 / 最多抄录次数，照官方即可。 |
| `ExchangeFragmentCost` | 图鉴残卷兑换价，`{ 品质: 数量 }`，所列每种品质残卷都够才能兑换。官方：绿、蓝书都是 `{"Blue": 500}`，紫 `{"Purple": 500}`，橙 `{"Orange": 500}`。**不填则图鉴里不能兑换。** |
| `ComprehendCost` | 参悟消耗的历练点数。官方：绿 15、蓝 35、紫 55、橙 125。 |

**物品部分**（照抄示例，按品质换下面几项即可）

| 字段 | 说明 |
|---|---|
| `GroundInventoryType` | 固定 `Book`。 |
| `BookClassificationType` | 固定 `MartialArts`。 |
| `ItemQuality` | `Green` / `Blue` / `Purple` / `Orange`。 |
| `ItemIcon` / `ItemModel` / `StackModels` | 物品图标 / 书本模型，按品质选官方资源（第 6 节）。 |
| `GameplayTag` | 物品标签，用品质对应的上级标签：绿 `Inventory.Item.MartialBook.Lv`、蓝 `.Lan`、紫 `.Zi`、橙 `.Cheng`。官方每本书还有自己的子标签，想要的话用 GameplayTags ini 注册（开发指南第 8 节），**不要写没注册的标签**，否则会被读成空标签。 |
| `GOAPActions` / `SocketName` | 弟子搬运书本用，照抄。漏了弟子可能拿不了这本书。 |
| `InformationWidget` / `TipInformationWidget` | 点击 / 悬停时的界面，照抄 `BookInfo` / `BookTip`。 |
| `MaxItemDurability` | 书的耐久，与可研读次数相关，官方都是 30。 |
| 其余（价格、重量、保质期、存放衰减、温度） | 照抄官方值。 |

> 新增的行**没写的字段一律是程序默认值**（多半是 0 或空），不会从别的书继承。所以示例里的物品字段请整段保留。

### 4.5 挂进图鉴

把书加到官方的"江湖内功"分类（它是图鉴里唯一的内功心法分类），合并模式只会往列表里追加，不影响原有的书：

```json
{
  "StructName": "/Script/EastRimWorld.MartialArtsBookCategoryData",
  "Rows": {
    "Category_JiangHuNeiGong": {
      "MartialArtsBooks": ["QingXinJue_Internal"]
    }
  }
}
```

`ModInfo.json` 里这一项的 `bOverrideData` 必须是 `false`，写成 `true` 会把官方列表整个换成你的。

也可以自建一个分类行（填 `ID`、`CategoryName`、`MartialArtsBooks`、`BookType: "Internal"`、`BookDesc`、`Founder`），适合一次加好几本。

### 4.6 进游戏验证

1. 启动游戏，在 Mod 列表里启用，进入一个存档。
2. 打开武学图鉴的内功心法页，找到《清心诀》，核对名称、类型、第 1 层描述、境界要求。
3. 有足够残卷时点兑换，书会送到**驿站**；取回后让弟子研读，研读完在武学界面装为内功。
4. 让弟子修炼，确认经验上涨、到第 5 层时新效果出现。

出问题时：
- 控制台 `Mod.Status` 看加载状态与错误（发行版开控制台见开发指南 7.1）。
- 纯 JSON 的 Mod 加载时日志会有一条 `No pak files or content directory found for mod`，意思是没有 pak 资源包，属正常，不影响配置生效。
- JSON 写错时日志会带出错的行列号；某一行字段类型不对时，日志会打印那一行的内容。
- 图鉴里看不到书：检查第 4.5 步和书的 `ID`。
- 装上后没有任何属性变化：检查 `LevelConfig` 路径和行名、词条 `ID` 是否等于行名、GE 路径结尾的 `_C`。

**测试用控制台命令（可选）**：不想攒残卷时，在 `Main.lua` 里加一个命令，直接给弟子装上并设到指定等级。这会顶掉弟子当前的内功，请在**备份存档**上用。

```lua
local Mod = {}

local BOOK_ID = "QingXinJue_Internal"

function Mod:Log(Message, Level)
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, Level or "Log")
end

function Mod:OnModLoaded()
    -- 用法：qxj.grant 10   给找到的第一个本门弟子装上清心诀并设为 10 级
    UE.UModLuaLibrary.RegisterModConsoleCommand("qxj.grant", "QingXinJue test", function(Args)
        local Level = tonumber(Args[1]) or 1
        local HumanClass = UE.UClass.Load("/Script/EastRimWorld.EastRimWorldCharacter_Human")
        local Actors = UE.UGameplayStatics.GetAllActorsOfClass(self.ModInfo, HumanClass)
        for i = 1, Actors:Num() do
            local Character = Actors[i]
            if Character:IsPlayerTeam() and Character.GrowUpComponent then
                local Ok = Character.GrowUpComponent:GrantMartialArtsAtLevel(BOOK_ID, Level)
                self:Log(string.format("grant %s Lv%d: %s", BOOK_ID, Level, tostring(Ok)))
                return
            end
        end
        self:Log("no disciple found", "Warning")
    end)
end

return Mod
```

用了 Lua 的话 `ModInfo.json` 里加 `"MainLuaFile": "Main.lua"`。发布前删掉测试命令。

---

## 5. 做法 B：自建效果（SDK）

做法 B 的表格**仍然手写 JSON**（第 4 节全部照用），SDK 只负责做资源并打成 pak。

### 5.1 为什么表格不在 SDK 里建

- 等级表 `DT_MartialArtsLevelConfig` 和官方 GE 不在 SDK 工程里，SDK 编辑器的表格里选不到它们，只能在 JSON 里手写路径。
- SDK 在**保存 `DA_ModDataAsset`** 和**打包**时，会按 DA 里登记的表重新导出 `Config/*.json`，并改写 `ModInfo.json` 的 `DataTableConfigs`。手改过的导出文件每次都会被冲掉。

所以：DA 里不登记任何表，资源和表格分开管。

### 5.2 步骤

1. 在 SDK 里 **Tools → Modding → 创建 Mod**，ModId 与做法 A 相同。
2. **做词条 GE**：在 `Content/Mods/<ModId>/` 下新建蓝图类，父类选 `GameplayEffect`：
   - `Duration Policy` = `Infinite`；
   - `Modifiers` 加一项：`Attribute` 选要加的属性，`Modifier Op` 选 `Add (Base)`（加固定值）或 `Multiply (Additive)`（加百分比，0.25 = +25%），`Magnitude` 填数值。
   - 一层一个 GE，例如 `GE_QingXinJue_L1`。
   常用属性（与官方内功一致）：

   | 属性 | 含义 |
   |---|---|
   | `EastRimWorldHealthSet.DamageShieldMaxLife` | 罡气上限 |
   | `EastRimWorldCombatSet.MinAttack` / `MaxAttack` | 最小 / 最大攻击 |
   | `EastRimWorldCombatSet.Defense` | 防御 |
   | `EastRimWorldCombatSet.AttackAccuracy` / `Dodge` | 命中 / 闪避 |
   | `EastRimWorldCombatSet.PierceCritical` / `SlashCritical` / `BluntCritical` | 刺 / 斩 / 钝暴击 |
   | `EastRimWorldHealthSet.BodyMaxLife` + `CurBodyMaxLife` | 躯干最大健康（两个要一起加，头、左腿、右腿同理） |
   | `EastRimWorldGrowUpSet.InternalEnergyCirculation` | 内力运转 |

   拿不准就参照附录里效果相近的官方 GE 怎么配。
3. **（可选）做等级成长 GE**：同样新建 GE，`Magnitude` 用 Scalable Float 配曲线，GE 等级 = 内功当前等级。不做就沿用官方 `GE_BookBase_*`。
4. **导入图标**：PNG 拖进 `Content/Mods/<ModId>/UI/`，贴图组设为 UI（`UserInterface2D`），关 Mip。
5. **打包**：打包窗口里打包这个 Mod。Mod 目录下的全部资产都会打进 pak。
6. **改 JSON 引用**：把第 4 节 JSON 里的 GE、图标路径换成自己的，例如
   - `"/Game/Mods/QingXinJue/GE_QingXinJue_L1.GE_QingXinJue_L1_C"`（GE，结尾加 `_C`）
   - `"/Game/Mods/QingXinJue/UI/T_QingXinJue.T_QingXinJue"`（图标，不加 `_C`）
   `LevelConfig` 照旧指向官方等级表。
7. **组装发布目录**：打包输出在 SDK 工程的 `Mods/<ModId>/`。打包器**不会**把手写的 `Config/*.json` 拷过去，所以要：
   - 把 `Config/` 目录复制进输出目录；
   - 打开输出目录的 `ModInfo.json`，确认 `DataTableConfigs` 还是第 4.2 节那三项，没有就补回。
   每次重新打包后都要重做这一步。把这两样另存一份，方便覆盖。
8. 用输出目录测试、上传创意工坊（开发指南第 8 节）。

---

## 6. 官方参考值

**等级表（`LevelConfig.RowName`，只能选这 4 行）**

| 行名 | 最高等级 | 满级总经验 | 满级武学分 | 满级最多支撑到的境界 | 官方用于 |
|---|---|---|---|---|---|
| `InternalGreenMaxLv15` | 15 | 59,800 | 469 | 驾轻就熟 (3) | 绿色 |
| `InternalBlueMaxLv25` | 25 | 163,000 | 1,795 | 神乎其技 (7) | 蓝色 |
| `InternalPurpleMaxLv40` | 40 | 474,300 | 6,064 | 神功盖世 (13) | 紫色 |
| `InternalOrangeMaxLv50` | 50 | 1,173,900 | 10,019 | 一代宗师 (16) | 橙色 |

选哪一档，就等于决定了这门内功的"天花板"：绿档练满也只到第 3 境界，橙档能一路练到一代宗师（中途需要突破的境界照常要突破）。四档的招式槽、被动槽加成都是 0，槽位只随境界增加。

**按品质照抄的值**

| 品质 | `ItemQuality` | 等级成长 GE | `ItemIcon` | 书本模型 | 标签 | 阅读境界 | 兑换价 | 参悟 | 价格/成长分 |
|---|---|---|---|---|---|---|---|---|---|
| 绿 | `Green` | `GE_BookBase_Green` | `T_Ziyuan_icon_lvsemiji` | `Item_Book_Internal01` | `…MartialBook.Lv` | 1 | Blue 500 | 15 | 300 |
| 蓝 | `Blue` | `GE_BookBase_Blue` | `T_Ziyuan_icon_lansemiji` | `Item_Book_Internal02` | `…MartialBook.Lan` | 1 | Blue 500 | 35 | 800 |
| 紫 | `Purple` | `GE_BookBase_Purple`（偏攻 `_TypeATT`、偏守 `_TypeDEF`） | `T_Ziyuan_icon_zisemiji` | `Item_Book_Internal02` / `03` | `…MartialBook.Zi` | 1~2 | Purple 500 | 55 | 2000 |
| 橙 | `Orange` | `GE_BookBase_Gold`（偏攻 `_TypeATT`、偏守 `_TypeDEF`） | `T_Ziyuan_icon_chengseniji` | `Item_Book_Internal04` | `…MartialBook.Cheng` | 2~4 | Orange 500 | 125 | 5000 |

完整路径：
- 等级成长 GE：`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/BookBaseAttribute/<名字>.<名字>_C`
- 物品图标：`/Game/Art/UI/GameMain/ResourceIcon/<名字>.<名字>`
- 书本模型：`/Game/Art/Meshes/Buiding/BaiJian/ShuJi/<名字>.<名字>`（`Buiding` 是官方目录原本的拼写）
- 武学图标（`MartialArtsIcon`）：`/Game/Art/UI/Charactor/WuXue/Ver2/<官方书ID>.<官方书ID>`，例如 `C_JiChu_Internal`

---

## 7. 限制与注意

1. **等级表只能 4 选 1**。等级表没开放给 Mod，自己做的等级表游戏读不到，所以最高等级只能是 15 / 25 / 40 / 50，每级经验和武学分固定。
2. **获取途径**：Mod 能直接用的是**图鉴残卷兑换**。门派传授、驿站兑换、NPC 门派的内功池、开局的门派武学这些表暂未开放。另外两条可用的路：
   - 自制角色（`CharacterConfig`）可以把初始内功设成你的内功；
   - 掉落集 `DropSetConfig` 可以改，字段见 SDK 类型文档。
3. **别在用着这门内功的存档里停用 Mod**。停用后书和内功的配置都不存在了，弟子身上的内功会失效，境界和属性可能异常；重新启用后才会恢复。
4. **行名与 ID**：书、词条的 `ID` 必须等于行名；行名带上 ModId 前缀。和官方同名就是修改官方。
5. **描述文字**完全由你写，游戏不校验它与实际效果是否一致。
6. **词条随机池**（`LevelSkillEntry`、`SkillEntry*` 表）是招式用的，官方内功都没用，内功不要配。
7. **不建议**用词条的 `EffectiveAfterEquippingGameplayAttributes`（填装备属性 ID 的写法）：官方内功没有用这条路，它支持的属性也不全（没有罡气上限、各部位生命等）。加属性请用 GE。
8. 文字直接写中文只有一种语言。要多语言需要在 SDK 里做字符串表，本文不展开。
9. 游戏更新后，如果官方改了 GE 或等级表的名字，引用它们的 Mod 需要跟着改；Mod 版本号会记进存档，读档时缺失或版本不符会提示。

---

## 8. 制作检查清单

- [ ] 书和词条的 `ID` 都等于行名，行名带 ModId 前缀
- [ ] `MajorCategories` = `InternalPower`，`AttributeClassification` 是 `Yin` / `Neutral` / `Positive`
- [ ] `LevelConfig` 指向官方 4 行之一，`DataTable` 路径完整
- [ ] `MartialArtsLevels` 每层的 `Level` 与层号相同，层号不超过最高等级
- [ ] 每层描述与实际词条效果一致
- [ ] 物品字段整段保留，`GameplayTag` 是已存在的标签
- [ ] 图鉴分类用合并模式（`bOverrideData: false`）追加
- [ ] `ExchangeFragmentCost` 已填（否则图鉴里换不到）
- [ ] （`NewGameLoad` 设不设都行，不影响读档后的内功配置）
- [ ] 做法 B：输出目录里有 `Config/` 和正确的 `DataTableConfigs`
- [ ] 进游戏：图鉴能看到 → 能兑换 → 能研读 → 能装备 → 修炼涨经验 → 到层出效果
