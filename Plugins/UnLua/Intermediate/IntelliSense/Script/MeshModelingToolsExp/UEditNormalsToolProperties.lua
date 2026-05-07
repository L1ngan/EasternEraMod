---Standard properties
---@class UEditNormalsToolProperties : UInteractiveToolPropertySet
---@field public bRecomputeNormals boolean @Recompute all mesh normals
---@field public NormalCalculationMethod ENormalCalculationMethod @Choose the method for computing vertex normals
---@field public bFixInconsistentNormals boolean @For meshes with inconsistent triangle orientations/normals, flip as needed to make the normals consistent
---@field public bInvertNormals boolean @Invert (flip) all mesh normals and associated triangle orientations
---@field public SplitNormalMethod ESplitNormalMethod @Control whether and how the topology of the normals is recomputed, e.g. to create sharp edges where face normals change by a large amount or where face group IDs change.  Normals will always be recomputed unless SplitNormal Method is UseExistingTopology.
---@field public SharpEdgeAngleThreshold number @Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bSplitNormals is true
---@field public bAllowSharpVertices boolean @Assign separate normals at 'sharp' vertices, for example, at the tip of a cone
---@field public bToolHasSelection boolean @The following are not user visible
local UEditNormalsToolProperties = {}

