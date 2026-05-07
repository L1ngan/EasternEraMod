---Information about a streaming texture/mesh that a primitive uses for rendering.
---@class FStreamingRenderAssetPrimitiveInfo
---@field public RenderAsset UStreamableRenderAsset
---@field public Bounds FBoxSphereBounds @The streaming bounds of the texture/mesh, usually the component material bounds. Usually only valid for registered component, as component bounds are only updated when the components are registered. otherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset() In that case, only PackedRelativeBox is meaningful.
---@field public TexelFactor number
---@field public PackedRelativeBox integer @When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference. If available, this allows the renderable asset streamer to generate the level streaming data before the level gets visible. At that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available. Also allows to update the relative bounds after a level get moved around from ApplyWorldOffset.
---@field public bAllowInvalidTexelFactorWhenUnregistered boolean @For mesh components, texel factors are their sphere bound diameters that are 0 when unregistered
---@field public bAffectedByComponentScale boolean @Mesh texel factors aren't uv density and shouldn't be affected by component scales
local FStreamingRenderAssetPrimitiveInfo = {}
