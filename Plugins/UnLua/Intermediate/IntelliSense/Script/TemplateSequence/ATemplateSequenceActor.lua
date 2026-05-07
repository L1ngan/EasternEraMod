---Actor responsible for controlling a specific template sequence in the world.
---@class ATemplateSequenceActor : AActor
---@field public PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field public SequencePlayer UTemplateSequencePlayer
---@field public TemplateSequence FSoftObjectPath
---@field public BindingOverride FTemplateSequenceBindingOverrideData @The override for the template sequence's root object binding. See SetBinding.
local ATemplateSequenceActor = {}

---Set the template sequence being played by this actor.
---@param InSequence UTemplateSequence
function ATemplateSequenceActor:SetSequence(InSequence) end

---Set the actor to play the template sequence onto, by setting up an override for the template
---sequence's root object binding.
---@param Actor AActor
---@param bOverridesDefault boolean @[opt] 
function ATemplateSequenceActor:SetBinding(Actor, bOverridesDefault) end

---Get the template sequence being played by this actor.
---@return UTemplateSequence
function ATemplateSequenceActor:LoadSequence() end

---Get the actor's sequence player, or nullptr if it not yet initialized.
---@return UTemplateSequencePlayer
function ATemplateSequenceActor:GetSequencePlayer() end

---Get the template sequence being played by this actor.
---@return UTemplateSequence
function ATemplateSequenceActor:GetSequence() end

