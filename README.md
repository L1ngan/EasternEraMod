# EasternEraMod

宗门起源 mod 制作项目

## EasternEra_Mod 教程

- [基础配置](基础配置.md)
- [角色配置](角色配置.md)
- [动物or怪物配置](动物or怪物配置.md)
- [Mod打包测试简易教程](Mod打包测试简易教程.md)

## Mod 文档索引


| 文档 | 内容范围 |
|------|----------|
| [Mod工程与目录说明.md](./Mod工程与目录说明.md) | 引擎与工程简介、`Content/Mods` 目录规则、`UModInformationAsset` 与配置挂载概念、开发时源码/资产引用路径 |
| [ModInfo字段说明.md](./ModInfo字段说明.md) | `ModInfo.json` / `UModInfoData` 字段、依赖、与打包写入的 `ModToolVersion` |
| [ModLua脚本说明.md](./ModLua脚本说明.md) | `Main.lua`、`UnLua` 绑定蓝图（`GetModuleName` / `Content/Script`）、`UModLuaLibrary.ModLog`、**`AdditionalAssets`** |
| [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md) | FBX 导入、`USkeleton` 与网格关系、**主角必须用 Mannequin 骨架**、动物/怪物独立骨架、重定向与自检、模型类常见问题 |
| [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md) | `FModAnimalData`、`FModBuildData`、`FModHumanData` 等与网格、动画相关的字段含义；与骨架资源的对应关系；填表时注意点 |
| [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md) | Create Mod Plugin：创建 Mod、Cook、打 Pak、输出位置；与 `Plugins/CreateModPlugin/README.md` 的配合 |
| [Mod测试说明.md](./Mod测试说明.md) | 打包导出到 `Mods/<ModId>/`、拷贝到游戏安装目录 `Content\Mods`、目录不存在时新建 |

### 建议阅读顺序

1. 不熟悉工程：先看 [Mod工程与目录说明.md](./Mod工程与目录说明.md)。  
2. 要编辑 `ModInfo.json`：看 [ModInfo字段说明.md](./ModInfo字段说明.md)。  
3. 要编写 Mod **Lua**：看 [ModLua脚本说明.md](./ModLua脚本说明.md)。  
4. 要做角色/怪物模型：看 [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)。  
5. 要在表里填网格与动画路径：看 [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md)，并对照结构体头文件。  
6. 要产出可安装的 Pak：看 [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)。  
7. 要在安装版游戏里验证 Mod：看 [Mod测试说明.md](./Mod测试说明.md)。

### 相关文档

- [Mod文档索引.md](./Mod文档索引.md)  
- [ModInfo字段说明.md](./ModInfo字段说明.md)  
- [ModLua脚本说明.md](./ModLua脚本说明.md)  
- [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)  
- [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md)  
- [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)  
- [Mod测试说明.md](./Mod测试说明.md)

### 速查

- 数据结构：`Plugins/CreateModPlugin/Source/CreateModPlugin/Public/`  
- 插件说明：`Plugins/CreateModPlugin/README.md`  
- 工程入口：`EasternEra.uproject`（UE **5.6**）
