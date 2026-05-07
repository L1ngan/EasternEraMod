---@class UTexture2DArray : UTexture
---@field public AddressX integer @The addressing mode to use for the X axis.
---@field public AddressY integer @The addressing mode to use for the Y axis.
---@field public AddressZ integer @The addressing mode to use for the Z axis.
---@field public SourceTextures TArray<UTexture2D> @Add Textures
---@field public bSourceGeneratedFromSourceTexturesArray boolean @Is set to true if the source texture was generated from the SourceTextures array (which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple slices). This transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism (as any operation with the SourceTextures array would invalidate the originally imported source texture).
local UTexture2DArray = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture2DArray:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTexture2DArray:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture2DArray:AddAssetUserDataOfClass(InUserDataClass) end

