---@class UWorldPartitionEditorPerProjectUserSettings : UDeveloperSettings
---@field public bHideEditorDataLayers boolean @True when the Data Layer Outliner is displaying Editor Data Layers
---@field public bHideRuntimeDataLayers boolean @True when the Data Layer Outliner is displaying Runtime Data Layers
---@field public bHideDataLayerActors boolean @True when the Data Layer Outliner is not displaying actors
---@field public bHideUnloadedActors boolean @True when the Data Layer Outliner is not displaying unloaded actors
---@field public bShowOnlySelectedActors boolean @True when the Data Layer Outliner is only displaying actors and datalayers for selected actors
---@field public bHighlightSelectedDataLayers boolean @True when the Data Layer Outliner highlights Data Layers containing actors that are currently selected
---@field public bHideLevelInstanceContent boolean @True when the Data Layer Outliner is not displaying Level Instance content
---@field private bDisableLoadingOfLastLoadedRegions boolean
---@field private bBugItGoLoadRegion boolean
---@field private bShowCellCoords boolean
---@field private MinimapUnloadedOpacity number
---@field private PerWorldEditorSettings TMap<TSoftObjectPtr<UWorld>, FWorldPartitionPerWorldSettings>
local UWorldPartitionEditorPerProjectUserSettings = {}

