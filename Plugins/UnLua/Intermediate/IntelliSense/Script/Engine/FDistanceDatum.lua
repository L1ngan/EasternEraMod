---@class FDistanceDatum
---@field public FadeInDistanceStart number @The FadeInDistance at which to start hearing this sound.        * If you want to hear the sound up close then setting this to 0 might be a good option.
---@field public FadeInDistanceEnd number @The distance at which this sound has faded in completely.
---@field public FadeOutDistanceStart number @The distance at which this sound starts fading out.
---@field public FadeOutDistanceEnd number @The distance at which this sound is no longer audible.
---@field public Volume number @The volume for which this Input should be played.
local FDistanceDatum = {}
