---@class ASequencerKeyActor : AActor
---@field private KeyMeshComponent UStaticMeshComponent @The key mesh
---@field private AssociatedActor AActor @The actor whose transform was used to build this key
---@field private TrackSection UMovieScene3DTransformSection @The track section this key resides on
---@field private KeyTime number @The time this key is associated with in Sequencer
local ASequencerKeyActor = {}

