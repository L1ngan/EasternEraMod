# EastRimWorld Mod Documentation Index

| Document | Audience | Scope |
|----------|----------|-------|
| [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md) | All authors | Engine/project overview, `Content/Mods` rules, `UModInformationAsset`, mount concepts, source/asset paths |
| [ModInfoFields.md](./ModInfoFields.md) | All authors | `ModInfo.json` / `UModInfoData` fields, dependencies, `ModToolVersion` vs packaging |
| [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md) | **Design / TA / programmers** | `IncludeGameplayTags`, `{ModId}GameplayTags.ini`, Tag Manager Source, UE restart, packaging copy |
| [ModLuaScripting.md](./ModLuaScripting.md) | **Scripters / programmers** | `Main.lua`, **UnLua blueprint binding** (`UnLuaInterface` / `GetModuleName`), `UE.UModLuaLibrary.ModLog`, extra Lua & **`AdditionalAssets`** |
| [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md) | **Art / TA / riggers** | FBX import, `USkeleton` vs mesh, **protagonist must use Mannequin skeleton**, creatures use own skeletons, retargeting & checklist |
| [ModDataTablesAndSkeletalMeshFields.md](./ModDataTablesAndSkeletalMeshFields.md) | **Design / table authors / tech design** | `FModAnimalData`, `FModBuildData`, `FModHumanData` mesh/animation fields; skeleton correspondence; table tips |
| [ModEditorAndPackaging.md](./ModEditorAndPackaging.md) | **Release / integration** | Create Mod Plugin: create Mod, Cook, Pak, output; works with `Plugins/CreateModPlugin/README.md` |
| [ModTesting.md](./ModTesting.md) | **Test / QA** | Export folder (`Mods/<ModId>/`), copy into game `Content\Mods`, creating `Mods` if missing |

## Tutorials

| Document | Notes |
|----------|-------|
| [BasicConfiguration.md](./BasicConfiguration.md) | New Mod, Mod Info, assets under Mod folder |
| [CharacterConfiguration.md](./CharacterConfiguration.md) | Character tables & presets |
| [CreatureConfiguration.md](./CreatureConfiguration.md) | Animals/monsters, GameplayTags, GA setup |
| [ModPackagingQuickStart.md](./ModPackagingQuickStart.md) | Package Mod → copy to game |

## Suggested reading order

1. New to the project: [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md).  
2. Mod metadata & `ModInfo.json`: [ModInfoFields.md](./ModInfoFields.md).  
3. **GameplayTag / Mod ini**: [ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md).  
4. Mod **Lua entry & extra scripts**: [ModLuaScripting.md](./ModLuaScripting.md).  
5. Character/creature models: [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md).  
6. Filling mesh/animation paths in tables: [ModDataTablesAndSkeletalMeshFields.md](./ModDataTablesAndSkeletalMeshFields.md), plus struct headers.  
7. Shipping a Pak: [ModEditorAndPackaging.md](./ModEditorAndPackaging.md).  
8. Verifying in installed game: [ModTesting.md](./ModTesting.md).

## Plugin & source (quick ref)

- Data structures: `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/`  
- Plugin overview: [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md)  
- Project: `EasternEra.uproject` (UE **5.6**)

---

*Cross-link back to this index from other docs; if engine or plugin changes, trust the editor UI and code.*
