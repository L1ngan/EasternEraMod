---@class FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
---@field public PathBindingID FMovieSceneObjectBindingID @The object binding ID of the path we should attach to
---@field public TimingCurve FMovieSceneFloatChannel @The timing curve
---@field public FrontAxisEnum MovieScene3DPathSection_Axis @Front Axis
---@field public UpAxisEnum MovieScene3DPathSection_Axis @Up Axis
---@field public bFollow boolean @Follow Curve
---@field public bReverse boolean @Reverse Timing
---@field public bForceUpright boolean @Force Upright
local FMovieScene3DPathSectionTemplate = {}
