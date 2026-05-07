---@class UAvoidanceManager : UObject
---@field public DefaultTimeToLive number @How long an avoidance UID must not be updated before the system will put it back in the pool. Actual delay is up to 150% of this value.
---@field public LockTimeAfterAvoid number @How long to stay on course (barring collision) after making an avoidance move
---@field public LockTimeAfterClean number @How long to stay on course (barring collision) after making an unobstructed move (should be > 0.0, but can be less than a full frame)
---@field public DeltaTimeToPredict number @This is how far forward in time (seconds) we extend our velocity cones and thus our prediction
---@field public ArtificialRadiusExpansion number @Multiply the radius of all STORED avoidance objects by this value to allow a little extra room for avoidance maneuvers.
---@field public HeightCheckMargin number @Allowable height margin between obstacles and agents. This is over and above the difference in agent heights.
local UAvoidanceManager = {}

---Register with the given avoidance manager.
---@param MovementComp UMovementComponent
---@param AvoidanceWeight number @[opt] 
---@return boolean
function UAvoidanceManager:RegisterMovementComponent(MovementComp, AvoidanceWeight) end

---Get the number of avoidance objects currently in the manager.
---@return integer
function UAvoidanceManager:GetObjectCount() end

---Get appropriate UID for use when reporting to this function or requesting RVO assistance.
---@return integer
function UAvoidanceManager:GetNewAvoidanceUID() end

---Calculate avoidance velocity for component (avoids collisions with the supplied component)
---@param MovementComp UMovementComponent
---@return FVector
function UAvoidanceManager:GetAvoidanceVelocityForComponent(MovementComp) end

