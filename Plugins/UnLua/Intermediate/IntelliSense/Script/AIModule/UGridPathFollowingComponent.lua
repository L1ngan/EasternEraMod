---Path following augmented with local navigation grids
---Keeps track of nearby grids and use them instead of navigation path when agent is inside.
---Once outside grid, regular path following is resumed.
---This allows creating dynamic navigation obstacles with fully static navigation (e.g. static navmesh),
---as long as they are minor modifications for path. Not recommended for blocking off entire corridors.
---Does not replace proper avoidance for dynamic obstacles!
---@class UGridPathFollowingComponent : UPathFollowingComponent
---@field protected GridManager UNavLocalGridManager
local UGridPathFollowingComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGridPathFollowingComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGridPathFollowingComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGridPathFollowingComponent:AddAssetUserDataOfClass(InUserDataClass) end

