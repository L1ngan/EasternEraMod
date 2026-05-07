---Computes doppler pitch shift
---@class USoundNodeDoppler : USoundNode
---@field public DopplerIntensity number @How much to scale the doppler shift (1.0 is normal).
---@field public bUseSmoothing boolean @Whether or not to do a smooth interp to our doppler
---@field public SmoothingInterpSpeed number @Speed at which to interp pitch scale
local USoundNodeDoppler = {}

