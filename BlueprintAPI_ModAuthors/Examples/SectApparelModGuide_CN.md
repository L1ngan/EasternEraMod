# 宗门时装 Mod 制作指南

> 适用：带 Mod 配置表 JSON 覆盖功能的游戏版本（2026 年 11 月）。
> 基础知识见《EastRimWorld Mod 开发指南》（同目录 [ModDevelopmentGuide_CN.md](ModDevelopmentGuide_CN.md)）；装备表的通用写法（`TemplateID` 模板行、合并规则）见《[装备 Mod 制作指南](EquipmentModGuide_CN.md)》第 3 节，本文不重复。
> 配套示例：本仓库的 [`Content/Mods/QingYunZongFu`](../../Content/Mods/QingYunZongFu/)（说明见 [QingYunZongFu/README.md](QingYunZongFu/README.md)），就是第 3 节的《青云宗门服》，整个文件夹复制到游戏的 `Content/Mods/` 下即可用。

---

## 0. 一页看懂

- **宗门时装**：宗门时装界面里给每个分堂（掌门、外门、内门、其余分堂）分别设男、女统一服饰。**只改外观，不改弟子身上真实装备的属性。**
- **一件可选的宗门时装** = 防具表一行（指向外观资产）+ 用 Lua 加进宗门时装清单 + 解锁。分堂限制可选。
- **纯 JSON + 几行 Lua 能做的**：借用官方已有的服饰外观，起新名字加进宗门时装。官方有两百多件时装外观，宗门时装界面原本只列出其中 41 件，没列出的（武当、达摩、唐门系列等）都可以这样加进来。
- **新模型**要在 SDK 里做骨骼网格和外观资产再打 pak，见第 6 节（需要 2026-11-17 之后的 SDK）。
- **不想手写 JSON**：四张表都能在 SDK 编辑器里建数据表填写，见第 10 节；宗门时装清单仍要 `Main.lua`。
- **换颜色**：自带模型的衣服登记到染色表后，玩家能在捏人、宗门时装的「染色·裁剪」里自己调色，见第 6.5 节（需要 2026-11-20 之后的游戏版本）。
- **做不到的**：宗门时装界面只有上衣、裤子、鞋三页；`MaterialColor` 字段不生效，不能靠它换色。

---

## 1. 宗门时装怎么运作

| 规则 | 说明 |
|---|---|
| 分堂 | 编号 `0` 掌门（总舵）、`1` 外门、`2` 内门、`3` 起是其余分堂。每个分堂男、女各一套。 |
| 槽位 | 界面只有上衣 `Armor`、裤子 `Pants`、鞋 `Shoes` 三页。 |
| 某件服饰出现在某分堂的列表里 | 要同时满足：① 在**宗门时装清单**里；② 通过**分堂限制**（限制表里没写这件就是所有分堂都能选）；③ 该性别的外观资产不为空（只做了女款，男款页就看不到）。 |
| 能选、能保存 | 还要**已解锁**。没解锁的按钮是灰的，提示里显示这件服饰的名字、描述和获取途径（`ItemName`、`ItemDescription`、`RouteAcquiringDescribe`）。 |
| 生效 | 保存后，该分堂成员的外观按"身上装备 → 分堂统一服饰 → 个人时装"逐槽叠加。只换外观，属性仍来自身上的装备。 |
| 存档 | 存的是服饰 ID：每个分堂的统一服饰设置、每个弟子当前的外观、已解锁列表。 |

清单和解锁各有官方的数据来源，Mod 的接入方式不同：

| 环节 | 官方数据在哪 | Mod 怎么改 |
|---|---|---|
| 服饰本身 | 防具表 `EquipmentConfig` | JSON 新增行 |
| 宗门时装清单 | 游戏配置资产里的 `ForceApparels`（没有对应的 JSON 配置类型） | **Lua**：每次进入游戏世界时往清单里加 |
| 解锁 | 势力等级 / 科技解锁的"宗门时装"类解锁项 | JSON：新增解锁项，挂到势力等级或科技上；或 Lua 直接解锁 |
| 分堂限制 | 分堂服饰限制表 `SubClassApparelLimit` | JSON 新增行（可选） |

---

## 2. 要配哪些

| 文件 | `ConfigType` | `StructName` | `bOverrideData` | 必需？ |
|---|---|---|---|---|
| 服饰 | `EquipmentConfig` | `/Script/CreateModPlugin.ModCharacterApparel`（带模板） | `true` | 必需 |
| 宗门时装清单 | —（`Main.lua`） | — | — | 必需 |
| 解锁项 | `TechUnlockItemConig` | `/Script/EastRimWorld.TechUnlockItemConigStruct` | `false` | 解锁方式二选一 |
| 势力等级 | `ForceLevelInfo` | `/Script/EastRimWorld.ForceLevelInfo` | `false` | 同上 |
| 分堂限制 | `SubClassApparelLimit` | `/Script/EastRimWorld.SubClassApparelConfig` | `false` | 可选 |

