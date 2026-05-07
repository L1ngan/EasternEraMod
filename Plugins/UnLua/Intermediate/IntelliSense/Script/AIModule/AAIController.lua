---AIController is the base class of controllers for AI-controlled Pawns.
---Controllers are non-physical actors that can be attached to a pawn to control its actions.
---AIControllers manage the artificial intelligence for the pawns they control.
---In networked games, they only exist on the server.
---@class AAIController : AController
---@field protected bStartAILogicOnPossess boolean @By default AI's logic does not start when controlled Pawn is possessed. Setting this flag to true     will make AI logic start when pawn is possessed
---@field protected bStopAILogicOnUnposses boolean @By default AI's logic gets stopped when controlled Pawn is unpossessed. Setting this flag to false     will make AI logic persist past losing control over a pawn
---@field public bLOSflag boolean @used for alternating LineOfSight traces
---@field public bSkipExtraLOSChecks boolean @Skip extra line of sight traces to extremities of target being checked.
---@field public bAllowStrafe boolean @Is strafing allowed during movement?
---@field public bWantsPlayerState boolean @Specifies if this AI wants its own PlayerState.
---@field public bSetControlRotationFromPawnOrientation boolean @Copy Pawn rotation to ControlRotation, if there is no focus point.
---@field private PathFollowingComponent UPathFollowingComponent @Component used for moving along a path.
---@field public BrainComponent UBrainComponent @Component responsible for behaviors.
---@field public PerceptionComponent UAIPerceptionComponent
---@field protected Blackboard UBlackboardComponent @blackboard
---@field protected CachedGameplayTasksComponent UGameplayTasksComponent
---@field protected DefaultNavigationFilterClass TSubclassOf<UNavigationQueryFilter>
---@field public ReceiveMoveCompleted MulticastDelegate @Blueprint notification that we've completed the current movement request
local AAIController = {}

---Makes AI use the specified Blackboard asset & creates a Blackboard Component if one does not already exist.
---@param BlackboardAsset UBlackboardData
---@param BlackboardComponent UBlackboardComponent @[out] 
---@return boolean
function AAIController:UseBlackboard(BlackboardAsset, BlackboardComponent) end

---@param ResourceClass TSubclassOf_UGameplayTaskResource_
function AAIController:UnclaimTaskResource(ResourceClass) end

---Note that this function does not do any pathfollowing state transfer.
---    Intended to be called as part of initialization/setup process
---@param NewPFComponent UPathFollowingComponent
function AAIController:SetPathFollowingComponent(NewPFComponent) end

---Updates state of movement block detection.
---@param bEnable boolean
function AAIController:SetMoveBlockDetection(bEnable) end

---Starts executing behavior tree.
---@param BTAsset UBehaviorTree
---@return boolean
function AAIController:RunBehaviorTree(BTAsset) end

---@param BlackboardComp UBlackboardComponent
---@param BlackboardAsset UBlackboardData
function AAIController:OnUsingBlackBoard(BlackboardComp, BlackboardAsset) end

---@param NewlyClaimed FGameplayResourceSet
---@param FreshlyReleased FGameplayResourceSet
function AAIController:OnGameplayTaskResourcesClaimed(NewlyClaimed, FreshlyReleased) end

---Makes AI go toward specified Dest location, aborts any active path following
---    @@note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius
---@param Dest FVector
---@param AcceptanceRadius number @[opt] 
---@param bStopOnOverlap boolean @[opt] 
---@param bUsePathfinding boolean @[opt] 
---@param bProjectDestinationToNavigation boolean @[opt] 
---@param bCanStrafe boolean @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@param bAllowPartialPath boolean @[opt] 
---@return integer
function AAIController:MoveToLocation(Dest, AcceptanceRadius, bStopOnOverlap, bUsePathfinding, bProjectDestinationToNavigation, bCanStrafe, FilterClass, bAllowPartialPath) end

---Makes AI go toward specified Goal actor (destination will be continuously updated), aborts any active path following
---    @@note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius
---@param Goal AActor
---@param AcceptanceRadius number @[opt] 
---@param bStopOnOverlap boolean @[opt] 
---@param bUsePathfinding boolean @[opt] 
---@param bCanStrafe boolean @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@param bAllowPartialPath boolean @[opt] 
---@return integer
function AAIController:MoveToActor(Goal, AcceptanceRadius, bStopOnOverlap, bUsePathfinding, bCanStrafe, FilterClass, bAllowPartialPath) end

---Set Focus for actor, will set FocalPoint as a result.
---@param NewFocus AActor
function AAIController:K2_SetFocus(NewFocus) end

---Set the position that controller should be looking at.
---@param FP FVector
function AAIController:K2_SetFocalPoint(FP) end

---Clears Focus, will also clear FocalPoint as a result
function AAIController:K2_ClearFocus() end

---Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination).
---@return boolean
function AAIController:HasPartialPath() end

---Returns PathFollowingComponent subobject *
---@return UPathFollowingComponent
function AAIController:GetPathFollowingComponent() end

---Returns status of path following
---@return integer
function AAIController:GetMoveStatus() end

---Returns position of current path segment's end.
---@return FVector
function AAIController:GetImmediateMoveDestination() end

---Get the focused actor.
---@return AActor
function AAIController:GetFocusActor() end

---Retrieve the focal point this controller should focus to on given actor.
---@param Actor AActor
---@return FVector
function AAIController:GetFocalPointOnActor(Actor) end

---Retrieve the final position that controller should be looking at.
---@return FVector
function AAIController:GetFocalPoint() end

---@return UAIPerceptionComponent
function AAIController:GetAIPerceptionComponent() end

---@param ResourceClass TSubclassOf_UGameplayTaskResource_
function AAIController:ClaimTaskResource(ResourceClass) end

