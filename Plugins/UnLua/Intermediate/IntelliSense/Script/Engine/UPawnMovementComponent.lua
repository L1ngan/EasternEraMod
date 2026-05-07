---PawnMovementComponent can be used to update movement for an associated Pawn.
---It also provides ways to accumulate and read directional input in a generic way (with AddInputVector(), ConsumeInputVector(), etc).
---@class UPawnMovementComponent : UNavMovementComponent
---@field protected PawnOwner APawn @Pawn that owns this component.
local UPawnMovementComponent = {}

---Send the physics command to execute to the server
---@param ActionComponent UPrimitiveComponent
---@param BoneName string
---@param Timestamp FAsyncPhysicsTimestamp
---@param ActionType EPhysicsStateAction
---@param ActionDatas FVector
---@param ActionPosition FVector
function UPawnMovementComponent:ServerAsyncPhysicsStateAction(ActionComponent, BoneName, Timestamp, ActionType, ActionDatas, ActionPosition) end

---Dispatch back the physics command onto all the clients
---@param ActionComponent UPrimitiveComponent
---@param BoneName string
---@param Timestamp FAsyncPhysicsTimestamp
---@param ActionType EPhysicsStateAction
---@param ActionDatas FVector
---@param ActionPosition FVector
function UPawnMovementComponent:MulticastAsyncPhysicsStateAction(ActionComponent, BoneName, Timestamp, ActionType, ActionDatas, ActionPosition) end

---Helper to see if move input is ignored. If there is no Pawn or UpdatedComponent, returns true, otherwise defers to the Pawn's implementation of IsMoveInputIgnored().
---@return boolean
function UPawnMovementComponent:IsMoveInputIgnored() end

---Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it.
---PawnMovementComponents implementing movement usually want to use either this or ConsumeInputVector() as these functions represent the most recent state of input.
---@return FVector
function UPawnMovementComponent:GetPendingInputVector() end

---Return the Pawn that owns UpdatedComponent.
---@return APawn
function UPawnMovementComponent:GetPawnOwner() end

---Return the last input vector in world space that was processed by ConsumeInputVector(), which is usually done by the Pawn or PawnMovementComponent.
---Any user that needs to know about the input that last affected movement should use this function.
---@return FVector
function UPawnMovementComponent:GetLastInputVector() end

---Returns the pending input vector and resets it to zero.
---       * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.
---       * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).
---       * @@return The pending input vector.
---@return FVector
function UPawnMovementComponent:ConsumeInputVector() end

---Adds the given vector to the accumulated input in world space. Input vectors are usually between 0 and 1 in magnitude.
---They are accumulated during a frame then applied as acceleration during the movement update.
---@param WorldVector FVector
---@param bForce boolean @[opt] 
function UPawnMovementComponent:AddInputVector(WorldVector, bForce) end

---Stops movement immediately (reset velocity) but keeps following current path
function UPawnMovementComponent:StopMovementKeepPathing() end

---Stops applying further movement (usually zeros acceleration).
function UPawnMovementComponent:StopActiveMovement() end

---path following: request movement through a new move input (normal vector = full strength)
---@param MoveInput FVector
function UPawnMovementComponent:RequestPathMove(MoveInput) end

---path following: request movement through a velocity directly
---@param MoveVelocity FVector
---@param bForceMaxSpeed boolean
function UPawnMovementComponent:RequestDirectMove(MoveVelocity, bForceMaxSpeed) end

---Returns true if currently swimming (moving through a fluid volume)
---@return boolean
function UPawnMovementComponent:IsSwimming() end

---Returns true if currently moving on the ground (e.g. walking or driving)
---@return boolean
function UPawnMovementComponent:IsMovingOnGround() end

---Returns true if currently flying (moving through a non-fluid volume without resting on the ground)
---@return boolean
function UPawnMovementComponent:IsFlying() end

---Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)
---@return boolean
function UPawnMovementComponent:IsFalling() end

---Returns true if currently crouching
---@return boolean
function UPawnMovementComponent:IsCrouching() end

---Get the current velocity of the agent for nav movement
---@return FVector
function UPawnMovementComponent:GetVelocityForNavMovement() end

---Get maximum movement speed of the agent
---@return number
function UPawnMovementComponent:GetMaxSpeedForNavMovement() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPawnMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPawnMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPawnMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end

