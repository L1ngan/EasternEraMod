# Create Mod Plugin

面向 **宗门起源（EastRimWorld）** Mod 制作的虚幻插件：在 Runtime 侧提供 **Mod 用 DataTable / DataAsset 结构体与 `UModInformationAsset`**；在 Editor 侧提供 **创建 Mod、编辑 Mod 元数据（`ModInfo.json`）、Cook 与打 Pak** 等工具。

---

## 引擎与平台

| 项目 | 说明 |
|------|------|
| 声明引擎版本 | `EngineVersion` **5.6**（见 `CreateModPlugin.uplugin`） |
| Runtime 模块 `CreateModPlugin` | 当前 **仅列入 Win64** 平台（`PlatformAllowList`），其余平台需在 `.uplugin` / `Build.cs` 中自行扩展后再编译 |
| Editor 模块 `CreateModPluginEditor` | 随编辑器加载，提供 Slate 窗口与菜单 |

插件依赖 **`SmartObjects`**（`.uplugin` 中已启用）。Runtime 模块还通过 `CreateModPlugin.Build.cs` 链接 **`GASFramework`**、`GameplayTags`、`GameplayAbilities`、`CommonUI` 等（与主机游戏工程配套）。

---

## 模块划分

| 模块 | 类型 | 职责 |
|------|------|------|
| **CreateModPlugin** | Runtime（Win64） | `UModInformationAsset`、`EModConfigType`、`FModHumanData` 等各配置结构体；保存前刷新结构名等编辑器钩子 |
| **CreateModPluginEditor** | Editor | 工具栏/菜单命令、`UModInfoData`（面向 `ModInfo.json`）、创建向导、`SPackageModWindow` 打包 |

源码路径：`Source/CreateModPlugin/`、`Source/CreateModPluginEditor/`。

---

## 编辑器入口

加载工程后，在 **关卡编辑器主工具栏** 的 **User** 区段会出现 **「Mod」** 下拉按钮（与主菜单 **工具 → Modding** 中部分命令一致）：

1. **Mod Info Editor** — 选择或维护 `Content/Mods/<ModName>/`，编辑并 **保存/加载 `ModInfo.json`**。  
2. **Create New Mod** — 在 `Content/Mods` 下 **一层子目录** 中生成 Mod 目录、`ModInfo.json`、**`UModInformationAsset`** 等初始资产。  
3. **Package Mod** — 列出可打包 Mod、可选 **Cook**，调用 **UnrealPak** 生成 **`<ModId>.pak`**，并将 `ModInfo.json`、主 Lua、图标、GameplayTags ini 等同步到 **项目根目录 `Mods/<ModId>/`**（详见工程根目录文档）。

打包过程中 **Package Mod** 窗口可能禁止关闭，直至当前任务结束（见 `CreateModPluginEditor.cpp` 中 `SetRequestDestroyWindowOverride`）。

---

## 核心资产与数据流

### `UModInformationAsset`（Runtime）

继承 `UDataAsset`，是 Mod 的**注册表**：

- **`DataTables`**：`TArray<FModConfig>`。每一项包含 `EModConfigType`、`TSoftObjectPtr<UDataTable>`、**`bOverrideData`**（Map/Array 等是否覆盖原表，其它类型为默认值的字段可视为不覆盖）。  
- **`DataAssets`**：`TArray<FModAsset>`，类型为 `EModDataAssetType`（如 `NewGameConfiguration`）等。  

保存时 `PreSave` 会维护行结构名等元数据（见 `BaseDataStruct.cpp`）。

在 **Create New Mod** 向导中，会在 Mod 内容目录下创建该资产，并在 **`ModInfo.json`** 的 **`ModInformationAssetPath`** 中记录软对象路径，供游戏与打包流程解析。

### `ModInfo.json` 与 `UModInfoData`（仅 Editor 模块）

`UModInfoData` 定义于 `ModInfoEditorData.h`，用于 **Mod Info Editor / Create Mod** 窗体，序列化为 Mod 根目录下的 **`ModInfo.json`**。主要字段包括：

