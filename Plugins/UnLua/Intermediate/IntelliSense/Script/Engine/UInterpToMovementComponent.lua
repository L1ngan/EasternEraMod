---Move the root component between a series of points over a given time *
---@class UInterpToMovementComponent : UMovementComponent
---@field public Duration number @How long to take to move from the first point to the last (or vice versa)
---@field public bPauseOnImpact boolean @If true, will pause movement on impact. If false it will behave as if the end of the movement range was reached based on the BehaviourType.
---@field public bSweep boolean @If true, will sweep for blocking collision during movement. If false, it will simply teleport to the next position and ignore collision.
---@field public TeleportType ETeleportType @Physics teleport type.
---@field public BehaviourType EInterpToBehaviourType @Movement behaviour of the component
---@field public bCheckIfStillInWorld boolean @Do we want this comp to perform CheckStillInWorld checks?
---@field public bForceSubStepping boolean @If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory. Objects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed. Sub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.
---@field public OnInterpToReverse MulticastDelegate @Called when InterpTo impacts something and reverse is enabled.
---@field public OnInterpToStop MulticastDelegate @Called when InterpTo has come to a stop.
---@field public OnWaitBeginDelegate MulticastDelegate @Called when InterpTo has come to a stop but will resume when possible.
---@field public OnWaitEndDelegate MulticastDelegate @Called when InterpTo has resumed following a stop.
---@field public OnResetDelegate MulticastDelegate @Called when InterpTo reached the end and reset back to start .
---@field public MaxSimulationTimeStep number @Max time delta for each discrete simulation step. Lowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance. WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.
---@field public SpeedMultiplier number @Change the speed of movement.
---@field public MaxSimulationIterations integer @Max number of iterations used for each discrete simulation step. Increasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance. WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.
---@field public ControlPoints TArray<FInterpControlPoint> @List of control points to visit.
local UInterpToMovementComponent = {}

---Clears the reference to UpdatedComponent, fires stop event, and stops ticking.
---@param HitResult FHitResult
function UInterpToMovementComponent:StopSimulating(HitResult) end

---Reset to start. Sets time to zero and direction to 1.
---@param InitialDirection number @[opt] 
function UInterpToMovementComponent:RestartMovement(InitialDirection) end

---Clear the control points array and set to stopped.
function UInterpToMovementComponent:ResetControlPoints() end

---@param ImpactResult FHitResult
---@param Time number
function UInterpToMovementComponent:OnInterpToWaitEndDelegate__DelegateSignature(ImpactResult, Time) end

---@param ImpactResult FHitResult
---@param Time number
function UInterpToMovementComponent:OnInterpToWaitBeginDelegate__DelegateSignature(ImpactResult, Time) end

---@param ImpactResult FHitResult
---@param Time number
function UInterpToMovementComponent:OnInterpToStopDelegate__DelegateSignature(ImpactResult, Time) end

---@param ImpactResult FHitResult
---@param Time number
function UInterpToMovementComponent:OnInterpToReverseDelegate__DelegateSignature(ImpactResult, Time) end

---@param ImpactResult FHitResult
---@param Time number
function UInterpToMovementComponent:OnInterpToResetDelegate__DelegateSignature(ImpactResult, Time) end

---Initialise the control points array. Call after adding control points if they are add after begin play .
function UInterpToMovementComponent:FinaliseControlPoints() end

---Add a control point that represents a position.
---@param Pos FVector
---@param bPositionIsRelative boolean @[opt] 
function UInterpToMovementComponent:AddControlPointPosition(Pos, bPositionIsRelative) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInterpToMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UInterpToMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInterpToMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end

