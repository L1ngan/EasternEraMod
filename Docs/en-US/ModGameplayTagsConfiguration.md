# Mod GameplayTags Configuration

How **EastRimWorld** Mods ship **GameplayTags** via **`ModInfo.json`** + a dedicated ini, the engine **Gameplay Tag Manager**, and packaging.

Metadata fields: [ModInfoFields.md](./ModInfoFields.md). Creature skill/tag flow: [CreatureConfiguration.md](./CreatureConfiguration.md) (“tag manager file”, “new tags”, etc.).

---

## 1. Overview

| Item | Description |
|------|-------------|
| **GameplayTag** | Engine hierarchical tags for abilities, anim notifies, buffs, input, etc. |
| **Mod approach** | Keep a **Mod-specific tag ini** under Mod root; `ModInfo.json` enables it and names the file; in the Tag Manager, set **Source** to that file. |
| **Packaging** | When enabled, the **`.ini`** copies to **`Mods/<ModId>/`** with `Main.lua`, `ModInfo.json`, etc. |

---

## 2. ModInfo / editor fields (`UModInfoData`)

| Field | JSON key | Description |
|-------|-----------|-------------|
| **Include GameplayTag config** | `IncludeGameplayTags` | **true** enables Mod tag ini; **false** skips tag file logic. |
| **GameplayTag ini path** | `GameplayTagsIniFile` | Filename **relative to Mod root**; normalized to **`{ModId}GameplayTags.ini`**. |

**Default name** (`UModInfoData::MakeGameplayTagsIniFileName`):

```text
{ModId}GameplayTags.ini
```

Example ModId `MyDragon` → `MyDragonGameplayTags.ini` in **`Content/Mods/MyDragon/`** next to `ModInfo.json`.

Enable **Include Gameplay Tags** only after **Mod ID** is set (`ModInfoEditorData.cpp` `PostEditChangeProperty`).

---

## 3. Creation & initial content

- When enabled in **Create Mod** or **Mod Info Editor**, the plugin **creates** the ini if missing with minimal valid section:

  `[/Script/GameplayTags.GameplayTagsList]`

- See `UModInfoData::EnsureDefaultGameplayTagsIni`, `WriteDefaultGameplayTagsIniContent`, `ModInfoEditorWindow::CreateGameplayTagsIni`.

**Important**: After creating or heavily editing the ini, **restart the UE project** so the Tag Manager picks up the new Source (same as [CreatureConfiguration.md](./CreatureConfiguration.md)).

---

## 4. Adding/editing tags in editor

1. **Edit → Project Settings → GameplayTags** or **Gameplay Tag Manager** (per project menus).  
2. When **adding tags**, set **Source** to **`{ModId}GameplayTags.ini`** under the Mod folder—avoid writing Mod-only tags into global default files unless agreed.  
3. Maintain hierarchy via parent/child; align naming with design & anim notifies (e.g. `Montage.Behavior`, **Event Tag** in `NS_AbilityNotify`).  

Creature skills often use tags under **`Ability.UniqueSkill`**, referenced from **GameAbility** rows (see tutorial).

---

## 5. Unchecking “Include GameplayTag”

Unchecking may prompt to **delete** **`{ModId}GameplayTags.ini`** (`ModInfoEditorWindow` save). After deletion, **restart** the editor and verify tags.

---

## 6. Package & test output

- Package reads `IncludeGameplayTags`, `GameplayTagsIniFile`, **`ModId`**, resolves ini path, copies **same-named ini** to **`Mods/<ModId>/`** ([ModTesting.md](./ModTesting.md)).  
- If `IncludeGameplayTags` is true but file is missing, expect package warnings.

---

## 7. References

| Topic | Location |
|-------|----------|
| `ModInfo.json` | [ModInfoFields.md](./ModInfoFields.md) |
| Mod folders | [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md) |
| Package/output | [ModEditorAndPackaging.md](./ModEditorAndPackaging.md), [ModTesting.md](./ModTesting.md) |
| Creature + tags | [CreatureConfiguration.md](./CreatureConfiguration.md) |
| Source | `ModInfoEditorData.h/.cpp`, `PackageModWindow.cpp` (`GameplayTagsIni`) |

---

*Gameplay semantics (GA, montage notifies) follow the shipping project.*
