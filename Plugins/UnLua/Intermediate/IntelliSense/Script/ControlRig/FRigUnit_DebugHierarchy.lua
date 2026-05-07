---Draws vectors on each bone in the viewport across the entire hierarchy
---@class FRigUnit_DebugHierarchy : FRigVMFunction_DebugBase
---@field public ExecutePin FRigVMExecutePin
---@field public Items TArray<FRigElementKey> @the items to draw the pose for. if this is empty we'll draw the whole hierarchy
---@field public Scale number
---@field public Color FLinearColor
---@field public Thickness number
---@field public WorldOffset FTransform
---@field public bEnabled boolean
local FRigUnit_DebugHierarchy = {}
