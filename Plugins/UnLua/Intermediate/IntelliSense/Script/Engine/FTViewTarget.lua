---A ViewTarget is the primary actor the camera is associated with.
---@class FTViewTarget
---@field public Target AActor @Target Actor used to compute POV
---@field public POV FMinimalViewInfo @Computed point of view
---@field protected PlayerState APlayerState @PlayerState (used to follow same player through pawn transitions, etc., when spectating)
local FTViewTarget = {}
