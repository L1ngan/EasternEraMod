---@class ULandscapeNaniteComponent : UStaticMeshComponent
---@field private ProxyContentId FGuid @The landscape proxy identity this Nanite representation was generated for
---@field private bEnabled boolean
---@field private SourceLandscapeComponents TArray<ULandscapeComponent> @Landscape Components which were used to generate this ULandscapeNaniteComponent
local ULandscapeNaniteComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeNaniteComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULandscapeNaniteComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeNaniteComponent:AddAssetUserDataOfClass(InUserDataClass) end

