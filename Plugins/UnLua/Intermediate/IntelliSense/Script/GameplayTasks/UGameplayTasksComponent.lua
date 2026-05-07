---The core ActorComponent for interfacing with the GameplayAbilities System
---@class UGameplayTasksComponent : UActorComponent
---@field protected TaskPriorityQueue TArray<UGameplayTask>
---@field protected TickingTasks TArray<UGameplayTask> @Array of currently active UGameplayTask that require ticking
---@field protected KnownTasks TArray<UGameplayTask> @All known tasks (processed by this component) referenced for GC
---@field public OnClaimedResourcesChange MulticastDelegate
---@field private SimulatedTasks TArray<UGameplayTask> @Tasks that run on simulated proxies
local UGameplayTasksComponent = {}

---@param PreviousSimulatedTasks TArray_UGameplayTask_
function UGameplayTasksComponent:OnRep_SimulatedTasks(PreviousSimulatedTasks) end

---@param TaskOwner TScriptInterface_UGameplayTaskOwnerInterface_
---@param Task UGameplayTask
---@param Priority integer
---@param AdditionalRequiredResources TArray_TSubclassOf_UGameplayTaskResource__
---@param AdditionalClaimedResources TArray_TSubclassOf_UGameplayTaskResource__
---@return EGameplayTaskRunResult
function UGameplayTasksComponent.K2_RunGameplayTask(TaskOwner, Task, Priority, AdditionalRequiredResources, AdditionalClaimedResources) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayTasksComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGameplayTasksComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayTasksComponent:AddAssetUserDataOfClass(InUserDataClass) end

