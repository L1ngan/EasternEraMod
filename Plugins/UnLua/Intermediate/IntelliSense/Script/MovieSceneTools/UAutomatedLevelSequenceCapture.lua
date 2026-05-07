---@class UAutomatedLevelSequenceCapture : UMovieSceneCapture
---@field public LevelSequenceAsset FSoftObjectPath @A level sequence asset to playback at runtime - used where the level sequence does not already exist in the world.
---@field public ShotName string @Optional shot name to render. The frame range to render will be set to the shot frame range.
---@field public bUseCustomStartFrame boolean @When enabled, the StartFrame setting will override the default starting frame number
---@field public CustomStartFrame FFrameNumber @Frame number to start capturing.
---@field public bUseCustomEndFrame boolean @When enabled, the EndFrame setting will override the default ending frame number
---@field public CustomEndFrame FFrameNumber @Frame number to end capturing.
---@field public WarmUpFrameCount integer @The number of extra frames to play before the sequence's start frame, to "warm up" the animation.  This is useful if your           animation contains particles or other runtime effects that are spawned into the scene earlier than your capture start frame
---@field public DelayBeforeWarmUp number @The number of seconds to wait (in real-time) before we start playing back the warm up frames.  Useful for allowing post processing effects to settle down before capturing the animation.
---@field public DelayBeforeShotWarmUp number @The number of seconds to wait (in real-time) at shot boundaries.  Useful for allowing post processing effects to settle down before capturing the animation.
---@field public DelayEveryFrame number @The number of seconds to wait (in real-time) at every frame.  Useful for allowing post processing effects to settle down before capturing the animation.
---@field public BurnInOptions ULevelSequenceBurnInOptions
---@field public bWriteEditDecisionList boolean @Whether to write edit decision lists (EDLs) if the sequence contains shots
---@field public bWriteFinalCutProXML boolean @Whether to write Final Cut Pro XML files (XMLs) if the sequence contains shots
---@field private LevelSequenceActor TWeakObjectPtr<ALevelSequenceActor> @The pre-existing level sequence actor to use for capture that specifies playback settings
local UAutomatedLevelSequenceCapture = {}

