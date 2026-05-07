---This class is used to pass override pipelines in the ImportAssetTask Options member.
---@class UInterchangePipelineStackOverride : UObject
---@field public OverridePipelines TArray<FSoftObjectPath>
local UInterchangePipelineStackOverride = {}

---@param PipelineBase UInterchangePythonPipelineBase
function UInterchangePipelineStackOverride:AddPythonPipeline(PipelineBase) end

---@param PipelineBase UInterchangePipelineBase
function UInterchangePipelineStackOverride:AddPipeline(PipelineBase) end

---@param PipelineBase UInterchangeBlueprintPipelineBase
function UInterchangePipelineStackOverride:AddBlueprintPipeline(PipelineBase) end

