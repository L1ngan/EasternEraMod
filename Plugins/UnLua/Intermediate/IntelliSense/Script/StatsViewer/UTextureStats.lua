---Statistics page for textures.
---@class UTextureStats : UObject
---@field public Texture TWeakObjectPtr<UTexture> @Texture - click to go to asset
---@field public Actors TArray<TWeakObjectPtr<AActor>> @Actor(s) - click to select & zoom Actor(s)
---@field public Type string @Texture type e.g. 2D, 3D, Cube, "" if not known, ...
---@field public Virtual string @Is the texture virtual? Yes/No
---@field public MaxDim FVector2D @Max Dimension e.g. 256x256, not including the format
---@field public CurrentDim FVector2D @Current Dimension e.g 256x256
---@field public Format integer @The texture format, e.g. PF_DXT1
---@field public Group integer @The texture group, TEXTUREGROUP_MAX is not used, e.g. TEXTUREGROUP_World
---@field public CombinedLODBias integer @Combined LOD Bias for this texture. (Texture LODBias + Texture group)
---@field public TextureLODBias integer @LOD Bias for this texture.
---@field public CurrentKB number @The memory used currently in KB
---@field public FullyLoadedKB number @The memory used when the texture is fully loaded in KB
---@field public NumUses integer @The number of times the texture is used
---@field public LastTimeRendered number @Relative time it was used for rendering the last time
---@field public Path string @Texture path without the name "package.[group.]"
local UTextureStats = {}

