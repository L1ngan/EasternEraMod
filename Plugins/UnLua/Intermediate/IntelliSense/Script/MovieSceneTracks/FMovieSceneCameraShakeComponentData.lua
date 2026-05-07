---Component data for camera shakes
---@class FMovieSceneCameraShakeComponentData
---@field public SectionData FMovieSceneCameraShakeSectionData @The shake data from the section that created this component
---@field public SectionStartTime FFrameNumber @The range of the section that created this component
---@field public SectionEndTime FFrameNumber
---@field public SectionSignature FGuid @The signature of the source section at the time the shake instance was created
local FMovieSceneCameraShakeComponentData = {}
