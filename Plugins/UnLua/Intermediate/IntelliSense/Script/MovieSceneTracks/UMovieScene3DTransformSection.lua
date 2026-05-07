---A 3D transform section
---@class UMovieScene3DTransformSection : UMovieSceneSection
---@field private TransformMask FMovieSceneTransformMask
---@field private Translation FMovieSceneDoubleChannel @Translation curves
---@field private Rotation FMovieSceneDoubleChannel @Rotation curves
---@field private Scale FMovieSceneDoubleChannel @Scale curves
---@field private ManualWeight FMovieSceneFloatChannel @Manual weight curve
---@field private OverrideRegistry UMovieSceneSectionChannelOverrideRegistry @Optional pointer to a "channels override" container object. This object would only be allocated if any channels are overridden with a non-standard channel
---@field private Constraints UMovieScene3DTransformSectionConstraints @Optional pointer to constraint channels
---@field private bUseQuaternionInterpolation boolean @Whether to use a quaternion linear interpolation between keys. This finds the 'shortest' rotation between keyed orientations.
---@field private Show3DTrajectory EShow3DTrajectory @Whether to show the 3d trajectory
local UMovieScene3DTransformSection = {}

