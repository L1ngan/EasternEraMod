---@class UNiagaraDecalRendererProperties : UNiagaraRendererProperties
---@field public Material UMaterialInterface @What material to use for the decal.
---@field public MICMaterial UMaterialInstanceConstant
---@field public MaterialParameterBinding FNiagaraParameterBinding @Binding to material.
---@field public SourceMode ENiagaraRendererSourceDataMode @Whether or not to draw a single element for the Emitter or to draw the particles.
---@field public RendererVisibility integer @If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer.
---@field public DecalScreenSizeFade number @When the decal is smaller than this screen size fade out the decal, can be used to reduce the amount of small decals drawn.
---@field public PositionBinding FNiagaraVariableAttributeBinding @Position binding for the decals, should be center of the decal
---@field public DecalOrientationBinding FNiagaraVariableAttributeBinding @Orientation binding for the decal.
---@field public DecalSizeBinding FNiagaraVariableAttributeBinding @Size binding for the decal.
---@field public DecalFadeBinding FNiagaraVariableAttributeBinding @Fade binding for the decal, value can be queried using the Decal Lifetime Opacity material node.
---@field public DecalSortOrderBinding FNiagaraVariableAttributeBinding @Sort Order binding for the decal, used to ensure decals to not flicker when overlapping.
---@field public DecalColorBinding FNiagaraVariableAttributeBinding @Color binding for the decal, value can be queried using the Decal Color material node.
---@field public DecalVisibleBinding FNiagaraVariableAttributeBinding @Should the decal be visibile or not, works in conjunction with RendererVisibilityTagBinding to determine visibility.
---@field public RendererVisibilityTagBinding FNiagaraVariableAttributeBinding @Visibility tag binding, when valid the returned values is compated with RendererVisibility.
---@field public MaterialParameters FNiagaraRendererMaterialParameters @If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.
local UNiagaraDecalRendererProperties = {}

