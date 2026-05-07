---ULandscapeEditResourcesSubsystem provides services to manage/pool render resources used by the landscape tools, across landscape actors, in order to minimize memory consumption
---@class ULandscapeEditResourcesSubsystem : UEngineSubsystem
---@field private ScratchRenderTargets TArray<ULandscapeScratchRenderTarget>
---@field private LayerDebugColorMaterial UMaterialInterface
---@field private SelectionColorMaterial UMaterialInterface
---@field private SelectionRegionMaterial UMaterialInterface
---@field private MaskRegionMaterial UMaterialInterface
---@field private ColorMaskRegionMaterial UMaterialInterface
---@field private LandscapeBlackTexture UTexture2D
---@field private LandscapeLayerUsageMaterial UMaterialInterface
---@field private LandscapeDirtyMaterial UMaterialInterface
local ULandscapeEditResourcesSubsystem = {}

