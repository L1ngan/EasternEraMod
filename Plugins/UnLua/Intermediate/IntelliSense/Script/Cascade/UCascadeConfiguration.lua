---@class UCascadeConfiguration : UObject
---@field public ModuleMenu_TypeDataToBaseModuleRejections TArray<FModuleMenuMapper> @TypeData-to-base module mappings. These will disallow complete 'sub-menus' depending on the TypeData utilized.
---@field public ModuleMenu_TypeDataToSpecificModuleRejections TArray<FModuleMenuMapper> @Module-to-TypeData mappings.
---@field public ModuleMenu_ModuleRejections TArray<string> @Modules that Cascade should ignore in the menu system.
local UCascadeConfiguration = {}

