---@class FHairStrandsParameters
---@field public StrandsSize EGroomStrandsSize @Number of particles per guide that will be used for simulation
---@field public StrandsDensity number @Density of the strands in g/cm3
---@field public StrandsSmoothing number @Smoothing between 0 and 1 of the incoming guides curves for better stability
---@field public StrandsThickness number @Strands thickness in cm that will be used for mass and inertia computation
---@field public ThicknessScale FRuntimeFloatCurve @This curve determines how much the strands thickness will be scaled along each strand.   The X axis range is [0,1], 0 mapping the root and 1 the tip
local FHairStrandsParameters = {}
