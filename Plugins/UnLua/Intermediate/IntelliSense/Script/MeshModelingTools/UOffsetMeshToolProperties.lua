---Base properties of Offset
---@class UOffsetMeshToolProperties : UInteractiveToolPropertySet
---@field public OffsetType EOffsetMeshToolOffsetType @Type of Offsetting to apply
---@field public Distance number @Offset Distance in World Units
---@field public bCreateShell boolean @If true, create a thickened shell, instead of only moving the input vertices
local UOffsetMeshToolProperties = {}

