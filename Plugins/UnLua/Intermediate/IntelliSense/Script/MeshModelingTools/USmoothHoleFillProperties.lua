---* Properties. This class reflects the parameters in FSmoothFillOptions, but is decorated to allow use in the UI system.
---@class USmoothHoleFillProperties : UInteractiveToolPropertySet
---@field public bConstrainToHoleInterior boolean @Allow smoothing and remeshing of triangles outside of the fill region
---@field public RemeshingExteriorRegionWidth integer @Number of vertex rings outside of the fill region to allow remeshing
---@field public SmoothingExteriorRegionWidth integer @Number of vertex rings outside of the fill region to perform smoothing
---@field public SmoothingInteriorRegionWidth integer @Number of vertex rings away from the fill region boundary to constrain smoothing
---@field public InteriorSmoothness number @Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results
---@field public FillDensityScalar number @Relative triangle density of fill region
---@field public bProjectDuringRemesh boolean @Whether to project to the original mesh during post-smooth remeshing. This can be expensive on large meshes with many holes.
local USmoothHoleFillProperties = {}

