---Primarily used for Ortho Camera
---@class UInterchangeStandardCameraNode : UInterchangeBaseNode
local UInterchangeStandardCameraNode = {}

---@param AttributeValue number
---@return boolean
function UInterchangeStandardCameraNode:SetCustomWidth(AttributeValue) end

---@param AttributeValue EInterchangeCameraProjectionType
---@return boolean
function UInterchangeStandardCameraNode:SetCustomProjectionMode(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangeStandardCameraNode:SetCustomNearClipPlane(AttributeValue) end

---Field of View in Degrees.
---@param AttributeValue number
---@return boolean
function UInterchangeStandardCameraNode:SetCustomFieldOfView(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangeStandardCameraNode:SetCustomFarClipPlane(AttributeValue) end

---@param AttributeValue number
---@return boolean
function UInterchangeStandardCameraNode:SetCustomAspectRatio(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraNode:GetCustomWidth(AttributeValue) end

---@param AttributeValue EInterchangeCameraProjectionType @[out] 
---@return boolean
function UInterchangeStandardCameraNode:GetCustomProjectionMode(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraNode:GetCustomNearClipPlane(AttributeValue) end

---Field of View in Degrees.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraNode:GetCustomFieldOfView(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraNode:GetCustomFarClipPlane(AttributeValue) end

---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeStandardCameraNode:GetCustomAspectRatio(AttributeValue) end

