---Statistics page for static meshes.
---@class UStaticMeshLightingInfo : UObject
---@field public StaticMeshActor TWeakObjectPtr<AActor> @The actor that is related to this error/warning.
---@field public StaticMesh TWeakObjectPtr<UStaticMesh> @The source StaticMesh that is related to this info.
---@field public LevelName string @Cached version of the level name this object resides in
---@field public TextureMapping string @Current mapping type string
---@field public bTextureMapping boolean @Current mapping type flag - not displayed
---@field public bHasLightmapTexCoords boolean @Does the Lightmap have UVs?
---@field public StaticLightingResolution integer @The static lighting resolution the texture mapping was estimated with.
---@field public TextureLightMapMemoryUsage number @Estimated memory usage in KB for light map texel data.
---@field public VertexLightMapMemoryUsage number @Estimated memory usage in KB for light map vertex data.
---@field public LightMapLightCount integer @Num lightmap lights
---@field public TextureShadowMapMemoryUsage number @Estimated memory usage in KB for shadow map texel data.
---@field public VertexShadowMapMemoryUsage number @Estimated memory usage in KB for shadow map vertex data.
---@field public ShadowMapLightCount integer @Number of lights generating shadow maps on the primitive.
---@field public LightmapTextureNames TArray<string> @The lighting texture names that the static mesh component references.
local UStaticMeshLightingInfo = {}

