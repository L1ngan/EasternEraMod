---@class UInterchangeMaterialFactoryNode : UInterchangeBaseMaterialFactoryNode
local UInterchangeMaterialFactoryNode = {}

---Sets if this shader graph should be rendered two sided or not. Defaults to off.
---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomTwoSided(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomTranslucencyLightingMode(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomShadingModel(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomScreenSpaceReflections(AttributeValue) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomRefractionMethod(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomOpacityMaskClipValue(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomDisplacementCenter(AttributeValue) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeMaterialFactoryNode:SetCustomBlendMode(AttributeValue, bAddApplyDelegate) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetTransmissionColorConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetTangentConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetSurfaceCoverageConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetSubsurfaceConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetSpecularConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetRoughnessConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetRefractionConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetOpacityConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetOcclusionConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetNormalConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetMetallicConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetFuzzColorConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetEmissiveColorConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetDisplacementConnection(ExpressionNodeUid, OutputName) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomTwoSided(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomTranslucencyLightingMode(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomShadingModel(AttributeValue) end

---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomScreenSpaceReflections(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomRefractionMethod(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomOpacityMaskClipValue(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomDisplacementCenter(AttributeValue) end

---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetCustomBlendMode(AttributeValue) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetClothConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetClearCoatRoughnessConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetClearCoatNormalConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetClearCoatConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetBaseColorConnection(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string @[out] 
---@param OutputName string @[out] 
---@return boolean
function UInterchangeMaterialFactoryNode:GetAnisotropyConnection(ExpressionNodeUid, OutputName) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToTransmissionColor(AttributeValue) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToTangent(ExpressionNodeUid) end

---@param ExpressionUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToSurfaceCoverage(ExpressionUid) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToSubsurface(ExpressionNodeUid) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToSpecular(ExpressionNodeUid) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToRoughness(ExpressionNodeUid) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToRefraction(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToOpacity(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToOcclusion(AttributeValue) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToNormal(ExpressionNodeUid) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToMetallic(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToFuzzColor(AttributeValue) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToEmissiveColor(ExpressionNodeUid) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToDisplacement(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToCloth(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToClearCoatRoughness(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToClearCoatNormal(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToClearCoat(AttributeValue) end

---@param AttributeValue string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToBaseColor(AttributeValue) end

---@param ExpressionNodeUid string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectToAnisotropy(ExpressionNodeUid) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToTransmissionColor(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToTangent(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToSurfaceCoverage(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToSubsurface(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToSpecular(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToRoughness(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToRefraction(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToOpacity(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToOcclusion(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToNormal(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToMetallic(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToFuzzColor(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToEmissiveColor(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToDisplacement(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToCloth(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToClearCoatRoughness(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToClearCoatNormal(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToClearCoat(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToBaseColor(ExpressionNodeUid, OutputName) end

---@param ExpressionNodeUid string
---@param OutputName string
---@return boolean
function UInterchangeMaterialFactoryNode:ConnectOutputToAnisotropy(ExpressionNodeUid, OutputName) end

