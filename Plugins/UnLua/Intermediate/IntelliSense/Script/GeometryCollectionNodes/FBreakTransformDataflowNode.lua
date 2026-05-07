---Break a Transform into Translation, Rotation (Euler, Rotator, Quaternion), Scale
---@class FBreakTransformDataflowNode : FDataflowNode
---@field private Transform FTransform @Transform to break into components
---@field private Translation FDataflowVectorTypes @Translation
---@field private Rotation FVector @Rotation as Euler
---@field private Rotator FRotator @Rotation as a rotator
---@field private Quat FQuat @Rotation as a quaternion
---@field private Scale FDataflowVectorTypes @Scale
local FBreakTransformDataflowNode = {}
