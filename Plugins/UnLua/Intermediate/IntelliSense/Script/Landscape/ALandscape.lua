---@class ALandscape : ALandscapeProxy
---@field public bAreNewLandscapeActorsSpatiallyLoaded boolean @Landscape actor has authority on default streaming behavior for new actors : LandscapeStreamingProxies & LandscapeSplineActors
---@field public bIncludeGridSizeInNameForLandscapeActors boolean @If true, LandscapeStreamingProxy actors have the grid size included in their name, for backward compatibility we also check the AWorldSettings::bIncludeGridSizeInNameForPartitionedActors
---@field public bCanHaveLayersContent boolean
---@field public bUseGeneratedLandscapeSplineMeshesActors boolean @* If true, WorldPartitionLandscapeSplineMeshesBuilder is responsible of generating partitioned actors of type ALandscapeSplineMeshesActor that will contain all landscape spline/controlpoints static meshes. * Source components will be editor only and hidden in game for PIE.
---@field public SelectedEditLayerIndex integer @Current Selected Edit Layer of this landscape. Used by landscape editor mode to track the current selection
---@field public bEnableEditorLayersTick boolean
---@field public bWarnedGlobalMergeDimensionsExceeded boolean
---@field public HeightmapRTList TArray<UTextureRenderTarget2D>
---@field public WeightmapRTList TArray<UTextureRenderTarget2D>
---@field public TrackedStreamingInTextures TArray<TWeakObjectPtr<UTexture2D>> @List of textures that are not fully streamed in yet (updated every frame to track textures that have finished streaming in)
---@field public TargetDisplayOrderList TArray<string> @Display Order of the targets
---@field public TargetDisplayOrder ELandscapeLayerDisplayMode @Display Order mode for the targets
---@field private LandscapeEditLayers TArray<FLandscapeLayer>
---@field private LandscapeSplinesAffectedComponents TSet<ULandscapeComponent> @Components affected by landscape splines (used to partially clear Layer Reserved for Splines)
---@field private bLandscapeLayersAreInitialized boolean
---@field private bLandscapeLayersForceResourceReset boolean
---@field private bLandscapeLayersAreUsingLocalMerge boolean
---@field private WasCompilingShaders boolean
---@field private LayerContentUpdateModes integer
---@field private bSplineLayerUpdateRequested boolean
local ALandscape = {}

---Render the final weightmaps for the requested layers, in the requested top-down window, as one -atlased- texture in the provided render target (2D or 2DArray)
--- Can be called at runtime.
--- - If a UTextureRenderTarget2D is passed, the requested layers will be packed in the RGBA channels in order (up to the number of channels available with the render target's format).
--- - If a UTextureRenderTarget2DArray is passed, the requested layers will be packed in the RGBA channels of each slice (up to the number of channels * slices available with the render target's format and number of slices).
---@param InWorldTransform FTransform
---@param InExtents FBox2D
---@param InWeightmapLayerNames TArray_string_
---@param OutRenderTarget UTextureRenderTarget
---@return boolean
function ALandscape:RenderWeightmaps(InWorldTransform, InExtents, InWeightmapLayerNames, OutRenderTarget) end

---Render the final weightmap for the requested layer, in the requested top-down window, as one -atlased- texture in the provided render target 2D
--- Can be called at runtime.
---@param InWorldTransform FTransform
---@param InExtents FBox2D
---@param InWeightmapLayerName string
---@param OutRenderTarget UTextureRenderTarget2D
---@return boolean
function ALandscape:RenderWeightmap(InWorldTransform, InExtents, InWeightmapLayerName, OutRenderTarget) end

---Render the final heightmap in the requested top-down window as one -atlased- texture in the provided render target 2D
--- Can be called at runtime.
---@param InWorldTransform FTransform
---@param InExtents FBox2D
---@param OutRenderTarget UTextureRenderTarget2D
---@return boolean
function ALandscape:RenderHeightmap(InWorldTransform, InExtents, OutRenderTarget) end

---Retrieves the names of valid paint layers on this landscape (editor-only : returns nothing at runtime)
---@param bInIncludeVisibilityLayer boolean @[opt] 
---@return TArray_string_
function ALandscape:GetTargetLayerNames(bInIncludeVisibilityLayer) end

function ALandscape:ForceLayersFullUpdate() end

