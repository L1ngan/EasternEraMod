---CVD version of an Instance Static Mesh Component that holds additional CVD data
---@class UChaosVDInstancedStaticMeshComponent : UInstancedStaticMeshComponent
local UChaosVDInstancedStaticMeshComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDInstancedStaticMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChaosVDInstancedStaticMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDInstancedStaticMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

