---@class UInterchangeGeometryCacheNode : UInterchangeMeshNode
local UInterchangeGeometryCacheNode = {}

---Set the start frame of the animated mesh. Return false if the attribute could not be set.
---@param AttributeValue integer
---@return boolean
function UInterchangeGeometryCacheNode:SetCustomStartFrame(AttributeValue) end

---Set the constant topology attribute of this animated mesh. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeGeometryCacheNode:SetCustomHasConstantTopology(AttributeValue) end

---Set the frame rate of the animated mesh. Return false if the attribute could not be set.
---@param AttributeValue number
---@return boolean
function UInterchangeGeometryCacheNode:SetCustomFrameRate(AttributeValue) end

---Set the end frame of the animated mesh. Return false if the attribute could not be set.
---@param AttributeValue integer
---@return boolean
function UInterchangeGeometryCacheNode:SetCustomEndFrame(AttributeValue) end

---Query the start frame of the animated mesh. Return false if the attribute was not set.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeGeometryCacheNode:GetCustomStartFrame(AttributeValue) end

---Query whether this animated mesh has constant topoplogy. Return false if the attribute was not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeGeometryCacheNode:GetCustomHasConstantTopology(AttributeValue) end

---Query the frame rate of the animated mesh. Return false if the attribute was not set.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeGeometryCacheNode:GetCustomFrameRate(AttributeValue) end

---Query the end frame of the animated mesh. Return false if the attribute was not set.
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeGeometryCacheNode:GetCustomEndFrame(AttributeValue) end

