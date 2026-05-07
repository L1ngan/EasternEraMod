---Actor responsible for controlling a specific level sequence in the world.
---@class ALevelSequenceActor : AActor
---@field public PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field public SequencePlayer ULevelSequencePlayer
---@field public LevelSequenceAsset ULevelSequence
---@field public CameraSettings FLevelSequenceCameraSettings
---@field public BurnInOptions ULevelSequenceBurnInOptions
---@field public BindingOverrides UMovieSceneBindingOverrides @Mapping of actors to override the sequence bindings with
---@field public bOverrideInstanceData boolean @Enable specification of dynamic instance data to be supplied to the sequence during playback
---@field public bReplicatePlayback boolean @If true, playback of this level sequence on the server will be synchronized across other clients
---@field public DefaultInstanceData UObject @Instance data that can be used to dynamically control sequence evaluation at runtime
---@field private BurnInInstance ULevelSequenceBurnIn @Burn-in widget
---@field private bShowBurnin boolean
---@field private WorldPartitionResolveData FWorldPartitionResolveData
local ALevelSequenceActor = {}

---Show burnin
function ALevelSequenceActor:ShowBurnin() end

---Set the level sequence being played by this actor.
---@param InSequence ULevelSequence
function ALevelSequenceActor:SetSequence(InSequence) end

---Set whether or not to replicate playback for this actor
---@param ReplicatePlayback boolean
function ALevelSequenceActor:SetReplicatePlayback(ReplicatePlayback) end

---Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.
---                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set
---                                                               set in Sequencer UI. This function will not modify the original asset.
---@param BindingTag string
---@param Actors TArray_AActor_
---@param bAllowBindingsFromAsset boolean @[opt] 
function ALevelSequenceActor:SetBindingByTag(BindingTag, Actors, bAllowBindingsFromAsset) end

---Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset
---                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set
---                                                               set in Sequencer UI. This function will not modify the original asset.
---@param Binding FMovieSceneObjectBindingID
---@param Actors TArray_AActor_
---@param bAllowBindingsFromAsset boolean @[opt] 
function ALevelSequenceActor:SetBinding(Binding, Actors, bAllowBindingsFromAsset) end

---Resets all overridden bindings back to the defaults defined by the Level Sequence asset
function ALevelSequenceActor:ResetBindings() end

---Resets the specified binding back to the defaults defined by the Level Sequence asset
---@param Binding FMovieSceneObjectBindingID
function ALevelSequenceActor:ResetBinding(Binding) end

---Removes the specified actor from the specified binding's actor array
---@param Tag string
---@param Actor AActor
function ALevelSequenceActor:RemoveBindingByTag(Tag, Actor) end

---Removes the specified actor from the specified binding's actor array
---@param Binding FMovieSceneObjectBindingID
---@param Actor AActor
function ALevelSequenceActor:RemoveBinding(Binding, Actor) end

function ALevelSequenceActor:OnLevelSequenceLoaded__DelegateSignature() end

---Hide burnin
function ALevelSequenceActor:HideBurnin() end

---Access this actor's sequence player, or None if it is not yet initialized
---@return ULevelSequencePlayer
function ALevelSequenceActor:GetSequencePlayer() end

---Get the level sequence being played by this actor.
---@return ULevelSequence
function ALevelSequenceActor:GetSequence() end

---Retrieve all the bindings that have been tagged with the specified name
---@param Tag string
---@return TArray_FMovieSceneObjectBindingID_
function ALevelSequenceActor:FindNamedBindings(Tag) end

---Retrieve the first object binding that has been tagged with the specified name
---@param Tag string
---@return FMovieSceneObjectBindingID
function ALevelSequenceActor:FindNamedBinding(Tag) end

---Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.
---                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set
---                                                               set in Sequencer UI. This function will not modify the original asset.
---@param BindingTag string
---@param Actor AActor
---@param bAllowBindingsFromAsset boolean @[opt] 
function ALevelSequenceActor:AddBindingByTag(BindingTag, Actor, bAllowBindingsFromAsset) end

---Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset
---                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set
---                                                               set in Sequencer UI. This function will not modify the original asset.
---@param Binding FMovieSceneObjectBindingID
---@param Actor AActor
---@param bAllowBindingsFromAsset boolean @[opt] 
function ALevelSequenceActor:AddBinding(Binding, Actor, bAllowBindingsFromAsset) end

