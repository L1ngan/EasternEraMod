---namespace Interchange
---@class UInterchangeMeshFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeMeshFactoryNode = {}

---Add a Material dependency to the specified slot of this object.
---@param SlotName string
---@param MaterialDependencyUid string
---@return boolean
function UInterchangeMeshFactoryNode:SetSlotMaterialDependencyUid(SlotName, MaterialDependencyUid) end

---Set whether the static mesh factory should replace the vertex color. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomVertexColorReplace(AttributeValue) end

---Set whether the static mesh factory should override the vertex color. Return false if the attribute could not be set.
---@param AttributeValue FColor
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomVertexColorOverride(AttributeValue) end

---Set whether the static mesh factory should ignore the vertex color. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomVertexColorIgnore(AttributeValue) end

---Set whether tangents are recomputed using MikkTSpace when they need to be recomputed.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomUseMikkTSpace(AttributeValue, bAddApplyDelegate) end

---Set whether tangents are stored at 16-bit precision instead of the default 8-bit precision.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomUseHighPrecisionTangentBasis(AttributeValue, bAddApplyDelegate) end

---Set whether UVs are stored at full floating point precision.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomUseFullPrecisionUVs(AttributeValue, bAddApplyDelegate) end

---Set whether UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomUseBackwardsCompatibleF16TruncUVs(AttributeValue, bAddApplyDelegate) end

---Set whether degenerate triangles are removed.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomRemoveDegenerates(AttributeValue, bAddApplyDelegate) end

---Set whether tangents in the imported mesh are ignored and recomputed.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomRecomputeTangents(AttributeValue, bAddApplyDelegate) end

---Set whether normals in the imported mesh are ignored and recomputed. When normals are recomputed, the tangents are also recomputed.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomRecomputeNormals(AttributeValue, bAddApplyDelegate) end

---Set a custom LOD group for the mesh.
---@param AttributeValue string
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomLODGroup(AttributeValue, bAddApplyDelegate) end

---Set whether sections with matching materials are kept separate and will not get combined.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomKeepSectionsSeparate(AttributeValue) end

---Set whether the mesh factory should create sockets.
---@param AttributeValue boolean
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomImportSockets(AttributeValue) end

---Set whether normals are recomputed by weighting the surface area and the corner angle of the triangle as a ratio.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMeshFactoryNode:SetCustomComputeWeightedNormals(AttributeValue, bAddApplyDelegate) end

---Reset all the material dependencies.
---@return boolean
function UInterchangeMeshFactoryNode:ResetSlotMaterialDependencies() end

---Remove the Material dependency associated with the specfied slot name of this object.
---@param SlotName string
---@return boolean
function UInterchangeMeshFactoryNode:RemoveSlotMaterialDependencyUid(SlotName) end

---@param LodDataUniqueId string
---@return boolean
function UInterchangeMeshFactoryNode:RemoveLodDataUniqueId(LodDataUniqueId) end

---Retrieve the Material dependency for the specified slot of this object.
---@param SlotName string
---@param OutMaterialDependency string @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetSlotMaterialDependencyUid(SlotName, OutMaterialDependency) end

---Retrieve the correspondence table between slot names and assigned materials for this object.
---@param OutMaterialDependencies TMap_string__string_ @[out] 
function UInterchangeMeshFactoryNode:GetSlotMaterialDependencies(OutMaterialDependencies) end

---Get a payload key string attribute from this node. Returns false if the attribute does not exist.
---@param PayloadAttributeKey string
---@param Value string @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetPayloadKeyStringAttribute(PayloadAttributeKey, Value) end

---Get a payload key int32 attribute from this node. Returns false if the attribute does not exist.
---@param PayloadAttributeKey string
---@param Value integer @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetPayloadKeyInt32Attribute(PayloadAttributeKey, Value) end

---Get a payload key float attribute from this node. Returns false if the attribute does not exist.
---@param PayloadAttributeKey string
---@param Value number @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetPayloadKeyFloatAttribute(PayloadAttributeKey, Value) end

