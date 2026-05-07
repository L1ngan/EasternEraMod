---@class FSplineCurves
---@field public Position FInterpCurveVector @Spline built from position data.
---@field public Rotation FInterpCurveQuat @Spline built from rotation data.
---@field public Scale FInterpCurveVector @Spline built from scale data.
---@field public ReparamTable FInterpCurveFloat @Input: distance along curve, output: parameter that puts you there.
---@field public Version integer
local FSplineCurves = {}