---

## 3. 示例：《青云宗门服》（逐步）

借用官方"名门"一套外观（`DaMo_Armor_03` 名门衣、`DaMo_Pants_03` 名门裤、`DaMo_Shoes_03` 名门鞋，男女款都有、本身没有属性、原本不在宗门时装清单里），改名为青云道袍 / 青云道裤 / 青云云履，势力 1 级解锁，只给内门和掌门选。ModId 为 `QingYunZongFu`，新行前缀 `QYZ_`。

### 3.1 目录

```
Content/Mods/QingYunZongFu/
├── ModInfo.json
├── Main.lua                        把服饰加进宗门时装清单（必需）
└── Config/
    ├── EquipmentConfig.json        三件服饰
    ├── TechUnlockItemConig.json    解锁项
    ├── ForceLevelInfo.json         挂到势力 1 级
    └── SubClassApparelLimit.json   只给内门、掌门（可选）
```

### 3.2 ModInfo.json

```json
{
  "ModId": "QingYunZongFu",
  "ModName": "青云宗门服",
  "Version": "1.0.0",
  "Author": "你的名字",
  "Description": "宗门时装界面新增一套《青云宗门服》",
  "MainLuaFile": "Main.lua",
  "DataTableConfigs": [
    { "ConfigType": "EquipmentConfig",      "JsonFile": "Config/EquipmentConfig.json",      "StructName": "/Script/CreateModPlugin.ModCharacterApparel",     "bOverrideData": true },
    { "ConfigType": "SubClassApparelLimit", "JsonFile": "Config/SubClassApparelLimit.json", "StructName": "/Script/EastRimWorld.SubClassApparelConfig",     "bOverrideData": false },
    { "ConfigType": "TechUnlockItemConig",  "JsonFile": "Config/TechUnlockItemConig.json",  "StructName": "/Script/EastRimWorld.TechUnlockItemConigStruct", "bOverrideData": false },
    { "ConfigType": "ForceLevelInfo",       "JsonFile": "Config/ForceLevelInfo.json",       "StructName": "/Script/EastRimWorld.ForceLevelInfo",            "bOverrideData": false }
  ]
}
```

（示例文件里另有 `"LogLevel": "Log"`，让 `qyz.status` 的输出写进日志文件，发布时可删。）

### 3.3 服饰（用模板）

```json
{
  "StructName": "/Script/CreateModPlugin.ModCharacterApparel",
  "Rows": {
    "QYZ_Armor": {
      "TemplateID": "DaMo_Armor_03",
      "ID": "QYZ_Armor",
      "ItemName": "青云道袍",
      "ItemDescription": "青云宗内门弟子的道袍。",
      "FormatItemDescription": { "TextMain": "青云宗内门弟子的道袍。" }
    },
    "QYZ_Pants": { "TemplateID": "DaMo_Pants_03", "ID": "QYZ_Pants", "ItemName": "青云道裤", "ItemDescription": "青云宗内门弟子的道裤。", "FormatItemDescription": { "TextMain": "青云宗内门弟子的道裤。" } },
    "QYZ_Shoes": { "TemplateID": "DaMo_Shoes_03", "ID": "QYZ_Shoes", "ItemName": "青云云履", "ItemDescription": "青云宗内门弟子的云履。", "FormatItemDescription": { "TextMain": "青云宗内门弟子的云履。" } }
  }
}
```

- 继承下来的：槽位 `ArmorType`、男女外观资产、图标、物品标签 `Inventory.Item.Armor.LV1.ShiZhuang`（时装）、白色品质。
- 槽位 `ArmorType`：2026-11 之后的游戏版本里写了就以你写的为准（如 `"ArmorType": "EModArmorType::Socks"`，也可以写序号），不写沿用模板；更早的版本里 SDK 结构写不进 `ArmorType`，只能继承模板，所以做上衣仍建议选一件上衣做模板。
- 想换外观就写 `ApparelMaleDataAsset` / `ApparelFemaleDataAsset`，路径从第 5 节或官方防具表里抄。图标同理写 `ItemIcon`。
- 只写一个性别的外观资产时，另一个性别的列表里不会出现这件。
- **模板最好选本身没有属性的时装**（第 5 节列的都没有）。宗门统一服饰不看属性，但这一行同时也是一件真实的防具，万一通过掉落等途径拿到实物，穿上就有模板的属性。

### 3.4 加进宗门时装清单（Main.lua）

宗门时装清单在游戏配置资产里，没有 JSON 配置类型，要在 Lua 里加。清单是**当前游戏世界的运行时副本**：每次进入游戏世界（新游戏、读档）都会重建，`Main.lua` 也会重新执行一次，所以在 `OnModLoaded` 里加就行，不会重复，也不用清理。

