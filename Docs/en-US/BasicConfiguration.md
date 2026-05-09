# Basic Configuration

Aligned with **[ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md)** and **[ModInfoFields.md](./ModInfoFields.md)**; below is step-oriented only.

---

Step 1 | Create a Mod in the editor

![](../../assets/基础配置_r3_c2_01.png)

Step 2 | Fill basic Mod info (icon / ID / Name / Version / Author / Description, etc.)

Notes: | 1 | After **Create New Mod**, you get a **first-level** folder under **`Content/Mods/`**, usually named like your **Mod Id** (matches **`ModId`** in `ModInfo.json`; don’t use `Content/Mods/MyMod/SubFolder` as Mod root).

2 | To load this Mod’s config from the **new game** screen, enable **“New Game Load”** (`ModInfo.json` **`NewGameLoad`**); otherwise it won’t load on new game creation.

3 | **Icon** can be placed in Mod **root** after folder creation (`Content/Mods/<ModId>/` only—not loose files directly under `Content/Mods`).

More fields: [ModInfoFields.md](./ModInfoFields.md).

![](../../assets/基础配置_r17_c1_02.png)

Step 3 | Copy characters and other assets into **`Content/Mods/<ModId>/`** (`<ModId>` = folder name or `ModInfo.json` `ModId`)

Notes: | 1 | Verify soft paths point to assets actually under **`Content/Mods/<ModId>/`** to avoid missing materials/skeletons.

2 | **Playable human body meshes** must use the project **Mannequin reference `USkeleton`**: [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md).

3 | Extra scripts under **`Content/Script/`** etc. must be listed in **`ModInfo.json` → `AdditionalAssets`** to enter the Pak: [ModLuaScripting.md](./ModLuaScripting.md).

![](../../assets/基础配置_r54_c2_03.png)
