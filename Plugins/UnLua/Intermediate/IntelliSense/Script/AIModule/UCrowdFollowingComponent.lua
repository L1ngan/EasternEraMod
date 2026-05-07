---@class UCrowdFollowingComponent : UPathFollowingComponent
---@field public CrowdAgentMoveDirection FVector
local UCrowdFollowingComponent = {}

---main switch for crowd steering & avoidance
---@param bSuspend boolean
function UCrowdFollowingComponent:SuspendCrowdSteering(bSuspend) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCrowdFollowingComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCrowdFollowingComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCrowdFollowingComponent:AddAssetUserDataOfClass(InUserDataClass) end

