---A mini map to preview the world in world partition window. (editor-only)
---@class AWorldPartitionMiniMap : AInfo
---@field public MiniMapWorldBounds FBox @WorldBounds for MinMapTexture
---@field public UVOffset FBox2D @UVOffset used to setup Virtual Texture
---@field public MiniMapTexture UTexture2D @MiniMap Texture for displaying on world partition window
---@field public ExcludedDataLayers TSet<UDataLayerAsset> @Datalayers excluded from MiniMap rendering
---@field public WorldUnitsPerPixel integer @Target world units per pixel for the minimap texture. May not end up being the final minimap accuracy if the resulting texture resolution is unsupported.
---@field public BuilderCellSize integer @Size of the loading region that will be used when iterating over the whole map during the minimap build process. A smaller size may help reduce blurriness as it will put less pressure on various graphics pools, at the expanse of an increase in processing time.
---@field public CaptureSource integer @Specifies which component of the scene rendering should be output to the minimap texture.
---@field public CaptureWarmupFrames integer @Number of frames to render before each capture in order to warmup various rendering systems (VT/Nanite/etc).
local AWorldPartitionMiniMap = {}

