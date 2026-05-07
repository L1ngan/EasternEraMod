---@class UAISenseConfig_Sight : UAISenseConfig
---@field public Implementation TSubclassOf<UAISense_Sight>
---@field public SightRadius number @Maximum sight distance to notice a target.
---@field public LoseSightRadius number @Maximum sight distance to see target that has been already seen.
---@field public PeripheralVisionAngleDegrees number @How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.     The value represents the angle measured in relation to the forward vector, not the whole range.
---@field public DetectionByAffiliation FAISenseAffiliationFilter
---@field public AutoSuccessRangeFromLastSeenLocation number @If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location.
---@field public PointOfViewBackwardOffset number @Point of view move back distance for cone calculation. In conjunction with near clipping distance, this will act as a close by awareness and peripheral vision.
---@field public NearClippingRadius number @Near clipping distance, to be used with point of view backward offset. Will act as a close by awareness and peripheral vision
local UAISenseConfig_Sight = {}

