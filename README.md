# EasternEraMod

宗门起源 mod 制作项目

## Mod 文档索引


| 文档 | 内容范围 |
|------|----------|
| [Mod工程与目录说明.md](./Mod工程与目录说明.md) | 引擎与工程简介、`Content/Mods` 目录规则、`UModInformationAsset` 与配置挂载概念、开发时源码/资产引用路径 |
| [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md) | FBX 导入、`USkeleton` 与网格关系、**主角必须用 Mannequin 骨架**、动物/怪物独立骨架、重定向与自检、模型类常见问题 |
| [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md) | `FModAnimalData`、`FModBuildData`、`FModHumanData` 等与网格、动画相关的字段含义；与骨架资源的对应关系；填表时注意点 |
| [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md) | Create Mod Plugin：创建 Mod、Cook、打 Pak、输出位置；与 `Plugins/CreateModPlugin/README.md` 的配合 |
| [Mod测试说明.md](./Mod测试说明.md) | 打包导出到 `Mods/<ModId>/`、拷贝到游戏安装目录 `Content\Mods`、目录不存在时新建 |

### 建议阅读顺序

1. 不熟悉工程：先看 [Mod工程与目录说明.md](./Mod工程与目录说明.md)。  
2. 要做角色/怪物模型：看 [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)。  
3. 要在表里填网格与动画路径：看 [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md)，并对照结构体头文件。  
4. 要产出可安装的 Pak：看 [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)。  
5. 要在安装版游戏里验证 Mod：看 [Mod测试说明.md](./Mod测试说明.md)。

### 相关文档

- [Mod文档索引.md](./Mod文档索引.md)  
- [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)  
- [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md)  
- [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)  
- [Mod测试说明.md](./Mod测试说明.md)

### 速查

- 数据结构：`Plugins/CreateModPlugin/Source/CreateModPlugin/Public/`  
- 插件说明：`Plugins/CreateModPlugin/README.md`  
- 工程入口：`EasternEra.uproject`（UE **5.6**）
