---FBlueprintPaletteFavorites
---@class UBlueprintPaletteFavorites : UObject
---@field public CustomFavorites TArray<string> @A list of strings that are used to identify specific palette actions. This is what gets saved out when the user has customized their own set, and is not updated until PreSave.
---@field public CurrentFavorites TArray<FFavoritedBlueprintPaletteItem> @A list of favorites that is constructed in PostLoad() (either from a profile or the user's set of CustomFavorites). This list is up to date and maintained at runtime.
---@field public CurrentProfile string @Users could load pre-existing profiles (intended to share favorites, and hook into tutorials). If empty, the default profile will be loaded; if the user has customized a pre-existing profile, then this will be "CustomProfile".
local UBlueprintPaletteFavorites = {}

