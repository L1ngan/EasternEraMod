# Mod 测试说明

本文说明 **打包完成后产物在哪里**，以及 **如何复制到游戏安装目录做本地测试**。

**打包与 Cook 流程**见 [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)。

---

## 1. 打包输出位置（本工程）

插件将每个 Mod 导出到 **项目根目录**下的 **`Mods`** 文件夹中，并以 **`ModId`** 作为子目录名（与 `PackageModWindow.cpp` 中 `ProjectDir/Mods/{ModId}` 一致）。

- **根路径**：`<EasternEraMod 项目根目录>/Mods/`
- **单个 Mod 目录**：`<项目根目录>/Mods/<ModId>/`

**`ModId` 如何确定**

- 若 Mod 的 `Content/Mods/<ModName>/ModInfo.json` 中填写了 **`ModId`** 字段，则使用该校验名作为文件夹名与主 Pak 文件名。  
- 若未配置，则默认使用 **`Content/Mods` 下该 Mod 的文件夹名**（即与 `<ModName>` 一致）。

**该目录内通常包含**（视 Mod 配置而定）

- `<ModId>.pak`：主资源包。  
- `ModInfo.json`：打包后会写入/更新（含工具版本等）。  
- 若 `ModInfo.json` 中配置了入口脚本、图标、GameplayTags 等，还可能包含对应的 **Lua、图标、`.ini`** 等一并拷贝出的文件。

测试时请 **整份拷贝 `<ModId>` 文件夹**，避免漏掉 Pak 以外的附属文件。

---

## 2. 拷贝到游戏目录进行测试

将上一步得到的 **整个 `<ModId>` 文件夹**复制到 **游戏安装目录**下的 Mod 挂载路径：

`<游戏安装目录>\EasternEra\EasternEra\Content\Mods\<ModId>\`

即：在游戏侧的 **`Content\Mods`** 下，与导出结构一致，仍为 **`Mods\<ModId>\` 内若干文件**。

**若游戏目录中不存在 `Mods` 文件夹**：请在  

`<游戏安装目录>\EasternEra\EasternEra\Content\`  

下 **手动新建文件夹 `Mods`**，再放入你的 `<ModId>` 文件夹（或直接粘贴整个 Mod 子目录）。

示例（路径仅供示意）：

```text
游戏安装目录\
  EasternEra\
    EasternEra\
      Content\
        Mods\
          YourModId\          ← 从工程 Mods\YourModId 整夹复制过来
            YourModId.pak
            ModInfo.json
            （其它导出文件…）
```

---

## 3. 测试时注意点

1. **路径层级**：须与上表一致（双层 `EasternEra`、再到 `Content\Mods`）；若你的发行版目录结构不同，以实际能加载 Mod 的路径为准。  
2. **版本匹配**：测试客户端应与 Mod 开发所用的引擎/资产版本兼容；Cook 目标与游戏构建不一致可能导致加载失败。  
3. **多 Mod**：每个 Mod 独占一个 `<ModId>` 子文件夹，不要合并到同一目录名内。  
4. **启用 Mod**：若游戏内有 Mod 列表、加载顺序或开关，需在游戏侧按官方说明启用对应 Mod。

---

## 4. 相关文档

- [Mod文档索引.md](./Mod文档索引.md)  
- [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)  
- [Mod工程与目录说明.md](./Mod工程与目录说明.md)
