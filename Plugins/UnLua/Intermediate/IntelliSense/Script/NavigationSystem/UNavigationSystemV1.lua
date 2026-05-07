---@class UNavigationSystemV1 : UNavigationSystemBase
---@field public MainNavData ANavigationData
---@field public AbstractNavData ANavigationData @special navigation data for managing direct paths, not part of NavDataSet!
---@field protected DefaultAgentName string @If not None indicates which of navigation datas and supported agents are going to be used as the default ones. If navigation agent of this type does not exist or is not enabled then the first available nav data will be used as the default one
---@field protected CrowdManagerClass TSoftClassPtr<UCrowdManagerBase>
---@field protected bAutoCreateNavigationData boolean @Should navigation system spawn default Navigation Data when there's none and there are navigation bounds present?
---@field protected bSpawnNavDataInNavBoundsLevel boolean @If true will try to spawn the navigation data instance in the sublevel with navigation bounds, if false it will spawn in the persistent level
---@field protected bAllowClientSideNavigation boolean @If false, will not create nav collision when connecting as a client
---@field protected bShouldDiscardSubLevelNavData boolean @If true, games should ignore navigation data inside loaded sublevels
---@field protected bTickWhilePaused boolean @If true, will update navigation even when the game is paused
---@field protected bSupportRebuilding boolean @gets set to true if gathering navigation data (like in navoctree) is required due to the need of navigation generation     Is always true in Editor Mode. In other modes it depends on bRebuildAtRuntime of every required NavigationData class' CDO
---@field public bInitialBuildingLocked boolean @if set to true will result navigation system not rebuild navigation until     a call to ReleaseInitialBuildingLock() is called. Does not influence     editor-time generation (i.e. does influence PIE and Game).     Defaults to false.
---@field public bSkipAgentHeightCheckWhenPickingNavData boolean @false by default, if set to true will result in not caring about nav agent height     when trying to match navigation data to passed in nav agent
---@field public GeometryExportTriangleCountWarningThreshold integer @Warnings are logged if exporting the navigation collision for an object exceed this triangle count. Use -1 to disable.
---@field protected bGenerateNavigationOnlyAroundNavigationInvokers boolean @If set to true navigation will be generated only around registered "navigation enforcers"      This has a range of consequences (including how navigation octree operates) so it needs to      be a conscious decision.      Once enabled results in whole world being navigable.      @@see RegisterNavigationInvoker
---@field protected ActiveTilesUpdateInterval number @Minimal time, in seconds, between active tiles set update
---@field protected InvokersMaximumDistanceFromSeed number @When in use, invokers farther away from any invoker seed will be ignored (set to -1 to disable).
---@field protected DataGatheringMode ENavDataGatheringModeConfig @Sets how navigation data should be gathered when building collision information
---@field protected DirtyAreaWarningSizeThreshold number @-1 by default, if set to a positive value dirty areas with any dimensions in 2d over the threshold created at runtime will be logged
---@field protected GatheringNavModifiersWarningLimitTime number @-1.0f by default, if set to a positive value, all calls to GetNavigationData will be timed and compared to it.      Over the limit calls will be logged as warnings.      In seconds. Non-shipping build only.
---@field protected SupportedAgents TArray<FNavDataConfig> @List of agents types supported by this navigation system
---@field protected SupportedAgentsMask FNavAgentSelector @NavigationSystem's properties in Project Settings define all possible supported agents,     but a specific navigation system can choose to support only a subset of agents. Set via     NavigationSystemConfig
---@field public BuildBounds FBox @Bounds of tiles to be built
---@field public NavDataSet TArray<ANavigationData>
---@field public NavDataRegistrationQueue TArray<ANavigationData>
---@field public OnNavDataRegisteredEvent MulticastDelegate @BlueprintAssignable,
---@field public OnNavigationGenerationFinishedDelegate MulticastDelegate
---@field protected OperationMode FNavigationSystemRunMode
---@field protected Repository UNavigationObjectRepository
local UNavigationSystemV1 = {}

---Removes given actor from the list of active navigation enforcers.
---    @@see RegisterNavigationInvoker for more details
---@param Invoker AActor
function UNavigationSystemV1:UnregisterNavigationInvoker(Invoker) end

---will limit the number of simultaneously running navmesh tile generation jobs to specified number.
---    @@param MaxNumberOfJobs gets trimmed to be at least 1. You cannot use this function to pause navmesh generation
---@param MaxNumberOfJobs integer
function UNavigationSystemV1:SetMaxSimultaneousTileGenerationJobsCount(MaxNumberOfJobs) end

---@param NewMode ENavDataGatheringModeConfig
function UNavigationSystemV1:SetGeometryGatheringMode(NewMode) end

---Brings limit of simultaneous navmesh tile generation jobs back to Project Setting's default value
function UNavigationSystemV1:ResetMaxSimultaneousTileGenerationJobsCount() end

---Registers given actor as a "navigation enforcer" which means navigation system will
---    make sure navigation is being generated in specified radius around it.
---    @@note: you need NavigationSystem's GenerateNavigationOnlyAroundNavigationInvokers to be set to true
---            to take advantage of this feature
---@param Invoker AActor
---@param TileGenerationRadius number @[opt] 
---@param TileRemovalRadius number @[opt] 
function UNavigationSystemV1:RegisterNavigationInvoker(Invoker, TileGenerationRadius, TileRemovalRadius) end

