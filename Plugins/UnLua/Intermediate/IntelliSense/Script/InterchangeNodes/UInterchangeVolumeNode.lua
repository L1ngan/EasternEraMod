---Represents a file that contains volume data in the form of (potentially multiple) grids,
---which are represented as UInterchangeVolumeGridNode dependencies
---@class UInterchangeVolumeNode : UInterchangeBaseNode
local UInterchangeVolumeNode = {}

---Sets the filename of the file with volume data (e.g. "C:/MyFolder/File.vdb").
---This is stored on the translated node as well as the source data, as a volume import may discover other
---additional files in order to handle animated volume imports.
---@param AttributeValue string
---@return boolean
function UInterchangeVolumeNode:SetCustomFileName(AttributeValue) end

---Sets an identifier that is shared by all volume nodes that correspond to the same animation
---(i.e. every volume node within the animation will have the same AnimationID)
---@param AttributeValue string
---@return boolean
function UInterchangeVolumeNode:SetCustomAnimationID(AttributeValue) end

---Removes the Node ID of an UInterchangeVolumeGridNode dependency
---@param DependencyUid string
---@return boolean
function UInterchangeVolumeNode:RemoveCustomGridDependency(DependencyUid) end

---Removes a frame index for which this volume is displayed within the animation that it belongs to, if any
---@param Index integer
---@return boolean
function UInterchangeVolumeNode:RemoveCustomFrameIndexInAnimation(Index) end

---Gets the Node ID of an UInterchangeVolumeGridNode dependency
---@param Index integer
---@param OutDependency string @[out] 
function UInterchangeVolumeNode:GetCustomGridDependency(Index, OutDependency) end

---Gets the number of UInterchangeVolumeGridNodes declared as dependencies by this volume node
---(in other words, returns the number of volume grids contained in this file)
---@return integer
function UInterchangeVolumeNode:GetCustomGridDependeciesCount() end

---Gets the Node IDs of UInterchangeVolumeGridNodes declared as dependencies by this volume node
---@param OutDependencies TArray_string_ @[out] 
function UInterchangeVolumeNode:GetCustomGridDependecies(OutDependencies) end

---Get the frame indices for which this volume is displayed within the animation that it belongs to, if any
---(e.g. if this had [2, 3] then frames 2 and 3 of the animation with AnimationID should display this volume)
---@param OutAnimationIndices TArray_integer_ @[out] 
function UInterchangeVolumeNode:GetCustomFrameIndicesInAnimation(OutAnimationIndices) end

---Gets one of the frame indices for which this volume is displayed within the animation that it belongs to, if any
---@param IndexIndex integer
---@param OutIndex integer @[out] 
function UInterchangeVolumeNode:GetCustomFrameIndexInAnimation(IndexIndex, OutIndex) end

---Gets the filename of the file with volume data (e.g. "C:/MyFolder/File.vdb").
---This is stored on the translated node as well as the source data, as a volume import may discover other
---additional files in order to handle animated volume imports.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeVolumeNode:GetCustomFileName(AttributeValue) end

---Gets an identifier that is shared by all volume nodes that correspond to the same animation
---(i.e. every volume node within the animation will have the same AnimationID)
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeVolumeNode:GetCustomAnimationID(AttributeValue) end

---Sets the Node ID of an UInterchangeVolumeGridNode dependency
---@param DependencyUid string
---@return boolean
function UInterchangeVolumeNode:AddCustomGridDependency(DependencyUid) end

---Adds a frame index for which this volume is displayed within the animation that it belongs to, if any
---@param Index integer
---@return boolean
function UInterchangeVolumeNode:AddCustomFrameIndexInAnimation(Index) end

