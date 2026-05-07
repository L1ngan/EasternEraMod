---UGizmoWorldAxisSource is an IGizmoAxisSource that provides one of the World axes
---(ie X/Y/Z axes) based on an integer AxisIndex in range [0,2]. The Orgin is
---internally stored as a FProperty.
---@class UGizmoWorldAxisSource : UObject
---@field public Origin FVector
---@field public AxisIndex integer @Clamped internally to 0,1,2
local UGizmoWorldAxisSource = {}

---
---@return boolean
function UGizmoWorldAxisSource:HasTangentVectors() end

---Get the two tangent vectors that are orthogonal to the Direction vector.
---@param TangentXOut FVector @[out] 
---@param TangentYOut FVector @[out] 
function UGizmoWorldAxisSource:GetTangentVectors(TangentXOut, TangentYOut) end

---
---@return FVector
function UGizmoWorldAxisSource:GetOrigin() end

---
---@return FVector
function UGizmoWorldAxisSource:GetDirection() end

