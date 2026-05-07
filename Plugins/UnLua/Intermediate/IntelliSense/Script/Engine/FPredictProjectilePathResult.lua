---Container for the result of a projectile path trace (using PredictProjectilePath).
---@class FPredictProjectilePathResult
---@field public PathData TArray<FPredictProjectilePathPointData> @Info for each point on the path.
---@field public LastTraceDestination FPredictProjectilePathPointData @Info on the last point we tried to trace to, which may have been beyond the final hit.
---@field public HitResult FHitResult @Hit along the trace, if tracing with collision was enabled.
local FPredictProjectilePathResult = {}
