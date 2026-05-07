---@class USequenceRecorderActorGroup : UObject
---@field public GroupName string
---@field public SequenceName string @The base name of the sequence to record to. This name will also be used to auto-generate any assets created by this recording.
---@field public SequenceRecordingBasePath FDirectoryPath @Base path for this recording. Sub-assets will be created in subdirectories as specified
---@field public bSpecifyTargetLevelSequence boolean @Whether we should specify the target level sequence or auto-create it
---@field public TargetLevelSequence ULevelSequence @The level sequence to record into
---@field public bDuplicateTargetLevelSequence boolean @Whether we should duplicate the target level sequence and record into the duplicate
---@field public bRecordTargetLevelSequenceLength boolean @Whether we should record to the length of the target level sequence
---@field public RecordedActors TArray<UActorRecording> @A list of actor recordings in this group which contains both the actors to record as well as settings for each one.
local USequenceRecorderActorGroup = {}

