---@class UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase
---@field public bDeadTrailsOnDeactivate boolean @If true, when the system is deactivated, mark trails as dead. This means they will still render, but will not have more particles added to them, even if the system re-activates...
---@field public bEnablePreviousTangentRecalculation boolean @If true, recalculate the previous tangent when a new particle is spawned
---@field public bTangentRecalculationEveryFrame boolean @If true, recalculate tangents every frame to allow velocity/acceleration to be applied
---@field public TilingDistance number @The (estimated) covered distance to tile the 2nd UV set at. If 0.0, a second UV set will not be passed in.
---@field public DistanceTessellationStepSize number @The distance step size for tessellation. # Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize)). If 0 then there is no distance tessellation.
---@field public TangentTessellationStepSize number @The tangent scalar for tessellation. This is the degree change in the tangent direction [0...180] required to warrant an additional tessellation point. If 0 then there is no tangent tessellation.
---@field public WidthTessellationStepSize number @The width step size for tessellation. This is the number of world units change in the width required to warrant an additional tessellation point. If 0 then there is no width tessellation.
local UParticleModuleTypeDataAnimTrail = {}

