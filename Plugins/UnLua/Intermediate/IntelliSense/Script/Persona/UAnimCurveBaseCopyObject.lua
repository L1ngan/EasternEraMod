---Object used to export AnimCurves to clipboard
---@class UAnimCurveBaseCopyObject : UObject
---@field public CurveName string @Store information for FAnimationCurveIdentifier.
---@field public CurveType ERawCurveTrackTypes
---@field public Channel ETransformCurveChannel
---@field public Axis EVectorCurveChannel
---@field public OriginName string @This curve's data owner name (ex. UAnimSequenceBase Name), if any. Used internally to check if the user is attempting to paste curve data into source curve.
local UAnimCurveBaseCopyObject = {}

