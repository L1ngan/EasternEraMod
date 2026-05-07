---@class UInterchangeTextureFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeTextureFactoryNode = {}

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomVirtualTextureStreaming(AttributeValue, bAddApplyDelegate) end

---Set the unique ID of the translated texture node. This is a reference to the node that was created by the translator. It is needed to get the texture payload.
---@param AttributeValue string
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomTranslatedTextureNodeUid(AttributeValue) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomSRGB(AttributeValue, bAddApplyDelegate) end

---* Determines whether the factory should tell the translator to provide a compressed source data payload when available.
---* This will generally result in smaller assets. However, some operations like the texture build might be slower, because the source data first needs to be decompressed.
---@param AttributeValue boolean
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomPreferCompressedSourceData(AttributeValue) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomPowerOfTwoMode(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FColor
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomPaddingColor(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomMipLoadOptions(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomMipGenSettings(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomMaxTextureSize(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomLossyCompressionAmount(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomLODGroup(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomLODBias(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomFilter(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomDownscaleOptions(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomDownscale(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomDeferCompression(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomCompressionSettings(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomCompressionQuality(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomCompressionNoAlpha(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomCompositeTextureMode(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomCompositePower(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue ETextureColorSpace
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomColorSpace(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomChromaKeyThreshold(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FColor
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomChromaKeyColor(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustombUseLegacyGamma(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustombPreserveBorder(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustombFlipGreenChannel(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustombDoScaleMipsForAlphaCoverage(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue boolean
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustombChromaKeyTexture(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue FVector4
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAlphaCoverageThresholds(AttributeValue, bAddApplyDelegate) end

---* Should the factory allow the import of texture that would have a resolution that is not a power of two
---* By default this is not allowed
---@param AttributeValue boolean
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAllowNonPowerOfTwo(AttributeValue) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustVibrance(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustSaturation(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustRGBCurve(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustMinAlpha(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustMaxAlpha(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustHue(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustBrightnessCurve(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue number
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTextureFactoryNode:SetCustomAdjustBrightness(AttributeValue, bAddApplyDelegate) end

---Initialize node data.
---@param UniqueID string
---@param DisplayLabel string
---@param InAssetName string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangeTextureFactoryNode:InitializeTextureNode(UniqueID, DisplayLabel, InAssetName, NodeContainer) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomVirtualTextureStreaming(AttributeValue) end

---Get the unique ID of the translated texture node.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomTranslatedTextureNodeUid(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomSRGB(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomPreferCompressedSourceData(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomPowerOfTwoMode(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue FColor @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomPaddingColor(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomMipLoadOptions(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomMipGenSettings(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomMaxTextureSize(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomLossyCompressionAmount(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomLODGroup(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomLODBias(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomFilter(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomDownscaleOptions(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomDownscale(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomDeferCompression(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomCompressionSettings(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomCompressionQuality(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomCompressionNoAlpha(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomCompositeTextureMode(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomCompositePower(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue ETextureColorSpace @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomColorSpace(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomChromaKeyThreshold(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue FColor @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomChromaKeyColor(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustombUseLegacyGamma(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustombPreserveBorder(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustombFlipGreenChannel(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustombDoScaleMipsForAlphaCoverage(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustombChromaKeyTexture(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue FVector4 @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAlphaCoverageThresholds(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAllowNonPowerOfTwo(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustVibrance(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustSaturation(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustRGBCurve(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustMinAlpha(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustMaxAlpha(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustHue(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustBrightnessCurve(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeTextureFactoryNode:GetCustomAdjustBrightness(AttributeValue) end

