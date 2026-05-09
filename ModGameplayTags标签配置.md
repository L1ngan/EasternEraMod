# Mod GameplayTags（标签）配置说明

本文说明 **宗门起源 Mod** 如何通过 **`ModInfo.json` + 独立 ini** 管理 **GameplayTag**，与引擎 **Gameplay Tag 管理器**配合使用，并在打包时随 Mod 分发。

**Mod 元数据字段**见 [ModInfo字段说明.md](./ModInfo字段说明.md)。**动物/怪物技能与标签联动示例**见 [动物or怪物配置.md](./动物or怪物配置.md) 中「创建标签管理文件」「新增标签」等小节。

---

## 1. 作用概览

| 项目 | 说明 |
|------|------|
| **GameplayTag** | 虚幻引擎中用于技能、动画通知、Buff、输入等逻辑的 **分层命名标签**（如 `Ability.UniqueSkill.xxx`）。 |
| **Mod 侧做法** | 在 **Mod 根目录**维护一份 **专用的 Tag 列表 ini**，通过 `ModInfo.json` 声明是否启用及文件名；编辑 Tag 时在管理器里把 **Source** 指到该文件。 |
| **打包** | 勾选启用后，打包会将对应的 **`.ini`** 复制到 **`Mods/<ModId>/`** 输出目录（与 `Main.lua`、`ModInfo.json` 等一并分发）。 |

---

## 2. ModInfo / 编辑器中的两项配置

对应 `UModInfoData`（**Mod Info Editor** / **Create Mod**）：

| 字段 | `ModInfo.json` 键 | 说明 |
|------|-------------------|------|
| **包含 GameplayTag 配置** | `IncludeGameplayTags` | 为 **true** 时启用本 Mod 的专用 Tag ini；为 **false** 不写标签文件逻辑。 |
| **GameplayTag ini 路径** | `GameplayTagsIniFile` | 相对 **Mod 根目录**（`Content/Mods/<ModId>/`）的文件名；保存时通常会规范为 **`{ModId}GameplayTags.ini`**。 |

**默认文件名规则**（源码 `UModInfoData::MakeGameplayTagsIniFileName`）：

```text
{ModId}GameplayTags.ini
```

例如 `ModId` 为 `MyDragon` 时，文件名为 `MyDragonGameplayTags.ini`，放在 **`Content/Mods/MyDragon/`**（与 `ModInfo.json` 同级）。

勾选 **Include Gameplay Tags** 前需先填写 **Mod ID**；否则插件会提示先填 ModId（见 `ModInfoEditorData.cpp` 中 `PostEditChangeProperty`）。

---

## 3. 生成与初始内容

- 在 **创建 Mod** 或 **Mod Info Editor** 中勾选包含 GameplayTag 后，插件会在 Mod 根目录 **若不存在则创建** 上述 ini，并写入最小合法结构，包含节：

  `[/Script/GameplayTags.GameplayTagsList]`

- 具体实现见 `UModInfoData::EnsureDefaultGameplayTagsIni`、`WriteDefaultGameplayTagsIniContent`，以及 `ModInfoEditorWindow::CreateGameplayTagsIni`。

**重要**：生成或大幅修改该 ini 后，**需要重启一次虚幻工程**，Gameplay Tag 管理器才能稳定识别新 Source（与 [动物or怪物配置.md](./动物or怪物配置.md) 中说明一致）。

---

## 4. 在编辑器里新增 / 编辑 Tag

1. 打开 **编辑 → 项目设置 → GameplayTags** 或使用 **Gameplay Tag 管理器**（以你工程菜单为准）。  
2. **新增标签**时，将 **Source（源 ini）** 选为 **本 Mod 目录下的 `{ModId}GameplayTags.ini`**，不要把 Mod 专用 Tag 误写入引擎全局默认文件（除非团队另有约定）。  
3. 标签层级可通过管理器中的 **父节点 + 子标签** 维护；命名建议与策划、动画通知（如 `Montage.Behavior`、`NS_AbilityNotify` 所用 **Event Tag**）对齐。  

怪物技能等场景中，常见做法是Skill 独立标签挂在 **`Ability.UniqueSkill`** 一类路径下，再在 **GameAbility** 等表里引用（步骤图见 **动物or怪物配置.md**）。

---

## 5. 取消勾选「包含 GameplayTag」时

在 **Mod Info Editor** 中 **取消勾选** `IncludeGameplayTags` 时，插件可能提示是否 **删除** Mod 根目录下的 **`{ModId}GameplayTags.ini`**（见 `ModInfoEditorWindow` 保存逻辑）。确认删除后同样建议 **重启编辑器** 再核对 Tag 列表。

---

## 6. 打包与测试输出

- 打包读取 `ModInfo.json` 中的 `IncludeGameplayTags`、`GameplayTagsIniFile` 与 **`ModId`**，解析 ini 的绝对路径后，在生成 Pak 结束时将 **同名 ini** 复制到 **`Mods/<ModId>/`**（与 [Mod测试说明.md](./Mod测试说明.md) 中输出结构一致）。  
- 若 `IncludeGameplayTags` 为 true 但磁盘上找不到对应 ini，打包日志可能出现警告，需检查路径与 ModId。

---

## 7. 相关文档与源码

| 说明 | 位置 |
|------|------|
| `ModInfo.json` 字段 | [ModInfo字段说明.md](./ModInfo字段说明.md) |
| Mod 目录规范 | [Mod工程与目录说明.md](./Mod工程与目录说明.md) |
| 打包与输出 | [Mod编辑器与打包说明.md](./Mod编辑器与打包说明.md)、[Mod测试说明.md](./Mod测试说明.md) |
| 怪物技能 + Tag 示例 | [动物or怪物配置.md](./动物or怪物配置.md) |
| 数据结构定义 | `Plugins/CreateModPlugin/.../ModInfoEditorData.h`、`ModInfoEditorData.cpp` |
| 打包拷贝 ini | `Plugins/CreateModPlugin/.../PackageModWindow.cpp`（`GameplayTagsIni`） |

---

*GameplayTag 在游戏玩法中的具体语义（如 GA、蒙太奇通知）以主机工程与策划表为准。*
