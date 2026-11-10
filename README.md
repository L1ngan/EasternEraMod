# Blueprint API documentation (mod authors) / 蓝图 API 文档（模组作者）


## 📚 类型参考 / Type reference

- **中文 Chinese:** [zh/INDEX.md](BlueprintAPI_ModAuthors/zh/INDEX.md)（1307 个类型 / 279 个头文件）
- **English:** [en/INDEX.md](BlueprintAPI_ModAuthors/en/INDEX.md) (1307 types / 279 headers)

每个类型一页：结构体含全部字段（C++ 类型/说明/原始声明），枚举含全部枚举值（值/显示名/说明），类含蓝图暴露成员。
One page per type: structs list every field (C++ type / notes / raw declaration); enums list every enumerator (value / display name / description); classes list Blueprint-exposed members.

## 🧩 示例与指南 / Examples & guides

发行版的 `log.txt` 只记录 `Error`。要保留 `Log` 和 `Warning`：在 ModInfo.json 里设置 `LogLevel`，日志会写进 `ModLogs/<ModId>.log`；或用启动参数 `-ModConsole` 打开控制台查看。详见开发指南第 7 节。
In release builds `log.txt` only records `Error`. To keep `Log` and `Warning`, set `LogLevel` in ModInfo.json (entries go to `ModLogs/<ModId>.log`), or enable the console with the `-ModConsole` launch option. See section 7 of the development guide.

| 示例 Example | 演示内容 Demonstrates |
|---|---|
| [ParagonSunWukong](BlueprintAPI_ModAuthors/Examples/ParagonSunWukong/README.md) | 用人体结构、外观预设、角色数据和 Cook 资源添加完整角色；另附事件扩展参考 · Adds a complete character with anatomy, appearance, character data, and cooked assets, plus an extended event reference |
| [ChangeNumberOfCharacters](BlueprintAPI_ModAuthors/Examples/ChangeNumberOfCharacters/README.md) | 修改角色、机器人和据点驻扎上限，监听关卡与世界初始化委托 · Changes character, robot, and stationed-character limits and listens to level/world initialization delegates |
| [ChangeAttribute](BlueprintAPI_ModAuthors/Examples/ChangeAttribute/README.md) | 按倍率修改动物与召唤物 DataTable 属性 · Scales animal and summon DataTable attributes |
| [CheatingBuildings](BlueprintAPI_ModAuthors/Examples/CheatingBuildings/README.md) | 用建筑、物品、配方、新游戏配置和 Cook 资源组成完整生产玩法 · Builds a production workflow from buildings, items, formulas, new-game config, and cooked assets |
| [Giganotosaurus_RD](BlueprintAPI_ModAuthors/Examples/Giganotosaurus_RD/README.md) | 配置自定义动物、动画组、战斗能力、Gameplay Tags 和关卡资源 · Configures a custom animal, animation group, combat ability, Gameplay Tags, and level assets |

**开发指南 / Development guides**（字段全表、生命周期、Lua API 参考、事件表、JSON 合并语义、沙箱负面清单、`Mod.Status` 调试、打包发布）:

- 中文：[Examples/ModDevelopmentGuide_CN.md](BlueprintAPI_ModAuthors/Examples/ModDevelopmentGuide_CN.md)
- English: [Examples/ModDevelopmentGuide_EN.md](BlueprintAPI_ModAuthors/Examples/ModDevelopmentGuide_EN.md)
