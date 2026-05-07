---@class UAISystem : UAISystemBase
---@field protected PerceptionSystemClassName FSoftClassPath @Class that will be used to spawn the perception system, can be game-specific
---@field protected HotSpotManagerClassName FSoftClassPath @Class that will be used to spawn the hot spot manager, can be game-specific
---@field protected EnvQueryManagerClassName FSoftClassPath @Class that will be used to spawn the env query manager, can be game-specific
---@field public AcceptanceRadius number @Default AI movement's acceptance radius used to determine whether AI reached path's end
---@field public PathfollowingRegularPathPointAcceptanceRadius number @Value used for pathfollowing's internal code to determine whether AI reached path's point.     @@note this value is not used for path's last point. @@see AcceptanceRadius
---@field public PathfollowingNavLinkAcceptanceRadius number @Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals     but gets applied only when next point on a path represents a begining of navigation link
---@field public bFinishMoveOnGoalOverlap boolean @If true, overlapping the goal will be counted by default as finishing a move
---@field public bAcceptPartialPaths boolean @Sets default value for rather move tasks accept partial paths or not
---@field public bAllowStrafing boolean @Sets default value for rather move tasks allow strafing or not
---@field public bAllowControllersAsEQSQuerier boolean @if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will     in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses     pawn-less controller
---@field public bEnableDebuggerPlugin boolean @if set, GameplayDebuggerPlugin will be loaded on module's startup
---@field public bForgetStaleActors boolean @If set, actors will be forgotten by the perception system when their stimulus has expired.     If not set, the perception system will remember the actor even if they are no longer perceived and their     stimuli has exceeded its max age
---@field public bAddBlackboardSelfKey boolean @If set to true will result in automatically adding the SelfActor key to new Blackboard assets. It will     also result in making sure all the BB assets loaded do have the SelfKey entry, via PostLoad
---@field public bClearBBEntryOnBTEQSFail boolean
---@field public bBlackboardKeyDecoratorAllowsNoneAsValue boolean @If enabled, blackboard based decorators will set key to 'Invalid' on creation or when selected key no longer exists (instead of using the first key of the blackboard).
---@field public DefaultBlackboard TSoftObjectPtr<UBlackboardData> @If set, new BTs will use this BB as default.
---@field public DefaultSightCollisionChannel integer @Which collision channel to use for sight checks by default
---@field protected BehaviorTreeManager UBehaviorTreeManager @Behavior tree manager used by game
---@field protected EnvironmentQueryManager UEnvQueryManager @Environment query manager used by game
---@field protected PerceptionSystem UAIPerceptionSystem
---@field protected AllProxyObjects TArray<UAIAsyncTaskBlueprintProxy>
---@field protected HotSpotManager UAIHotSpotManager
---@field protected NavLocalGrids UNavLocalGridManager
local UAISystem = {}

function UAISystem:AILoggingVerbose() end

---cheats
function UAISystem:AIIgnorePlayers() end

