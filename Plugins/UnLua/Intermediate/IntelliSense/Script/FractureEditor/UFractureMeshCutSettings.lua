---@class UFractureMeshCutSettings : UFractureToolSettings
---@field public CuttingActor TLazyObjectPtr<AStaticMeshActor> @Static Mesh Actor to be used as a cutting surface. For best results, use a closed, watertight mesh
---@field public CutDistribution EMeshCutDistribution @How to arrange the mesh cuts in space
---@field public NumberToScatter integer @Number of meshes to random scatter
---@field public GridX integer @Number of meshes to add to grid in X
---@field public GridY integer @Number of meshes to add to grid in Y
---@field public GridZ integer @Number of meshes to add to grid in Z
---@field public Variability number @Magnitude of random displacement to cutting meshes
---@field public MinScaleFactor number @Minimum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max
---@field public MaxScaleFactor number @Maximum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max
---@field public bRandomOrientation boolean @Whether to randomly vary the orientation of the cutting meshes
---@field public RollRange number @Roll will be chosen between -Range and +Range
---@field public PitchRange number @Pitch will be chosen between -Range and +Range
---@field public YawRange number @Yaw will be chosen between -Range and +Range
local UFractureMeshCutSettings = {}

