---@class UDEPRECATED_DataLayer : UObject
---@field private bIsVisible boolean @Whether actors associated with the DataLayer are visible in the viewport
---@field private bIsInitiallyVisible boolean @Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map
---@field private bIsInitiallyLoadedInEditor boolean @Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user
---@field private bIsLoadedInEditor boolean @Wheter the data layer is loaded in editor (user setting)
---@field private bIsLoadedInEditorChangedByUserOperation boolean @Whether this data layer editor visibility was changed by a user operation
---@field private bIsLocked boolean @Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it
---@field private DataLayerLabel string @The display name of the Data Layer
---@field private bIsRuntime boolean @Whether the Data Layer affects actor runtime loading
---@field private InitialRuntimeState EDataLayerRuntimeState
---@field private DebugColor FColor
local UDEPRECATED_DataLayer = {}

---@return boolean
function UDEPRECATED_DataLayer:IsVisible() end

---@return boolean
function UDEPRECATED_DataLayer:IsRuntime() end

---@return boolean
function UDEPRECATED_DataLayer:IsInitiallyVisible() end

---@return boolean
function UDEPRECATED_DataLayer:IsInitiallyActive() end

---@return boolean
function UDEPRECATED_DataLayer:IsEffectiveVisible() end

---@return boolean
function UDEPRECATED_DataLayer:IsDynamicallyLoaded() end

---@return EDataLayerState
function UDEPRECATED_DataLayer:GetInitialState() end

---@return EDataLayerRuntimeState
function UDEPRECATED_DataLayer:GetInitialRuntimeState() end

---@return FColor
function UDEPRECATED_DataLayer:GetDebugColor() end

---@return string
function UDEPRECATED_DataLayer:GetDataLayerLabel() end

---@param ActorDataLayer FActorDataLayer
---@return boolean
function UDEPRECATED_DataLayer:Equals(ActorDataLayer) end

