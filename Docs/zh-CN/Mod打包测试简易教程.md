# Mod打包测试简易教程

与仓库内 **[Mod测试说明.md](./Mod测试说明.md)**、**[Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)** 描述一致；若与游戏发行版实际路径不符，以客户端能加载 Mod 的目录为准。

---

## 打包前

在引擎中打开 **Mod Info Editor**，选择对应的 **Mod 文件夹**（须为 `Content/Mods/<ModName>/` 这一级目录）。

检查 Mod 信息是否填写正确，确认无误后保存。

![](../../assets/Mod打包测试简易教程_r6_c3_01.png)

![](../../assets/Mod打包测试简易教程_r6_c7_02.png)

![](../../assets/Mod打包测试简易教程_r14_c3_03.png)

---

## 打包

在引擎中打开 **Package Mod**，勾选要打包的 Mod，点击打包（若 Mod 含需 Cook 的资产，会先执行 Cook）。

![](../../assets/Mod打包测试简易教程_r36_c4_04.png)

![](../../assets/Mod打包测试简易教程_r36_c7_05.png)

**打包产物位置**：插件会将结果输出到 **Mod 工程根目录**下的 **`Mods/<ModId>/`**（内含 `<ModId>.pak`、`ModInfo.json` 及主 Lua、图标等）。`ModId` 以 `ModInfo.json` 为准；未填写时通常与 `Content/Mods` 下文件夹名一致。详见 [Mod测试说明.md §1](./Mod测试说明.md)。

---

## 打包完成与测试

将 **`Mods/<ModId>/` 整个文件夹**复制到 **游戏安装目录**下的：

**`<游戏安装目录>\EasternEra\EasternEra\Content\Mods\<ModId>\`**

（Steam 默认示例：`<游戏安装目录>\Steam\steamapps\common\EasternEra\EasternEra\Content\Mods\<ModId>\`）

**注意**：须放在 **`Content\Mods`** 下，而不是 `EasternEra\EasternEra\Mods`（无 `Content` 的旧写法易与本文档及 [Mod测试说明.md](./Mod测试说明.md) 不一致）。若游戏目录下还没有 **`Mods`** 文件夹，请在 **`...\EasternEra\EasternEra\Content\`** 下新建 **`Mods`**，再放入你的 `<ModId>` 文件夹。

打开游戏，进入工坊（或游戏内 Mod 管理界面），在本地模组页签启用对应 Mod，即可测试。

![](../../assets/Mod打包测试简易教程_r50_c2_06.png)

![](../../assets/Mod打包测试简易教程_r80_c2_07.png)
