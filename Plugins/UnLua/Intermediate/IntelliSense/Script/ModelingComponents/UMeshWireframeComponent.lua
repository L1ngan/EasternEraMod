---UMeshWireframeComponent draws a mesh wireframe as lines, with line color/thickness
---varying depending on line type and the configuration settings.
---Currently can draw:
---   - all mesh edges
---   - boundary edges
---   - UV seam edges
---   - Normal seam edges
---   - Color seam edges
---Client must provide a IMeshWireframeSourceProvider implementation that provides the
---edge set, vertices, and edge type
---@class UMeshWireframeComponent : UMeshComponent
---@field public LineDepthBias number @Depth bias of the lines, used to offset in depth to avoid z-fighting
---@field public LineDepthBiasSizeScale number @Target-size depth bias scale. This is multiplied by LineDepthBias. Client of UMeshWireframeComponent can set this if desired, eg to fraction of target object bounding box size, etc.
---@field public ThicknessScale number @Scaling factor applied to the per-edge-type thicknesses defined below
---@field public bEnableWireframe boolean @Wireframe properties
---@field public WireframeColor FColor
---@field public WireframeThickness number
---@field public bEnableBoundaryEdges boolean @Boundary Edge properties
---@field public BoundaryEdgeColor FColor
---@field public BoundaryEdgeThickness number
---@field public bEnableUVSeams boolean @UV seam properties
---@field public UVSeamColor FColor
---@field public UVSeamThickness number
---@field public bEnableNormalSeams boolean @normal seam properties
---@field public NormalSeamColor FColor
---@field public NormalSeamThickness number
---@field public bEnableTangentSeams boolean @tangent seam properties
---@field public TangentSeamColor FColor
---@field public TangentSeamThickness number
---@field public bEnableColorSeams boolean @color seam properties
---@field public ColorSeamColor FColor
---@field public ColorSeamThickness number
---@field private LineMaterial UMaterialInterface
---@field private LocalBounds FBoxSphereBounds
local UMeshWireframeComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMeshWireframeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMeshWireframeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMeshWireframeComponent:AddAssetUserDataOfClass(InUserDataClass) end

