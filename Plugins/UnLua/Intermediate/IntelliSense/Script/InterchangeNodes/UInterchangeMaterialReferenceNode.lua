---Describes a reference to an existing (as in, not imported) material.
---The idea is that mesh / actor nodes can reference one of these nodes as a slot dependency, and
---Interchange will assign that existing material to the corresponding slot during import
---@class UInterchangeMaterialReferenceNode : UInterchangeBaseNode
local UInterchangeMaterialReferenceNode = {}

---Sets the content path of the target material (e.g. "/Game/MyFolder/Red.Red")
---@param AttributeValue string
---@return boolean
function UInterchangeMaterialReferenceNode:SetCustomContentPath(AttributeValue) end

---Gets the content path of the target material (e.g. "/Game/MyFolder/Red.Red")
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeMaterialReferenceNode:GetCustomContentPath(AttributeValue) end

