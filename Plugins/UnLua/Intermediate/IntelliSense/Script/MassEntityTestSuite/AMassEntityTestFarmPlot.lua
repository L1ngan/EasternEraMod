---@class AMassEntityTestFarmPlot : AActor
---@field public GridCellWidth number
---@field public GridCellHeight number
---@field public HarvestIconScale number
---@field public VisualDataTable TArray<FFarmVisualDataRow>
---@field public VisualDataISMCs TArray<UHierarchicalInstancedStaticMeshComponent>
---@field public PerFrameSystems TArray<UMassProcessor>
---@field public PerSecondSystems TArray<UMassProcessor>
---@field public TestDataFlowerIndicies TArray<integer> @Indices into VisualDataTable for flowers
---@field public TestDataCropIndicies TArray<integer> @Indices into VisualDataTable for crops
---@field public VisualNearCullDistance integer
---@field public VisualFarCullDistance integer
---@field public IconNearCullDistance integer
---@field public IconFarCullDistance integer
---@field private HarvestIconISMC UHierarchicalInstancedStaticMeshComponent
local AMassEntityTestFarmPlot = {}