---
---@param NavVolume ANavMeshBoundsVolume
function UNavigationSystemV1:OnNavigationBoundsUpdated(NavVolume) end

---Performs navigation raycast on NavigationData appropriate for given Querier.
---    @@param Querier if not passed default navigation data will be used
---    @@param HitLocation if line was obstructed this will be set to hit location. Otherwise it contains SegmentEnd
---    @@return true if line from RayStart to RayEnd was obstructed. Also, true when no navigation data present
---@param WorldContextObject UObject
---@param RayStart FVector
---@param RayEnd FVector
---@param HitLocation FVector @[out] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@param Querier AController @[opt] 
---@return boolean
function UNavigationSystemV1.NavigationRaycast(WorldContextObject, RayStart, RayEnd, HitLocation, FilterClass, Querier) end

---@param Object UObject
---@param OldArea TSubclassOf_UNavArea_
---@param NewArea TSubclassOf_UNavArea_
---@return boolean
function UNavigationSystemV1:K2_ReplaceAreaInOctreeData(Object, OldArea, NewArea) end

---Project a point onto the NavigationData
---@param WorldContextObject UObject
---@param Point FVector
---@param ProjectedLocation FVector @[out] 
---@param NavData ANavigationData
---@param FilterClass TSubclassOf_UNavigationQueryFilter_
---@param QueryExtent FVector
---@return boolean
function UNavigationSystemV1.K2_ProjectPointToNavigation(WorldContextObject, Point, ProjectedLocation, NavData, FilterClass, QueryExtent) end

---Generates a random location reachable from given Origin location.
---    @@return Return Value represents if the call was successful
---@param WorldContextObject UObject
---@param Origin FVector
---@param RandomLocation FVector @[out] 
---@param Radius number
---@param NavData ANavigationData @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return boolean
function UNavigationSystemV1.K2_GetRandomReachablePointInRadius(WorldContextObject, Origin, RandomLocation, Radius, NavData, FilterClass) end

---@param WorldContextObject UObject
---@param Origin FVector
---@param RandomLocation FVector @[out] 
---@param Radius number
---@param NavData ANavigationData @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return boolean
function UNavigationSystemV1.K2_GetRandomPointInNavigableRadius(WorldContextObject, Origin, RandomLocation, Radius, NavData, FilterClass) end

---Generates a random location in navigable space within given radius of Origin.
---    @@return Return Value represents if the call was successful
---@param WorldContextObject UObject
---@param Origin FVector
---@param RandomLocation FVector @[out] 
---@param Radius number
---@param NavData ANavigationData @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return boolean
function UNavigationSystemV1.K2_GetRandomLocationInNavigableRadius(WorldContextObject, Origin, RandomLocation, Radius, NavData, FilterClass) end

---@param WorldContextObject UObject
---@return boolean
function UNavigationSystemV1.IsNavigationBeingBuiltOrLocked(WorldContextObject) end

---@param WorldContextObject UObject
---@return boolean
function UNavigationSystemV1.IsNavigationBeingBuilt(WorldContextObject) end

---Potentially expensive. Use with caution
---@param WorldContextObject UObject
---@param PathStart FVector
---@param PathEnd FVector
---@param PathLength number @[out] 
---@param NavData ANavigationData @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return integer
function UNavigationSystemV1.GetPathLength(WorldContextObject, PathStart, PathEnd, PathLength, NavData, FilterClass) end

---Potentially expensive. Use with caution. Consider using UPathFollowingComponent::GetRemainingPathCost instead
---@param WorldContextObject UObject
---@param PathStart FVector
---@param PathEnd FVector
---@param PathCost number @[out] 
---@param NavData ANavigationData @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return integer
function UNavigationSystemV1.GetPathCost(WorldContextObject, PathStart, PathEnd, PathCost, NavData, FilterClass) end

---Blueprint functions
---@param WorldContextObject UObject
---@return UNavigationSystemV1
function UNavigationSystemV1.GetNavigationSystem(WorldContextObject) end

---Finds path instantly, in a FindPath Synchronously.
---    @@param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query
---@param WorldContextObject UObject
---@param PathStart FVector
---@param PathEnd FVector
---@param PathfindingContext AActor @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return UNavigationPath
function UNavigationSystemV1.FindPathToLocationSynchronously(WorldContextObject, PathStart, PathEnd, PathfindingContext, FilterClass) end

---Finds path instantly, in a FindPath Synchronously. Main advantage over FindPathToLocationSynchronously is that
---    the resulting path will automatically get updated if goal actor moves more than TetherDistance away from last path node
---    @@param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query
---@param WorldContextObject UObject
---@param PathStart FVector
---@param GoalActor AActor
---@param TetherDistance number @[opt] 
---@param PathfindingContext AActor @[opt] 
---@param FilterClass TSubclassOf_UNavigationQueryFilter_ @[opt] 
---@return UNavigationPath
function UNavigationSystemV1.FindPathToActorSynchronously(WorldContextObject, PathStart, GoalActor, TetherDistance, PathfindingContext, FilterClass) end

