---@class UTexture2D : UTexture
---@field public FirstResourceMemMip integer @keep track of first mip level used for ResourceMem creation
---@field private bTemporarilyDisableStreaming boolean @True if streaming is temporarily disabled so we can update subregions of this texture's resource       without streaming clobbering it. Automatically cleared before saving.
---@field public bHasBeenPaintedInEditor boolean @Whether the texture has been painted in the editor.
---@field public AddressX integer @The addressing mode to use for the X axis.
---@field public AddressY integer @The addressing mode to use for the Y axis.
---@field private ImportedSize FIntPoint @The imported size of the texture. Only valid on cooked builds when texture source is not available. Access ONLY via the GetImportedSize() accessor!
---@field public CPUCopyTexture UTexture2D @If we ever show the CPU accessible image in the editor we'll need a transient texture with those bits in it. If we don't have a CPU copy, then this is null. Use the GetCPUCopyTexture to access as it's created on demand.
local UTexture2D = {}

---Gets the Y size of the texture, in pixels
---@return integer
function UTexture2D:Blueprint_GetSizeY() end

---Gets the X size of the texture, in pixels
---@return integer
function UTexture2D:Blueprint_GetSizeX() end

---@return FSharedImageConstRefBlueprint
function UTexture2D:Blueprint_GetCPUCopy() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture2D:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTexture2D:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture2D:AddAssetUserDataOfClass(InUserDataClass) end

