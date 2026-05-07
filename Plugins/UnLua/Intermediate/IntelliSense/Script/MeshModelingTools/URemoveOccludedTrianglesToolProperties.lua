---Standard properties
---@class URemoveOccludedTrianglesToolProperties : UInteractiveToolPropertySet
---@field public OcclusionTestMethod EOcclusionCalculationUIMode @The method for deciding whether a triangle is occluded
---@field public TriangleSampling EOcclusionTriangleSamplingUIMode @Where to sample triangles to test occlusion
---@field public WindingIsoValue number @The winding isovalue for GeneralizedWindingNumber mode
---@field public AddRandomRays integer @For raycast-based occlusion tests, optionally add random ray direction to increase the accuracy of the visibility sampling
---@field public AddTriangleSamples integer @Optionally add random samples to each triangle (in addition to those from TriangleSampling) to increase the accuracy of the visibility sampling
---@field public bOnlySelfOcclude boolean @If false, when multiple meshes are selected the meshes can occlude each other.  When true, we process each selected mesh independently and only consider self-occlusions.
---@field public ShrinkRemoval integer @Shrink (erode) the boundary of the set of triangles to remove.
---@field public MinAreaIsland number
---@field public MinTriCountIsland integer
---@field public Action EOccludedAction @What action to perform on occluded triangles
local URemoveOccludedTrianglesToolProperties = {}

