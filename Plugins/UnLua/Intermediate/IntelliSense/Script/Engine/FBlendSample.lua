---Sample data
---@class FBlendSample
---@field public Animation UAnimSequence @For linked animations
---@field public SampleValue FVector @blend 0->x, blend 1->y, blend 2->z
---@field public RateScale number
---@field public bIncludeInAnalyseAll boolean @Whether or not this sample will be moved when the "analyse all" button is used. Note that, even if disabled, it will still be available for individual sample analysis/moving
---@field public bIsValid boolean
local FBlendSample = {}
