---@class UFractureRadialSettings : UFractureToolSettings
---@field public Center FVector @Center of generated pattern. Only used when "Use Gizmo" is disabled
---@field public Normal FVector @Normal to plane in which sites are generated. Only used when "Use Gizmo" is disabled
---@field public bPositionedByGizmo boolean
---@field public AngularSteps integer @Number of angular steps
---@field public AngleOffset number @Angle offset at each radial step (in degrees)
---@field public AngularNoise number @Amount of global variation to apply to each angular step (in degrees)
---@field public Radius number @Pattern radius (in cm)
---@field public RadialSteps integer @Number of radial steps
---@field public RadialStepExponent number @Radial steps will follow a distribution based on this exponent, i.e., Pow(distance from center, RadialStepExponent)
---@field public RadialMinStep number @Minimum radial separation between any two voronoi points (in cm)
---@field public RadialNoise number @Amount of global variation to apply to each radial step (in cm)
---@field public RadialVariability number @Amount to randomly displace each Voronoi site radially (in cm)
---@field public AngularVariability number @Amount to randomly displace each Voronoi site in angle (in degrees)
---@field public AxialVariability number @Amount to randomly displace each Voronoi site in the direction of the rotation axis (in cm)
local UFractureRadialSettings = {}

