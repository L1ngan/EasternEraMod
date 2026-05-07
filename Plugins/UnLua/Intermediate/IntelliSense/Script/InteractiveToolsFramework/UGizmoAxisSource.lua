---@class UGizmoAxisSource : UInterface
local UGizmoAxisSource = {}

---
---@return boolean
function UGizmoAxisSource:HasTangentVectors() end

---Get the two tangent vectors that are orthogonal to the Direction vector.
---@param TangentXOut FVector @[out] 
---@param TangentYOut FVector @[out] 
function UGizmoAxisSource:GetTangentVectors(TangentXOut, TangentYOut) end

---
---@return FVector
function UGizmoAxisSource:GetOrigin() end

---
---@return FVector
function UGizmoAxisSource:GetDirection() end

