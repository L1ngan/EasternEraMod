---The base class for a standard scren-space framing camera node.
---@class UBaseFramingCameraNode : UCameraNode
---@field public TargetLocation FVector3dCameraVariableReference @A variable whose value is the desired target's location in world space. If set, and if the variable has been set, the obtained value takes priority over the TargetInfos property.
---@field public TargetInfos TArray<FCameraActorTargetInfo> @Specifies one or more target actors to frame.
---@field public TargetInfosDataID FCameraContextDataID
---@field public SetTargetDistance FBooleanCameraParameter @Whether the camera pose's target distance should be set to the distance between its location and the effective target's location.
---@field public InitializeWithIdealFraming FBooleanCameraParameter @Whether to frame the target with the ideal framing immediately on the first frame.
---@field public IdealFramingLocation FVector2dCameraParameter @The ideal horizontal and vertical screen-space position of the target.
---@field public ReframeDampingFactor FFloatCameraParameter @The damping factor for how fast the framing recenters on the target.
---@field public LowReframeDampingFactor FFloatCameraParameter @If valid, the recentering damping factor will interpolate between LowReframeDampingFactor and ReframeDampingFactor as the target moves between the ideal target position and the boundaries of the hard-zone. If invalid, no interpolation occurs and the damping factor is always equal to ReframeDampingFactor.
---@field public ReengageTime FFloatCameraParameter @The time spent ramping up the reframing after exiting the dead zone. If set to zero or a negative value, reframing will immediately restart once the target has exited the dead zone. Otherwise the ReframeDampingFactor will interpolate from zero to its desired value over the specified amount of seconds.
---@field public DisengageTime FFloatCameraParameter @The time spent ramping down the reframing after entering the dead zone. If set to zero or a negative value, reframing will immediately stop once the target has entered the dead zone. Otherwise, the ReframeDampingFactor will interpolate towards zero over the specified amount of seconds.
---@field public TargetMovementAnticipationTime FFloatCameraParameter
---@field public DeadZone FCameraFramingZoneParameter @The size of the dead zone, i.e. the zone inside which the target can freely move. Sizes are expressed screen percentages around the desired framing location.
---@field public SoftZone FCameraFramingZoneParameter @The margins of the soft zone, i.e. the zone inside which the reframing will engage, in order to bring the target back towards the ideal framing position. If the target is outside of the soft zone, it will be forcibly and immedialy brought back to its edges, so this zone also defines the "hard" or "safe" zone of framing. Sizes are expressed in screen percentages from the edges.
local UBaseFramingCameraNode = {}

