# 宗门起源 Mod 文档索引

| 文档 | 适合谁 | 内容范围 |
|------|--------|----------|
| [Mod工程与目录说明.md](./Mod工程与目录说明.md) | 所有作者 | 引擎与工程简介、`Content/Mods` 目录规则、`UModInformationAsset` 与配置挂载概念、开发时源码/资产引用路径 |
| [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md) | **美术 / TA / 会绑骨的程序** | FBX 导入、`USkeleton` 与网格关系、**主角必须用 Mannequin 骨架**、动物/怪物独立骨架、重定向与自检、模型类常见问题 |
| [Mod数据表与骨骼网格字段说明.md](./Mod数据表与骨骼网格字段说明.md) | **策划 / 填表 / 技术策划** | `FModAnimalData`、`FModBuildData`、`FModHumanData` 等与网格、动画相关的字段含义；与骨架资源的对应关系；填表时注意点 |
| [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md) | **发布 / 集成** | Create Mod Plugin：创建 Mod、Cook、打 Pak、输出位置；与 `Plugins/CreateModPlugin/README.md` 的配合 |
| [Mod测试说明.md](./Mod测试说明.md) | **测试 / QA** | 打包导出目录（`Mods/<ModId>/`）、拷贝到游戏 `Content\Mods` 的路径、无 `Mods` 文件夹时如何新建 |

## 建议阅读顺序

1. 不熟悉工程：先看 **Mod工程与目录说明**。  
2. 要做角色/怪物模型：看 **模型导入与骨骼匹配说明**。  
3. 要在表里填网格与动画路径：看 **Mod数据表与骨骼网格字段说明**，并对照结构体头文件。  
4. 要产出可安装的 Pak：看 **Mod编辑器与打包说明**。  
5. 要在安装版游戏里验证 Mod：看 **Mod测试说明**。

## 插件与源码入口（速查）

- 数据结构定义：`Plugins/CreateModPlugin/Source/CreateModPlugin/Public/`  
- 插件自带简短说明：`Plugins/CreateModPlugin/README.md`  
- 工程入口：`EasternEra.uproject`（UE **5.6**）

---

*各文档末尾可交叉链接回本索引；若引擎或插件升级，以编辑器实际界面与代码为准。*
