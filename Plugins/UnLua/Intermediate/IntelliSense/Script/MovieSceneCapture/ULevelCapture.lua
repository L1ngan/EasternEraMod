---@class ULevelCapture : UMovieSceneCapture
---@field public bAutoStartCapture boolean @Specifies whether the capture should start immediately, or whether it will be invoked externally (through StartMovieCapture/StopMovieCapture exec commands)
---@field private PrerequisiteActorId FGuid @Copy of the ID from PrerequisiteActor. Required because JSON serialization exports the path of the object, rather that its GUID
local ULevelCapture = {}