```lua
local Mod = {}

local APPARELS = {
    { Id = "QYZ_Armor", Slot = "Armor" },
    { Id = "QYZ_Pants", Slot = "Pants" },
    { Id = "QYZ_Shoes", Slot = "Shoes" },
}

function Mod:OnModLoaded()
    local GameMode = UE.UGameplayStatics.GetGameMode(self.ModInfo)
    local Config = GameMode and GameMode:GetGamePlayConfigurationAsset()
    if not Config then return end
    local Lists = Config.ForceApparels                      -- 槽位 → { IDs = 服饰 ID 列表 }
    for _, A in ipairs(APPARELS) do
        local Slot = UE.EArmorType[A.Slot]
        local Entry = Lists:Find(Slot) or UE.FNameIDArray()
        Entry.IDs:AddUnique(A.Id)
        Lists:Add(Slot, Entry)
    end
    Config.ForceApparels = Lists
end

return Mod
```

- `Slot` 只能是 `Armor`、`Pants`、`Shoes`。
- 示例的 `Main.lua` 还带一条只读的检查命令 `qyz.status`：打印外门、内门各能选到哪几件本 Mod 的服饰、是否已解锁。

### 3.5 解锁（挂到势力等级）

解锁项表新增一行，类型 `ForceApparel`（宗门时装），列出服饰 ID：

```json
{
  "StructName": "/Script/EastRimWorld.TechUnlockItemConigStruct",
  "Rows": {
    "QYZ_Unlock": {
      "ID": "QYZ_Unlock",
      "DisplayName": "青云宗门服",
      "FormatItemDesc": { "TextMain": "宗门时装：青云道袍、青云道裤、青云云履" },
      "Icon": "/Game/CharacterEditor/CharacterParts/Thumbnails/New/Equipment_Icon_Nianlian/Man/Armor/clothes_man_01.clothes_man_01",
      "UnlockType": "ForceApparel",
      "UnlockItemsIds": ["QYZ_Armor", "QYZ_Pants", "QYZ_Shoes"]
    }
  }
}
```

再用合并模式把它追加到官方势力等级 `Force_Level_1`（1 级）的解锁内容里：

```json
{
  "StructName": "/Script/EastRimWorld.ForceLevelInfo",
  "Rows": { "Force_Level_1": { "UnlockContentIDs": ["QYZ_Unlock"] } }
}
```

- 势力等级行有 `Force_Level_1` ~ `Force_Level_5`。挂在几级，势力升到几级时解锁。
- **已有的存档**：读档时会按当前势力等级把所有该解锁的补发一遍，所以 Mod 后装进来的老档也能直接用（已实测）。
- 官方外门、内门的一阶宗门套装也挂在 1 级上。
- `bOverrideData` 必须是 `false`，写成 `true` 会把官方 1 级的解锁内容整个换掉。

**其他解锁方式**：

- **研究科技后解锁**：不挂势力等级，改为往某项科技的 `UnlockItemIds` 追加 `QYZ_Unlock`（写法见《装备 Mod 制作指南》6.1）。
- **Lua 直接解锁**（不需要条件、开局即可用）：

```lua
local function UnlockAll()
    local Director = UE.AWorldDirector.GetWorldDirector()
    local Force = Director and Director:GetPlayerWorldForce()
    if not Force then return end
    local Unlocked = Force.UnlockForceApparel
    for _, A in ipairs(APPARELS) do Unlocked:AddUnique(A.Id) end
    Force.UnlockForceApparel = Unlocked
end
-- 世界初始化完成后再解锁：读档、新游戏各一个事件
UE.UModEventBus.RegisterModEvent("OnLoadGameComplete", function() UnlockAll() end)
UE.UModEventBus.RegisterModEvent("OnNewGameStarted", function() UnlockAll() end)
```

已解锁列表会存进存档；Mod 停用后留在列表里的 ID 没有影响。

### 3.6 分堂限制（可选）

只想让某些分堂能选时，每件服饰一行：

```json
{
  "StructName": "/Script/EastRimWorld.SubClassApparelConfig",
  "Rows": {
    "QYZ_Armor_Limit": { "ID": "QYZ_Armor_Limit", "ApparelId": "QYZ_Armor", "SubClassIndexArr": [0, 2] },
    "QYZ_Pants_Limit": { "ID": "QYZ_Pants_Limit", "ApparelId": "QYZ_Pants", "SubClassIndexArr": [0, 2] },
    "QYZ_Shoes_Limit": { "ID": "QYZ_Shoes_Limit", "ApparelId": "QYZ_Shoes", "SubClassIndexArr": [0, 2] }
  }
}
```

- `SubClassIndexArr`：允许的分堂编号（`0` 掌门、`1` 外门、`2` 内门……）。
- 表里没写的服饰所有分堂都能选；**同一件服饰只写一行**（写多行只认第一行）。
- 官方分堂时装写的是 `[1, 2, 0, 3, 4, 5]`（全部分堂），掌门专属的几件写 `[0]`。

### 3.7 进游戏验证

1. Mod 列表里启用，进入一个存档（势力至少 1 级）。
2. 打开宗门时装界面，切到内门：上衣、裤、鞋三页各多出一件青云服饰，可选；切到外门：没有（分堂限制）。
3. 选上、保存，内门弟子的外观换成青云宗门服。
4. 可选：控制台 `qyz.status` 打印清单与解锁状态。

