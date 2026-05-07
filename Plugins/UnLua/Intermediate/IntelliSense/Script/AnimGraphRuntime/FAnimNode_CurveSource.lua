---Supply curves from some external source (e.g. audio)
---@class FAnimNode_CurveSource : FAnimNode_Base
---@field public SourcePose FPoseLink
---@field public SourceBinding string @The binding of the curve source we want to bind to. We will bind to an object that implements ICurveSourceInterface. First we check the actor that owns this (if any), then we check each of its components to see if we should bind to the source that matches this name.
---@field public Alpha number @How much we wan to blend the curve in by
---@field public CurveSource TScriptInterface<UCurveSourceInterface> @Our bound source
local FAnimNode_CurveSource = {}
