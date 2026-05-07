---@class UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
local UAIBlueprintHelperLibrary = {}

---unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources
---@param AnimInstance UAnimInstance
---@param bUnlockMovement boolean
---@param UnlockAILogic boolean
function UAIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation(AnimInstance, bUnlockMovement, UnlockAILogic) end

---Spawns AI agent of a given class. The PawnClass needs to have AIController
---set for the function to spawn a controller as well.
---     and AI controller, this BehaviorTree asset will be assigned to the AI
---     controller, and run.
---     persistent level (which is the default behavior).
---@param WorldContextObject UObject
---@param PawnClass TSubclassOf_APawn_
---@param BehaviorTree UBehaviorTree
---@param Location FVector
---@param Rotation FRotator
---@param bNoCollisionFail boolean @[opt] 
---@param Owner AActor @[opt] 
---@return APawn
function UAIBlueprintHelperLibrary.SpawnAIFromClass(WorldContextObject, PawnClass, BehaviorTree, Location, Rotation, bNoCollisionFail, Owner) end

---@param Controller AController
---@param Goal FVector
function UAIBlueprintHelperLibrary.SimpleMoveToLocation(Controller, Goal) end

---@param Controller AController
---@param Goal AActor
function UAIBlueprintHelperLibrary.SimpleMoveToActor(Controller, Goal) end

---@param Target APawn
---@param Message string
---@param MessageSource UObject
---@param bSuccess boolean @[opt] 
function UAIBlueprintHelperLibrary.SendAIMessage(Target, Message, MessageSource, bSuccess) end

---locks indicated AI resources of animated pawn
---@param AnimInstance UAnimInstance
---@param bLockMovement boolean
---@param LockAILogic boolean
function UAIBlueprintHelperLibrary.LockAIResourcesWithAnimation(AnimInstance, bLockMovement, LockAILogic) end

---@param Rotation FRotator
---@return boolean
function UAIBlueprintHelperLibrary.IsValidAIRotation(Rotation) end

---@param Location FVector
---@return boolean
function UAIBlueprintHelperLibrary.IsValidAILocation(Location) end

---@param DirectionVector FVector
---@return boolean
function UAIBlueprintHelperLibrary.IsValidAIDirection(DirectionVector) end

---Return the path index of the next nav link for the current path of the given controller. Returns INDEX_NONE if no path or no incoming nav link.
---@param Controller AController
---@return integer
function UAIBlueprintHelperLibrary.GetNextNavLinkIndex(Controller) end

---Returns an array of navigation path points given controller is currently using.
---@param Controller AController
---@return TArray_FVector_
function UAIBlueprintHelperLibrary.GetCurrentPathPoints(Controller) end

---Return the path index the given controller is currently at. Returns INDEX_NONE if no path.
---@param Controller AController
---@return integer
function UAIBlueprintHelperLibrary.GetCurrentPathIndex(Controller) end

---Returns a NEW UOBJECT that is a COPY of navigation path given controller is currently using.
---    The result being a copy means you won't be able to influence agent's pathfollowing
---    by manipulating received path.
---    Please use GetCurrentPathPoints if you only need the array of path points.
---@param Controller AController
---@return UNavigationPath
function UAIBlueprintHelperLibrary.GetCurrentPath(Controller) end

---@param Target AActor
---@return UBlackboardComponent
function UAIBlueprintHelperLibrary.GetBlackboard(Target) end

---The way it works exactly is if the actor passed in is a pawn, then the function retrieves
---    pawn's controller cast to AIController. Otherwise the function returns actor cast to AIController.
---@param ControlledActor AActor
---@return AAIController
function UAIBlueprintHelperLibrary.GetAIController(ControlledActor) end

---@param WorldContextObject UObject
---@param Pawn APawn
---@param Destination FVector
---@param TargetActor AActor @[opt] 
---@param AcceptanceRadius number @[opt] 
---@param bStopOnOverlap boolean @[opt] 
---@return UAIAsyncTaskBlueprintProxy
function UAIBlueprintHelperLibrary.CreateMoveToProxyObject(WorldContextObject, Pawn, Destination, TargetActor, AcceptanceRadius, bStopOnOverlap) end

