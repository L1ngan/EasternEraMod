---A vector in 2-D space composed of components (X, Y) with floating point precision.
---@class FVector2D
---@field public X number
---@field public Y number
local FVector2D = {}
---@param P0 FVector2D 
---@return number
function FVector2D:Dot(P0) end
---@param P0 FVector2D 
---@return number
function FVector2D:Cross(P0) end
---@return number
function FVector2D:Size() end
---@return number
function FVector2D:SizeSquared() end


---@param P0 FVector2D 
---@param P1 FVector2D 
---@return number
function FVector2D.Dist(P0, P1) end


---@param P0 FVector2D 
---@param P1 FVector2D 
---@return number
function FVector2D.DistSquared(P0, P1) end
