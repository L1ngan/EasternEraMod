---@class ALandscapeProxy : APartitionActor
---@field protected SplineComponent ULandscapeSplinesComponent
---@field protected LandscapeGuid FGuid @Guid for LandscapeEditorInfo, all proxies that belong to the same landscape should have the same LandscapeGuid, even if split across world partitions Note that this value may change when the landscape is instanced (or in PIE) in order to allow multiple instances of the same landscape to exist.
---@field protected OriginalLandscapeGuid FGuid @The original unmutated LandscapeGuid on the source asset, before instancing modifications.
---@field protected bEnableNanite boolean @Use Nanite to render landscape as a mesh on supported platforms.
---@field protected PerLODOverrideMaterials TArray<FLandscapePerLODMaterialOverride>
---@field protected NaniteLODIndex integer @LOD level of the landscape when generating the Nanite mesh. Mostly there for debug reasons, since Nanite is meant to allow high density meshes, we want to use 0 most of the times.
---@field protected bNaniteSkirtEnabled boolean
---@field protected NaniteSkirtDepth number
---@field protected NanitePositionPrecision integer
---@field protected NaniteMaxEdgeLengthFactor number
---@field protected bDisableRuntimeGrassMapGeneration boolean @Disable runtime grass data generation.  If disabled, the grass maps will be serialized at cook time. Do not set directly, use ALandscape::SetDisableRuntimeGrassMapGeneration to ensure it is set on all loaded proxies.
---@field public TargetLayersForFixup TMap<string, ULandscapeLayerInfoObject>
---@field public LandscapeSectionOffset FIntPoint @Offset in quads from global components grid origin (in quads) *
---@field public MaxLODLevel integer @Max LOD level to use when rendering, -1 means the max available
---@field public LOD0ScreenSize number @This is the starting screen size used to calculate the distribution. You can increase the value if you want less LOD0 component, and you use very large landscape component.
---@field public LODGroupKey integer @Specifies the LOD Group (Zero is No Group). All landscapes in the same group calculate their LOD together, allowing matching border LODs to fix geometry seams.
---@field public LOD0DistributionSetting number @The distribution setting used to change the LOD 0 generation, 1.25 is the normal distribution, numbers influence directly the LOD0 proportion on screen.
---@field public LODDistributionSetting number @The distribution setting used to change the LOD generation, 3 is the normal distribution, small number mean you want your last LODs to take more screen space and big number mean you want your first LODs to take more screen space.
---@field public ScalableLOD0ScreenSize FPerQualityLevelFloat @Scalable (per-quality) version of 'LOD 0 Screen Size'.
---@field public ScalableLOD0DistributionSetting FPerQualityLevelFloat @Scalable (per-quality) version of 'LOD 0'.
---@field public ScalableLODDistributionSetting FPerQualityLevelFloat @Scalable (per-quality) version of 'Other LODs'.
---@field public bUseScalableLODSettings boolean @Allows to specify LOD distribution settings per quality level. Using this will ignore the r.LandscapeLOD0DistributionScale CVar.
---@field public LODBlendRange number @This controls the area that blends LOD between neighboring sections. At 1.0 it blends across the entire section, and lower numbers reduce the blend region to be closer to the boundary.
---@field public ExportLOD integer @LOD level to use when exporting the landscape to obj or FBX
---@field public StaticLightingLOD integer @LOD level to use when running lightmass (increase to 1 or 2 for large landscapes to stop lightmass crashing)
---@field public DefaultPhysMaterial UPhysicalMaterial @Default physical material, used when no per-layer values physical materials
---@field public StreamingDistanceMultiplier number @Allows artists to adjust the distance where textures using UV 0 are streamed in/out. 1.0 is the default, whereas a higher value increases the streamed-in resolution. Value can be < 0 (from legcay content, or code changes)
---@field public LandscapeMaterial UMaterialInterface @Combined material used to render the landscape
---@field public LandscapeHoleMaterial UMaterialInterface @Material used to render landscape components with holes. If not set, LandscapeMaterial will be used (blend mode will be overridden to Masked if it is set to Opaque)
---@field public RuntimeVirtualTextures TArray<URuntimeVirtualTexture> @Array of runtime virtual textures into which we draw this landscape. The material also needs to be set up to output to a virtual texture.
---@field public bSetCreateRuntimeVirtualTextureVolumes boolean @Placeholder for details customization button.
---@field public bVirtualTextureRenderWithQuad boolean @Use a single quad to render this landscape to runtime virtual texture pages. This is the fastest path but it only gives correct results if the runtime virtual texture orientation is aligned with the landscape. If the two are unaligned we need to render to the virtual texture using LODs with sufficient density.
---@field public bVirtualTextureRenderWithQuadHQ boolean @Use highest quality heightmap interpolation when using a single quad to render this landscape to runtime virtual texture pages. This also requires the project setting: r.VT.RVT.HighQualityPerPixelHeight.
---@field public VirtualTextureNumLods integer @Number of mesh levels to use when rendering landscape into runtime virtual texture. Lower values reduce vertex count when rendering to the runtime virtual texture but decrease accuracy when using values that require vertex interpolation.
---@field public VirtualTextureLodBias integer @Bias to the LOD selected for rendering to runtime virtual textures. Higher values reduce vertex count when rendering to the runtime virtual texture.
---@field public VirtualTextureRenderPassType ERuntimeVirtualTextureMainPassType @Controls if this component draws in the main pass as well as in the virtual texture.
---@field public NegativeZBoundsExtension number @Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example Extension value in the negative Z axis, positive value increases bound size Note that this can also be overridden per-component when the component is selected with the component select tool
---@field public PositiveZBoundsExtension number @Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example Extension value in the positive Z axis, positive value increases bound size Note that this can also be overridden per-component when the component is selected with the component select tool
---@field public LandscapeComponents TArray<ULandscapeComponent> @The array of LandscapeComponent that are used by the landscape
---@field public CollisionComponents TArray<ULandscapeHeightfieldCollisionComponent> @Array of LandscapeHeightfieldCollisionComponent
---@field public FoliageComponents TArray<UHierarchicalInstancedStaticMeshComponent>
---@field public NaniteComponents TArray<ULandscapeNaniteComponent>
---@field public GrassTypesMaxDiscardDistance number @Only used outside of the editor (e.g. in cooked builds) - this value is no longer authoritative TODO [chris.tchou] remove Cached grass max discard distance for all grass types in all landscape components with landscape grass configured
---@field public StaticLightingResolution number @The resolution to cache lighting at, in texels/quad in one axis Total resolution would be changed by StaticLightingResolution*StaticLightingResolution Automatically calculate proper value for removing seams
---@field public CastShadow boolean @Controls whether the primitive component should cast a shadow or not.
---@field public bCastDynamicShadow boolean @Controls whether the primitive should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true. *
---@field public bCastStaticShadow boolean @Whether the object should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true.
---@field public ShadowCacheInvalidationBehavior EShadowCacheInvalidationBehavior @Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset.
---@field public bCastContactShadow boolean @Whether the object should cast contact shadows. This flag is only used if CastShadow is true.
---@field public bCastFarShadow boolean @When enabled, the component will be rendering into the far shadow cascades(only for directional lights).  This flag is only used if CastShadow is true.
---@field public bCastHiddenShadow boolean @If true, the primitive will cast shadows even if bHidden is true.  Controls whether the primitive should cast shadows when hidden.  This flag is only used if CastShadow is true.
---@field public bCastShadowAsTwoSided boolean @Whether this primitive should cast dynamic shadows as if it were a two sided material.  This flag is only used if CastShadow is true.
---@field public bAffectDistanceFieldLighting boolean @Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. *
---@field public bAffectDynamicIndirectLighting boolean @Controls whether the primitive should influence indirect lighting.
---@field public bAffectIndirectLightingWhileHidden boolean @Controls whether the primitive should affect indirect lighting when hidden. This flag is only used if bAffectDynamicIndirectLighting is true.
---@field public LightingChannels FLightingChannels @Channels that this Landscape should be in.  Lights with matching channels will affect the Landscape. These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.
---@field public bUseMaterialPositionOffsetInStaticLighting boolean @Whether to use the landscape material's vertical world position offset when calculating static lighting. Note: Only z (vertical) offset is supported. XY offsets are ignored. Does not work correctly with an XY offset map (mesh collision)
---@field public NonNaniteVirtualShadowMapConstantDepthBias number @Constant bias to handle the worst artifacts of the continuous LOD morphing when rendering to VSM. Only applies when using non-Nanite landscape and VSM.
---@field public NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold number @For non-Nanite landscape, cached VSM pages need to be invalidated when continuous LOD morphing introduces a height difference that is too large between the current landscape component's profile and the one that was used when the shadow was shadow was last cached. This height threshold (in Unreal units) controls this invalidation rate (a smaller threshold will reduce the likeliness of shadow artifacts, but will make the invalidations occur more frequently, which is not desirable in terms of performance. Disabled if 0.0. Only applies when using non-Nanite landscape and VSM.
---@field public NonNaniteVirtualShadowMapInvalidationScreenSizeLimit number @Screen size under which VSM invalidation stops occurring. As the height difference between 2 mip levels increases when the LOD level increases (because of undersampling), VSM pages tend to be invalidated more frequently even though it's getting less and less relevant to do so, since this will mean that the screen size of the landscape section decreases, thus the artifacts actually become less noticeable. We therefore artificially attenuate the VSM invalidation rate as the screen size decreases, to avoid invalidating VSM pages too often, as it becomes less and less impactful. A higher value will accentuate this attenuation (better performance but more artifacts) and vice versa. If 0.0, the attenuation of the VSM invalidation rate will be disabled entirely. Only applies when using non-Nanite landscape and VSM.
---@field public bHoldout boolean @If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature requires the project settings "Alpha Output" and "Support Primitive Alpha Holdout".
---@field public bRenderCustomDepth boolean @If true, the Landscape will be rendered in the CustomDepth pass (usually used for outlines)
---@field public CustomDepthStencilWriteMask ERendererStencilMask @Mask used for stencil buffer writes.
---@field public CustomDepthStencilValue integer @Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)
---@field public LDMaxDrawDistance number @Max draw distance exposed to LDs. The real max draw distance is the min (disregarding 0) of this and volumes affecting this object.
---@field public LightmassSettings FLightmassPrimitiveSettings @The Lightmass settings for this object.
---@field public CollisionMipLevel integer @Landscape LOD to use for collision tests. Higher numbers use less memory and process faster, but are much less accurate
---@field public SimpleCollisionMipLevel integer @If set higher than the "Collision Mip Level", this specifies the Landscape LOD to use for "simple collision" tests, otherwise the "Collision Mip Level" is used for both simple and complex collision. Does not work with an XY offset map (mesh collision)
---@field public BodyInstance FBodyInstance @Collision profile settings for this landscape
---@field public bGenerateOverlapEvents boolean @If true, Landscape will generate overlap events when other components are overlapping it (eg Begin Overlap). Both the Landscape and the other component must have this flag enabled for overlap events to occur.
---@field public bBakeMaterialPositionOffsetIntoCollision boolean @Whether to bake the landscape material's vertical world position offset into the collision heightfield.               Note: Only z (vertical) offset is supported. XY offsets are ignored.               Does not work with an XY offset map (mesh collision)
---@field public ReimportHeightmapFilePath string
---@field public ReimportDestinationLayerGuid FGuid @Height and weightmap import destination layer guid
---@field public WeightmapUsageMap TMap<UTexture2D, ULandscapeWeightmapUsage> @Map of weightmap usage
---@field public RegisteredToSubsystem ULandscapeSubsystem @Used to detect incorrect registration/unregistration behavior
---@field public ComponentSizeQuads integer @Data set at creation time
---@field public SubsectionSizeQuads integer @Total number of quads in each component
---@field public NumSubsections integer @Number of quads for a subsection of a component. SubsectionSizeQuads+1 must be a power of two.
---@field public bUsedForNavigation boolean @Hints navigation system whether this landscape will ever be navigated on. true by default, but make sure to set it to false for faraway, background landscapes
---@field public bFillCollisionUnderLandscapeForNavmesh boolean @Set to true to prevent navmesh generation under the terrain geometry
---@field public NavigationGeometryGatheringMode ENavDataGatheringMode
---@field public bUseDynamicMaterialInstance boolean @When set to true it will generate MaterialInstanceDynamic for each components, so material can be changed at runtime
---@field public MaxPaintedLayersPerComponent integer
---@field public bUseLandscapeForCullingInvisibleHLODVertices boolean @Flag whether or not this Landscape's surface can be used for culling hidden triangles *
---@field public HLODTextureSizePolicy ELandscapeHLODTextureSizePolicy @Specify how to choose the texture size of the resulting HLOD mesh. Specifying an HLOD Material Override will disable this option as no texture will be baked.
---@field public HLODTextureSize integer @Specify the texture size to use for the HLOD mesh if HLODTextureSizePolicy is set to SpecificSize. Specifying an HLOD Material Override will disable this option as no texture will be baked.
---@field public HLODMaterialOverride UMaterialInterface @Specify a custom HLOD material to apply to the HLOD mesh. Specifying an HLOD Material Override will result in no texture being baked for the HLOD mesh.
---@field public HLODMeshSourceLODPolicy ELandscapeHLODMeshSourceLODPolicy @Specify how to choose the LOD used as input for the HLOD mesh.
---@field public HLODMeshSourceLOD integer @Specify which LOD to use for the HLOD mesh if HLODMeshSourceLODPolicy is set to SpecificLOD.
---@field public bHasLayersContent boolean @Flag that tell if we have some layers content *
---@field public bStripPhysicsWhenCookedClient boolean @Strip Physics/collision components when cooked for client
---@field public bStripPhysicsWhenCookedServer boolean @Strip Physics/collision components when cooked for server
---@field public bStripGrassWhenCookedClient boolean @Strip Grass data when cooked for client
---@field public bStripGrassWhenCookedServer boolean @Strip Grass data when cooked for server
---@field private TargetLayers TMap<string, FLandscapeTargetLayerSettings>
local ALandscapeProxy = {}

