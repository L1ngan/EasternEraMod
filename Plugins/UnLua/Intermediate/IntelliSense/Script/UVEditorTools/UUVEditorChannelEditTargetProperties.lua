---@class UUVEditorChannelEditTargetProperties : UInteractiveToolPropertySet
---@field public Asset string
---@field public TargetChannel string
---@field public ReferenceChannel string
---@field public bActionNeedsAsset boolean
---@field public bActionNeedsReference boolean
---@field public bActionNeedsTarget boolean
local UUVEditorChannelEditTargetProperties = {}

---@return TArray_string_
function UUVEditorChannelEditTargetProperties:GetUVChannelNames() end

---@return TArray_string_
function UUVEditorChannelEditTargetProperties:GetAssetNames() end

