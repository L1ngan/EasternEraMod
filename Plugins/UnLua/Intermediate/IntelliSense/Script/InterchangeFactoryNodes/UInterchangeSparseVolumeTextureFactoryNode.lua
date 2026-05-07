---@class UInterchangeSparseVolumeTextureFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeSparseVolumeTextureFactoryNode = {}

---Sets the data type of the AttributesB texture of the SparseVolumeTexture we'll create
---@param Format EInterchangeSparseVolumeTextureFormat
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesBFormat(Format) end

---Sets the grid name and component index that will be assigned to the AttributesB texture, channel Z (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesBChannelZ(GridNameAndComponentIndex) end

---Sets the grid name and component index that will be assigned to the AttributesB texture, channel Y (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesBChannelY(GridNameAndComponentIndex) end

---Sets the grid name and component index that will be assigned to the AttributesB texture, channel X (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesBChannelX(GridNameAndComponentIndex) end

---Sets the grid name and component index that will be assigned to the AttributesB texture, channel W (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesBChannelW(GridNameAndComponentIndex) end

---Sets the data type of the AttributesA texture of the SparseVolumeTexture we'll create
---@param Format EInterchangeSparseVolumeTextureFormat
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesAFormat(Format) end

---Sets the grid name and component index that will be assigned to the AttributesA texture, channel Z (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesAChannelZ(GridNameAndComponentIndex) end

---Sets the grid name and component index that will be assigned to the AttributesA texture, channel Y (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesAChannelY(GridNameAndComponentIndex) end

---Sets the grid name and component index that will be assigned to the AttributesA texture, channel X (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesAChannelX(GridNameAndComponentIndex) end

---Sets the grid name and component index that will be assigned to the AttributesA texture, channel W (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAttributesAChannelW(GridNameAndComponentIndex) end

---Sets the animation ID of the volume nodes that were grouped together to create this animated SparseVolumeTextureFactoryNode, if any
---@param InAnimationID string
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:SetCustomAnimationID(InAnimationID) end

---Gets the data type of the AttributesB texture of the SparseVolumeTexture we'll create
---@param Format EInterchangeSparseVolumeTextureFormat @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesBFormat(Format) end

---Gets the grid name and component index that will be assigned to the AttributesB texture, channel Z (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesBChannelZ(GridNameAndComponentIndex) end

---Gets the grid name and component index that will be assigned to the AttributesB texture, channel Y (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesBChannelY(GridNameAndComponentIndex) end

---Gets the grid name and component index that will be assigned to the AttributesB texture, channel X (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesBChannelX(GridNameAndComponentIndex) end

---Gets the grid name and component index that will be assigned to the AttributesB texture, channel W (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesBChannelW(GridNameAndComponentIndex) end

---Gets the data type of the AttributesA texture of the SparseVolumeTexture we'll create
---@param Format EInterchangeSparseVolumeTextureFormat @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesAFormat(Format) end

---Gets the grid name and component index that will be assigned to the AttributesA texture, channel Z (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesAChannelZ(GridNameAndComponentIndex) end

---Gets the grid name and component index that will be assigned to the AttributesA texture, channel Y (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesAChannelY(GridNameAndComponentIndex) end

---Gets the grid name and component index that will be assigned to the AttributesA texture, channel X (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesAChannelX(GridNameAndComponentIndex) end

---Gets the grid name and component index that will be assigned to the AttributesA texture, channel W (e.g. "density_0" or "temperature_2")
---@param GridNameAndComponentIndex string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAttributesAChannelW(GridNameAndComponentIndex) end

---Gets the animation ID of the volume nodes that were grouped together to create this animated SparseVolumeTextureFactoryNode, if any
---@param OutAnimationID string @[out] 
---@return boolean
function UInterchangeSparseVolumeTextureFactoryNode:GetCustomAnimationID(OutAnimationID) end

