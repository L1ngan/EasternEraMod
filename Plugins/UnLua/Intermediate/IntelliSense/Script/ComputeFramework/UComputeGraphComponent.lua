---Component which holds a context for a UComputeGraph.
---This object binds the graph to its data providers, and queues the execution.
---@class UComputeGraphComponent : UActorComponent
---@field public ComputeGraph UComputeGraph @The Compute Graph asset.
---@field private ComputeGraphInstance FComputeGraphInstance
local UComputeGraphComponent = {}

---Queue the graph for execution at the next render update.
function UComputeGraphComponent:QueueExecute() end

---Destroy all associated DataProvider objects.
function UComputeGraphComponent:DestroyDataProviders() end

---Create all the Data Provider objects for a given binding object of the ComputeGraph.
---@param InBindingIndex integer
---@param InBindingObject UObject
function UComputeGraphComponent:CreateDataProviders(InBindingIndex, InBindingObject) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UComputeGraphComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UComputeGraphComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UComputeGraphComponent:AddAssetUserDataOfClass(InUserDataClass) end

