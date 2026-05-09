# ModInfo.json 字段说明

`ModInfo.json` 位于每个 Mod 的**内容根目录**下，与 `UModInfoData`（`Plugins/CreateModPlugin/.../ModInfoEditorData.h`）及编辑器中的 **Mod Info Editor**、**Create New Mod** 对应。游戏与打包流程通过该文件读取 **ModId**、主 Lua、**`UModInformationAsset`** 路径、依赖与附加资源等。

**文件位置**：`Content/Mods/<ModName>/ModInfo.json`（`<ModName>` 为 `Content/Mods` 下的**一级**子文件夹名）。

**说明**：下表中的 **JSON 键名** 与 `CreateModWindow::GenerateModInfoJson`、`SModInfoEditorWindow::SaveModInfoToFile` 的写出逻辑一致；若与手改 JSON 混用，请以实际解析代码为准。

---

## 1. 根级字段总览

| JSON 键 | 类型 | 是否必填/常见 | 说明 |
|---------|------|----------------|------|
| `ModId` | 字符串 | **必填** | Mod 唯一 ID；打包时若 `ModInfo.json` 中提供，会作为 **输出目录名** 等（与 `Content/Mods` 下文件夹名可一致或由你单独指定）。 |
| `ModName` | 字符串 | 常用 | 显示名称。 |
| `Version` | 字符串 | 常用 | Mod 版本号（如 `1.0.0`）。 |
| `Author` | 字符串 | 可选 | 作者。 |
| `Description` | 字符串 | 可选 | 描述（可多行）。 |
| `Icon` | 字符串 | 可选 | 图标路径：保存时一般会规范为 **相对 Mod 根目录** 的文件名或子路径（见编辑器内对图标的拷贝与归一化逻辑）。 |
| `MainLuaFile` | 字符串 | 常用 | 主 Lua 入口，相对 **Mod 根目录**（如 `Main.lua`）。 |
| `ModInformationAssetPath` | 字符串 | **建议必填** | 指向本 Mod 的 **`UModInformationAsset`** 软对象路径，需含资产名与后缀，例如 `/Game/Mods/<ModName>/DA_ModDataAsset.DA_ModDataAsset`。创建向导在留空时会按 `ModFolderPath` 补默认路径。 |
| `NewGameLoad` | 布尔 | 可选 | 是否在新游戏时加载（对应 `UModInfoData::bNewGameLoad`）。 |
| `MinGameVersion` | 字符串 | 可选 | 支持的游戏**最低**版本。 |
| `IncludeGameplayTags` | 布尔 | 可选 | 是否启用随 Mod 分发的 **GameplayTag** ini（引擎 GameplayTag 管理用）。流程与编辑器操作见 [ModGameplayTags标签配置.md](./ModGameplayTags标签配置.md)。 |
| `GameplayTagsIniFile` | 字符串 | 条件 | 当 `IncludeGameplayTags` 为真时，一般为相对 Mod 根目录的 ini 文件名，约定 **`{ModId}GameplayTags.ini`**（见 `UModInfoData::MakeGameplayTagsIniFileName`）。详见 [ModGameplayTags标签配置.md](./ModGameplayTags标签配置.md)。 |
| `PublishedFileId` | 字符串 | 可选 | **Steam 创意工坊**等发布流程写入的文件 ID；编辑器保存时若内存中为空则可能**不写该键**，避免覆盖；勿在插件 UI 中当常规字段编辑。 |
| `AdditionalAssets` | 字符串数组 | 可选 | 额外打进 Pak 的路径列表，**相对项目 `Content` 目录**。除 Mod 目录默认收集的资源外，**附加的 `.lua` 等文件必须在此声明**才会被打包（不会自动扫描某脚本文件夹）。详见 [ModLua脚本说明.md](./ModLua脚本说明.md)。 |
| `Dependencies` | 对象数组 | 可选 | 其它 Mod 依赖，见 §2。 |
| `ModToolVersion` | 字符串 | 打包写入 | **不在**「仅保存 `ModInfo.json`」的常规流程中由 Mod Info 编辑器写入；在 **Package Mod** 成功时，会更新为当前工具版本（`UModToolVersion::GetModToolVersion()`，如 `1.0.0`）。 |

### 未写入 `ModInfo.json` 的编辑器字段

- **`ModFolderPath`**（`UModInfoData` 上为只读）：表示当前编辑的 `Content/Mods/...` 相对路径，仅用于在编辑器中定位与保存，**不序列化**到 `ModInfo.json`。

---

## 2. `Dependencies` 数组元素

每个元素为一个对象，键名与序列化代码一致：

| 键 | 类型 | 说明 |
|----|------|------|
| `ModId` | 字符串 | 所依赖的 Mod 的 ID。 |
| `MinVersion` | 字符串 | 可选；若为空，生成 JSON 时可能**省略**该键。 |
| `Required` | 布尔 | 是否强制依赖（对应 `FModDependencyData::bRequired`）。**注意 JSON 键名为 `Required`，不是 `bRequired`。** |

---

## 3. 与 `UModInformationAsset` 的关系

- `ModInformationAssetPath` 应指向本 Mod 的数据注册表资产 **`UModInformationAsset`**，其中 `DataTables` / `DataAssets` 配置各类 `DataTable` 与扩展数据。  
- 详见 [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md) 与 [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)。

---

## 4. 典型流程差异

| 操作 | 对 `ModInfo.json` 的影响 |
|------|---------------------------|
| **Mod Info Editor** 保存 | 写出 §1、§2 所列字段（`PublishedFileId` 仅在非空时保留）；**不含** `ModToolVersion`。 |
| **Create New Mod** 向导生成 | 生成初始 `ModInfo.json`（含默认 `Main.lua`、`ModInformationAssetPath` 等）。 |
| **Package Mod** 打包成功 | 向输出目录中的 `ModInfo.json` **写入/更新** `ModToolVersion`，并可能刷新 `ModToolVersion` 等元数据拷贝。 |

---

## 5. 相关源码位置（查阅用）

- 数据结构：`Plugins/CreateModPlugin/Source/CreateModPluginEditor/Public/ModInfoEditorData.h`（`UModInfoData`、`FModDependencyData`）  
- 生成/保存 JSON：`CreateModWindow.cpp`（`GenerateModInfoJson`）、`ModInfoEditorWindow.cpp`（`SaveModInfoToFile`、`LoadModInfoFromFile`）  
- 打包时更新版本：`PackageModWindow.cpp`（`ModToolVersion`）  
- 工具版本号：`Plugins/CreateModPlugin/Source/CreateModPlugin/Public/ModToolVersion.h`  

---

## 6. 相关文档

- [Mod文档索引.md](./Mod文档索引.md)  
- [ModLua脚本说明.md](./ModLua脚本说明.md)（`MainLuaFile`、UnLua 蓝图绑定、`AdditionalAssets`）  
- [ModGameplayTags标签配置.md](./ModGameplayTags标签配置.md)（`IncludeGameplayTags`、ini、管理器 Source）  
- [Mod工程与目录说明.md](./Mod工程与目录说明.md)  
- [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)  
- [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)
