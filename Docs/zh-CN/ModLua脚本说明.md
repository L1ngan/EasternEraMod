# Mod Lua 脚本说明

本文说明 **宗门起源** Mod 中 **Lua** 的入口约定、与 `ModInfo.json` 的关系、通过 **UnLua** 与**蓝图**的绑定方式、打包行为，以及模板里使用的 **`UE` 表 API**。具体 **C++ 侧函数库** 以游戏主机工程为准；本 Mod 工程仓库内含 **UnLua**、**Create Mod 插件** 等，可按源码对照。

---

## 1. 与 ModInfo、文件位置

| 项目 | 说明 |
|------|------|
| **主入口** | 由 `ModInfo.json` 的 **`MainLuaFile`** 指定，相对 **Mod 根目录**（`Content/Mods/<ModName>/`），通常为 **`Main.lua`**。 |
| **物理路径** | `Content/Mods/<ModName>/<MainLuaFile>`，例如 `Content/Mods/CheatingBuildings/Main.lua`。 |
| **运行时注入** | 游戏加载 Mod 后会把脚本模块交给 Lua 虚拟机执行；脚本需 **`return`** 一个 **表（table）**，作为 Mod 模块对象（见 §2）。 |

更完整的 `ModInfo.json` 字段说明见 [ModInfo字段说明.md](./ModInfo字段说明.md)。

---

## 2. 创建向导生成的模板（约定）

使用编辑器 **Create New Mod** 时，插件会在 Mod 目录下生成 **`Main.lua`**，逻辑来自 `CreateModWindow::GenerateMainLuaFile`（`Plugins/CreateModPlugin/.../CreateModWindow.cpp`）。约定如下：

1. **模块表**：`local Mod = {}`，最后 **`return Mod`**。  
2. **生命周期**（由游戏在适当时机调用，名称需保持一致）：  
   - **`Mod:OnModLoaded()`** — Mod 加载完毕。  
   - **`Mod:OnModUnloaded()`** — Mod 卸载。  
3. **日志封装**：模板使用 **`UE.UModLuaLibrary.ModLog(ModId, Message, LogLevel)`**，并封装 `Debug` / `Warn` / `Error`（内部仍走 `ModLog`，`LogLevel` 分别为 `"Debug"`、`"Warning"`、`"Error"`；默认级别为 `"Log"`）。  
4. **元数据**：模板通过 **`self.ModInfo.Metadata`** 读取展示信息，例如：  
   - **`self.ModInfo.Metadata.ModId`**  
   - **`self.ModInfo.Metadata.ModName`**  

游戏侧会将 **`ModInfo.json`** 解析结果注入到 **`ModInfo`**（具体字段以运行时为准）；若访问其它字段，请参照主机工程或调试打印 `self.ModInfo`。

---

## 3. UnLua 与 `UE` 表

本工程集成 **UnLua**（`Plugins/UnLua`）。在 Lua 中可通过全局 **`UE`** 表调用 **已导出到 Lua** 的 `UCLASS`、`UFUNCTION` 等。模板中的：

```lua
UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, LogLevel)
```

表示调用 **`UModLuaLibrary`** 上的 **`ModLog`**。**`UModLuaLibrary` 定义在游戏主机模块中**，本 Mod 制作仓库可能不包含其 C++ 源码；若在编辑器中报错找不到该类，需使用与发行版一致的游戏工程进行测试。

除 `ModLog` 外，还可按需调用其它已导出的游戏/引擎 API（遵守 UnLua 的导出规则）。

---

## 4. 蓝图与 Lua 绑定（UnLua）

本节说明如何把 **单个蓝图类** 绑定到 **`Content/Script` 下的 Lua 模块**，与 §1～§2 的 **Mod `Main.lua`** 是两条独立管线：前者由游戏 **Mod 系统**加载；后者由 **UnLua** 在蓝图实例需要时 `require` 并挂接。

### 4.1 概念

| 管线 | 作用 |
|------|------|
| **Mod `MainLuaFile`** | Mod 级入口（`Content/Mods/...`），如 `OnModLoaded`。 |
| **蓝图 + UnLua** | 某个 **蓝图生成的类** 实现 **`UnLuaInterface`**，通过 **`GetModuleName`** 指向 **`Content/Script` 下的模块路径**；运行时对该类对象做 **Bind**，Lua 模块 **`return` 的 table** 中 **与蓝图同名** 的函数可 **覆写** 对应蓝图事件/函数（机制见 `Plugins/UnLua/.../UnLuaManager.cpp`）。 |

### 4.2 在蓝图编辑器中绑定

1. 打开目标 **蓝图**（常见如 `Actor`、`UserWidget`、`AnimInstance` 等，具体以 UnLua 支持为准）。  
2. 在蓝图编辑器工具栏中找到 **UnLua** 下拉按钮（由 `UnLuaEditor` 在 **Debugging** 工具栏区段后注入）。  
3. 选择 **Bind**（未绑定时显示）：  
   - 为蓝图 **添加接口 `UnLuaInterface`**，并出现 **`GetModuleName`** 的实现；默认返回值由 **项目设置 → Plugins → UnLua** 中的 **`LuaModuleLocator`**（`ULuaModuleLocator` / `ULuaModuleLocator_ByPackage` 等）根据类或包路径自动填入。  
   - **按住 Alt 再点 Bind**：按资源包路径推导模块名（与默认 Locator 规则不同，见 `UnLuaEditorToolbar::BindToLua_Executed`）。  
4. 绑定后可用 **Create Lua Template**：按当前 **`GetModuleName`** 在 **`Content/Script/`** 下生成对应 **`.lua`**（将模块名中的 **`.` 换成目录 `/`**）。  
5. **Copy as Relative Path** / **Reveal in Explorer**：核对模块名与磁盘路径是否一致。  
6. 需要移除绑定：**Unbind**。

