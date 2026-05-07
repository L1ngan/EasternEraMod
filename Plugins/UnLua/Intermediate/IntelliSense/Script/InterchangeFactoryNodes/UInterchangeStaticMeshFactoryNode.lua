---namespace UE
---@class UInterchangeStaticMeshFactoryNode : UInterchangeMeshFactoryNode
local UInterchangeStaticMeshFactoryNode = {}

---Sets the LOD Screen Sizes for the static mesh.
---@param InLODScreenSizes TArray_number_
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetLODScreenSizes(InLODScreenSizes) end

---Set whether the static mesh is set up for use with physical material masks.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomSupportFaceRemap(AttributeValue, bAddApplyDelegate) end

---Set the index of the UV that is used as the source for generating lightmaps for the static mesh.
---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomSrcLightmapIndex(AttributeValue, bAddApplyDelegate) end

---Set the amount of padding used to pack UVs for the static mesh.
---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomMinLightmapResolution(AttributeValue, bAddApplyDelegate) end

---Set the maximum number of Lumen mesh cards to generate for this mesh.
---More cards means that the surface will have better coverage, but will result in increased runtime overhead.
---Set this to 0 to disable mesh card generation for this mesh.
---The default is 12.
---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomMaxLumenMeshCards(AttributeValue, bAddApplyDelegate) end

---Set whether the static mesh should generate lightmap UVs.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomGenerateLightmapUVs(AttributeValue, bAddApplyDelegate) end

---Set whether to generate the distance field by treating every triangle hit as a front face.
---This prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomGenerateDistanceFieldAsIfTwoSided(AttributeValue, bAddApplyDelegate) end

---Set the index of the UV that is used to store generated lightmaps for the static mesh.
---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomDstLightmapIndex(AttributeValue, bAddApplyDelegate) end

---Set the scale to apply to the mesh when allocating the distance field volume texture.
---The default scale is 1, which assumes that the mesh will be placed unscaled in the world.
---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomDistanceFieldResolutionScale(AttributeValue, bAddApplyDelegate) end

---Set the static mesh asset whose distance field will be used as the distance field for the imported mesh.
---@param AttributeValue FSoftObjectPath
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomDistanceFieldReplacementMesh(AttributeValue, bAddApplyDelegate) end

---Set the local scale that is applied when building the static mesh.
---@param AttributeValue FVector
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomBuildScale3D(AttributeValue, bAddApplyDelegate) end

---Set whether the static mesh should build a reversed index buffer.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomBuildReversedIndexBuffer(AttributeValue, bAddApplyDelegate) end

---Set whether the static mesh factory should set the Nanite build setting. Return false if the attribute was not set.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomBuildNanite(AttributeValue, bAddApplyDelegate) end

---Set whether the static mesh factory should auto compute LOD Screen Sizes. Return false if the attribute was not set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeStaticMeshFactoryNode:SetCustomAutoComputeLODScreenSizes(AttributeValue) end

---@param SocketUid string
---@return boolean
function UInterchangeStaticMeshFactoryNode:RemoveSocketUd(SocketUid) end

---Initialize node data. Also adds it to NodeContainer.
---@param UniqueID string
---@param DisplayLabel string
---@param InAssetClass string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangeStaticMeshFactoryNode:InitializeStaticMeshNode(UniqueID, DisplayLabel, InAssetClass, NodeContainer) end

---@param OutSocketUids TArray_string_ @[out] 
function UInterchangeStaticMeshFactoryNode:GetSocketUids(OutSocketUids) end

---Return the number of socket UIDs this static mesh has.
---@return integer
function UInterchangeStaticMeshFactoryNode:GetSocketUidCount() end

---Returns All the LOD Screen Sizes set for the static mesh.
---@param OutLODScreenSizes TArray_number_ @[out] 
function UInterchangeStaticMeshFactoryNode:GetLODScreenSizes(OutLODScreenSizes) end

---Returns the number of LOD Screen Sizes the static mesh has.
---@return integer
function UInterchangeStaticMeshFactoryNode:GetLODScreenSizeCount() end

---Get whether the static mesh is set up for use with physical material masks.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomSupportFaceRemap(AttributeValue) end

---Get the index of the UV that is used as the source for generating lightmaps for the static mesh.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomSrcLightmapIndex(AttributeValue) end

---Get the amount of padding used to pack UVs for the static mesh.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomMinLightmapResolution(AttributeValue) end

---Get the maximum number of Lumen mesh cards to generate for this mesh.
---More cards means that the surface will have better coverage, but will result in increased runtime overhead.
---Set this to 0 to disable mesh card generation for this mesh.
---The default is 12.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomMaxLumenMeshCards(AttributeValue) end

---Get whether the static mesh should generate lightmap UVs.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomGenerateLightmapUVs(AttributeValue) end

---Get whether to generate the distance field by treating every triangle hit as a front face.
---This prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomGenerateDistanceFieldAsIfTwoSided(AttributeValue) end

---Get the index of the UV that is used to store generated lightmaps for the static mesh.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomDstLightmapIndex(AttributeValue) end

---Get the scale to apply to the mesh when allocating the distance field volume texture.
---The default scale is 1, which assumes that the mesh will be placed unscaled in the world.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomDistanceFieldResolutionScale(AttributeValue) end

---Get the static mesh asset whose distance field will be used as the distance field for the imported mesh.
---@param AttributeValue FSoftObjectPath @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomDistanceFieldReplacementMesh(AttributeValue) end

---Get the local scale that is applied when building the static mesh.
---@param AttributeValue FVector @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomBuildScale3D(AttributeValue) end

---Get whether the static mesh should build a reversed index buffer.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomBuildReversedIndexBuffer(AttributeValue) end

---Get whether the static mesh factory should set the Nanite build setting. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomBuildNanite(AttributeValue) end

---Get whether the static mesh factory should auto compute LOD Screen Sizes. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeStaticMeshFactoryNode:GetCustomAutoComputeLODScreenSizes(AttributeValue) end

---@param InSocketUids TArray_string_
---@return boolean
function UInterchangeStaticMeshFactoryNode:AddSocketUids(InSocketUids) end

---@param SocketUid string
---@return boolean
function UInterchangeStaticMeshFactoryNode:AddSocketUid(SocketUid) end

