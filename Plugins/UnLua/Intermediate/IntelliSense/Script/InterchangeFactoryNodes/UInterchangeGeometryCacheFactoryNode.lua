---@class UInterchangeGeometryCacheFactoryNode : UInterchangeMeshFactoryNode
local UInterchangeGeometryCacheFactoryNode = {}

---Set whether vertex numbers from DCC are stored in the geometry cache
---@param AttributeValue boolean
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomStoreImportedVertexNumbers(AttributeValue) end

---Set the start frame index of the animation
---@param AttributeValue integer
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomStartFrame(AttributeValue) end

---Set the precision used for compressing vertex positions
---@param AttributeValue number
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomPositionPrecision(AttributeValue) end

---Set whether to optimize the index buffers when building the geometry cache
---@param AttributeValue boolean
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomOptimizeIndexBuffers(AttributeValue) end

---Set the number of bits for compressing the UV into
---@param AttributeValue integer
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomNumBitsForUVs(AttributeValue) end

---Set how the motion vectors are managed
---@param AttributeValue EInterchangeMotionVectorsHandling
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomMotionVectorsImport(AttributeValue) end

---Set whether to merge all geometries into a single mesh
---@param AttributeValue boolean
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomFlattenTracks(AttributeValue) end

---Set the end frame index of the animation
---@param AttributeValue integer
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomEndFrame(AttributeValue) end

---Get whether constant topology optimization is applied
---@param AttributeValue boolean
---@return boolean
function UInterchangeGeometryCacheFactoryNode:SetCustomApplyConstantTopologyOptimization(AttributeValue) end

---Initialize node data. Also adds it to NodeContainer.
---@param UniqueID string
---@param DisplayLabel string
---@param InAssetClass string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangeGeometryCacheFactoryNode:InitializeGeometryCacheNode(UniqueID, DisplayLabel, InAssetClass, NodeContainer) end

---Get whether vertex numbers from DCC are stored in the geometry cache
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomStoreImportedVertexNumbers(AttributeValue) end

---Get the start frame index of the animation
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomStartFrame(AttributeValue) end

---Get the precision used for compressing vertex positions
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomPositionPrecision(AttributeValue) end

---Get whether to optimize the index buffers when building the geometry cache
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomOptimizeIndexBuffers(AttributeValue) end

---Get the number of bits for compressing the UV into
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomNumBitsForUVs(AttributeValue) end

---Get how the motion vectors are managed
---@param AttributeValue EInterchangeMotionVectorsHandling @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomMotionVectorsImport(AttributeValue) end

---Get whether to merge all geometries into a single mesh
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomFlattenTracks(AttributeValue) end

---Get the end frame index of the animation
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomEndFrame(AttributeValue) end

---Get whether constant topology optimization is applied
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeGeometryCacheFactoryNode:GetCustomApplyConstantTopologyOptimization(AttributeValue) end

