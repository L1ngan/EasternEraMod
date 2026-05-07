---FRotationContext is a datastore for rotation data sent to the gizmo
---@class FRotationContext
---@field public bUseExplicitRotator boolean @Enable explicit rotation axis
---@field public RotationOrder EEulerRotationOrder @Order in which this rotation is expressed
---@field public Rotation FRotator @Rotation values
---@field public Offset FTransform @Parent offset transform
local FRotationContext = {}
