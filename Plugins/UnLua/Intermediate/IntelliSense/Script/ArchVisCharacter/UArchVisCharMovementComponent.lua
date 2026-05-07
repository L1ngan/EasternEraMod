---@class UArchVisCharMovementComponent : UCharacterMovementComponent
---@field public RotationalAcceleration FRotator @Controls how fast the character's turn rate accelerates when rotating and looking up/down
---@field public RotationalDeceleration FRotator @Controls how fast the character's turn rate decelerates to 0 when user stops turning
---@field public MaxRotationalVelocity FRotator @Fastest possible turn rate
---@field public MinPitch number @Controls how far down you can look
---@field public MaxPitch number @Controls how far up you can look
---@field public WalkingFriction number @Controls walking deceleration.
---@field public WalkingSpeed number @How fast the character can walk.
---@field public WalkingAcceleration number @How fast the character accelerates.
local UArchVisCharMovementComponent = {}

---Stops movement immediately (reset velocity) but keeps following current path
function UArchVisCharMovementComponent:StopMovementKeepPathing() end

---Stops applying further movement (usually zeros acceleration).
function UArchVisCharMovementComponent:StopActiveMovement() end

---path following: request movement through a new move input (normal vector = full strength)
---@param MoveInput FVector
function UArchVisCharMovementComponent:RequestPathMove(MoveInput) end

---path following: request movement through a velocity directly
---@param MoveVelocity FVector
---@param bForceMaxSpeed boolean
function UArchVisCharMovementComponent:RequestDirectMove(MoveVelocity, bForceMaxSpeed) end

---Returns true if currently swimming (moving through a fluid volume)
---@return boolean
function UArchVisCharMovementComponent:IsSwimming() end

---Returns true if currently moving on the ground (e.g. walking or driving)
---@return boolean
function UArchVisCharMovementComponent:IsMovingOnGround() end

---Returns true if currently flying (moving through a non-fluid volume without resting on the ground)
---@return boolean
function UArchVisCharMovementComponent:IsFlying() end

---Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)
---@return boolean
function UArchVisCharMovementComponent:IsFalling() end

---Returns true if currently crouching
---@return boolean
function UArchVisCharMovementComponent:IsCrouching() end

---Get the current velocity of the agent for nav movement
---@return FVector
function UArchVisCharMovementComponent:GetVelocityForNavMovement() end

---Get maximum movement speed of the agent
---@return number
function UArchVisCharMovementComponent:GetMaxSpeedForNavMovement() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UArchVisCharMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UArchVisCharMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UArchVisCharMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end

