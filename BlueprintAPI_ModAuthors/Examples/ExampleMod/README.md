# ExampleMod 示例 Mod

官方全要素示例，演示 Lua 脚本、事件订阅、定时器、控制台命令、配置表 JSON 覆盖。
Official full-feature sample: Lua scripting, event subscription, timers, console commands, DataTable JSON overrides.

- 入口脚本 / Entry script: [Main.lua](Main.lua)（逐行注释 / fully commented）
- 元数据 / Metadata: [ModInfo.json](ModInfo.json)
- 配置覆盖示例 / Config override sample: [Config/DT_CommonBuff_Example.json](Config/DT_CommonBuff_Example.json)

完整开发指南 / Full development guide:
- 中文：[../ModDevelopmentGuide_CN.md](../ModDevelopmentGuide_CN.md)
- English: [../ModDevelopmentGuide_EN.md](../ModDevelopmentGuide_EN.md)

类型参考（全部枚举/结构体/蓝图API，双语）/ Type reference (all enums/structs/Blueprint API, bilingual):
`BlueprintAPI_ModAuthors/zh/INDEX.md` 与 `BlueprintAPI_ModAuthors/en/INDEX.md`（项目根目录 / project root）

游戏内调试 / In-game debugging: 控制台输入 `Mod.Status` 查看所有 Mod 状态；本示例注册了命令 `examplemod.hello`。
Type `Mod.Status` in the console to inspect all mods; this sample registers the `examplemod.hello` command.
