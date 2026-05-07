---@class UNavigationGraphNodeComponent : USceneComponent
---@field public Node FNavGraphNode
---@field public NextNodeComponent UNavigationGraphNodeComponent
---@field public PrevNodeComponent UNavigationGraphNodeComponent
local UNavigationGraphNodeComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavigationGraphNodeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNavigationGraphNodeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavigationGraphNodeComponent:AddAssetUserDataOfClass(InUserDataClass) end

