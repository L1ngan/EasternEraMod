# Mod Testing

Where **packaged output** lands and **how to copy it into the installed game** for local testing.

Packaging & Cook: [ModEditorAndPackaging.md](./ModEditorAndPackaging.md).

---

## 1. Export location (this project)

The plugin writes each Mod under **`<EasternEraMod project root>/Mods/<ModId>/`** (`PackageModWindow.cpp`: `ProjectDir/Mods/{ModId}`).

- **Root**: `<project root>/Mods/`  
- **Per Mod**: `<project root>/Mods/<ModId>/`

**`ModId`**

- From **`ModId`** in `Content/Mods/<ModName>/ModInfo.json` if set.  
- Else defaults to **`Content/Mods` folder name** (`<ModName>`).

**Folder contents** (depends on Mod config)

- `<ModId>.pak`  
- `ModInfo.json` (updated with tool version, etc.)  
- Entry Lua, icon, GameplayTags `.ini`, etc. if configured  

**Copy the whole `<ModId>` folder**—don’t omit non-Pak files.

---

## 2. Copy into game

Copy the **entire `<ModId>`** folder to:

`<GameInstall>\EasternEra\EasternEra\Content\Mods\<ModId>\`

Same layout as export: under game **`Content\Mods`**.

**If `Mods` is missing**: create **`Mods`** under  

`<GameInstall>\EasternEra\EasternEra\Content\`

then place `<ModId>` inside.

Example:

```text
GameInstall\
  EasternEra\
    EasternEra\
      Content\
        Mods\
          YourModId\          ← copy whole folder from project Mods\YourModId
            YourModId.pak
            ModInfo.json
            (other exported files…)
```

---

## 3. Testing tips

1. **Path depth**: double `EasternEra` → `Content\Mods`; adjust if your build differs.  
2. **Version**: client should match engine/asset revision used to Cook.  
3. **Multiple Mods**: one subfolder per **ModId**; don’t merge.  
4. **Enable Mod**: use in-game Mod list / load order per official docs.

---

## 4. Related docs

- [ModDocumentationIndex.md](./ModDocumentationIndex.md)  
- [ModEditorAndPackaging.md](./ModEditorAndPackaging.md)  
- [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md)
