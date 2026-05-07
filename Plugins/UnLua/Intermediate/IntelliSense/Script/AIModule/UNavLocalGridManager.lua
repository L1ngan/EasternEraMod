---Manager for local navigation grids
---Builds non overlapping grid from multiple sources, that can be used later for pathfinding.
---Check also: UGridPathFollowingComponent, FNavLocalGridData
---@class UNavLocalGridManager : UObject
local UNavLocalGridManager = {}

---@param WorldContextObject UObject
---@param CellSize number
---@return boolean
function UNavLocalGridManager.SetLocalNavigationGridDensity(WorldContextObject, CellSize) end

---@param WorldContextObject UObject
---@param GridId integer
---@param bRebuildGrids boolean @[opt] 
function UNavLocalGridManager.RemoveLocalNavigationGrid(WorldContextObject, GridId, bRebuildGrids) end

---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param PathPoints TArray_FVector_ @[out] 
---@return boolean
function UNavLocalGridManager.FindLocalNavigationGridPath(WorldContextObject, Start, End, PathPoints) end

---creates single grid data for set of points
---@param WorldContextObject UObject
---@param Locations TArray_FVector_
---@param Radius2D integer @[opt] 
---@param Height number @[opt] 
---@param bRebuildGrids boolean @[opt] 
---@return integer
function UNavLocalGridManager.AddLocalNavigationGridForPoints(WorldContextObject, Locations, Radius2D, Height, bRebuildGrids) end

---creates new grid data for single point
---@param WorldContextObject UObject
---@param Location FVector
---@param Radius2D integer @[opt] 
---@param Height number @[opt] 
---@param bRebuildGrids boolean @[opt] 
---@return integer
function UNavLocalGridManager.AddLocalNavigationGridForPoint(WorldContextObject, Location, Radius2D, Height, bRebuildGrids) end

---@param WorldContextObject UObject
---@param Location FVector
---@param CapsuleRadius number
---@param CapsuleHalfHeight number
---@param Radius2D integer @[opt] 
---@param Height number @[opt] 
---@param bRebuildGrids boolean @[opt] 
---@return integer
function UNavLocalGridManager.AddLocalNavigationGridForCapsule(WorldContextObject, Location, CapsuleRadius, CapsuleHalfHeight, Radius2D, Height, bRebuildGrids) end

---@param WorldContextObject UObject
---@param Location FVector
---@param Extent FVector @[opt] 
---@param Rotation FRotator
---@param Radius2D integer @[opt] 
---@param Height number @[opt] 
---@param bRebuildGrids boolean @[opt] 
---@return integer
function UNavLocalGridManager.AddLocalNavigationGridForBox(WorldContextObject, Location, Extent, Rotation, Radius2D, Height, bRebuildGrids) end

