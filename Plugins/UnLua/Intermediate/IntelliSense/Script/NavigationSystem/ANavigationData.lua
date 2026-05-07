---Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)
---Used as a common interface for all navigation types handled by NavigationSystem
---@class ANavigationData : AActor
---@field public RenderingComp UPrimitiveComponent
---@field protected NavDataConfig FNavDataConfig
---@field protected bEnableDrawing boolean @if set to true then this navigation data will be drawing itself when requested as part of "show navigation"
---@field protected bForceRebuildOnLoad boolean @By default navigation will skip the first update after being successfully loaded setting bForceRebuildOnLoad to false can override this behavior
---@field protected bAutoDestroyWhenNoNavigation boolean @Should this instance auto-destroy when there's no navigation system on     world when it gets created/loaded
---@field protected bCanBeMainNavData boolean @If set, navigation data can act as default one in navigation system's queries
---@field protected bCanSpawnOnRebuild boolean @If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist
---@field protected RuntimeGeneration ERuntimeGenerationType @Navigation data runtime generation options
---@field protected ObservedPathsTickInterval number @all observed paths will be processed every ObservedPathsTickInterval seconds
---@field protected DataVersion integer @Navigation data versioning.
---@field protected SupportedAreas TArray<FSupportedAreaData> @serialized area class - ID mapping
local ANavigationData = {}

