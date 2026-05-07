---@class UBakeRenderCaptureInputToolProperties : UInteractiveToolPropertySet
---@field public TargetStaticMesh UStaticMesh @Target mesh to sample to
---@field public TargetUVLayer string @UV channel to use for the target mesh
---@field public TargetUVLayerNamesList TArray<string>
local UBakeRenderCaptureInputToolProperties = {}

---@return TArray_string_
function UBakeRenderCaptureInputToolProperties:GetTargetUVLayerNamesFunc() end

---@return integer
function UBakeRenderCaptureInputToolProperties:GetTargetUVLayerIndex() end

