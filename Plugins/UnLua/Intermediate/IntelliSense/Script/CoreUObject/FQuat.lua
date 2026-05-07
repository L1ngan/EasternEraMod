---Quaternion.
---@class FQuat
---@field public X number
---@field public Y number
---@field public Z number
---@field public W number
local FQuat = {}
---@param P0 number 
---@return FQuat
function FQuat:GetNormalized(P0) end
---@return boolean
function FQuat:IsNormalized() end
---@return number
function FQuat:Size() end
---@return number
function FQuat:SizeSquared() end
---@param P0 FVector @[out]
---@param P1 number @[out]
function FQuat:ToAxisAndAngle(P0, P1) end
---@return FQuat
function FQuat:Inverse() end
---@param P0 FVector 
---@return FVector
function FQuat:RotateVector(P0) end
---@param P0 FVector 
---@return FVector
function FQuat:UnrotateVector(P0) end
---@return FVector
function FQuat:GetAxisX() end
---@return FVector
function FQuat:GetAxisY() end
---@return FVector
function FQuat:GetAxisZ() end
---@return FVector
function FQuat:GetForwardVector() end
---@return FVector
function FQuat:GetRightVector() end
---@return FVector
function FQuat:GetUpVector() end


---@param P0 FQuat 
---@param P1 FQuat 
---@param P2 number 
---@return FQuat
function FQuat.Slerp(P0, P1, P2) end
---@return FVector
function FQuat:ToEuler() end
---@return FRotator
function FQuat:ToRotator() end
---@param P0 FQuat 
---@return FQuat
function FQuat:__add(P0) end
---@param P0 FQuat 
---@return FQuat
function FQuat:__sub(P0) end
---@param P0 number 
---@return FQuat
function FQuat:__div(P0) end
---@param P0 FQuat 
---@return FQuat
function FQuat:Add(P0) end
---@param P0 FQuat 
---@return FQuat
function FQuat:Sub(P0) end
---@param P0 number 
---@return FQuat
function FQuat:Div(P0) end
