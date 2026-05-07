---Helper component used to re-route GT data loaded as a Solver Frame.
---This is part of a compatibility layer to support GT data from multiple files
---Until we refactor CVD to either support multiple GT Tracks, or remove the difference between GT track and solver track
---@class UChaosVDAdditionalGTDataRouterComponent : UChaosVDSolverDataComponent
local UChaosVDAdditionalGTDataRouterComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDAdditionalGTDataRouterComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChaosVDAdditionalGTDataRouterComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosVDAdditionalGTDataRouterComponent:AddAssetUserDataOfClass(InUserDataClass) end

