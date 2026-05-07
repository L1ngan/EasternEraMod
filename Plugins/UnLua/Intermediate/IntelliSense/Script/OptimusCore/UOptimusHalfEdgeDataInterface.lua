---Half Edge Data Interface provides vertex connectivity info, even across material sections, see ComputeNormalsTangents deformer function for example usage.
---Skeletal mesh assets using this data interface should have "BuildHalfEdgeBuffers" turned on under LODInfo settings
---@class UOptimusHalfEdgeDataInterface : UOptimusComputeDataInterface
local UOptimusHalfEdgeDataInterface = {}

