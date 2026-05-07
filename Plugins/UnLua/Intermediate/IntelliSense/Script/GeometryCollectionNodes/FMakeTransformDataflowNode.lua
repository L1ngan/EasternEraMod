---Make an FTransform
---Note: Originaly this version was depricated and replaced with FMakeTransformDataflowNode_v2 but when AnyRotationType was
---introduced with the ConvertAnyRotation node FMakeTransformDataflowNode_v2 became obsolete and this version became the current version again
---@class FMakeTransformDataflowNode : FDataflowNode
---@field private InTranslation FVector @Translation
---@field private InRotation FVector @Rotation as Euler
---@field private InScale FVector @Scale
---@field private OutTransform FTransform @Result transform
local FMakeTransformDataflowNode = {}
