---NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding.
---@class UNavMovementComponent : UMovementComponent
---@field protected NavMovementProperties FNavMovementProperties
---@field public NavAgentProps FNavAgentProperties @Properties that define how the component can move.
---@field public MovementState FMovementProperties @Expresses runtime state of character's movement. Put all temporal changes to movement properties here
---@field private PathFollowingComp UObject @object implementing IPathFollowingAgentInterface. Is private to control access to it.     @@see SetPathFollowingAgent, GetPathFollowingAgent
local UNavMovementComponent = {}

---Returns true if currently swimming (moving through a fluid volume)
---@return boolean
function UNavMovementComponent:IsSwimming() end

---Returns true if currently moving on the ground (e.g. walking or driving)
---@return boolean
function UNavMovementComponent:IsMovingOnGround() end

---Returns true if currently flying (moving through a non-fluid volume without resting on the ground)
---@return boolean
function UNavMovementComponent:IsFlying() end

---Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)
---@return boolean
function UNavMovementComponent:IsFalling() end

---Returns true if currently crouching
---@return boolean
function UNavMovementComponent:IsCrouching() end

---Get the current velocity of the movement component
---@return FVector
function UNavMovementComponent:GetVelocityForNavMovement() end

---Stops movement immediately (reset velocity) but keeps following current path
function UNavMovementComponent:StopMovementKeepPathing() end

---Stops applying further movement (usually zeros acceleration).
function UNavMovementComponent:StopActiveMovement() end

---path following: request movement through a new move input (normal vector = full strength)
---@param MoveInput FVector
function UNavMovementComponent:RequestPathMove(MoveInput) end

---path following: request movement through a velocity directly
---@param MoveVelocity FVector
---@param bForceMaxSpeed boolean
function UNavMovementComponent:RequestDirectMove(MoveVelocity, bForceMaxSpeed) end

---Get maximum movement speed of the agent
---@return number
function UNavMovementComponent:GetMaxSpeedForNavMovement() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNavMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end

