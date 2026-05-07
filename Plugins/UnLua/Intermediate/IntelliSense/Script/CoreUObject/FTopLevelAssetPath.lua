---A struct that can reference a top level asset such as '/Path/To/Package.AssetName'
---@class FTopLevelAssetPath
---@field private PackageName string @Name of the package containing the asset e.g. /Path/To/Package
---@field private AssetName string @Name of the asset within the package e.g. 'AssetName'
local FTopLevelAssetPath = {}
