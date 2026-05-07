---@class UHLODLayer : UObject
---@field private LayerType EHLODLayerType @Type of HLOD generation to use
---@field private HLODBuilderClass TSubclassOf<UHLODBuilder> @HLOD Builder class
---@field private HLODBuilderSettings UHLODBuilderSettings
---@field private bIsSpatiallyLoaded boolean @Whether HLOD actors generated for this layer will be spatially loaded
---@field private CellSize integer @Cell size of the runtime grid created to encompass HLOD actors generated for this HLOD Layer
---@field private LoadingRange number @Loading range of the runtime grid created to encompass HLOD actors generated for this HLOD Layer
---@field private ParentLayer UHLODLayer @HLOD Layer to assign to the generated HLOD actors
---@field private HLODActorClass TSubclassOf<AWorldPartitionHLOD> @Specify a custom HLOD Actor class, the default is AWorldPartitionHLOD
---@field private HLODModifierClass TSubclassOf<UWorldPartitionHLODModifier> @HLOD Modifier class, to allow changes to the HLOD at runtime
local UHLODLayer = {}

