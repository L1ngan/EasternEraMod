# Mod Project & Directory Layout

---

## 1. Project role

| Item | Description |
|------|-------------|
| Engine | Unreal Engine **5.6** (see repo root `EasternEra.uproject`) |
| Game runtime module | `EastRimWorld` |
| Mod support | Plugin **`CreateModPlugin`** (`Plugins/CreateModPlugin/`): Mod data types, `UModInformationAsset`, editor create/package flow |

This repo is an **author-facing Mod authoring project**: build assets and tables in the editor, then use the plugin to **Cook** a Mod folder and wrap it as a **`.pak`** for the shipped game (packaging steps: [ModEditorAndPackaging.md](./ModEditorAndPackaging.md)).

---

## 2. Mod content layout

### 2.1 Root path & naming

- **Mod content root**: `Content/Mods/<ModName>/`  
- `<ModName>`: your Mod folder name; often part of Pak identity.

### 2.2 Why it must be a **direct** child of `Mods`

The plugin’s **Create Mod**, **pick Mod path**, and **package** flows validate:

- Path must be under `Content/Mods/`;  
- **`Content/Mods` itself** cannot be the Mod root;  
- You **cannot** use `Content/Mods/MyMod/SubFolder` as the Mod root—the plugin expects **one subdirectory level** per Mod so Cook output and Pak mount paths stay aligned.

Invalid paths show errors in the wizard or package UI; see editor checks (e.g. `ModInfoEditorWindow.cpp`, `PackageModWindow.cpp`).

### 2.3 Mod info asset `UModInformationAsset`

Each Mod usually has one **`UModInformationAsset`** (wizard-generated) declaring:

- **`DataTables`** (`FModConfig` array): `ModConfigType` (`EModConfigType`), target `UDataTable`, override merge flags, etc.;  
- **`DataAssets`** (optional): other `UDataAsset` configs.

The game uses this to register tables and assets. **Row struct types** must match `EModConfigType` (e.g. animal config → animal struct) or runtime reads will be wrong or fail.

### 2.4 Cook & mount paths (concept)

After Cook, output lives under `Saved/Cooked/<Platform>/...` (exact layout varies). When building the Pak, cooked files are mapped to the expected mount prefix, e.g.:

`../../../<ProjectName>/Content/Mods/<ModName>/...`

**ProjectName** is the actual `uproject` / target game project name.

---

## 3. Dev reference paths (source & plugin)

| Purpose | Path |
|---------|------|
| Mod data structs (animals, humans, buildings, etc.) | `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/` (e.g. `CharacterDataStruct.h`, `BuildDataStruct.h`, `BaseDataStruct.h`) |
| Config enum `EModConfigType` | `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/BaseDataStruct.h` |
| Editor: create Mod, path checks, package Cook | `Plugins/CreateModPlugin/Source/CreateModPluginEditor/` |
| Short plugin notes & CSV samples | [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md) |

---

## 4. Related docs

The repo **README** links the same set of documents.

- [ModDocumentationIndex.md](./ModDocumentationIndex.md)  
- [ModInfoFields.md](./ModInfoFields.md) (`ModInfo.json` fields)  
- [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md) (GameplayTag ini)  
- [ModLuaScripting.md](./ModLuaScripting.md) (`Main.lua`, UnLua, `AdditionalAssets`)  
- [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md)  
- [ModDataTablesAndSkeletalMeshFields.md](./ModDataTablesAndSkeletalMeshFields.md)  
- [ModEditorAndPackaging.md](./ModEditorAndPackaging.md)  
- [ModTesting.md](./ModTesting.md) (export folder → game `Content\Mods`)

---
