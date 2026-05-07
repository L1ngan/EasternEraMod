---Adapter object that wraps a regular UTexture and allows it to be referenced as a virtual texture in materials.
---The virtual texture pages are filled on demand by copying from the wrapped texture.
---This isn't memory efficient or performant, but can be useful for certain debugging or previewing modes where we don't
---want to change the material, but do want to bind a non-virtual texture to an existing virtual texture sample.
---@class UVirtualTextureAdapter : UTexture
---@field public Texture UTexture @The UTexture object to wrap.
---@field public OverrideWithTextureFormat UTexture2D @Optional UTexture object that has the final texture format that we would like to use.
---@field public bUseDefaultTileSizes boolean @Set to true if we want to use the default project virtual texture tile settings.
---@field public TileSize integer @Page tile size. (Will be rounded up to power of 2).
---@field public TileBorderSize integer @Page tile border size. (Will be rounded up to multiple of 2).
local UVirtualTextureAdapter = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVirtualTextureAdapter:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVirtualTextureAdapter:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVirtualTextureAdapter:AddAssetUserDataOfClass(InUserDataClass) end

