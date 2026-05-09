# Mod Lua Scripting

Lua entry conventions for **EastRimWorld** Mods, `ModInfo.json`, **UnLua** blueprint binding, packaging, and template **`UE` APIs**. C++ libraries live in the shipping game project; this repo has **UnLua** and **Create Mod Plugin** for reference.

---

## 1. ModInfo & file locations

| Item | Description |
|------|-------------|
| **Main entry** | **`MainLuaFile`** in `ModInfo.json`, relative to **Mod root** (`Content/Mods/<ModName>/`), usually **`Main.lua`**. |
| **Disk path** | `Content/Mods/<ModName>/<MainLuaFile>`, e.g. `Content/Mods/CheatingBuildings/Main.lua`. |
| **Runtime** | After load, the game runs the script module; it must **`return`** a **table** as the Mod module object (§2). |

Full `ModInfo.json` reference: [ModInfoFields.md](./ModInfoFields.md).

---

## 2. Wizard-generated template (`Create New Mod`)

From `CreateModWindow::GenerateMainLuaFile` (`Plugins/CreateModPlugin/.../CreateModWindow.cpp`):

1. **Module table**: `local Mod = {}`, end with **`return Mod`**.  
2. **Lifecycle** (game calls these by name):  
   - **`Mod:OnModLoaded()`** — Mod finished loading.  
   - **`Mod:OnModUnloaded()`** — Mod unloading.  
3. **Logging**: template uses **`UE.UModLuaLibrary.ModLog(ModId, Message, LogLevel)`**, with `Debug` / `Warn` / `Error` wrappers (`LogLevel` `"Debug"`, `"Warning"`, `"Error"`; default `"Log"`).  
4. **Metadata**: template reads **`self.ModInfo.Metadata`**, e.g.:  
   - **`self.ModInfo.Metadata.ModId`**  
   - **`self.ModInfo.Metadata.ModName`**  

The runtime injects parsed **`ModInfo.json`** into **`ModInfo`**; for other fields, check the shipping project or print `self.ModInfo`.

---

## 3. UnLua & the `UE` table

**UnLua** (`Plugins/UnLua`) exposes **`UE`** for exported `UCLASS` / `UFUNCTION`. Template example:

```lua
UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, LogLevel)
```

**`UModLuaLibrary`** lives in the **shipping game module**; this authoring repo may not include its C++. Use a matching game build for editor tests.

---

## 4. Blueprint ↔ Lua (UnLua)

**Mod `Main.lua`** (Mod system) and **per-blueprint Lua** (UnLua) are separate pipelines.

### 4.1 Concepts

| Pipeline | Role |
|----------|------|
| **Mod `MainLuaFile`** | Mod-level entry under `Content/Mods/...`, e.g. `OnModLoaded`. |
| **Blueprint + UnLua** | Blueprint class implements **`UnLuaInterface`**; **`GetModuleName`** points to a module under **`Content/Script`**; at **Bind**, Lua functions **same-named** as overridable blueprint events/functions hook into `UFunction` (see `Plugins/UnLua/.../UnLuaManager.cpp`). |

### 4.2 Binding in blueprint editor

1. Open target **blueprint** (`Actor`, `UserWidget`, `AnimInstance`, etc., per UnLua support).  
2. **UnLua** toolbar (after **Debugging**): **Bind**:  
   - Adds **`UnLuaInterface`** and **`GetModuleName`**; default from **Project Settings → Plugins → UnLua → `LuaModuleLocator`**.  
   - **Alt + Bind**: package-path-based module name (`UnLuaEditorToolbar::BindToLua_Executed`).  
3. After bind: **Create Lua Template** → `.lua` under **`Content/Script/`** (dots → `/`).  
4. **Copy as Relative Path** / **Reveal in Explorer** to verify.  
5. **Unbind** to remove.

If **`ModuleLocator`** is invalid, runtime may log *Invalid lua module locator* (`LuaEnv.cpp`).

### 4.3 `GetModuleName` vs disk

Returns module name **relative to `Content/Script`**, dot-separated, e.g.:

`Weapon.BP_DefaultProjectile_C` → `Content/Script/Weapon/BP_DefaultProjectile_C.lua`

Module must **`return`** a table.

### 4.4 Lua module conventions

1. **`Initialize`**: optional post-bind init.  
2. **Same-name functions** as blueprint overrides.  
3. **`UE`** for engine APIs; see `Plugins/UnLua/Content/Script/UnLua/Input.lua`, `EnhancedInput.lua`, etc.

### 4.5 Packaging

Scripts under **`Content/Script/...`** that must ship usually need **`ModInfo.json` → `AdditionalAssets`** paths **relative to `Content`** (§5). **`Main.lua`** is separate.

---

## 5. Extra Lua: list in `AdditionalAssets`

Besides **`Main.lua`** (via **`MainLuaFile`**, under **`Content/Mods/<ModName>/`**), any other Lua or non-uasset files to ship must be listed in **`AdditionalAssets`** (**extra packaged assets** / `UModInfoData::AdditionalAssets`).

| Item | Description |
|------|-------------|
| **Path format** | Each entry **relative to project `Content`**, forward slashes, e.g. `Script/MyModId/Helper.lua` → `Content/Script/MyModId/Helper.lua`. See **`AdditionalAssets`** in [ModInfoFields.md](./ModInfoFields.md). |
| **Convention** | e.g. `Content/Script/<ModId>/`; **only listed files** are packed. |
| **Main entry** | **`MainLuaFile`** usually **does not** need a duplicate `AdditionalAssets` entry unless another copy path must be packed. |

---

## 6. Package output

- After package, **`Main.lua`** etc. copy to **`<ProjectRoot>/Mods/<ModId>/`** ([ModTesting.md](./ModTesting.md)).  
- Keep **`MainLuaFile`** matching the real filename; prefer forward slashes relative to Mod root.

---

## 7. Examples in this repo

- `Content/Mods/CheatingBuildings/Main.lua`  
- `Content/Mods/ParagonSunWukong/Main.lua`  

Pattern: `Mod` table + `OnModLoaded` / `OnModUnloaded` + `return Mod`.

---

## 8. References

| Topic | Location |
|-------|----------|
| `ModInfo.json` | [ModInfoFields.md](./ModInfoFields.md) |
| Cook / Pak / output | [ModEditorAndPackaging.md](./ModEditorAndPackaging.md), [ModTesting.md](./ModTesting.md) |
| `Main.lua` template | `CreateModWindow.cpp` → `GenerateMainLuaFile` |
| `AdditionalAssets` / package | `PackageModWindow.cpp` |
| UnLua bind | `UnLuaInterface.h`, `UnLuaEditorToolbar.cpp` |
| Module locator | `LuaModuleLocator.cpp`, `UUnLuaSettings` |
| Plugin overview | [Plugins/CreateModPlugin/README.md](../../Plugins/CreateModPlugin/README.md) |

---

*If the game updates Mod plumbing or `UModLuaLibrary`, follow shipping docs.*
