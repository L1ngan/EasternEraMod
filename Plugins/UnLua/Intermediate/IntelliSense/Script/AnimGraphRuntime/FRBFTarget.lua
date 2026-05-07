---Data about a particular target in the RBF, including scaling factor
---@class FRBFTarget : FRBFEntry
---@field public ScaleFactor number @How large the influence of this target.
---@field public bApplyCustomCurve boolean @Whether we want to apply an additional custom curve when activating this target.           Ignored if the solver type is Interpolative.
---@field public CustomCurve FRichCurve @Custom curve to apply to activation of this target, if bApplyCustomCurve is true.               Ignored if the solver type is Interpolative.
---@field public DistanceMethod ERBFDistanceMethod @Override the distance method used to calculate the distance from this target to               the input. Ignored if the solver type is Interpolative.
---@field public FunctionType ERBFFunctionType @Override the falloff function used to smooth the distance from this target to               the input. Ignored if the solver type is Interpolative.
local FRBFTarget = {}
