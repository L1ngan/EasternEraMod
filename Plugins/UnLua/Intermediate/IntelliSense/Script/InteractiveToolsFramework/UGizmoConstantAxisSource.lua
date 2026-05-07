---UGizmoConstantAxisSource is an IGizmoAxisSource implementation that
---internally stores the Origin and Direction constants
---@class UGizmoConstantAxisSource : UObject
---@field public Origin FVector
---@field public Direction FVector
local UGizmoConstantAxisSource = {}

---
---@return boolean
function UGizmoConstantAxisSource:HasTangentVectors() end

---Get the two tangent vectors that are orthogonal to the Direction vector.
---@param TangentXOut FVector @[out] 
---@param TangentYOut FVector @[out] 
function UGizmoConstantAxisSource:GetTangentVectors(TangentXOut, TangentYOut) end

---
---@return FVector
function UGizmoConstantAxisSource:GetOrigin() end

---
---@return FVector
function UGizmoConstantAxisSource:GetDirection() end

