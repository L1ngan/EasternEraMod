# ModInfo.json Field Reference

`ModInfo.json` lives at each Mod’s **content root**, aligned with `UModInfoData` (`Plugins/CreateModPlugin/.../ModInfoEditorData.h`) and the editor **Mod Info Editor** / **Create New Mod**. The game and packaging read **ModId**, main Lua, **`UModInformationAsset`** path, dependencies, extra assets, etc.

**Location**: `Content/Mods/<ModName>/ModInfo.json` (`<ModName>` is the **first-level** folder under `Content/Mods`).

**Note**: JSON keys below match `CreateModWindow::GenerateModInfoJson` and `SModInfoEditorWindow::SaveModInfoToFile`; if you hand-edit JSON, trust the actual parsing code.

---

## 1. Root fields overview

| JSON key | Type | Required / typical | Description |
|----------|------|-------------------|---------------|
| `ModId` | string | **Required** | Unique Mod ID; when present in `ModInfo.json`, used as **output folder name**, etc. (may match or differ from `Content/Mods` folder name). |
| `ModName` | string | Common | Display name. |
| `Version` | string | Common | Mod version (e.g. `1.0.0`). |
| `Author` | string | Optional | Author. |
| `Description` | string | Optional | Description (may be multiline). |
| `Icon` | string | Optional | Icon path: usually normalized **relative to Mod root** (see editor copy/normalize logic). |
| `MainLuaFile` | string | Common | Main Lua entry, **relative to Mod root** (e.g. `Main.lua`). |
| `ModInformationAssetPath` | string | **Strongly recommended** | Soft path to this Mod’s **`UModInformationAsset`**, including asset name & suffix, e.g. `/Game/Mods/<ModName>/DA_ModDataAsset.DA_ModDataAsset`. Wizard fills a default from `ModFolderPath` if empty. |
| `NewGameLoad` | bool | Optional | Load on new game (`UModInfoData::bNewGameLoad`). |
| `MinGameVersion` | string | Optional | Minimum supported **game** version. |
| `IncludeGameplayTags` | bool | Optional | Ship Mod-specific GameplayTag ini with the Mod; see [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md). |
| `GameplayTagsIniFile` | string | Conditional | When `IncludeGameplayTags` is true, usually filename relative to Mod root, convention **`{ModId}GameplayTags.ini`** (`UModInfoData::MakeGameplayTagsIniFileName`). See [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md). |
| `PublishedFileId` | string | Optional | **Steam Workshop** (etc.) file ID; editor may **omit** the key when empty to avoid overwriting; don’t treat as a normal editable field in plugin UI. |
| `AdditionalAssets` | string array | Optional | Extra paths to pack, **relative to project `Content`**. Extra `.lua` etc. **must** be listed here—they are **not** auto-scanned. See [ModLuaScripting.md](./ModLuaScripting.md). |
| `Dependencies` | object array | Optional | Other Mod dependencies, see §2. |
| `ModToolVersion` | string | Written by package | **Not** written by normal Mod Info Editor save; **Package Mod** success updates it (`UModToolVersion::GetModToolVersion()`, e.g. `1.0.0`). |

### Editor-only fields not in `ModInfo.json`

- **`ModFolderPath`** (read-only on `UModInfoData`): current `Content/Mods/...` path for editor locate/save; **not serialized** to `ModInfo.json`.

---

## 2. `Dependencies` array elements

Each element is an object:

| Key | Type | Description |
|-----|------|-------------|
| `ModId` | string | Dependency Mod ID. |
| `MinVersion` | string | Optional; may be **omitted** when empty in generated JSON. |
| `Required` | bool | Hard dependency (`FModDependencyData::bRequired`). **JSON key is `Required`, not `bRequired`.** |

---

## 3. Relationship to `UModInformationAsset`

- `ModInformationAssetPath` should point to **`UModInformationAsset`** with `DataTables` / `DataAssets`.  
- See [ModDataTablesAndSkeletalMeshFields.md](./ModDataTablesAndSkeletalMeshFields.md) and [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md).

---

## 4. Flow differences

| Action | Effect on `ModInfo.json` |
|--------|---------------------------|
| **Mod Info Editor** save | Writes §1–§2 fields (`PublishedFileId` only if non-empty); **no** `ModToolVersion`. |
| **Create New Mod** wizard | Creates initial `ModInfo.json` (default `Main.lua`, `ModInformationAssetPath`, etc.). |
| **Package Mod** success | Writes/updates **`ModToolVersion`** in output `ModInfo.json` and related metadata copies. |

---

## 5. Source locations (reference)

- Data: `Plugins/CreateModPlugin/Source/CreateModPluginEditor/Public/ModInfoEditorData.h` (`UModInfoData`, `FModDependencyData`)  
- Generate/save JSON: `CreateModWindow.cpp` (`GenerateModInfoJson`), `ModInfoEditorWindow.cpp` (`SaveModInfoToFile`, `LoadModInfoFromFile`)  
- Package version: `PackageModWindow.cpp` (`ModToolVersion`)  
- Tool version constant: `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/ModToolVersion.h`  

---

## 6. Related docs

- [ModDocumentationIndex.md](./ModDocumentationIndex.md)  
- [ModLuaScripting.md](./ModLuaScripting.md) (`MainLuaFile`, UnLua, `AdditionalAssets`)  
- [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md)  
- [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md)  
- [ModEditorAndPackaging.md](./ModEditorAndPackaging.md)  
- [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)
