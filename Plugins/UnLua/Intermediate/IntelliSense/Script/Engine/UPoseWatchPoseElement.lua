---@class UPoseWatchPoseElement : UPoseWatchElement
---@field public ViewportMask UBlendProfile @Optionally select a Blend Mask to control which bones on the skeleton are rendered. Any non-zero entries are rendered.
---@field public bInvertViewportMask boolean @Invert which bones are rendered when using a viewport mask
---@field public BlendScaleThreshold number @The threshold which each bone's blend scale much surpass to be rendered using the viewport mask
---@field public ViewportOffset FVector3d @Offset the rendering of the bones in the viewport.
local UPoseWatchPoseElement = {}

