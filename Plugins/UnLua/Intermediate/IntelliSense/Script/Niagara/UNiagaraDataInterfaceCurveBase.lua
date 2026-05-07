---Base class for curve data interfaces which facilitates handling the curve data in a standardized way.
---@class UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
---@field protected ShaderLUT TArray<number>
---@field protected LUTMinTime number
---@field protected LUTMaxTime number
---@field protected LUTInvTimeRange number
---@field protected LUTNumSamplesMinusOne number
---@field public CurveAsset UCurveBase
---@field public bUseLUT boolean
---@field public bExposeCurve boolean @Generates a texture for the curve which can be exposed to material bindings.
---@field public bOptimizeLUT boolean @Do we optimize the LUT, this saves memory but may introduce errors.  Errors can be reduced modifying the threshold.
---@field public bOverrideOptimizeThreshold boolean
---@field public HasEditorData boolean
---@field public OptimizeThreshold number @Threshold used to optimize the LUT.
---@field public ExposedName string @Sets a custom name for the binding to make it easier to identify.
---@field public ExposedTexture UTexture2D @The texture generated and exposed to materials, will be nullptr if we do not expose to the renderers.
local UNiagaraDataInterfaceCurveBase = {}