2026-11-17 在编辑器里用本示例实测（势力 5 级的存档，内门 10 名弟子）的结果：

| 检查 | 结果 |
|---|---|
| 服饰新行 | 槽位、男女外观资产、图标、时装标签都从模板继承，名字是自己的。 |
| 宗门时装清单 | 掌门、内门的列表里有三件，外门没有。 |
| 解锁 | 读档后三件都已解锁（势力等级补发）。 |
| 保存为内门统一服饰（男、女） | 10 名内门弟子的外观数据都换成了青云道袍 / 道裤 / 云履。 |

---

## 4. 字段参考：服饰行

服饰行就是防具表的一行，通用字段见《装备 Mod 制作指南》第 9 节，这里只列与宗门时装有关的：

| 字段 | 说明 |
|---|---|
| `ID` | 必填，等于行名，带 ModId 前缀。和官方同名就是改官方那件。 |
| `ArmorType` | 槽位。宗门时装界面目前只有 `Armor` / `Pants` / `Shoes` 三页。2026-11 之后的游戏版本写了就生效（不写沿用模板），更早的版本只能继承模板。外观资产的类必须与槽位对应，见第 6.4 节。 |
| `ApparelMaleDataAsset` / `ApparelFemaleDataAsset` | 男 / 女外观资产路径。为空的那个性别看不到这件。 |
| `ItemName` / `ItemDescription` / `FormatItemDescription.TextMain` | 名字和描述，锁定时的提示里也显示。 |
| `RouteAcquiringDescribe` | 获取途径描述，锁定提示里显示。SDK 结构写不进去，只能继承模板（官方时装多为空）；要写就改用游戏结构名 `/Script/EastRimWorld.CharacterApparel` 写全字段。 |
| `ItemIcon` | 图标。 |
| `MaterialVariantsIndex` | 外观资产的材质变体序号，`-1` = 网格自带材质。官方外观资产都没有材质变体，填了没效果；自己的外观资产在 `MaterialVariants` 里配了变体时，弟子身上按这个变体显示，但宗门时装界面的预览仍显示原色。要让玩家自己选色，用第 6.5 节的染色登记。 |
| `MaterialColor` | 颜色参数。弟子身上贴外观时不读这个字段，**不要用它换色**。 |
| `MainAttributes` 等属性字段 | 宗门统一服饰不看属性。 |

---

## 5. 可借用的官方外观

下面这些官方时装**男女款齐全、本身没有属性、原本不在宗门时装清单里**，直接拿来做 `TemplateID` 即可（括号里是官方名字）：

| 系列 | 上衣 `Armor` | 裤子 `Pants` | 鞋 `Shoes` |
|---|---|---|---|
| 武当 | `WuDang_Armor_01`（江湖款衣）、`_02`（绣花衣）、`_03`（重装纹衣） | `WuDang_Pants_01`（江湖款裤）、`_03`（重装纹裤） | `WuDang_Shoes_01`（江湖款鞋）、`_02`（绣花鞋）、`_03`（重装纹鞋） |
| 达摩 | `DaMo_Armor_01`（紧身款衣）、`_02`（锦缎面衣）、`_03`（名门衣） | `DaMo_Pants_01`（紧身款裤）、`_02`（锦缎面裤）、`_03`（名门裤） | `DaMo_Shoes_01`（紧身款鞋）、`_02`（锦缎面鞋）、`_03`（名门鞋） |
| 唐门 | `TangMen_Armor_01`（灰布面衣）、`_02`（考究式衣）、`_03`（天蚕质衣） | `TangMen_Pants_01`（灰布面裤）、`_02`（考究式裤） | `TangMen_Shoes_01`（灰布面鞋）、`_02`（考究式鞋） |
| 慕容 | — | `MuRong_Pants_02`（精铁裤）、`_03`（华贵裤） | `MuRong_Shoes_02`（精铁鞋）、`_03`（华贵鞋） |
| 华山 | `HuaShan_Armor_03`（华贵衣） | — | — |

官方宗门时装清单原有的 41 件：上衣 `Armor_Force_Wai_Lv1~3`（外门）、`Armor_Force_Nei_Lv1~3`（内门）、`TianXiaHui_Armor_01`、`HuaShan_Armor_01/02`、`MuRong_Armor_01` 等，裤、鞋同理。

> 防具表里还有很多普通防具（`Armor_bupi_*`、`Pants_bupi_*` 等）也有男女外观，但带防御类属性，作模板时属性会被继承（见 3.3 最后一条）。

---

## 6. 新模型（SDK）

