---@class UDataLayerAsset : UDataAsset
---@field protected DataLayerType EDataLayerType @Whether the Data Layer affects actor runtime loading
---@field protected bSupportsActorFilters boolean
---@field private DebugColor FColor
---@field private LoadFilter EDataLayerLoadFilter
local UDataLayerAsset = {}

---@return boolean
function UDataLayerAsset:IsServerOnly() end

---@return boolean
function UDataLayerAsset:IsRuntime() end

---@return boolean
function UDataLayerAsset:IsClientOnly() end

---@return EDataLayerType
function UDataLayerAsset:GetType() end

---@return FColor
function UDataLayerAsset:GetDebugColor() end

