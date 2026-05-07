---Settings to control the camera's lookat feature
---@class FCameraLookatTrackingSettings
---@field public bEnableLookAtTracking boolean @True to enable lookat tracking, false otherwise.
---@field public bDrawDebugLookAtTrackingPosition boolean @True to draw a debug representation of the lookat location
---@field public LookAtTrackingInterpSpeed number @Controls degree of smoothing. 0.f for no smoothing, higher numbers for faster/tighter tracking.
---@field public ActorToTrack TSoftObjectPtr<AActor> @If set, camera will track this actor's location
---@field public RelativeOffset FVector @Offset from actor position to look at. Relative to actor if tracking an actor, relative to world otherwise.
---@field public bAllowRoll boolean @True to allow user-defined roll, false otherwise.
local FCameraLookatTrackingSettings = {}
