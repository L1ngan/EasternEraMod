---Easy way to modify curve values on a pose
---@class FAnimNode_ModifyCurve : FAnimNode_Base
---@field public SourcePose FPoseLink
---@field public CurveMap TMap<string, number>
---@field public CurveValues TArray<number>
---@field public CurveNames TArray<string>
---@field public Alpha number
---@field public ApplyMode EModifyCurveApplyMode
local FAnimNode_ModifyCurve = {}