> **只是想用官方原样的衣服？** 想把游戏里已有的官方衣服（包括没进宗门时装清单的 NPC、门派、普通防具外观）原样加进宗门时装，不必导出官方模型再导回来：服饰行的 `ApparelFemaleDataAsset` / `ApparelMaleDataAsset` 直接填官方外观资产的路径（如 `/Game/CharacterEditor/CharacterParts/DataAssets/WuDang/CDA_WuDang_Armor_01W.CDA_WuDang_Armor_01W`），Mod 里不带模型、贴图和外观资产。SDK 里没有官方资产，表格的下拉框选不到，就在服饰行 JSON 里直接写这个字段（软引用只存路径，不要求资产在 SDK 里）。要改贴图、改款式时才需要自带模型，按下面做。

### 6.1 要做的资源

1. **骨骼网格**：绑定游戏的人物骨架 `SK_Mannequin`（`/Game/Art/Animations/Characters/Mannequins/Meshes/SK_Mannequin`），男、女体型不同，**男女各做一份**。
   - 游戏用主姿势跟随（Leader Pose）把衣服挂到身体上，按骨骼名对应。**网格的绑定姿势必须和它的顶点一致，骨骼朝向必须是 UE 的约定**：Blender 骨骼沿 Y 轴、UE 沿 X 轴，导出导入时轴向转换没对上，每根骨会被转 90°，进游戏后衣服整体错位、扭曲（袖子、下摆最明显）。从官方模型改出来的衣服，绑定姿势应当和原官方模型逐骨一致。
   - 自查：导入后在骨骼网格编辑器里打开“显示骨骼轴向”，和 `SK_Mannequin` 对比，每根骨的轴向应当重合；进游戏前先在宗门时装里穿上看一眼。
   - 1 级 LOD 能正常显示，但宗门服饰会穿在所有弟子身上，建议做 LOD；没有 Chaos Cloth 资产只是没有布料摆动，不影响显示。
2. **外观资产**（每件衣服男、女各一个）：新建数据资产，类选对应槽位的外观类：

   | 槽位 | 外观类 |
   |---|---|
   | 上衣 `Armor` | `BP_CDA_Apparel_UpperBody` |
   | 裤子 `Pants` | `BP_CDA_Apparel_LowerBody` |
   | 鞋 `Shoes` | `BP_CDA_Apparel_Feet` |
   | 帽子 `Helmet` | `BP_CDA_Apparel_Hat` |

   要填的字段（参照官方 `CDA_Armor_Lv_01_Man`）：
   - `SkeletalMesh`：上一步的骨骼网格；
   - `Anatomies`：适配的体型，男款填 `ERWMaleAdult`、`NPCMale01`~`NPCMale06`，女款填 `ERWFemaleAdult`、`NPCFemale01`~`NPCFemale06`；
   - `HiddenCDA_Classes`：穿上后要隐藏的其他部件，官方上衣填 `BP_CDA_Apparel_Accessory`、`BP_CDA_Apparel_UpperUnderWear`；
   - `Thumbnail`、`DisplayName`：缩略图和名字。
3. **图标**：PNG 导入，贴图组 UI，关 Mip。
4. 打包，把 `Config/` 复制进输出目录，核对 `ModInfo.json` 的 `DataTableConfigs`（同《装备 Mod 制作指南》第 8 节）。
5. 服饰行里把 `ApparelMaleDataAsset` / `ApparelFemaleDataAsset` / `ItemIcon` 改成自己的路径，例如 `/Game/Mods/QingYunZongFu/CDA_QYZ_Armor_M.CDA_QYZ_Armor_M`。

### 6.2 SDK 版本要求

槽位外观类在 SDK 的 `Content/CharacterEditor/Base/Blueprints/DataAssets/` 下：`BP_CDA_Apparel_UpperBody`（上衣）、`_LowerBody`（裤）、`_Feet`（鞋）、`_Hat`（帽子）、`_Hands`、`_Glasses`、`_Accessory`、`_Socks`。**2026-11-17 之前的 SDK 只有基类 `BP_CDA_Apparel` 和内衣两个类，请先更新 SDK。**

- 游戏按外观资产自己的类决定占哪个槽，**一定要用对应槽位的类**新建外观资产，不要直接用基类 `BP_CDA_Apparel`（用基类做的上衣不会顶替原来的上衣）。
- 新建方法：内容浏览器右键 → **杂项 → 数据资产**（Miscellaneous → Data Asset），类选上表中的槽位类。

### 6.3 鞋子高度（厚底鞋、高跟鞋）

鞋子外观资产（`BP_CDA_Apparel_Feet`）的 **Foot Transforms** 分类下有三个字段，游戏按它们调整穿这双鞋的人物姿势，宗门时装界面、捏人和游戏里都一样：

| 字段 | 单位 | 作用 |
|---|---|---|
| `RootOffset` | 厘米 | 人物整体抬高多少，让鞋底落在地面上。**填 0 时游戏自动算**：鞋模型（按它的绑定姿势）最低点比脚底低多少就抬多少。普通鞋、平底的厚底鞋不用填。 |
| `FootRotation` | 度 | 脚掌下压角：正值脚跟抬起、脚尖朝下，以脚踝为支点。只有高跟鞋需要。 |
| `BallRotation` | 度 | 脚趾上翘角：正值脚趾往上折回，在脚掌下压之后以脚趾根为支点，让前脚掌踩平。配合 `FootRotation` 用。 |

