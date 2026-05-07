---Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin.
---@class UDefaultLevelSequenceInstanceData : UObject
---@field public TransformOriginActor AActor @When set, this actor's world position will be used as the transform origin for all absolute transform sections
---@field public TransformOrigin FTransform @Specifies a transform that offsets all absolute transform sections in this sequence. Scale is ignored. Not applied to Relative or Additive sections.
local UDefaultLevelSequenceInstanceData = {}

---Get the transform from which all absolute component transform sections should be relative. Scale is ignored.
---@return FTransform
function UDefaultLevelSequenceInstanceData:BP_GetTransformOrigin() end

