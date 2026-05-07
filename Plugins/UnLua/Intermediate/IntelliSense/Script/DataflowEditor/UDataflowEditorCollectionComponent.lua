---FleshComponent
---@class UDataflowEditorCollectionComponent : UDynamicMeshComponent
---@field public MeshIndex integer
---@field public Node UDataflowEdNode
---@field public WireframeComponent UMeshWireframeComponent
local UDataflowEditorCollectionComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDataflowEditorCollectionComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDataflowEditorCollectionComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDataflowEditorCollectionComponent:AddAssetUserDataOfClass(InUserDataClass) end

