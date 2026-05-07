---FAITestSpawnInfo
---Generic AI Test Spawn Info used in FAITestSpawnSet within a generic AFunctionalAITest test.
---@class FAITestSpawnInfo : FAITestSpawnInfoBase
---@field public PawnClass TSubclassOf<APawn> @Determines AI to be spawned
---@field public ControllerClass TSubclassOf<AAIController> @class to override default pawn's controller class. If None the default will be used
---@field public TeamID FGenericTeamId
---@field public BehaviorTree UBehaviorTree @if set will be applied to spawned AI
local FAITestSpawnInfo = {}
