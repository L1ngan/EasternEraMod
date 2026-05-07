---@class UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
---@field private SectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior @Specifies what should happen to the niagara system from before the section evaluates up until the first frame of the section.
---@field private SectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior @Specifies what should happen to the niagara system when section is evaluating from the 2nd frame until the last frame.
---@field private SectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior @Specifies what should happen to the niagara system when section evaluation finishes.
---@field private AgeUpdateMode ENiagaraAgeUpdateMode @Specifies how sequencer should update the age of the controlled niagara system.
---@field private bAllowScalability boolean
local UMovieSceneNiagaraSystemSpawnSection = {}

