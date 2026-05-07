---A camera shake pattern that plays a sequencer animation.
---@class USequenceCameraShakePattern : UCameraShakePattern
---@field public Sequence UCameraAnimationSequence @Source camera animation sequence to play.
---@field public PlayRate number @Scalar defining how fast to play the anim.
---@field public Scale number @Scalar defining how "intense" to play the anim.
---@field public BlendInTime number @Linear blend-in time.
---@field public BlendOutTime number @Linear blend-out time.
---@field public RandomSegmentDuration number @When bRandomSegment is true, defines how long the sequence should play.
---@field public bRandomSegment boolean @When true, plays a random snippet of the sequence for RandomSegmentDuration seconds.       is longer than what's left to play from the random start time.
---@field private Player UCameraAnimationSequencePlayer @The player we use to play the camera animation sequence
---@field private CameraStandIn UCameraAnimationSequenceCameraStandIn @Standin for the camera actor and components
local USequenceCameraShakePattern = {}

