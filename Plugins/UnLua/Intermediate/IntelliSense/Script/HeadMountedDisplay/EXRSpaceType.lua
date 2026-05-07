---Used to get unreal world space or tracking space positions in XR.
---Working only with unreal world space coordinates is almost always simpler and should be generally preferred.
---There are specific cases where raw XRTrackingSpace coordinates may be useful, particularly in apps where world scale is not 1:1 or where it changes.
---@class EXRSpaceType
---@field public UnrealWorldSpace integer
---@field public XRTrackingSpace integer
---@field public EXRSpaceType_MAX integer
local EXRSpaceType = {}