---@param InType ERuntimeVirtualTextureMainPassType
function ALandscapeProxy:SetVirtualTextureRenderPassType(InType) end

---Set an MID vector parameter value for all landscape components.
---@param ParameterName string
---@param Value FLinearColor
function ALandscapeProxy:SetLandscapeMaterialVectorParameterValue(ParameterName, Value) end

---Set an MID texture parameter value for all landscape components.
---@param ParameterName string
---@param Value UTexture
function ALandscapeProxy:SetLandscapeMaterialTextureParameterValue(ParameterName, Value) end

---Set a MID scalar (float) parameter value for all landscape components.
---@param ParameterName string
---@param Value number
function ALandscapeProxy:SetLandscapeMaterialScalarParameterValue(ParameterName, Value) end

---Overwrites a landscape weightmap with render target data
---Only works in the editor
---@param InRenderTarget UTextureRenderTarget2D
---@param InLayerName string
---@return boolean
function ALandscapeProxy:LandscapeImportWeightmapFromRenderTarget(InRenderTarget, InLayerName) end

---Overwrites a landscape heightmap with render target data
---                                                                         Note that using RTF_RGBA16f with InImportHeightFromRGChannel == false, could have precision loss
---Only works in the editor
---@param InRenderTarget UTextureRenderTarget2D
---@param InImportHeightFromRGChannel boolean @[opt] 
---@return boolean
function ALandscapeProxy:LandscapeImportHeightmapFromRenderTarget(InRenderTarget, InImportHeightFromRGChannel) end

