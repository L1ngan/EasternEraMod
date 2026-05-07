---@class UBrainComponent : UActorComponent
---@field protected BlackboardComp UBlackboardComponent @blackboard component
---@field protected AIOwner AAIController
local UBrainComponent = {}

---Stops currently running brain logic.
---@param Reason string
function UBrainComponent:StopLogic(Reason) end

---Starts brain logic. If brain is already running, will not do anything.
function UBrainComponent:StartLogic() end

---Restarts currently running or previously ran brain logic.
function UBrainComponent:RestartLogic() end

---@return boolean
function UBrainComponent:IsRunning() end

---@return boolean
function UBrainComponent:IsPaused() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBrainComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBrainComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBrainComponent:AddAssetUserDataOfClass(InUserDataClass) end

