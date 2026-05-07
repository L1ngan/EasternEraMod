---@class UWorldPartitionStreamingSourceComponent : UActorComponent
---@field public DefaultVisualizerLoadingRange number @Value used by debug visualizer when grid loading range is chosen.
---@field public TargetBehavior EStreamingSourceTargetBehavior @When TargetGrids or TargetHLODLayers are specified, this indicates the behavior.
---@field public TargetGrids TArray<string> @Optional target grids affected by streaming source.
---@field public DebugColor FColor @Color used for debugging.
---@field public Shapes TArray<FStreamingSourceShape> @Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range.
---@field public Priority EStreamingSourcePriority
---@field private bStreamingSourceEnabled boolean @Whether this component is enabled or not
---@field private TargetState EStreamingSourceTargetState
local UWorldPartitionStreamingSourceComponent = {}

---Returns true if the component is active.
---@return boolean
function UWorldPartitionStreamingSourceComponent:IsStreamingSourceEnabled() end

---Returns true if streaming is completed for this streaming source component.
---@return boolean
function UWorldPartitionStreamingSourceComponent:IsStreamingCompleted() end

---Enable the component
function UWorldPartitionStreamingSourceComponent:EnableStreamingSource() end

---Disable the component
function UWorldPartitionStreamingSourceComponent:DisableStreamingSource() end

