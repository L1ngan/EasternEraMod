---Settings to control tracking-focus mode.
---@class FCameraTrackingFocusSettings
---@field public ActorToTrack TSoftObjectPtr<AActor> @Focus distance will be tied to this actor's location.
---@field public RelativeOffset FVector @Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise.
---@field public bDrawDebugTrackingFocusPoint boolean @True to draw a debug representation of the tracked position.
local FCameraTrackingFocusSettings = {}
