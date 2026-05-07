---@class FActorPerceptionUpdateInfo
---@field public TargetId integer @Id of to the stimulus source
---@field public Target TWeakObjectPtr<AActor> @Actor associated to the stimulus (can be null)
---@field public Stimulus FAIStimulus @Updated stimulus
local FActorPerceptionUpdateInfo = {}