| 字段 | 含义 |
|------|------|
| `ModId` | Mod 唯一 ID；打包时用于输出目录名等（未在 JSON 配置时可能与文件夹名一致） |
| `ModName` / `Version` / `Author` / `Description` | 展示与版本信息 |
| `Icon` | 图标路径 |
| `MainLuaFile` | 主脚本（如 `Main.lua`） |
| `ModInformationAssetPath` | 指向本 Mod 的 **`UModInformationAsset`** |
| `Dependencies` | `FModDependencyData` 数组：`ModId`、`MinVersion`、`bRequired` |
| `bNewGameLoad` | 是否在新游戏时加载 |
| `MinGameVersion` | 依赖的最低游戏版本 |
| `bIncludeGameplayTags` / `GameplayTagsIniFile` | 是否附带 GameplayTag ini；默认文件名规则见 `UModInfoData::MakeGameplayTagsIniFileName`（`{ModId}GameplayTags.ini`） |
| `AdditionalAssets` | 额外打入 Pak 的、**相对 `Content` 目录** 的资产路径 |
| `PublishedFileId` | 由 **Steam/上传流程** 写入，编辑器内通常隐藏、不手改 |

打包成功后，工具会将 **`ModToolVersion`** 写回输出目录中的 **`ModInfo.json`**（见 `UModToolVersion::GetModToolVersion()`，当前为 **1.0.0**）。

### `EModConfigType` 与行结构体

配置类型在 `BaseDataStruct.h` 的 `EModConfigType` 中枚举；**行结构**需与游戏侧表结构一致，并对应到本插件中各 `*DataStruct.h`（在 `Source/CreateModPlugin/Public/`）。下表为常见对应关系（**以头文件与游戏实际表为准**）：

| EModConfigType（节选） | 说明 | 结构体头文件（参考） |
|------------------------|------|----------------------|
| `CharacterConfig` | 角色配置 | `CharacterDataStruct.h`（`FModHumanData` 等） |
| `BuildConfig` | 建筑/设施 | `BuildDataStruct.h` |
| `AnimalConfig` | 动物/怪物 | `CharacterDataStruct.h`（`FModAnimalData` 等） |
| `InventoryItem` / `WeaponConfig` / `EquipmentConfig` / … | 物品、装备、科技等 | `ItemDataStruct.h`、`EquipmentDataStruct.h`、`TechnologyDataStruct.h` 等 |

完整枚举见 **`BaseDataStruct.h`**。`FModDataBase` 为表行基类，含 **`TemplateID`**、**`ID`**（行名需与 `ID` 一致）等。

---

## Runtime 公共头文件（`CreateModPlugin/Public/`）

| 头文件 | 内容侧重 |
|--------|----------|
| `BaseDataStruct.h` | `EModConfigType`、`UModInformationAsset`、`FModConfig`、`FModDataBase` 等 |
| `CharacterDataStruct.h` | `FModHumanData`、`FModAnimalData` 等 |
| `BuildDataStruct.h` | `FModBuildData` 等 |
| `ItemDataStruct.h` / `EquipmentDataStruct.h` / `BuffDataStruct.h` | 物品、装备、Buff |
| `TechnologyDataStruct.h` / `WorldDataStruct.h` / `CommonUIStruct.h` 等 | 科技、世界、UI |
| `ModNewGameStruct.h` / `GenerationMonster.h` 等 | 新游戏、刷怪等扩展 |
| `ModToolVersion.h` | 打包工具版本号 |

C++ 使用示例（以人类行为例）：

```cpp
#include "CharacterDataStruct.h"

FModHumanData Row;
Row.Height = 180;
Row.Weight = 120;
// …
```

DataTable 在编辑器中创建时，**行结构** 选上表对应 struct，**不是** 已不存在的 `ModDataStruct.h`。

---

## 与工程说明文档的关系

本仓库根目录另有 **Mod 工程、模型骨骼、数据表字段、打包与测试** 等说明，建议搭配阅读（相对本文件路径为 `../../`）：

- [Mod文档索引.md](../../Mod文档索引.md)  
- [Mod编辑器与打包说明.md](../../Mod编辑器与打包说明.md)  
- [Mod测试说明.md](../../Mod测试说明.md)  

---

## 注意事项

- **Mod 根目录** 必须是 **`Content/Mods/<ModName>`** 的**直接子文件夹**；嵌套多层的子目录不能作为 Mod 根，否则创建/打包校验会失败。  
- **打包** 需要本机可访问 **UnrealPak** 及（若需）**Cook** 所依赖的引擎/项目环境；具体逻辑见 `PackageModWindow.cpp`。  
- Runtime 对 **GAS / GameplayTags / SmartObjects** 等的依赖来自主机工程；单独拆出插件时需同步处理 `Build.cs` 与模块依赖。  

如有行为与本文不符，以 **`CreateModPlugin.uplugin`**、**`*.Build.cs`** 及当前源码为准。
