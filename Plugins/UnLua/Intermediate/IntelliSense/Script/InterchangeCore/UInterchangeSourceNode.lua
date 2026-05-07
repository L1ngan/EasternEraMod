---This class allows a translator to add general source data that describes the whole source. Pipelines can use this information.
---@class UInterchangeSourceNode : UInterchangeBaseNode
local UInterchangeSourceNode = {}

---Set Extra Information that we want to show in the Config Panel (such as File Information).
---@param Name string
---@param Value string
---@return boolean
function UInterchangeSourceNode:SetExtraInformation(Name, Value) end

---Set the SkeletalMesh factory to uses legacy bake transform behavior to create the skeletalmesh.
---@param AttributeValue boolean
---@return boolean
function UInterchangeSourceNode:SetCustomUseLegacySkeletalMeshBakeTransform(AttributeValue) end

---Sets whether factory nodes for this import should have a suffix named after their asset category added to their
---custom sub path attribute.
---@param Suffix boolean
---@return boolean
function UInterchangeSourceNode:SetCustomUseAssetTypeSubPathSuffix(Suffix) end

---Sets the prefix that should be added to factory node SubPath custom attributes.
---@param Prefix string
---@return boolean
function UInterchangeSourceNode:SetCustomSubPathPrefix(Prefix) end

---Set the start of the source timeline.
---@param AttributeValue number
---@return boolean
function UInterchangeSourceNode:SetCustomSourceTimelineStart(AttributeValue) end

---Set the end of the source timeline.
---@param AttributeValue number
---@return boolean
function UInterchangeSourceNode:SetCustomSourceTimelineEnd(AttributeValue) end

---Set the source frame rate numerator.
---@param AttributeValue integer
---@return boolean
function UInterchangeSourceNode:SetCustomSourceFrameRateNumerator(AttributeValue) end

---Set the source frame rate denominator.
---@param AttributeValue integer
---@return boolean
function UInterchangeSourceNode:SetCustomSourceFrameRateDenominator(AttributeValue) end

---Set the reimport strategy based on EReimportStrategyFlags
---@param StrategyFlag integer
---@return boolean
function UInterchangeSourceNode:SetCustomReimportStrategyFlags(StrategyFlag) end

---Set whether to import materials that aren't used.
---@param AttributeValue boolean
---@return boolean
function UInterchangeSourceNode:SetCustomImportUnusedMaterial(AttributeValue) end

---Set the Axis Conversion Inverse Transform (Primarily used for Socket transform calculations.).
---@param AxisConversionInverseTransform FTransform
---@return boolean
function UInterchangeSourceNode:SetCustomAxisConversionInverseTransform(AxisConversionInverseTransform) end

---Set the start of the source animated time.
---@param AttributeValue number
---@return boolean
function UInterchangeSourceNode:SetCustomAnimatedTimeStart(AttributeValue) end

---Set the end of the source animated time.
---@param AttributeValue number
---@return boolean
function UInterchangeSourceNode:SetCustomAnimatedTimeEnd(AttributeValue) end

---Remove Extra Information that we dont want to show in the Config Panel.
---@param Name string
---@return boolean
function UInterchangeSourceNode:RemoveExtraInformation(Name) end

---Initialize the base data of the node. Adds it to NodeContainer.
---@param UniqueID string
---@param DisplayLabel string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangeSourceNode:InitializeSourceNode(UniqueID, DisplayLabel, NodeContainer) end

---This function should be use by pipelines to avoid creating a node. If the unique instance doesn't exist, returns nullptr.
---@param NodeContainer UInterchangeBaseNodeContainer
---@return UInterchangeSourceNode
function UInterchangeSourceNode.GetUniqueInstance(NodeContainer) end

---Get Extra Information that we want to show in the Config Panel (such as File Information).
---@param OutExtraInformation TMap_string__string_ @[out] 
function UInterchangeSourceNode:GetExtraInformation(OutExtraInformation) end

---Does skeletalMesh factory should uses legacy bake transform behavior to create the skeletal mesh.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomUseLegacySkeletalMeshBakeTransform(AttributeValue) end

---Gets whether factory nodes for this import should have a suffix named after their asset category added to their
---custom sub path attribute. For example, if this is set then imported StaticMesh assets will be placed inside of
---an additional content folder named "StaticMeshes".
---Note that this is done automatically for all factory nodes created by the generic assets pipeline, but must be
---handled manually by calling FillSubPathFromSourceNode() from InterchangePipelineHelper.h for any factory nodes
---that other pipelines may create.
---@param Suffix boolean @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomUseAssetTypeSubPathSuffix(Suffix) end

---Gets a prefix that should be added to factory node SubPath custom attributes.
---For example this can contain the imported scene's name, so that we create an additional content folder named
---after it to contain the imported assets.
---@param Prefix string @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomSubPathPrefix(Prefix) end

---Query the start of the source timeline.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomSourceTimelineStart(AttributeValue) end

---Query the end of the source timeline.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomSourceTimelineEnd(AttributeValue) end

---Query the source frame rate numerator.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomSourceFrameRateNumerator(AttributeValue) end

---Query the source frame rate denominator.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomSourceFrameRateDenominator(AttributeValue) end

---Get the reimport strategy based on EReimportStrategyFlags
---@param StrategyFlag integer @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomReimportStrategyFlags(StrategyFlag) end

---Query whether to import materials that aren't used.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomImportUnusedMaterial(AttributeValue) end

---Query Axis Conversion Inverse Transform (Primarily used for Socket transform calculations.).
---@param AxisConversionInverseTransform FTransform @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomAxisConversionInverseTransform(AxisConversionInverseTransform) end

---Query the start of the source animated time.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomAnimatedTimeStart(AttributeValue) end

---Query the end of the source animated time.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeSourceNode:GetCustomAnimatedTimeEnd(AttributeValue) end

