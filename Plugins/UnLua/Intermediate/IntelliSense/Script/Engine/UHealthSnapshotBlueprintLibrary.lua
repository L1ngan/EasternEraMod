---@class UHealthSnapshotBlueprintLibrary : UBlueprintFunctionLibrary
local UHealthSnapshotBlueprintLibrary = {}

---Stops capturing FPS charts only if StartHealthSnapshotChart has first been called. Does nothing if FPS charts are not running. HealthSnapshots captured after this is called will not include performance stats.
function UHealthSnapshotBlueprintLibrary.StopPerformanceSnapshots() end

---Begins capturing FPS charts that can be used to include performance data in a HealthSnapshot. If snapshots are already running clears all accumulated performance data
function UHealthSnapshotBlueprintLibrary.StartPerformanceSnapshots() end

---Writes a snapshot to the log. Captures memory stats by default. Also captures performance stats if called after StartHealthSnapshotChart and before SopHealthSnapshotChart.
---@param SnapshotTitle string
---@param bResetStats boolean @[opt] 
function UHealthSnapshotBlueprintLibrary.LogPerformanceSnapshot(SnapshotTitle, bResetStats) end

