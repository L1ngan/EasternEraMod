---@class ULandscapeComponent : UPrimitiveComponent
---@field public SectionBaseX integer @X offset from global components grid origin (in quads)
---@field public SectionBaseY integer @Y offset from global components grid origin (in quads)
---@field public ComponentSizeQuads integer @Total number of quads for this component, has to be >0
---@field public SubsectionSizeQuads integer @Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two.
---@field public NumSubsections integer @Number of subsections in X or Y axis
---@field public OverrideMaterial UMaterialInterface
---@field public OverrideHoleMaterial UMaterialInterface
---@field public MaterialInstances TArray<UMaterialInstanceConstant>
---@field public MaterialInstancesDynamic TArray<UMaterialInstanceDynamic>
---@field public LODIndexToMaterialIndex TArray<integer> @Mapping between LOD and Material Index
---@field public XYOffsetmapTexture UTexture2D @XYOffsetmap texture reference
---@field public WeightmapScaleBias FVector4 @UV offset to component's weightmap data from component local coordinates
---@field public WeightmapSubsectionOffset number @U or V offset into the weightmap for the first subsection, in texture UV space
---@field public HeightmapScaleBias FVector4 @UV offset to Heightmap data from component local coordinates
---@field public CachedLocalBox FBox @Cached local-space bounding box, created at heightmap update time
---@field public MipToMipMaxDeltas TArray<number> @Maximum deltas between vertices and their counterparts from other mips. This mip-to-mip data is laid out in a contiguous array following the following pattern : Say, we have 5 "relevant" mips and [N -> M] is the delta from mip N to M (where M > N and M < (NumRelevantMips - 1)) then the array will contain : [0 -> 1], [0 -> 2], [0 -> 3], [1 -> 2], [1 -> 3], [2 -> 3] i.e. for mip 0 : (NumRelevantMips - 1) deltas, then for mip 1 : (NumRelevantMips - 2) deltas, until mip == (NumRelevantMips - 2) : 1 delta Note: a "relevant" mip is one with more than 1 vertex. i.e.:  - In the case of a 1x1 subsection, the last mip index (NumMips - 1) has a single pixel and is therefore not relevant (we cannot draw a landscape component with a single vertex!), hence the last relevant mip index will be NumMips - 2  - In the case of 2x2 subsections, the penultimate mip index (NumMips - 2) has 4 pixels, which means 4 subsections, each with a single pixel, and is therefore not relevant either, hence the last relevant mip index will be NumMips - 3
---@field private CollisionComponentRef ULandscapeHeightfieldCollisionComponent @Reference to associated collision component
---@field private bUserTriggeredChangeRequested boolean @Store
---@field private bNaniteActive boolean
---@field private LightingGuid FGuid @Unique ID for this component, used for caching during distributed lighting
---@field private LayersData TMap<FGuid, FLandscapeLayerComponentData> @Edit Layers that have data for this component store it here
---@field private WeightmapTexturesUsage TArray<ULandscapeWeightmapUsage> @Final layer data
---@field private LayerUpdateFlagPerMode integer
---@field private bPendingCollisionDataUpdate boolean
---@field private bPendingLayerCollisionDataUpdate boolean
---@field private HeightmapTexture UTexture2D @Heightmap texture reference
---@field private WeightmapLayerAllocations TArray<FWeightmapLayerAllocationInfo> @List of layers, and the weightmap and channel they are stored
---@field private WeightmapTextures TArray<UTexture2D> @Weightmap texture reference
---@field private PerLODOverrideMaterials TArray<FLandscapePerLODMaterialOverride>
---@field private GrassTypes TArray<ULandscapeGrassType> @Cached list of grass types supported by the component's material. This is needed in a cooked build, as the grass types list is not available on the cooked material. Call UpdateGrassTypes() to ensure this array is up to date
---@field public MapBuildDataId FGuid @Uniquely identifies this component's built map data.
---@field public CollisionMipLevel integer @Heightfield mipmap used to generate collision
---@field public SimpleCollisionMipLevel integer @Heightfield mipmap used to generate simple collision
---@field public NegativeZBoundsExtension number @Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example Extension value in the negative Z axis, positive value increases bound size
---@field public PositiveZBoundsExtension number @Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example Extension value in the positive Z axis, positive value increases bound size
---@field public StaticLightingResolution number @StaticLightingResolution overriding per component, default value 0 means no overriding
---@field public ForcedLOD integer @Forced LOD level to use when rendering
---@field public LODBias integer @LOD level Bias to use when rendering
---@field public StateId FGuid
---@field public RegisteredEdgeFixup ULandscapeHeightmapTextureEdgeFixup @When the component has registered a heightmap texture edge fixup, a reference to the edge fixup and the group are stored here for easy access (the fixup is also referenced via the heightmap AssetUserDatas, and the group can be accessed via the ULandcapeSubsystem)
---@field public LightingLODBias integer @LOD level Bias to use when lighting building via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias
---@field public LayerAllowList TArray<ULandscapeLayerInfoObject> @List of layers allowed to be painted on this component
---@field public EditToolRenderData FLandscapeEditToolRenderData @Pointer to data shared with the render thread, used by the editor tools
---@field public MobileDataSourceHash FGuid @Hash of source for mobile generated data. Used determine if we need to re-generate mobile pixel data.
---@field public MaterialPerLOD TMap<UMaterialInterface, integer> @Represent the chosen material for each LOD
---@field public SplineHash integer
---@field public PhysicalMaterialHash integer @Represents hash for last PhysicalMaterialTask
---@field public LastSavedPhysicalMaterialHash integer @Represents last saved hash for PhysicalMaterialTask
---@field public MobileMaterialInterfaces TArray<UMaterialInterface> @Material interfaces used for mobile
---@field public MobileWeightmapTextures TArray<UTexture2D> @Generated weightmap textures used for mobile. The first entry is also used for the normal map. Serialized only when cooking or loading cooked builds.
---@field public MobileWeightmapTextureArray UTexture2DArray
---@field public MobileWeightmapLayerAllocations TArray<FWeightmapLayerAllocationInfo> @Layer allocations used by mobile.
---@field public MobileCombinationMaterialInstances TArray<UMaterialInstanceConstant> @The editor needs to save out the combination MIC we'll use for mobile,         because we cannot generate it at runtime for standalone PIE games
local ULandscapeComponent = {}

---@param InLODBias integer
function ULandscapeComponent:SetLODBias(InLODBias) end

---@param InForcedLOD integer
function ULandscapeComponent:SetForcedLOD(InForcedLOD) end

---Gets the landscape material instance dynamic for this component
---@param InIndex integer
---@return UMaterialInstanceDynamic
function ULandscapeComponent:GetMaterialInstanceDynamic(InIndex) end

---Gets the landscape paint layer weight value at the given position using layer name. Returns 0 in case it fails.
---@param InLocation FVector
---@param InPaintLayerName string
---@return number
function ULandscapeComponent:EditorGetPaintLayerWeightByNameAtLocation(InLocation, InPaintLayerName) end

---Gets the landscape paint layer weight value at the given position using LandscapeLayerInfo . Returns 0 in case it fails.
---@param InLocation FVector
---@param PaintLayer ULandscapeLayerInfoObject
---@return number
function ULandscapeComponent:EditorGetPaintLayerWeightAtLocation(InLocation, PaintLayer) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULandscapeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeComponent:AddAssetUserDataOfClass(InUserDataClass) end

