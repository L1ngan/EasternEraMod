---@class UActorRecording : USequenceRecordingBase
---@field public ActorSettings FActorRecordingSettings
---@field public bActive boolean @Whether this actor is active and to be recorded when the 'Record' button is pressed.
---@field public bCreateLevelSequence boolean @Whether to create a level sequence for this actor recording
---@field public TargetLevelSequence ULevelSequence @The level sequence to record into
---@field public TargetName string @Optional target name to record to. If not specified, the actor label will be used
---@field public TakeNumber integer @Specify the take number for the new recording
---@field public bSpecifyTargetAnimation boolean @Whether we should specify the target animation or auto-create it
---@field public TargetAnimation UAnimSequence @The target animation we want to record to
---@field public AnimationSettings FAnimationRecordingSettings @The settings to apply to this actor's animation
---@field public bRecordToPossessable boolean @Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors. Defaults to the global setting.
---@field private ActorToRecord TSoftObjectPtr<AActor> @The actor we want to record
local UActorRecording = {}

