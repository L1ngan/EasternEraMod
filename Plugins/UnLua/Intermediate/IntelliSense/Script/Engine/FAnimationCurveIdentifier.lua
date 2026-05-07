---Script-friendly structure for identifying an animation curve.
---Wrapping the unique type and smart-name for use within the AnimDataController API.
---@class FAnimationCurveIdentifier
---@field public CurveName string
---@field public CurveType ERawCurveTrackTypes
---@field public Channel ETransformCurveChannel
---@field public Axis EVectorCurveChannel
local FAnimationCurveIdentifier = {}
