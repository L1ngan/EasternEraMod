---Represents a PIE/Game streaming cell which points to external actor/data chunk packages
---@class UWorldPartitionRuntimeCell : UObject
---@field public UnsavedActorsContainer UActorContainer
---@field protected bIsAlwaysLoaded boolean
---@field protected bIsSpatiallyLoaded boolean
---@field private DataLayers FDataLayerInstanceNames
---@field private bClientOnlyVisible boolean
---@field private bIsHLOD boolean
---@field private bBlockOnSlowLoading boolean
---@field private ContentBundleID FGuid
---@field private CellDebugColor FLinearColor
---@field protected CellGuid FGuid
---@field protected SourceCellGuid FGuid @Used by injected HLOD cells
---@field protected ExternalDataLayerAsset UExternalDataLayerAsset
---@field public RuntimeCellData UWorldPartitionRuntimeCellData
local UWorldPartitionRuntimeCell = {}

