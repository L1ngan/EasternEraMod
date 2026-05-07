---A brush component defines a shape that can be modified within the editor. They are used both as part of BSP building, and for volumes.
---@class UBrushComponent : UPrimitiveComponent
---@field public Brush UModel
---@field public BrushBodySetup UBodySetup @Description of collision
local UBrushComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBrushComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBrushComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBrushComponent:AddAssetUserDataOfClass(InUserDataClass) end

