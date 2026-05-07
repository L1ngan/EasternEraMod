---An interface object for any clothing asset the engine can use.
---Any clothing asset concrete object should derive from this.
---@class UClothingAssetBase : UObject
---@field public ImportedFilePath string
---@field protected AssetGuid FGuid @Guid to identify this asset. Will be embedded into chunks that are created using this asset
local UClothingAssetBase = {}

