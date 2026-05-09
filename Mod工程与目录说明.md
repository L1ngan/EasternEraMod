# Mod 工程与目录说明

---

## 1. 工程定位

| 项目 | 说明 |
|------|------|
| 引擎版本 | Unreal Engine **5.6**（见仓库根目录 `EasternEra.uproject`） |
| 游戏运行时模块 | `EastRimWorld` |
| Mod 支持 | 插件 **`CreateModPlugin`**（`Plugins/CreateModPlugin/`）：提供 Mod 用数据结构、`UModInformationAsset`、编辑器内创建/打包流程 |

本仓库是面向作者开放的 **Mod 制作工程**：在编辑器中制作资产与数据表，再通过插件将指定 Mod 目录 **Cook** 并封装为 **`.pak`**，供正式游戏加载（具体打包步骤见 [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)）。

---

## 2. Mod 内容目录规范

### 2.1 根路径与命名

- **Mod 内容根路径**：`Content/Mods/<ModName>/`  
- `<ModName>`：你的 Mod 文件夹名，同时常作为 Pak 标识的一部分使用。

### 2.2 为何必须是 `Mods` 的「直接子文件夹」

插件中的「创建 Mod」「选择 Mod 路径」「打包」等逻辑会校验：

- 路径必须位于 `Content/Mods/` 下；  
- **不能**把 `Content/Mods` 本身当成 Mod；  
- **不能**使用 `Content/Mods/MyMod/SubFolder` 这种「再嵌一层」作为 Mod 根——插件要求 **一层子目录** 对应一个 Mod，以便 Cook 输出与 Pak 挂载路径一致。

若路径不符合规则，向导或打包界面会提示无效路径；详见编辑器校验逻辑（如 `ModInfoEditorWindow.cpp`、`PackageModWindow.cpp` 中的路径检查）。

### 2.3 Mod 信息资产 `UModInformationAsset`

每个 Mod 通常对应一个 **`UModInformationAsset`**（由插件向导生成），用于声明：

- **`DataTables`**（`FModConfig` 数组）：每项包含 `ModConfigType`（对应 `EModConfigType`）、指向的 `UDataTable`、是否覆盖合并等；  
- **`DataAssets`**（可选）：其它 `UDataAsset` 类配置。

游戏加载 Mod 时依赖这些信息把表格与资产注册进管线。**表格行的结构体类型**必须与 `EModConfigType` 匹配（例如动物配置对应动物结构体），否则运行时会错位或无法读取。

### 2.4 Cook 与挂载路径（概念）

Cook 成功后，产物会落在 `Saved/Cooked/<平台>/...` 下（具体子路径随引擎与项目配置可能略有差异）。打包生成 Pak 时，会把 Cook 后的文件映射到游戏期望的挂载前缀，形如：

`../../../<ProjectName>/Content/Mods/<ModName>/...`

这样运行时能通过虚拟路径找到 Mod 里的 `.uasset` 等资源。**ProjectName** 以实际 `uproject` / 目标游戏工程名为准。

---

## 3. 开发时参考路径（源码与插件）

| 用途 | 路径 |
|------|------|
| Mod 数据结构（动物、人类、建筑等） | `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/`（如 `CharacterDataStruct.h`、`BuildDataStruct.h`、`BaseDataStruct.h`） |
| 配置类型枚举 `EModConfigType` | `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/BaseDataStruct.h` |
| 编辑器：创建 Mod、路径校验、打包 Cook | `Plugins/CreateModPlugin/Source/CreateModPluginEditor/` |
| 插件简短说明与 CSV 示例 | `Plugins/CreateModPlugin/README.md` |

---

## 4. 相关文档

仓库 **README** 中提供与本索引一致的文档表格链接。

- [Mod文档索引.md](./Mod文档索引.md)  
- [ModInfo字段说明.md](./ModInfo字段说明.md)（`ModInfo.json` 各字段）  
- [ModGameplayTags标签配置.md](./ModGameplayTags标签配置.md)（GameplayTag ini）  
- [ModLua脚本说明.md](./ModLua脚本说明.md)（`Main.lua`、UnLua 蓝图绑定、`AdditionalAssets`）  
- [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)  
- [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md)  
- [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)  
- [Mod测试说明.md](./Mod测试说明.md)（打包产物目录与拷贝到游戏 `Content\Mods` 做本地测试）

---
