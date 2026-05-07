---This class is deprecated, it has been replaced by DataLayerManager.
---@class UDataLayerSubsystem : UWorldSubsystem
---@field public OnDataLayerRuntimeStateChanged MulticastDelegate
---@field private DataLayerLoadingPolicyClass TSoftClassPtr<UDataLayerLoadingPolicy>
local UDataLayerSubsystem = {}

---@param InDataLayerLabel string
---@param InState EDataLayerState
function UDataLayerSubsystem:SetDataLayerStateByLabel(InDataLayerLabel, InState) end

---@param InDataLayer FActorDataLayer
---@param InState EDataLayerState
function UDataLayerSubsystem:SetDataLayerState(InDataLayer, InState) end

---@param InDataLayerLabel string
---@param InState EDataLayerRuntimeState
---@param bInIsRecursive boolean @[opt] 
function UDataLayerSubsystem:SetDataLayerRuntimeStateByLabel(InDataLayerLabel, InState, bInIsRecursive) end

---@param InDataLayer FActorDataLayer
---@param InState EDataLayerRuntimeState
---@param bInIsRecursive boolean @[opt] 
function UDataLayerSubsystem:SetDataLayerRuntimeState(InDataLayer, InState, bInIsRecursive) end

---@param InDataLayerAsset UDataLayerAsset
---@param InState EDataLayerRuntimeState
---@param bInIsRecursive boolean @[opt] 
function UDataLayerSubsystem:SetDataLayerInstanceRuntimeState(InDataLayerAsset, InState, bInIsRecursive) end

---@return TSet_string_
function UDataLayerSubsystem:GetLoadedDataLayerNames() end

---@param InDataLayerLabel string
---@return EDataLayerState
function UDataLayerSubsystem:GetDataLayerStateByLabel(InDataLayerLabel) end

---@param InDataLayer FActorDataLayer
---@return EDataLayerState
function UDataLayerSubsystem:GetDataLayerState(InDataLayer) end

---@param InDataLayerLabel string
---@return EDataLayerRuntimeState
function UDataLayerSubsystem:GetDataLayerRuntimeStateByLabel(InDataLayerLabel) end

---@param InDataLayer FActorDataLayer
---@return EDataLayerRuntimeState
function UDataLayerSubsystem:GetDataLayerRuntimeState(InDataLayer) end

---@param InDataLayerAsset UDataLayerAsset
---@return EDataLayerRuntimeState
function UDataLayerSubsystem:GetDataLayerInstanceRuntimeState(InDataLayerAsset) end

---@param InDataLayerAsset UDataLayerAsset
---@return UDataLayerInstance
function UDataLayerSubsystem:GetDataLayerInstanceFromAsset(InDataLayerAsset) end

---@param InDataLayerAsset UDataLayerAsset
---@return EDataLayerRuntimeState
function UDataLayerSubsystem:GetDataLayerInstanceEffectiveRuntimeState(InDataLayerAsset) end

---@param InDataLayerName string
---@return UDataLayerInstance
function UDataLayerSubsystem:GetDataLayerFromName(InDataLayerName) end

---@param InDataLayerLabel string
---@return UDataLayerInstance
function UDataLayerSubsystem:GetDataLayerFromLabel(InDataLayerLabel) end

---@param InDataLayerLabel string
---@return EDataLayerRuntimeState
function UDataLayerSubsystem:GetDataLayerEffectiveRuntimeStateByLabel(InDataLayerLabel) end

---@param InDataLayer FActorDataLayer
---@return EDataLayerRuntimeState
function UDataLayerSubsystem:GetDataLayerEffectiveRuntimeState(InDataLayer) end

---@param InDataLayer FActorDataLayer
---@return UDataLayerInstance
function UDataLayerSubsystem:GetDataLayer(InDataLayer) end

---@return TSet_string_
function UDataLayerSubsystem:GetActiveDataLayerNames() end

