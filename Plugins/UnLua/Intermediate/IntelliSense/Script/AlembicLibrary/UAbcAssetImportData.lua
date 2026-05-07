---Base class for import data and options used when importing any asset from Alembic
---@class UAbcAssetImportData : UAssetImportData
---@field public TrackNames TArray<string>
---@field public SamplingSettings FAbcSamplingSettings
---@field public NormalGenerationSettings FAbcNormalGenerationSettings
---@field public MaterialSettings FAbcMaterialSettings
---@field public CompressionSettings FAbcCompressionSettings
---@field public StaticMeshSettings FAbcStaticMeshSettings
---@field public GeometryCacheSettings FAbcGeometryCacheSettings
---@field public ConversionSettings FAbcConversionSettings
local UAbcAssetImportData = {}

