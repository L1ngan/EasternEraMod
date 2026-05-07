---@class UCurveEditorBakeFilter : UCurveEditorFilterBase
---@field public BakeIntervalInSeconds number @The interval between baked keys when there is no valid Display Rate and Tick Resolution.
---@field public BakeInterval FFrameNumber @The interval between baked keys.
---@field public bCustomRangeOverride boolean @When enabled, CustomRange will be used for the bake region. Otherwise the selected keys will be used.
---@field public CustomRangeMinInSeconds number @Specifies a custom range to use for baking when there is no valid Display Rate and Tick Resolution.
---@field public CustomRangeMaxInSeconds number @Specifies a custom range to use for baking when there is no valid Display Rate and Tick Resolution.
---@field public CustomRange FCurveEditorBakeFilterRange @Specifies a custom range to use for baking
---@field public bUseSeconds boolean @When enabled, will use BakeIntervalInSeconds and CustomRangeInSeconds. Otherwise, use BakeInterval and CustomRange which are defined by the Display Rate and Tick Resolution.
local UCurveEditorBakeFilter = {}

