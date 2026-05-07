---A struct to hold important information about an assets found by the Asset Registry
---This struct is transient and should never be serialized
---@class FAssetData
---@field public ObjectPath string
---@field public PackageName string @The name of the package in which the asset is found, this is the full long package name such as /Game/Path/Package
---@field public PackagePath string @The path to the package in which the asset is found, this is /Game/Path with the Package stripped off
---@field public AssetName string @The name of the asset without the package
---@field public AssetClass string @The name of the asset's class
---@field public AssetClassPath FTopLevelAssetPath @The path name of the asset's class
local FAssetData = {}
