---@class UNavMovementInterface : UInterface
local UNavMovementInterface = {}

---Stops movement immediately (reset velocity) but keeps following current path
function UNavMovementInterface:StopMovementKeepPathing() end

---Stops applying further movement (usually zeros acceleration).
function UNavMovementInterface:StopActiveMovement() end

---path following: request movement through a new move input (normal vector = full strength)
---@param MoveInput FVector
function UNavMovementInterface:RequestPathMove(MoveInput) end

---path following: request movement through a velocity directly
---@param MoveVelocity FVector
---@param bForceMaxSpeed boolean
function UNavMovementInterface:RequestDirectMove(MoveVelocity, bForceMaxSpeed) end

---Returns true if currently swimming (moving through a fluid volume)
---@return boolean
function UNavMovementInterface:IsSwimming() end

---Returns true if currently moving on the ground (e.g. walking or driving)
---@return boolean
function UNavMovementInterface:IsMovingOnGround() end

---Returns true if currently flying (moving through a non-fluid volume without resting on the ground)
---@return boolean
function UNavMovementInterface:IsFlying() end

---Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)
---@return boolean
function UNavMovementInterface:IsFalling() end

---Returns true if currently crouching
---@return boolean
function UNavMovementInterface:IsCrouching() end

---Get the current velocity of the agent for nav movement
---@return FVector
function UNavMovementInterface:GetVelocityForNavMovement() end

---Get maximum movement speed of the agent
---@return number
function UNavMovementInterface:GetMaxSpeedForNavMovement() end

