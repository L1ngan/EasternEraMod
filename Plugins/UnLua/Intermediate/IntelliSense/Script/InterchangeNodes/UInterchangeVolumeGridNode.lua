---Represents a single grid (essentially a 3d texture) within a volumetric file
---@class UInterchangeVolumeGridNode : UInterchangeBaseNode
local UInterchangeVolumeGridNode = {}

---Sets the number of components of each voxel of the grid (e.g. 3 components for a vector grid)
---@param NumComponents integer
---@return boolean
function UInterchangeVolumeGridNode:SetCustomNumComponents(NumComponents) end

---Sets the grid transform contained in the volume file
---@param AttributeValue FTransform
---@return boolean
function UInterchangeVolumeGridNode:SetCustomGridTransform(AttributeValue) end

---Sets the size of the grid, in voxels.
---@param AttributeValue FIntVector
---@return boolean
function UInterchangeVolumeGridNode:SetCustomGridActiveDimensions(AttributeValue) end

---Sets the min X, Y and Z of the grid's active axis-aligned bounding box.
---@param AttributeValue FIntVector
---@return boolean
function UInterchangeVolumeGridNode:SetCustomGridActiveAABBMin(AttributeValue) end

---Sets the max X, Y and Z of the grid's active axis-aligned bounding box.
---@param AttributeValue FIntVector
---@return boolean
function UInterchangeVolumeGridNode:SetCustomGridActiveAABBMax(AttributeValue) end

---Sets the datatype of the value of each voxel in the grid
---@param AttributeValue EVolumeGridElementType
---@return boolean
function UInterchangeVolumeGridNode:SetCustomElementType(AttributeValue) end

---Gets the number of components of each voxel of the grid (e.g. 3 components for a vector grid)
---@param NumComponents integer @[out] 
---@return boolean
function UInterchangeVolumeGridNode:GetCustomNumComponents(NumComponents) end

---Gets the grid transform contained in the volume file
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeVolumeGridNode:GetCustomGridTransform(AttributeValue) end

---Gets the size of the grid, in voxels.
---@param AttributeValue FIntVector @[out] 
---@return boolean
function UInterchangeVolumeGridNode:GetCustomGridActiveDimensions(AttributeValue) end

---Gets the min X, Y and Z of the grid's active axis-aligned bounding box.
---@param AttributeValue FIntVector @[out] 
---@return boolean
function UInterchangeVolumeGridNode:GetCustomGridActiveAABBMin(AttributeValue) end

---Gets the max X, Y and Z of the grid's active axis-aligned bounding box.
---@param AttributeValue FIntVector @[out] 
---@return boolean
function UInterchangeVolumeGridNode:GetCustomGridActiveAABBMax(AttributeValue) end

---Gets the datatype of the value of each voxel in the grid
---@param AttributeValue EVolumeGridElementType @[out] 
---@return boolean
function UInterchangeVolumeGridNode:GetCustomElementType(AttributeValue) end

