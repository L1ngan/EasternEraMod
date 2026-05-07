---@class UMeshUVChannelProperties : UInteractiveToolPropertySet
---@field public UVChannel string @Select UV channel in the mesh
---@field public UVChannelNamesList TArray<string>
local UMeshUVChannelProperties = {}

---@return TArray_string_
function UMeshUVChannelProperties:GetUVChannelNamesFunc() end

