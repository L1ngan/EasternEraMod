---Sets the sub image frame index value based on the select animation mode
---The sub image index is a float value where the fractional part can be used to blend frames together
---@class UNiagaraStatelessModule_SubUVAnimation : UNiagaraStatelessModule
---@field public NumFrames integer
---@field public FrameIndex FNiagaraDistributionRangeInt
---@field public bStartFrameRangeOverride_Enabled boolean
---@field public bEndFrameRangeOverride_Enabled boolean
---@field public StartFrameRangeOverride integer
---@field public EndFrameRangeOverride integer
---@field public AnimationMode ENSMSubUVAnimation_Mode
---@field public LoopsPerSecond number @-Note: Main module has PlaybackMode (Loops / FPS) to choose between loops or frames per second
---@field public RandomChangeInterval number @-Note: Main module has a few more options UPROPERTY(EditAnywhere, Category = "Parameters", meta = (EditConditionHides, EditCondition = "AnimationMode == ENSMSubUVAnimation_Mode::Linear")) bool bRandomStartFrame = false; int32 StartFrameOffset = 0; float LoopupIndexScale = 0.0f;
local UNiagaraStatelessModule_SubUVAnimation = {}