高跟鞋的做法：在建模软件里先把人物骨架整体抬高鞋跟的高度，再把脚掌骨 `foot_l/foot_r` 往下压、脚趾骨 `ball_l/ball_r` 往上折，摆成穿这双鞋的姿势，照着这个姿势建鞋、蒙皮并以这个姿势导出（鞋模型的绑定姿势就是踮脚姿势）；然后把抬高的厘米数填进 `RootOffset`，两处转角分别填进 `FootRotation`、`BallRotation`。这种鞋的 `RootOffset` **必须手填**：鞋模型在踮脚姿势下鞋底本来就贴地，自动计算会得到 0。进游戏看鞋底与地面是否贴合，再微调这三个数。

人物坐、躺、骑马时也按同样的值抬高，鞋跟很高时这些姿势会略微悬空。两处转角是相对脚自身转的，这些姿势下脚掌照样保持踮脚的角度。

**这三个字段要 2026-11-17 之后更新的游戏版本才生效，更早的游戏版本里填了也不起作用。**

### 6.4 多层服饰（内衣、袜、外裤叠穿）

> 2026-11 新增，测试中。规则、槽与外观资产类的对应表见开发指南 4.9「多层服饰」。

- 层就是外观资产的类：内裤用 `BP_CDA_Apparel_Underwear`、抹胸用 `BP_CDA_Apparel_UpperUnderWear`、丝袜用 `BP_CDA_Apparel_Socks`、披风用 `BP_CDA_Apparel_Back`，外衣外裤照旧。服饰行的 `ArmorType` 写对应的槽（`Underwear` / `UpperUnderwear` / `Socks` / `Back`），`TemplateID` 填同部位的官方行即可（模板只提供数值）。槽位和模板不同时，男女外观资产不继承模板，只用你写的；只写女款时男弟子在这一层什么都不显示。
- 外观资产的类必须和槽对应，否则换装时脱不下来。启动参数加 `-ModConsole` 后执行 `Mod.CheckApparel <ModId>` 自检。
- 外层盖不盖内层看**外层**外观资产的 `HiddenCDA_Classes`：你自己的裙子不写 `BP_CDA_Apparel_Socks_C` 就能透出丝袜；官方裤子写了 Socks、Underwear，搭官方裤子时这两层不显示。官方上衣都写了 `BP_CDA_Apparel_Accessory_C`，所以披风请用 `Back` 而不是 `Accessory`。
- 模型上外层要比内层整体外扩一点，避免共面闪烁；同一层只能穿一件。
- 宗门时装界面的分层选择会晚于接口提供，在那之前用个人时装接口按层试穿（第 7 节）。

### 6.5 让衣服能染色（「染色·裁剪」）

> 2026-11 新增，**需要 2026-11-20 之后的游戏版本**。更早的版本不认这个配置类型（日志报 `Unknown ConfigType 'CreatorGarmentDye'`），衣服照常能穿，只是不能染色。

捏人和宗门时装的「染色·裁剪」页只认**登记过的网格**，没登记的衣服显示"此衣件暂不支持染色"。官方衣服登记在游戏的染色表里；Mod 的衣服用 `ModInfo.json` 往这张表加行。加完以后：

- 捏人（新游戏主角、个人外观）和宗门时装界面都能给这件衣服换色；
- 宗门时装里给统一服饰染的色，保存后该分堂弟子在游戏里也是这个颜色。

**1. ModInfo.json 的 `DataTableConfigs` 加一项**

```json
{ "ConfigType": "CreatorGarmentDye", "JsonFile": "Config/CreatorGarmentDye.json", "StructName": "/Script/EastRimWorld.CreatorGarmentDyeRow", "bOverrideData": false }
```

**2. `Config/CreatorGarmentDye.json`**：每个网格一行，男女网格不同就各写一行。

```json
{
	"StructName": "/Script/EastRimWorld.CreatorGarmentDyeRow",
	"Rows": {
		"QYZ_Armor_W": {
			"SkeletalMesh": "/Game/Mods/QingYunZongFu/SK_QYZ_Armor_W.SK_QYZ_Armor_W",
			"EquipSlotId": "Top",
			"DisplayName": "青云宗门服",
			"MaterialSlots": [
				{
					"MaterialSlotName": "Cloth_Main",
					"bDyeable": true,
					"Parent": "BuLiao",
					"Mask": "/Game/Mods/QingYunZongFu/T_QYZ_Armor_W_DyeMask.T_QYZ_Armor_W_DyeMask",
					"SlotIdR": "Body", "DisplayNameKeyR": "CE_Dye_Body", "RefLumR": 0.35,
					"SlotIdG": "Trim", "DisplayNameKeyG": "CE_Dye_Trim", "RefLumG": 0.3
				},
				{
					"MaterialSlotName": "Belt",
					"bDyeable": true,
					"Parent": "Build",
					"SlotIdR": "Tie", "DisplayNameKeyR": "CE_Dye_Tie", "RefLumR": 0.25
				}
			]
		}
	}
}
```

