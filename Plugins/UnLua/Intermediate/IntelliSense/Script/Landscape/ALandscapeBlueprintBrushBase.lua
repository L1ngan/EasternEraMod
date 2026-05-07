---@class ALandscapeBlueprintBrushBase : AActor
---@field protected UpdateOnPropertyChange boolean
---@field protected AffectHeightmap boolean
---@field protected AffectWeightmap boolean
---@field protected AffectVisibilityLayer boolean
---@field protected AffectedWeightmapLayers TArray<string>
---@field protected bUsePowerOfTwoRenderTarget boolean @It is possible to define whether this BP brush works exclusively with power-of-2 render targets. This used to be mandatory so for full backwards-compatibility, this is still the case by default but it can be turned off.
---@field protected OwningLandscape ALandscape
---@field protected bIsVisible boolean
local ALandscapeBlueprintBrushBase = {}

---@param bInUserTriggered boolean @[opt] 
function ALandscapeBlueprintBrushBase:RequestLandscapeUpdate(bInUserTriggered) end

---@param InParameters FLandscapeBrushParameters
---@return UTextureRenderTarget2D
function ALandscapeBlueprintBrushBase:RenderLayer(InParameters) end

---@param InIsHeightmap boolean
---@param InCombinedResult UTextureRenderTarget2D
---@param InWeightmapLayerName string
---@return UTextureRenderTarget2D
function ALandscapeBlueprintBrushBase:Render(InIsHeightmap, InCombinedResult, InWeightmapLayerName) end

---@param InLandscapeTransform FTransform
---@param InLandscapeSize FIntPoint
---@param InLandscapeRenderTargetSize FIntPoint
function ALandscapeBlueprintBrushBase:Initialize(InLandscapeTransform, InLandscapeSize, InLandscapeRenderTargetSize) end

---@param OutStreamableAssets TArray_UObject_ @[out] 
function ALandscapeBlueprintBrushBase:GetBlueprintRenderDependencies(OutStreamableAssets) end

