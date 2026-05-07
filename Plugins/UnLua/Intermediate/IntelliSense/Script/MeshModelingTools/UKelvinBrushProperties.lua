---@class UKelvinBrushProperties : UInteractiveToolPropertySet
---@field public FallOffDistance number @Brush Fall off as fraction of brush size
---@field public Stiffness number @How much the mesh resists shear
---@field public Incompressiblity number @How compressible the spatial region is: 1 - 2 x Poisson ratio
---@field public BrushSteps integer @Integration steps
local UKelvinBrushProperties = {}

