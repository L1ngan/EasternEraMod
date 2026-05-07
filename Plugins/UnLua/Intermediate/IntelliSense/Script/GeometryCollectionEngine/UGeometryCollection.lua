---UGeometryCollectionObject (UObject)
---UObject wrapper for the FGeometryCollection
---@class UGeometryCollection : UObject
---@field public EnableClustering boolean
---@field public ClusterGroupIndex integer @Cluster group index - Geometry Collections using the same index will simulate as one single cluster.
---@field public MaxClusterLevel integer @Maximum level for cluster breaks.
---@field public DamageModel EDamageModelTypeEnum @Damage model to use for evaluating destruction.
---@field public DamageThreshold TArray<number> @Damage threshold for clusters at different levels.
---@field public bUseSizeSpecificDamageThreshold boolean @whether to use size specific damage threshold instead of level based ones ( see Size Specific Data array ).
---@field public bUseMaterialDamageModifiers boolean @When on , use the modifiers on the material to adjust the user defined damage threshold values
---@field public PerClusterOnlyDamageThreshold boolean @compatibility check, when true, only cluster compute damage from parameters and propagate to direct children when false, each child will compute it's damage threshold allowing for more precise and intuitive destruction behavior
---@field public DamagePropagationData FGeometryCollectionDamagePropagationData @Data about how damage propagation shoudl behave.
---@field public ClusterConnectionType EClusterConnectionTypeEnum
---@field public ConnectionGraphBoundsFilteringMargin number
---@field public GeometrySource TArray<FGeometryCollectionSource>
---@field public Materials TArray<UMaterialInterface>
---@field public EmbeddedGeometryExemplar TArray<FGeometryCollectionEmbeddedExemplar> @References for embedded geometry generation
---@field public bUseFullPrecisionUVs boolean @Whether to use full precision UVs when rendering this geometry. (Does not apply to Nanite rendering)
---@field public bStripOnCook boolean @Strip unnecessary data from the Geometry Collection to keep the memory footprint as small as possible.
---@field public bStripRenderDataOnCook boolean @Strip unnecessary render data from the Geometry Collection to keep the memory footprint as small as possible. This may be used if the cooked build uses a custom renderer such as the ISMPool renderer.
---@field public CustomRendererType TSubclassOf<UObject> @Custom class type that will be used to render the geometry collection instead of using the native rendering.
---@field public RootProxyData FGeometryCollectionProxyMeshData @Static mesh to use as a proxy for rendering until the geometry collection is broken.
---@field public AutoInstanceMeshes TArray<FGeometryCollectionAutoInstanceMesh> @List of unique static mesh / materials pairs for auto instancing.
---@field public EnableNanite boolean @Enable support for Nanite.
---@field public bEnableNaniteFallback boolean @Enable Non-Nanite fallback mesh when Nanite support is enabled.
---@field public bConvertVertexColorsToSRGB boolean @Convert vertex colors to sRGB for rendering. Exposed to avoid changing vertex color rendering for legacy assets; should typically be true for new geometry collections.
---@field public PhysicsMaterial UPhysicalMaterial @Physics material to use for the geometry collection
---@field public bDensityFromPhysicsMaterial boolean @Whether to use density ( for mass computation ) from physics material ( if physics material is not set, use the component one or defaults )
---@field public CachedDensityFromPhysicsMaterialInGCm3 number @Cached Material density value used to compute the Mass attribute  ( In gram per cm3 ) this is necessary because the material properties could be changed after without causing the mass attribute to be recomputed ( because the GC asset will not get notified )
---@field public bMassAsDensity boolean @Mass As Density, units are in kg/m^3 ( only enabled if physics material is not set )
---@field public Mass number @Total Mass of Collection. If density, units are in kg/m^3 ( only enabled if physics material is not set )
---@field public MinimumMassClamp number @Smallest allowable mass (def:0.1)
---@field public bImportCollisionFromSource boolean @whether to import collision from the source asset
---@field public bOptimizeConvexes boolean @whether to optimize convexes for collisions. If true the convex optimizer will generate at runtime one single convex shape for physics collisions ignoring all the user defined ones. Enable p.Chaos.Convex.SimplifyUnion cvar to be able to use it (experimental)
---@field public bScaleOnRemoval boolean @When enabled, particle will scale down (shrink) when using being removed ( using both remove on sleep or remove on break ) - Enabled by default
---@field public bRemoveOnMaxSleep boolean @Remove particle from simulation and dissolve rendered geometry once sleep threshold has been exceeded.
---@field public bAutomaticCrumblePartialClusters boolean @When using remove on sleep , automatically crumble partial cluster into smaller pieces when possible
---@field public MaximumSleepTime FVector2D @How long may the particle sleep before initiating removal (in seconds).
---@field public RemovalDuration FVector2D @How long does the removal process take (in seconds).
---@field public bSlowMovingAsSleeping boolean @when on non-sleeping, slow moving pieces will be considered as sleeping, this helps removal of jittery but not really moving objects.
---@field public SlowMovingVelocityThreshold number @When slow moving detection is on, this defines the linear velocity thresholds in cm/s to consider the object as sleeping .
---@field public SizeSpecificData TArray<FGeometryCollectionSizeSpecificData> @* Size Specfic Data reflects the default geometry to bind to rigid bodies smaller * than the max size volume. This can also be empty to reflect no collision geometry * for the collection.
---@field public AssetImportData UAssetImportData @Importing data and options used for this geometry collection
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
---@field public DataflowAsset UDataflow @this is deprecated data replaced with Setter and Getter but it is exposed to blueprint so we use the Setter/Getter to make sure the blueprint will use them
---@field public Overrides TMap<string, string>
---@field public DataflowInstance FDataflowInstance
---@field private PersistentGuid FGuid @Guid created on construction of this collection. It should be used to uniquely identify this collection
---@field private StateGuid FGuid @Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to the geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection is still valid (hasn't structurally changed post-recording)
---@field private RootIndex integer @cached root index for faster queries
---@field private BreadthFirstTransformIndices TArray<integer> @cache transform indices in breadth-first order
---@field private AutoInstanceTransformRemapIndices TArray<integer> @cache transform remapping for instanced meshes indices
---@field private BoneSelectedMaterialIndex integer @Legacy index of the bone selected material in the object's Materials array, or INDEX_NONE if it is not stored there. Note for new objects the bone selected material should not be stored in the Materials array, so this should be INDEX_NONE The property is kept solely to support deletion of the bone selected material from the materials list of legacy assets
---@field private AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local UGeometryCollection = {}

---@param bValue boolean
function UGeometryCollection:SetEnableNanite(bValue) end

---@param InDataflowAsset UDataflow
function UGeometryCollection:SetDataflowAsset(InDataflowAsset) end

---@param bValue boolean
function UGeometryCollection:SetConvertVertexColorsToSRGB(bValue) end

---@return UDataflow
function UGeometryCollection:GetDataflowAsset() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCollection:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGeometryCollection:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCollection:AddAssetUserDataOfClass(InUserDataClass) end

