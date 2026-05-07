---@class USpectatorPawnMovement : UFloatingPawnMovement
---@field public bIgnoreTimeDilation boolean @If true, component moves at full speed no matter the time dilation. Default is false.
local USpectatorPawnMovement = {}

---Stops movement immediately (reset velocity) but keeps following current path
function USpectatorPawnMovement:StopMovementKeepPathing() end

---Stops applying further movement (usually zeros acceleration).
function USpectatorPawnMovement:StopActiveMovement() end

---path following: request movement through a new move input (normal vector = full strength)
---@param MoveInput FVector
function USpectatorPawnMovement:RequestPathMove(MoveInput) end

---path following: request movement through a velocity directly
---@param MoveVelocity FVector
---@param bForceMaxSpeed boolean
function USpectatorPawnMovement:RequestDirectMove(MoveVelocity, bForceMaxSpeed) end

---Returns true if currently swimming (moving through a fluid volume)
---@return boolean
function USpectatorPawnMovement:IsSwimming() end

---Returns true if currently moving on the ground (e.g. walking or driving)
---@return boolean
function USpectatorPawnMovement:IsMovingOnGround() end

---Returns true if currently flying (moving through a non-fluid volume without resting on the ground)
---@return boolean
function USpectatorPawnMovement:IsFlying() end

---Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)
---@return boolean
function USpectatorPawnMovement:IsFalling() end

---Returns true if currently crouching
---@return boolean
function USpectatorPawnMovement:IsCrouching() end

---Get the current velocity of the agent for nav movement
---@return FVector
function USpectatorPawnMovement:GetVelocityForNavMovement() end

---Get maximum movement speed of the agent
---@return number
function USpectatorPawnMovement:GetMaxSpeedForNavMovement() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USpectatorPawnMovement:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USpectatorPawnMovement:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USpectatorPawnMovement:AddAssetUserDataOfClass(InUserDataClass) end

