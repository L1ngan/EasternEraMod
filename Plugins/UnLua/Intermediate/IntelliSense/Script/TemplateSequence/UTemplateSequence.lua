---* Movie scene animation that can be instanced multiple times inside a level sequence.
---@class UTemplateSequence : UMovieSceneSequence
---@field public MovieScene UMovieScene
---@field public BoundActorClass TSoftClassPtr<AActor>
---@field public BoundActorComponents TMap<FGuid, string>
local UTemplateSequence = {}

