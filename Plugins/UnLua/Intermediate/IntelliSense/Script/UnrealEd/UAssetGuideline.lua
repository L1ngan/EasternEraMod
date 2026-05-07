---User data that can be attached to assets to check on load for guidlelines (plugins, project settings, etc).
---This class intentionally does not accept FText arguments. The project using your bundled asset would need to have
---your localization tables, and we currently do not support text table referencing.
---@class UAssetGuideline : UAssetUserData
---@field public Plugins TArray<string> @Plugins to check for on load
---@field public ProjectSettings TArray<FIniStringValue> @Project settings to check for on load. Look at your .ini's to populate this.
---@field public GuidelineName string @Name of this guideline, we will only check once per unique guideline name.
local UAssetGuideline = {}

