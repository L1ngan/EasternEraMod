---Base data structure for each frame coming in for a subject
---@class FLiveLinkBaseFrameData
---@field public WorldTime FLiveLinkWorldTime @Time in seconds the frame was created.
---@field public MetaData FLiveLinkMetaData @Frame's metadata.
---@field public PropertyValues TArray<number> @Values of the properties defined in the static structure. Use FLiveLinkBaseStaticData.FindPropertyValue to evaluate.
---@field public Timestamps TMap<string, number> @This frame timestamps used for measuring latency
local FLiveLinkBaseFrameData = {}
