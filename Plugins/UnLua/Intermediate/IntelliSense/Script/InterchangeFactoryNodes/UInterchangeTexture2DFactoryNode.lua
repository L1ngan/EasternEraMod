---ns UE::Interchange
---@class UInterchangeTexture2DFactoryNode : UInterchangeTextureFactoryNode
local UInterchangeTexture2DFactoryNode = {}

---Set the source blocks for the texture.
---Using this suggests to the pipeline to consider this texture as a UDIM. The pipeline can choose whether to pass these blocks to the texture factory node.
---The textures must be of the same format and use the same pixel format.
---The first block in the map is used to determine the accepted texture format and pixel format.
---@param InSourceBlocks TMap_integer__string_
function UInterchangeTexture2DFactoryNode:SetSourceBlocks(InSourceBlocks) end

---Set a source block for the texture.
---The textures must be of the same format and use the same pixel format.
---The first block in the map is used to determine the accepted texture format and pixel format.
---@param X integer
---@param Y integer
---@param InSourceFile string
function UInterchangeTexture2DFactoryNode:SetSourceBlockByCoordinates(X, Y, InSourceFile) end

---Set a source block for the texture.
---The textures must be of the same format and use the same pixel format.
---The first block in the map is used to determine the accepted texture format and pixel format.
---@param BlockIndex integer
---@param InSourceFile string
function UInterchangeTexture2DFactoryNode:SetSourceBlock(BlockIndex, InSourceFile) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTexture2DFactoryNode:SetCustomAddressY(AttributeValue, bAddApplyDelegate) end

---@param AttributeValue integer
---@param bAddApplyDelegate boolean @[opt] 
---@return boolean
function UInterchangeTexture2DFactoryNode:SetCustomAddressX(AttributeValue, bAddApplyDelegate) end

---Get the source blocks for the texture.
---If the map is empty, the texture is imported as a normal texture using the payload key.
---@return TMap_integer__string_
function UInterchangeTexture2DFactoryNode:GetSourceBlocks() end

---Get a source block from the texture.
---@param X integer
---@param Y integer
---@param OutSourceFile string @[out] 
---@return boolean
function UInterchangeTexture2DFactoryNode:GetSourceBlockByCoordinates(X, Y, OutSourceFile) end

---Get a source block from the texture.
---@param BlockIndex integer
---@param OutSourceFile string @[out] 
---@return boolean
function UInterchangeTexture2DFactoryNode:GetSourceBlock(BlockIndex, OutSourceFile) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTexture2DFactoryNode:GetCustomAddressY(AttributeValue) end

---Return false if the Attribute was not set previously.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTexture2DFactoryNode:GetCustomAddressX(AttributeValue) end

