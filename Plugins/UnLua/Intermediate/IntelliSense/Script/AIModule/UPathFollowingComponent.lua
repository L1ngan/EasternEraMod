---@class UPathFollowingComponent : UActorComponent
---@field protected MovementComp UNavMovementComponent
---@field protected MyNavData ANavigationData @navigation data for agent described in movement component
local UPathFollowingComponent = {}

---called when NavigationSystem registers new navigation data type while this component
---    instance has empty MyNavData. This is usually the case for AI agents hand-placed
---    on levels.
---@param NavData ANavigationData
function UPathFollowingComponent:OnNavDataRegistered(NavData) end

---called when moving agent collides with another actor
---@param SelfActor AActor
---@param OtherActor AActor
---@param NormalImpulse FVector
---@param Hit FHitResult
function UPathFollowingComponent:OnActorBump(SelfActor, OtherActor, NormalImpulse, Hit) end

---@return FVector
function UPathFollowingComponent:GetPathDestination() end

---@return integer
function UPathFollowingComponent:GetPathActionType() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPathFollowingComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPathFollowingComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPathFollowingComponent:AddAssetUserDataOfClass(InUserDataClass) end

