---@class USequencerAnimationOverride : UInterface
local USequencerAnimationOverride = {}

---Should return a list of valid slot names for Sequencer to output to in the case that Sequencer is not permitted to nuke the anim instance.
---Will be chosen by the user in drop down on the skeletal animation section properties. Should be named descriptively, as in some contexts (UEFN), the user
---will not be able to view the animation blueprint itself to determine the mixing behavior of the slot.
---@return TArray_string_
function USequencerAnimationOverride:GetSequencerAnimSlotNames() end

---Whether this animation blueprint allows Sequencer to nuke this anim instance and replace it during Sequencer playback.
---@return boolean
function USequencerAnimationOverride:AllowsCinematicOverride() end

