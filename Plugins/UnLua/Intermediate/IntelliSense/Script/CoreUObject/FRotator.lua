---An orthogonal rotation in 3d space.
---@class FRotator
---@field public Pitch number @Pitch (degrees) around Y axis
---@field public Yaw number @Yaw (degrees) around Z axis
---@field public Roll number @Roll (degrees) around X axis
local FRotator = {}
function FRotator:Normalize() end
---@return FRotator
function FRotator:GetNormalized() end
---@param P0 FVector 
---@return FVector
function FRotator:RotateVector(P0) end
---@param P0 FVector 
---@return FVector
function FRotator:UnrotateVector(P0) end
---@return FRotator
function FRotator:Clamp() end
---@return FVector
function FRotator:GetForwardVector() end
---@return FVector
function FRotator:ToVector() end
---@return FVector
function FRotator:ToEuler() end
---@return FQuat
function FRotator:ToQuat() end
---@return FRotator
function FRotator:Inverse() end
---@param P0 FRotator 
---@return FRotator
function FRotator:__add(P0) end
---@param P0 FRotator 
---@return FRotator
function FRotator:__sub(P0) end
---@param P0 number 
---@return FRotator
function FRotator:__mul(P0) end
---@param P0 FRotator 
---@return FRotator
function FRotator:Add(P0) end
---@param P0 FRotator 
---@return FRotator
function FRotator:Sub(P0) end
---@param P0 number 
---@return FRotator
function FRotator:Mul(P0) end
