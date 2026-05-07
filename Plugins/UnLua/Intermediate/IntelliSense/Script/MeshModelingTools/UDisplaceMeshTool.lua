---Simple Mesh Displacement Tool
---@class UDisplaceMeshTool : USingleTargetWithSelectionTool
---@field public CommonProperties UDisplaceMeshCommonProperties @Shared properties for all displacement modes.
---@field public DirectionalFilterProperties UDisplaceMeshDirectionalFilterProperties @Properties defining the directional filter.
---@field public TextureMapProperties UDisplaceMeshTextureMapProperties @Properties defining the texture map
---@field public NoiseProperties UDisplaceMeshPerlinNoiseProperties @Multi-layer Perlin noise frequencies and intensities
---@field public SineWaveProperties UDisplaceMeshSineWaveProperties @Sine wave parameters and direction of displacement
---@field public SelectiveTessellationProperties USelectiveTessellationProperties @Selective tessellation properties
---@field public ActiveContrastCurveTarget UCurveFloat @Contrast Curve we are actively listening to
---@field public MeshStatistics UMeshStatisticsProperties
---@field private PreviewMeshActor AInternalToolFrameworkActor
---@field private DynamicMeshComponent UDynamicMeshComponent
local UDisplaceMeshTool = {}

