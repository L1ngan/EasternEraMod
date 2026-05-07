---@class ULandscapeLayerInfoObject : UObject
---@field public LayerName string
---@field public PhysMaterial UPhysicalMaterial @Physical material to use when this layer is the predominant one at a given location. Note: this is ignored if the Landscape Physical Material node is used in the landscape material.
---@field public Hardness number @Defines how much 'resistance' areas painted with this layer will offer to the Erosion tool. A hardness of 0 means the layer is fully affected by erosion, while 1 means fully unaffected.
---@field public MinimumCollisionRelevanceWeight number @The minimum weight that needs to be painted for that layer to be picked up as the dominant physical layer.
---@field public bNoWeightBlend boolean @Prevents this layer to be weight-blended with others.
---@field public SplineFalloffModulationTexture UTexture2D @Texture to modulate the Splines Falloff Layer Alpha
---@field public SplineFalloffModulationColorMask ESplineModulationColorMask @Defines which channel of the Spline Falloff Modulation Texture to use.
---@field public SplineFalloffModulationTiling number @Defines the tiling to use when sampling the Spline Falloff Modulation Texture.
---@field public SplineFalloffModulationBias number @Defines the offset to use when sampling the Spline Falloff Modulation Texture.
---@field public SplineFalloffModulationScale number @Allows to scale the value sampled from the Spline Falloff Modulation Texture.
---@field public IsReferencedFromLoadedData boolean
---@field public LayerUsageDebugColor FLinearColor @The color to use for layer usage debug
local ULandscapeLayerInfoObject = {}

