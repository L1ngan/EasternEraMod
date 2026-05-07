---@class FInterchangePipelineStack
---@field public Pipelines TArray<FSoftObjectPath> @The list of pipelines in this stack. The pipelines are executed in fixed order, from top to bottom.
---@field public PerTranslatorPipelines TArray<FInterchangeTranslatorPipelines> @Specifies a different list of pipelines for this stack to use when importing data from specific translators.
local FInterchangePipelineStack = {}
