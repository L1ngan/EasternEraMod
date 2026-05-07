---@class UCurveEditorReduceFilter : UCurveEditorFilterBase
---@field public Tolerance number @Minimum change in values required for a key to be considered distinct enough to keep.
---@field public bTryRemoveUserSetTangentKeys boolean @Flag whether or not to use SampleRate for sampling between evaluated keys, which allows for removing user-tangent keys.
---@field public SampleRate FFrameRate @Rate at which the curve should be sampled to compare against value tolerance.
local UCurveEditorReduceFilter = {}

