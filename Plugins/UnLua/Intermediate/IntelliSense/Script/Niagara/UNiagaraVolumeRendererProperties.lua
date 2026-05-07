---@class UNiagaraVolumeRendererProperties : UNiagaraRendererProperties
---@field public Material UMaterialInterface @What material to use for the volume.
---@field public MICMaterial UMaterialInstanceConstant
---@field public MaterialParameterBinding FNiagaraParameterBinding @Binding to material.
---@field public RendererVisibility integer @If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer.
---@field public StepFactor number
---@field public LightingDownsampleFactor number
---@field public ShadowStepFactor number
---@field public ShadowBiasFactor number
---@field public RendererVisibilityTagBinding FNiagaraVariableAttributeBinding @Visibility tag binding, when valid the returned values is compared with RendererVisibility.
---@field public VolumeResolutionMaxAxisBinding FNiagaraVariableAttributeBinding
---@field public VolumeWorldSpaceSizeBinding FNiagaraVariableAttributeBinding
---@field public MaterialParameters FNiagaraRendererMaterialParameters @If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.
local UNiagaraVolumeRendererProperties = {}

