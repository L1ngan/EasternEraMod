---Properties
---@class USubdividePolyToolProperties : UInteractiveToolPropertySet
---@field public SubdivisionLevel integer @Number of iterations/levels of subdivision to perform
---@field public SubdivisionScheme ESubdivisionScheme
---@field public BoundaryScheme ESubdivisionBoundaryScheme @How to treat mesh boundaries
---@field public NormalComputationMethod ESubdivisionOutputNormals
---@field public UVComputationMethod ESubdivisionOutputUVs
---@field public bNewPolyGroups boolean @Assign a new PolyGroup ID to each newly created face
---@field public bRenderGroups boolean @Display each PolyGroup with an auto-generated color
---@field public bRenderCage boolean @Display the mesh corresponding to Subdivision Level 0
---@field public bAddExtraCorners boolean @When using the group topology for subdivision, whether to add extra corners at sharp group edge bends on mesh boundaries. Note: We cannot add extra corners on non-boundary group edges, as this would create non-manifold geometry on subdivision.
---@field public ExtraCornerAngleThresholdDegrees number @How acute an angle between two edges needs to be to add an extra corner there when Add Extra Corners is true.
---@field public bOverriddenSubdivisionScheme boolean @Shows whether the current subdivision scheme is overridden to be "Loop" because the group topology is unsuitable.
local USubdividePolyToolProperties = {}