| 字段 | 说明 |
|---|---|
| 行名 | 衣件 ID。只能用字母、数字、`_`、`-`，不超过 128 个字符，带上 Mod 前缀。存档里记的就是它，**发布后不要改名**，改了玩家已染的颜色就对不上了。 |
| `SkeletalMesh` | 衣服网格的完整路径。**一个网格只登记一行**；男女用不同网格就各一行。 |
| `EquipSlotId` | 部位：`Top` 上衣、`Bottom` 裤裙、`Feet` 鞋、`Head` 帽子，按衣服实际部位填。 |
| `DisplayName` | 名字。界面优先显示服饰行的 `ItemName`，这里一般用不到。 |
| `MaterialSlots` | 网格上要登记的材质槽，每槽一项；没列出的槽保持原样。 |
| `MaterialSlotName` | 网格的**材质槽名**（骨骼网格编辑器里材质槽的名字，不是材质资产名）。 |
| `bDyeable` | 填 `true`。 |
| `Parent` | 这个槽材质的**母材质族**：`BuLiao`（`M_BuLiao`，棉布）、`Build`（`M_Build`，麻）、`Cloth`（`M_Cloth_Char`，丝），必须和材质实例真正的父材质一致，见下面「材质要求」。 |
| `Mask` | 染色遮罩贴图，见下面「遮罩」。**不填遮罩、只填 R 区时，整个槽是一个可染区**。 |
| `SlotIdR` / `G` / `B` | 遮罩红、绿、蓝三个通道各是一个可染区的 ID，不用的通道不填。同一件衣服里 ID 相同的区共用一个颜色（两个槽的 R 区都叫 `Body`，玩家选一次色两处一起变）。 |
| `DisplayNameKeyR` / `G` / `B` | 可染区在染色页显示的名字，用游戏已有的键：`CE_Dye_Body` 衣身、`CE_Dye_Trim` 缘边、`CE_Dye_Tie` 系带、`CE_Dye_Accent` 点缀、`CE_Dye_Lining` 内衬、`CE_Dye_Ru` 上襦、`CE_Dye_Qun` 下裙、`CE_Dye_Pao` 袍身、`CE_Dye_Ku` 裤身、`CE_Dye_KuBian` 裤边、`CE_Dye_Yuan` 领缘腰封、`CE_Dye_Tao` 绦带袖箍。 |
| `RefLumR` / `G` / `B` | 这个区底色的平均亮度（0~1，官方衣服多在 0.18~0.43）。染色按它换算明暗；染出来整体偏亮或偏暗就调这个数。不填是 0.5。 |
| `DefaultR` / `G` / `B` | 这个区的默认颜色（"重置"回到的颜色），不填是白色。 |
| `bSectLockedR` / `G` / `B` | 填 `true` 时这个区是"门派制式色"，玩家不能改。一般不填。 |
| `DyeMaterial` | 不填。 |

**3. 材质要求**（不满足的槽在染色页能选色，但颜色不会变）

- 槽上必须是**材质实例**，不能直接用材质。
- 材质实例的父材质（隔几层也行）必须是 `Parent` 写的那个官方母材质。`M_BuLiao`、`M_Build` 在 SDK 的 `Content/Art/Meshes/Actor/F_Materials/` 下，用它们新建材质实例、换上自己的贴图即可；`M_Cloth_Char` 目前 SDK 里没有。
  - 原因：染色时游戏把这个槽换成同一族的染色母材质，按**参数名**把你材质实例里的贴图和数值抄过去；父材质不是这几个，参数名对不上，染完贴图会丢。
  - 材质实例里**不要改静态开关**，染色时静态开关回到母材质的默认值。
- 混合模式保持母材质的不透明。半透明（纱）的槽染不了，不要登记。
- 丝袜不参与染色。

**4. 遮罩**

- 和这个槽的底色贴图**用同一套 UV**。红、绿、蓝三个通道各画一个可染区：白 = 染，黑 = 不染，不用的通道全黑。只有一个区时可以不做遮罩（见上表 `Mask`）。
- 导入后压缩设置选 **Masks**，**关掉 sRGB**（和官方遮罩一致）。
- 可染区的底色贴图要保留明暗和纹理，颜色会被替换；底色画成偏中性的浅色，染出来更接近选的颜色。

**5. 自检**：进宗门时装界面穿上这件衣服，点「染色·裁剪」→ 选这件 → 能看到你写的区名 → 选色后衣服变色 → 保存后看该分堂弟子。

- 列表里没有这件、或显示"此衣件暂不支持染色"：查 `SkeletalMesh` 路径，日志里搜 `ApplyModConfigFromJson`。
- 能选色但不变色：按「材质要求」查，日志里搜 `染色母材质`、`原材质不是材质实例`、`混合模式不同`。