若 **`ModuleLocator` 未在项目设置中有效配置**，运行时可能无法解析模块，日志中会出现 *Invalid lua module locator* 类提示（见 `LuaEnv.cpp`）。

### 4.3 `GetModuleName` 与磁盘路径

`IUnLuaInterface::GetModuleName` 的注释约定：返回 **相对 `Content/Script` 的模块名**，使用 **点号** 分层，例如：

`Weapon.BP_DefaultProjectile_C`

对应磁盘文件（与 **Create Lua Template** 一致）：

`Content/Script/Weapon/BP_DefaultProjectile_C.lua`

运行时通过 **`require`**（或 UnLua 内部的等价加载）解析该模块；模块必须 **`return` 一个 table**。

### 4.4 Lua 模块内常用约定

1. **`Initialize`**：若存在，在 **Bind** 成功后会尝试调用（可用于初始化逻辑；部分动态绑定场景还可传入初始化表）。  
2. **与蓝图同名函数**：在 Lua table 中声明与蓝图上 **可覆写且同名** 的函数，由 UnLua 挂接到 `UFunction`，实现逻辑下沉到 Lua。  
3. **调用引擎 API**：仍使用全局 **`UE`** 表；输入相关可结合 `Plugins/UnLua/Content/Script/UnLua/Input.lua`、`EnhancedInput.lua` 等。  
4. 详细行为与限制以 **UnLua 官方文档 / 本工程 UnLua 版本** 为准。

### 4.5 与 Mod 打包的关系

蓝图绑定依赖的 **`.lua` 必须随 Cook/Pak 到达玩家端**。若脚本只在 **`Content/Script/...`** 且属于 Mod 内容，通常需在 **`ModInfo.json` 的 `AdditionalAssets`** 中填写 **相对 `Content` 的路径**（见 **§5**），否则可能未进入 Pak。  

**Mod `Main.lua`** 不会自动替代蓝图的 UnLua 模块；二者可同时存在，分别服务于 Mod 生命周期与具体蓝图类。

---

## 5. 附加 Lua：须在 ModInfo「额外资产」中声明才会打包

除 **`Main.lua`**（由 **`MainLuaFile`** 指定，位于 **`Content/Mods/<ModName>/`**，随 Mod 目录参与打包）以外，凡需要一并发布的 **其它 Lua 或非 uasset 文件**，必须在 **`ModInfo.json`** 的 **`AdditionalAssets`**（编辑器：**额外打包的资产列表** / `UModInfoData::AdditionalAssets`）中 **逐条配置**，打包流程才会将其列入 Pak。

| 项目 | 说明 |
|------|------|
| **路径写法** | 数组中每一项为 **相对项目 `Content` 目录** 的路径（正斜杠），例如 `Script/MyModId/Helper.lua` 对应磁盘上的 `Content/Script/MyModId/Helper.lua`。详见 [ModInfo字段说明.md](./ModInfo字段说明.md) 中的 **`AdditionalAssets`**。 |
| **目录惯例** | 可将附加脚本放在 `Content/Script/<ModId>/` 等任意约定位置，**仅配置进 `AdditionalAssets` 的文件才会被打包**。 |
| **主入口** | **`MainLuaFile`** 指向的文件通常 **无需** 再写入 `AdditionalAssets`（由 Mod 目录与非资产收集逻辑单独处理）；若同一脚本还以副本形式放在 `Content` 其它路径且需要进 Pak，再按需添加条目。 |

运行时如何从挂载路径加载这些脚本，由游戏主机代码约定。

---

## 6. 打包与分发输出

- 打包成功后，**`Main.lua`**（及 `ModInfo.json` 等）会复制到 **项目根目录 `Mods/<ModId>/`**，与 [Mod测试说明.md](./Mod测试说明.md) 一致。  
- 确保 **`MainLuaFile`** 与实际文件名一致；路径尽量使用 **相对 Mod 根目录** 的正斜杠形式（与编辑器保存归一化逻辑一致）。

---

## 7. 示例参考（本仓库）

可从现有 Mod 拷贝修改：

- `Content/Mods/CheatingBuildings/Main.lua`  
- `Content/Mods/ParagonSunWukong/Main.lua`  

结构均为：`Mod` 表 + `OnModLoaded` / `OnModUnloaded` + `return Mod`。

---

## 8. 相关文档与源码

| 说明 | 路径 |
|------|------|
| `ModInfo.json` 字段 | [ModInfo字段说明.md](./ModInfo字段说明.md) |
| 打包、Cook、输出目录 | [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)、[Mod测试说明.md](./Mod测试说明.md) |
| 生成 `Main.lua` 模板 | `Plugins/CreateModPlugin/Source/CreateModPluginEditor/Private/CreateModWindow.cpp` → `GenerateMainLuaFile` |
| `AdditionalAssets` 与打包 | `ModInfo.json` / `UModInfoData`；打包实现见 `Plugins/CreateModPlugin/.../PackageModWindow.cpp` |
| UnLua 蓝图绑定 | `Plugins/UnLua/Source/UnLua/Public/UnLuaInterface.h`（`GetModuleName`）；`Plugins/UnLua/Source/UnLuaEditor/Private/Toolbars/UnLuaEditorToolbar.cpp`（Bind / 模板） |
| 模块名解析 | `Plugins/UnLua/Source/UnLua/Private/LuaModuleLocator.cpp`、`UUnLuaSettings`（`ModuleLocatorClass`） |
| Create Mod 插件总览 | [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md) |

---

*若游戏更新 Mod 管线或 `UModLuaLibrary` API，以主机版本与发行说明为准。*
