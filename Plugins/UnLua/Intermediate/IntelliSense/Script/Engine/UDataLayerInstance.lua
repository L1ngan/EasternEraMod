---@class UDataLayerInstance : UObject
---@field protected bIsVisible boolean @Whether actors associated with the DataLayer are visible in the viewport
---@field protected bIsInitiallyVisible boolean @Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map
---@field protected bIsInitiallyLoadedInEditor boolean @Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user
---@field protected bIsLoadedInEditor boolean @Wheter the data layer is loaded in editor (user setting)
---@field protected bIsLoadedInEditorChangedByUserOperation boolean @Whether this data layer editor visibility was changed by a user operation
---@field protected bIsLocked boolean @Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it
---@field protected OverrideBlockOnSlowStreaming EOverrideBlockOnSlowStreaming
---@field protected StreamingPriority integer @Determines the streaming priority (lower value means higher priority), relative to target grid cells. Priority 0 means the same priority as target grid cells.
---@field protected InitialRuntimeState EDataLayerRuntimeState @Initial runtime state of this data layer instance. Only supported if it's runtime and not client/server only.
---@field private Parent UDataLayerInstance
---@field private Children TArray<UDataLayerInstance>
local UDataLayerInstance = {}

---@return boolean
function UDataLayerInstance:IsVisible() end

---@return boolean
function UDataLayerInstance:IsServerOnly() end

---@return boolean
function UDataLayerInstance:IsRuntime() end

---@return boolean
function UDataLayerInstance:IsInitiallyVisible() end

---@return boolean
function UDataLayerInstance:IsEffectiveVisible() end

---@return boolean
function UDataLayerInstance:IsClientOnly() end

---@return EDataLayerType
function UDataLayerInstance:GetType() end

---@return EDataLayerRuntimeState
function UDataLayerInstance:GetInitialRuntimeState() end

---@return FColor
function UDataLayerInstance:GetDebugColor() end

---@return string
function UDataLayerInstance:GetDataLayerShortName() end

---@return string
function UDataLayerInstance:GetDataLayerFullName() end

---@return UDataLayerAsset
function UDataLayerInstance:GetAsset() end

