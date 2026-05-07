---@class UFractureCustomVoronoiSettings : UFractureToolSettings
---@field public VoronoiPattern EVoronoiPattern @Method to generate next group of voronoi sites
---@field public NormalOffset number @Offset point samples in the vertex normal directions
---@field public Variability number @Amount to randomly displace each Voronoi site (in cm)
---@field public SitesToAdd integer @Number of Voronoi sites to add
---@field public GridX integer @Number of sites to add to grid in X
---@field public GridY integer @Number of sites to add to grid in Y
---@field public GridZ integer @Number of sites to add to grid in Z
---@field public SkipFraction number @Fraction of points to skip
---@field public SkipMode EDownsamplingMode @Strategy used for skipping points; only used if SkipFraction is greater than 0
---@field public ReferenceMesh TLazyObjectPtr<AStaticMeshActor> @Static mesh actor to be used as a reference when adding Voronoi sites
---@field public bStartAtActor boolean @Whether to use the reference mesh actor's transform when placing the Voronoi sites, or center them at the current gizmo location instead
local UFractureCustomVoronoiSettings = {}

---Unfreeze all frozen sites
function UFractureCustomVoronoiSettings:UnfreezeSites() end

---Re-run the live Voronoi sites generator, using the current settings and selection bounds
function UFractureCustomVoronoiSettings:RegenerateLiveSites() end

---Freeze the current live Voronoi Sites based on the current parameters
function UFractureCustomVoronoiSettings:FreezeLiveSites() end

---Remove all frozen sites
function UFractureCustomVoronoiSettings:ClearFrozenSites() end

