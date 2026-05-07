---@class ALevelStreamingVolume : AVolume
---@field public StreamingLevelNames TArray<string> @Levels names affected by this level streaming volume.
---@field public bEditorPreVisOnly boolean @If true, this streaming volume should only be used for editor streaming level previs.
---@field public bDisabled boolean @If true, this streaming volume is ignored by the streaming volume code.  Used to either disable a level streaming volume without disassociating it from the level, or to toggle the control of a level's streaming between Kismet and volume streaming.
---@field public StreamingUsage integer @Determines what this volume is used for, e.g. whether to control loading, loading and visibility or just visibilty (blocking on load)
local ALevelStreamingVolume = {}

