---@class UChaosGameplayEventDispatcher : UChaosEventListenerComponent
---@field private CollisionEventRegistrations TMap<UPrimitiveComponent, FChaosHandlerSet>
---@field private BreakEventRegistrations TMap<UPrimitiveComponent, FBreakEventCallbackWrapper>
---@field private RemovalEventRegistrations TMap<UPrimitiveComponent, FRemovalEventCallbackWrapper>
---@field private CrumblingEventRegistrations TMap<UPrimitiveComponent, FCrumblingEventCallbackWrapper>
local UChaosGameplayEventDispatcher = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosGameplayEventDispatcher:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChaosGameplayEventDispatcher:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChaosGameplayEventDispatcher:AddAssetUserDataOfClass(InUserDataClass) end

