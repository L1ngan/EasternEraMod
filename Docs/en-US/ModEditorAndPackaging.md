# Mod Editor & Packaging

---

## 1. Editor features (`CreateModPlugin`)

The **`CreateModPlugin`** typically exposes (exact menus depend on engine/plugin):

- **Create Mod**: valid folder under `Content/Mods/<ModName>/`, **`UModInformationAsset`** for registering DataTables/DataAssets.  
- **Package Mod**: select Mod(s), optional **Cook**, **`UnrealPak`** (or equivalent) → **`.pak`**.

See `Plugins/CreateModPlugin/Source/CreateModPluginEditor/` (`ModInfoEditorWindow.cpp`, `PackageModWindow.cpp`, `CreateModWindow.cpp`).

---

## 2. After creating a Mod

1. Mod path must be **one** subdirectory under `Content/Mods/` ([ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md) §2.2).  
2. In **`UModInformationAsset`**, register **DataTables** / **DataAssets** via `FModConfig` / `FModAsset`.  
3. Human sample data & plugin CSV notes: **[Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)**.  
4. **ModId must be unique**—not shown directly to players; used as enable/disable index. Don’t duplicate another Mod’s ID.

---

## 3. When Cook is needed

- Mod contains **uassets** that must be **Cook**ed into the Pak—packaging triggers Cook (or full-project Cook per implementation).  
- You can also Cook via engine **Cook Content** before packaging Mod.  
- Few **non-asset** files only (`.ini`, `.lua`) may skip Cook in some paths—check package logs.

Typical cooked output (varies by engine):

- `Saved/Cooked/Windows/<ProjectName>/Content/Mods/<ModName>/`  
- Or `WindowsNoEditor`, etc.

Plugin probes multiple candidates (`PackageModWindow.cpp`).

---

## 4. Outputs & Pak

- Each Mod exports to **`<ProjectRoot>/Mods/<ModId>/`** (`ModId` from `ModInfo.json` or folder name), including **`<ModId>.pak`**, copied `ModInfo.json`, entry Lua, icon, GameplayTags `.ini`, etc.  
- Pak mount prefix aligns with game rules, e.g. `../../../<ProjectName>/Content/Mods/<ModName>/...`.

**Copy into game for local testing**: [ModTesting.md](./ModTesting.md).

Enable the Mod in the client per official Mod UI/load order.

---

## 5. Troubleshooting

| Symptom | Likely cause |
|---------|----------------|
| Invalid Mod path | Not `Content/Mods/<ModName>` single-level structure |
| Cook failure | Bad assets, missing refs, Cook settings—check Output Log |
| Pak OK, no in-game effect | Mount path, ModId, game scan, incomplete `UModInformationAsset` |

---

## 6. Related docs

- [ModDocumentationIndex.md](./ModDocumentationIndex.md)  
- [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md)  
- [ModInfoFields.md](./ModInfoFields.md) (`ModToolVersion`)  
- [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md)  
- [ModLuaScripting.md](./ModLuaScripting.md)  
- [ModTesting.md](./ModTesting.md)  
- [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)
