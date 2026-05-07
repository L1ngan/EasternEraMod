---Simple Component intended to be used as part of 3D Gizmos.
---Draws outline of 3D Box based on parameters.
---@class UGizmoBoxComponent : UGizmoBaseComponent
---@field public Origin FVector
---@field public Rotation FQuat
---@field public Dimensions FVector
---@field public LineThickness number
---@field public bRemoveHiddenLines boolean
---@field public bEnableAxisFlip boolean
local UGizmoBoxComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoBoxComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoBoxComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoBoxComponent:AddAssetUserDataOfClass(InUserDataClass) end

