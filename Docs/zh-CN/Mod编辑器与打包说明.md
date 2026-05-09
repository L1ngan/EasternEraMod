# Mod 编辑器与打包说明

---

## 1. 插件提供的编辑器能力

插件 **`CreateModPlugin`** 在编辑器中通常提供（具体菜单位置以你安装的引擎与插件为准）：

- **创建 Mod**：在 `Content/Mods/<ModName>/` 下生成合规目录，并创建 **`UModInformationAsset`**，用于登记 DataTable / DataAsset。  
- **打包 Mod**：选择一个或多个已注册的 Mod，必要时触发 **Cook**，再调用 **UnrealPak**（或等价流程）生成 **`.pak`**。

实现代码可参考：`Plugins/CreateModPlugin/Source/CreateModPluginEditor/`（如 `ModInfoEditorWindow.cpp`、`PackageModWindow.cpp`、`CreateModWindow.cpp`）。

---

## 2. 创建 Mod 时要注意什么

1. **Mod 路径**必须是 `Content/Mods/` 下的 **一层子文件夹**（见 [Mod工程与目录说明.md](./Mod工程与目录说明.md) §2.2）。  
2. 创建完成后，在 **`UModInformationAsset`** 里把你做好的 **DataTable**、**DataAsset** 按类型挂到 `FModConfig` / `FModAsset` 列表中。  
3. 人类示例数据、插件自带 CSV 等说明见 **`Plugins/CreateModPlugin/README.md`**。
4. MODID必须唯一，不能与其他MODID相同，MODID不会直接显示，用于开启关闭的唯一索引

---

## 3. Cook 何时需要

- Mod 目录中存在需要 **Cook** 才能进 Pak 的 **uasset**（及依赖）时，打包流程会先进行 Cook（或全项目 Cook，取决于插件当前实现）。  
- Cook可直接使用引擎中的烘焙内容选项，然后再打包MOD
- 若仅有少量 **非资产文件**（如 `.ini`、`.lua`），插件可能走不 Cook 的分支；以实际打包日志为准。

Cook 输出目录常见形式包括（随引擎版本可能变化）：

- `Saved/Cooked/Windows/<ProjectName>/Content/Mods/<ModName>/`  
- 或 `WindowsNoEditor` 等平台子目录。

插件会按存在性回退查找 Cook 结果（参见 `PackageModWindow.cpp` 中的路径探测逻辑）。

---

## 4. 打包产物与 Pak

- 当前插件实现将每个 Mod 导出到 **项目根目录**下的 **`Mods/<ModId>/`**（`ModId` 来自 `ModInfo.json` 或默认与 `Content/Mods` 下文件夹名一致），其中包含 **`<ModId>.pak`** 以及可能同步拷贝的 `ModInfo.json`、入口 Lua、图标、GameplayTags 的 `.ini` 等。  
- Pak 内文件挂载路径需与游戏 Mount 规则一致，插件内会使用形如 `../../../<ProjectName>/Content/Mods/<ModName>/...` 的挂载前缀。

**把导出结果放进游戏做本地测试**（目标路径、整夹拷贝、`Content\Mods` 不存在时如何新建）见专门文档：[Mod测试说明.md](./Mod测试说明.md)。

安装到游戏后，需在客户端启用对应 Mod（若游戏有 Mod 列表或加载顺序配置，遵循官方说明）。

---

## 5. 故障排查提示

| 现象 | 可能原因 |
|------|----------|
| 提示 Mod 路径无效 | 未使用 `Content/Mods/<ModName>` 一层子目录结构 |
| Cook 失败 | 资产错误、引用缺失、引擎/平台 Cook 配置问题；查看 Output Log |
| Pak 生成成功但游戏内无效果 | Mount 路径、ModId、游戏是否扫描该 Pak、Mod 信息资产是否登记完整 |

---

## 6. 相关文档

- [Mod文档索引.md](./Mod文档索引.md)  
- [Mod工程与目录说明.md](./Mod工程与目录说明.md)  
- [ModInfo字段说明.md](./ModInfo字段说明.md)（`ModInfo.json` 与 `ModToolVersion`）  
- [ModGameplayTags标签配置.md](./ModGameplayTags标签配置.md)（Tag ini 与打包）  
- [ModLua脚本说明.md](./ModLua脚本说明.md)（`Main.lua`、蓝图 UnLua 绑定、`AdditionalAssets`）  
- [Mod测试说明.md](./Mod测试说明.md)  
- [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)
