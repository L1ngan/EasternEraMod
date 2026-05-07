---Actor Component that contains all the scene queries recorded at the current loaded frame
---@class UChaosVDSceneQueryDataComponent : UChaosVDSolverDataComponent
local UChaosVDSceneQueryDataComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDSceneQueryDataComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChaosVDSceneQueryDataComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDSceneQueryDataComponent:AddAssetUserDataOfClass(InUserDataClass) end

