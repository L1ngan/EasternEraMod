---@class UTextureCubeArray : UTexture
---@field public SourceTextures TArray<UTextureCube> @Add Textures
---@field public bSourceGeneratedFromSourceTexturesArray boolean @Is set to true if the source texture was generated from the SourceTextures array (which is not always the case, i.e. the source texture could be imported from a DDS file containing multiple cubemaps). This transient property is used to control access to the SourceTextures array from UI using EditCondition mechanism (as any operation with the SourceTextures array would invalidate the originally imported source texture).
local UTextureCubeArray = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureCubeArray:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTextureCubeArray:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureCubeArray:AddAssetUserDataOfClass(InUserDataClass) end