---Get a payload key double attribute from this node. Returns false if the attribute does not exist.
---@param PayloadAttributeKey string
---@param Value number @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetPayloadKeyDoubleAttribute(PayloadAttributeKey, Value) end

---Get a payload key boolean attribute from this node. Returns false if the attribute does not exist.
---@param PayloadAttributeKey string
---@param Value boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetPayloadKeyBooleanAttribute(PayloadAttributeKey, Value) end

---@param OutLodDataUniqueIds TArray_string_ @[out] 
function UInterchangeMeshFactoryNode:GetLodDataUniqueIds(OutLodDataUniqueIds) end

---Return the number of LODs this static mesh has.
---@return integer
function UInterchangeMeshFactoryNode:GetLodDataCount() end

---Query whether the static mesh factory should replace the vertex color. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomVertexColorReplace(AttributeValue) end

---Query whether the static mesh factory should override the vertex color. Return false if the attribute was not set.
---@param AttributeValue FColor @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomVertexColorOverride(AttributeValue) end

---Query whether the static mesh factory should ignore the vertex color. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomVertexColorIgnore(AttributeValue) end

---Query whether tangents are recomputed using MikkTSpace when they need to be recomputed.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomUseMikkTSpace(AttributeValue) end

---Query whether tangents are stored at 16-bit precision instead of the default 8-bit precision.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomUseHighPrecisionTangentBasis(AttributeValue) end

---Query whether UVs are stored at full floating point precision.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomUseFullPrecisionUVs(AttributeValue) end

---Query whether UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomUseBackwardsCompatibleF16TruncUVs(AttributeValue) end

---Query whether degenerate triangles are removed.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomRemoveDegenerates(AttributeValue) end

---Query whether tangents in the imported mesh are ignored and recomputed.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomRecomputeTangents(AttributeValue) end

---Query whether normals in the imported mesh are ignored and recomputed. When normals are recomputed, the tangents are also recomputed.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomRecomputeNormals(AttributeValue) end

---Query whether a custom LOD group is set for the mesh.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomLODGroup(AttributeValue) end

---Query whether sections with matching materials are kept separate and will not get combined.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomKeepSectionsSeparate(AttributeValue) end

---Query whether the mesh factory should create sockets.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomImportSockets(AttributeValue) end

---Query whether normals are recomputed by weighting the surface area and the corner angle of the triangle as a ratio.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMeshFactoryNode:GetCustomComputeWeightedNormals(AttributeValue) end

---Add a string attribute for the payload. Returns false if the attribute does not exist or if it cannot be added.
---@param PayloadAttributeKey string
---@param Value string
---@return boolean
function UInterchangeMeshFactoryNode:AddPayloadKeyStringAttribute(PayloadAttributeKey, Value) end

---Add an int attribute for the payload. Returns false if the attribute does not exist or if it cannot be added.
---@param PayloadAttributeKey string
---@param Value integer
---@return boolean
function UInterchangeMeshFactoryNode:AddPayloadKeyInt32Attribute(PayloadAttributeKey, Value) end

---Add a float attribute for the payload. Returns false if the attribute does not exist or if it cannot be added.
---@param PayloadAttributeKey string
---@param Value number
---@return boolean
function UInterchangeMeshFactoryNode:AddPayloadKeyFloatAttribute(PayloadAttributeKey, Value) end

---Add a double attribute for the payload. Returns false if the attribute does not exist or if it cannot be added.
---@param PayloadAttributeKey string
---@param Value number
---@return boolean
function UInterchangeMeshFactoryNode:AddPayloadKeyDoubleAttribute(PayloadAttributeKey, Value) end

---Add a boolean attribute for the payload. Returns false if the attribute does not exist or if it cannot be added.
---@param PayloadAttributeKey string
---@param Value boolean
---@return boolean
function UInterchangeMeshFactoryNode:AddPayloadKeyBooleanAttribute(PayloadAttributeKey, Value) end

---@param LodDataUniqueId string
---@return boolean
function UInterchangeMeshFactoryNode:AddLodDataUniqueId(LodDataUniqueId) end

