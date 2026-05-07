---Component that references all particle data for a specific solver for the current frame, and handles how the visualization
---is updated based on that data
---@class UChaosVDParticleDataComponent : UChaosVDSolverDataComponent
local UChaosVDParticleDataComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDParticleDataComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChaosVDParticleDataComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDParticleDataComponent:AddAssetUserDataOfClass(InUserDataClass) end

