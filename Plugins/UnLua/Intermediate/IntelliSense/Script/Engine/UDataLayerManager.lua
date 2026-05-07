---@class UDataLayerManager : UObject
---@field public OnDataLayerInstanceRuntimeStateChanged MulticastDelegate @Called when a Data Layer instance runtime state has changed.
---@field private DataLayerLoadingPolicyClass TSoftClassPtr<UDataLayerLoadingPolicy>
---@field private DataLayerInstanceWithAssetClass TSoftClassPtr<UDataLayerInstanceWithAsset>
---@field private DataLayerLoadingPolicy UDataLayerLoadingPolicy
local UDataLayerManager = {}

---Finds a matching Data Layer instance referencing the provided Data Layer asset and changes its runtime state (if any).
---If recursive is set to true, the runtime state will also be applied to all child Data Layer instances.
---Note:
---- Changing the runtime state of a Client-Only Data Layer instance must be done on the client side or else it will have no effect.
---- Changing the runtime state of a Server-Only Data Layer instance can only be done on the server side or else it will have no effect.
---- Changing the runtime state of a runtime Data Layer instance (with no Load Filter set on the asset) must be done on the server side
---  or else it will have no effect. The runtime state will then be replicated on the client.
---(see Data Layer asset Load Filter for more details)
---@param InDataLayerAsset UDataLayerAsset
---@param InState EDataLayerRuntimeState
---@param bInIsRecursive boolean @[opt] 
---@return boolean
function UDataLayerManager:SetDataLayerRuntimeState(InDataLayerAsset, InState, bInIsRecursive) end

---Changes the Data Layer instance runtime state.
---If recursive is set to true, the runtime state will also be applied to all child Data Layer instances.
---Note:
---- Changing the runtime state of a Client-Only Data Layer instance must be done on the client side or else it will have no effect.
---- Changing the runtime state of a Server-Only Data Layer instance can only be done on the server side or else it will have no effect.
---- Changing the runtime state of a runtime Data Layer instance (with no Load Filter set on the asset) must be done on the server side
---  or else it will have no effect. The runtime state will then be replicated on the client.
---(see Data Layer asset Load Filter for more details)
---@param InDataLayerInstance UDataLayerInstance
---@param InState EDataLayerRuntimeState
---@param bInIsRecursive boolean @[opt] 
---@return boolean
function UDataLayerManager:SetDataLayerInstanceRuntimeState(InDataLayerInstance, InState, bInIsRecursive) end

---Returns all Data Layer instances.
---@return TArray_UDataLayerInstance_
function UDataLayerManager:GetDataLayerInstances() end

---Returns the Data Layer instance runtime state.
---@param InDataLayerInstance UDataLayerInstance
---@return EDataLayerRuntimeState
function UDataLayerManager:GetDataLayerInstanceRuntimeState(InDataLayerInstance) end

---Returns the Data Layer instance matching the provided Data Layer instance name (if any).
---@param InDataLayerInstanceName string
---@return UDataLayerInstance
function UDataLayerManager:GetDataLayerInstanceFromName(InDataLayerInstanceName) end

---Returns the Data Layer instance referencing the provided Data Layer asset (if any).
---@param InDataLayerAsset UDataLayerAsset
---@return UDataLayerInstance
function UDataLayerManager:GetDataLayerInstanceFromAsset(InDataLayerAsset) end

---Finds a matching Data Layer instance referencing the provided Data Layer asset and returns the Data Layer Instance runtime state.
---@param InDataLayerInstance UDataLayerInstance
---@return EDataLayerRuntimeState
function UDataLayerManager:GetDataLayerInstanceEffectiveRuntimeState(InDataLayerInstance) end

