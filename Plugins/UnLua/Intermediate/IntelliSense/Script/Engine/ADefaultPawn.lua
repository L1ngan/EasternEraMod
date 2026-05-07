---DefaultPawn implements a simple Pawn with spherical collision and built-in flying movement.
---@class ADefaultPawn : APawn
---@field public BaseTurnRate number @Base turn rate, in deg/sec. Other scaling may affect final turn rate.
---@field public BaseLookUpRate number @Base lookup rate, in deg/sec. Other scaling may affect final lookup rate.
---@field protected MovementComponent UPawnMovementComponent @DefaultPawn movement component
---@field private CollisionComponent USphereComponent @DefaultPawn collision component
---@field private MeshComponent UStaticMeshComponent @The mesh associated with this Pawn.
---@field public bAddDefaultMovementBindings boolean @If true, adds default input bindings for movement and camera look.
local ADefaultPawn = {}

---Called via input to turn at a given rate.
---@param Rate number
function ADefaultPawn:TurnAtRate(Rate) end

---Input callback to move up in world space (or down if Val is negative).
---@param Val number
function ADefaultPawn:MoveUp_World(Val) end

---Input callback to strafe right in local space (or left if Val is negative).
---@param Val number
function ADefaultPawn:MoveRight(Val) end

---Input callback to move forward in local space (or backward if Val is negative).
---@param Val number
function ADefaultPawn:MoveForward(Val) end

---Called via input to look up at a given rate (or down if Rate is negative).
---@param Rate number
function ADefaultPawn:LookUpAtRate(Rate) end

