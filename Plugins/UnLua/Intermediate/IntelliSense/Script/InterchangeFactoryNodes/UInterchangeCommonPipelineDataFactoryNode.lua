---This factory node is where pipelines can set global data that can be used by factories.
---@class UInterchangeCommonPipelineDataFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeCommonPipelineDataFactoryNode = {}

---Pipelines can set a global transform. Factories will use this global offset when importing assets.
---@param NodeContainer UInterchangeBaseNodeContainer
---@param AttributeValue FTransform
---@return boolean
function UInterchangeCommonPipelineDataFactoryNode:SetCustomGlobalOffsetTransform(NodeContainer, AttributeValue) end

---Pipelines can set this Bake Meshes setting. Factories use this to identify whether they should apply global transforms to static meshes and skeletal meshes.
---@param AttributeValue boolean
---@return boolean
function UInterchangeCommonPipelineDataFactoryNode:SetBakePivotMeshes(AttributeValue) end

---Pipelines can set this Bake Meshes setting. Factories use this to identify whether they should apply global transforms to static meshes and skeletal meshes.
---@param AttributeValue boolean
---@return boolean
function UInterchangeCommonPipelineDataFactoryNode:SetBakeMeshes(AttributeValue) end

---Return the global offset transform set by the pipelines.
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeCommonPipelineDataFactoryNode:GetCustomGlobalOffsetTransform(AttributeValue) end

---Return the value of the Bake Meshes setting set by the pipelines.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeCommonPipelineDataFactoryNode:GetBakePivotMeshes(AttributeValue) end

---Return the value of the Bake Meshes setting set by the pipelines.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeCommonPipelineDataFactoryNode:GetBakeMeshes(AttributeValue) end

