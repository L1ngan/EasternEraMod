---UGizmoConstantFrameAxisSource is an IGizmoAxisSource implementation that
---internally stores the Origin, Direction, and X/Y Tangent constants.
---@class UGizmoConstantFrameAxisSource : UObject
---@field public Origin FVector
---@field public Direction FVector
---@field public TangentX FVector
---@field public TangentY FVector
local UGizmoConstantFrameAxisSource = {}

---
---@return boolean
function UGizmoConstantFrameAxisSource:HasTangentVectors() end

---Get the two tangent vectors that are orthogonal to the Direction vector.
---@param TangentXOut FVector @[out] 
---@param TangentYOut FVector @[out] 
function UGizmoConstantFrameAxisSource:GetTangentVectors(TangentXOut, TangentYOut) end

---
---@return FVector
function UGizmoConstantFrameAxisSource:GetOrigin() end

---
---@return FVector
function UGizmoConstantFrameAxisSource:GetDirection() end

