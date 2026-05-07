---A point or direction FVector in 3d space.
---@class FVector
---@field public X number
---@field public Y number
---@field public Z number
local FVector = {}
---@param P0 FVector 
---@return number
function FVector:Dot(P0) end
---@param P0 FVector 
---@return FVector
function FVector:Cross(P0) end
---@return number
function FVector:Size() end
---@return number
function FVector:Size2D() end
---@return number
function FVector:SizeSquared() end
---@return number
function FVector:SizeSquared2D() end


---@param P0 FVector 
---@param P1 FVector 
---@return number
function FVector.Dist(P0, P1) end


---@param P0 FVector 
---@param P1 FVector 
---@return number
function FVector.Dist2D(P0, P1) end


---@param P0 FVector 
---@param P1 FVector 
---@return number
function FVector.DistSquared(P0, P1) end


---@param P0 FVector 
---@param P1 FVector 
---@return number
function FVector.DistSquared2D(P0, P1) end
---@return boolean
function FVector:IsNormalized() end
---@param P0 FVector 
---@return number
function FVector:CosineAngle2D(P0) end
---@param P0 number 
---@param P1 FVector 
---@return FVector
function FVector:RotateAngleAxis(P0, P1) end
---@return FRotator
function FVector:ToRotator() end
---@return FQuat
function FVector:ToQuat() end
