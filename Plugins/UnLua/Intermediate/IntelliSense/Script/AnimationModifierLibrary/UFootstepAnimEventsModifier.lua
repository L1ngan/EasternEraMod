---Generates animation notifies and/or sync markers for any specified bone(s)
---@class UFootstepAnimEventsModifier : UAnimationModifier
---@field public SampleRate integer @Rate used to sample the animation
---@field public GroundThreshold number @Threshold for determining if a foot bone position can be considered to be on the ground level
---@field public SpeedThreshold number @Threshold to start finding the smallest foot bone translation speed. Note that the foot bone translation speed is normalize therefore when a footstep occurs the speed will be very close to zero, thus for most cases this value won't need to be changed.
---@field public FootDefinitions TArray<FFootDefinition> @Foot bone(s) to be processed
---@field public bShouldRemovePreExistingNotifiesOrSyncMarkers boolean @If true, applying the anim modifier becomes a destructive action, meaning that any existing matched tracks will have their data overwritten by the modifier. Otherwise, no previous notifies or sync markers will removed when applying the anim modifier.
---@field private GeneratedNotifyTracks TSet<string> @Keep track of to be generated tracks during modifier application
---@field private ProcessedNotifyTracks TSet<string> @Keep track of tracks modified during modifier application
local UFootstepAnimEventsModifier = {}

