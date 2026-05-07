---A track representing an emitter in the niagara effect editor timeline.
---@class UMovieSceneNiagaraEmitterTrack : UMovieSceneNameableTrack
---@field private Sections TArray<UMovieSceneSection>
---@field private bSectionsWereModified boolean
---@field private EmitterHandleId FGuid @Used for detecting copy/paste
---@field private SystemPath string @Used for detecting copy/paste
local UMovieSceneNiagaraEmitterTrack = {}

