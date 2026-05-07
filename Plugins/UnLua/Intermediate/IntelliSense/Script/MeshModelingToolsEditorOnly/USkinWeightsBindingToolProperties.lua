---@class USkinWeightsBindingToolProperties : UInteractiveToolPropertySet
---@field public CurrentBone string
---@field public BindingType ESkinWeightsBindType @Binding type to use
---@field public Stiffness number @Stiffness of binding. Lower values allow more distant bones to contribute more
---@field public MaxInfluences integer @Maximum bones that will influence each vertex
---@field public VoxelResolution integer @The resolution of the voxel grid if doing geodesic voxel binding
local USkinWeightsBindingToolProperties = {}