---Output a landscape weightmap to a render target
---Only works in the editor
---@param InRenderTarget UTextureRenderTarget2D
---@param InLayerName string
---@return boolean
function ALandscapeProxy:LandscapeExportWeightmapToRenderTarget(InRenderTarget, InLayerName) end

---Output a landscape heightmap to a render target
---                                                                         Note that using RTF_RGBA16f with InExportHeightIntoRGChannel == false, could have precision loss.
---@param InRenderTarget UTextureRenderTarget2D
---@param InExportHeightIntoRGChannel boolean @[opt] 
---@param InExportLandscapeProxies boolean @[opt] 
---@return boolean
function ALandscapeProxy:LandscapeExportHeightmapToRenderTarget(InRenderTarget, InExportHeightIntoRGChannel, InExportLandscapeProxies) end

---@return ALandscape
function ALandscapeProxy:GetLandscapeActor() end

---Setter for LandscapeMaterial. Has no effect outside the editor.
---@param NewLandscapeMaterial UMaterialInterface
function ALandscapeProxy:EditorSetLandscapeMaterial(NewLandscapeMaterial) end

---Deform landscape using a given spline
---@param InSplineComponent USplineComponent
---@param StartWidth number @[opt] 
---@param EndWidth number @[opt] 
---@param StartSideFalloff number @[opt] 
---@param EndSideFalloff number @[opt] 
---@param StartRoll number @[opt] 
---@param EndRoll number @[opt] 
---@param NumSubdivisions integer @[opt] 
---@param bRaiseHeights boolean @[opt] 
---@param bLowerHeights boolean @[opt] 
---@param PaintLayer ULandscapeLayerInfoObject @[opt] 
---@param EditLayerName string
function ALandscapeProxy:EditorApplySpline(InSplineComponent, StartWidth, EndWidth, StartSideFalloff, EndSideFalloff, StartRoll, EndRoll, NumSubdivisions, bRaiseHeights, bLowerHeights, PaintLayer, EditLayerName) end

---Delete all unused layers in components. Warning: any update of the component could re-introduce them.
function ALandscapeProxy:DeleteUnusedLayers() end

---Change the Level of Detail distance factor
---@param InLODDistanceFactor number
function ALandscapeProxy:ChangeLODDistanceFactor(InLODDistanceFactor) end

---@param InComponentScreenSizeToUseSubSections number
function ALandscapeProxy:ChangeComponentScreenSizeToUseSubSections(InComponentScreenSizeToUseSubSections) end