停用 Mod 后这件衣服本身就没了，存档里记的染色不起作用，也不会报错。

---

## 7. 个人时装（顺带）

只想给某一个弟子穿，不走宗门时装界面，用 Lua 的个人时装接口 `SetCharacterApparel(角色, 槽位, 服饰 ID)`（开发指南 4.9）。服饰 ID 同样是防具表的行，第 3.3 节做的服饰行可以直接用；个人时装还支持宗门界面没有的槽：饰品 `Accessory`、发簪 `Hairpin`，以及 2026-11 新增的 `Underwear`、`UpperUnderwear`、`Socks`、`Back`（第 6.4 节）。

---

## 8. 限制与注意

1. 宗门时装界面只有上衣、裤子、鞋三页，帽子等槽位进不了宗门时装（可以用个人时装）。
2. 宗门时装清单只能用 Lua 加；`Main.lua` 出错时清单里就没有这几件（界面上看不到），但已经设成统一服饰的照样显示。
3. **别在用着 Mod 服饰的存档里停用 Mod**：已设成统一服饰的分堂，对应槽的外观会变空（宗门统一服饰没有像个人时装那样的保护）。要停用，先在宗门时装界面把这些分堂换回官方服饰再存档。
4. `MaterialColor` 不生效，不能靠它换颜色；要让玩家自己调色按第 6.5 节登记染色。官方外观资产没有材质变体。
5. 宗门时装只改外观，不改属性。
6. 分堂限制表里同一件服饰只写一行。
7. 文字直接写中文只有一种语言；要多语言需要在 SDK 里做字符串表。
8. 游戏更新后，如果官方改了模板行或外观资产的路径，Mod 要跟着改。

---

## 9. 制作检查清单

- [ ] 服饰行写了 `ID`（等于行名、带前缀）和 `TemplateID`，模板槽位与要做的一致，`bOverrideData: true`
- [ ] 男、女外观资产都有（只做一个性别时清楚另一个性别看不到）
- [ ] `Main.lua` 把每件服饰按正确槽位加进了清单
- [ ] 已配解锁：势力等级 / 科技（合并模式）或 Lua 直接解锁
- [ ] （可选）分堂限制每件一行
- [ ] （可选）要能染色：`ModInfo.json` 加了 `CreatorGarmentDye`，男女网格各登记一行，可染槽是 `M_BuLiao` / `M_Build` 的材质实例（第 6.5 节）
- [ ] 进游戏：对应分堂的列表里能看到 → 已解锁可选 → 保存后弟子外观正确 → 其他分堂按限制看不到 →（登记了染色的）「染色·裁剪」里能选色、保存后弟子身上颜色一致

---

## 10. 在 SDK 编辑器里用表格配置（不手写 JSON）

第 3 节的四张表都可以在 SDK 编辑器里建数据表（DataTable）填写，保存时 SDK 自动导出成 JSON。通用步骤、导出规则和填表注意事项见《装备 Mod 制作指南》第 13.1 节，这里只列宗门时装用到的表：

| 配置 | `Mod Config Type` | 建表时选的行结构 | `Override Data` | 填法 |
|---|---|---|---|---|
| 服饰 | `EquipmentConfig` | `ModCharacterApparel` | 勾 | 行名 = `ID`；填 `Template ID`（同槽位的官方时装）、`ID`、`Item Name`、`Item Description`、`Format Item Description` 的 `Text Main`。`Armor Type` 列填了无效，槽位靠模板。换外观时在 `Apparel Male Data Asset` / `Apparel Female Data Asset` 上粘贴路径。 |
| 分堂限制 | `SubClassApparelLimit` | `ModSubClassApparelConfig` | 不勾 | 每件服饰一行：`ID`、`Apparel Id`、`Sub Class Index Arr`。 |
| 解锁项 | `TechUnlockItemConig` | `ModTechUnlockItemConigStruct` | 不勾 | `ID`、`Display Name`、`Format Item Desc`、`Icon`、`Unlock Type` 选 `ForceApparel`、`Unlock Items Ids` 填服饰 ID。 |
| 势力等级 | `ForceLevelInfo` | `ModForceLevelInfo` | 不勾 | 行名填官方行 `Force_Level_1`（或 2~5），只填 `Unlock Content IDs`，其余保持默认（默认值不会改动官方行）。**`Override Data` 千万别勾**，勾了会把官方这一级的解锁内容整个换掉。 |

- **宗门时装清单没有表格可配**，`Main.lua`（第 3.4 节）照样要放进 Mod 目录。
- 四张表都用 SDK 表时，不存在手写 JSON 混用的问题；保存 `DA_ModDataAsset` 后 `ModInfo.json` 的 `DataTableConfigs` 正好是这四项。
- 2026-11-17 按本节做法实测：在 SDK 里用上面四个结构重建了《青云宗门服》的四张表，保存 DA 自动导出，进游戏按第 3.7 节复测，结果与手写 JSON 版一致。
