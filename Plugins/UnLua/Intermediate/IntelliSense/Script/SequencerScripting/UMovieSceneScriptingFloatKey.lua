---Exposes a Sequencer float type key to Python/Blueprints.
---Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.
---@class UMovieSceneScriptingFloatKey : UMovieSceneScriptingKey
local UMovieSceneScriptingFloatKey = {}

---Sets the value for this key, reflecting it in the owning channel.
---@param InNewValue number
function UMovieSceneScriptingFloatKey:SetValue(InNewValue) end

---Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.
---@param NewFrameNumber FFrameNumber
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingFloatKey:SetTime(NewFrameNumber, SubFrame, TimeUnit) end

---If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.
---@param InNewValue integer
function UMovieSceneScriptingFloatKey:SetTangentWeightMode(InNewValue) end

---Sets the tangent mode for this key, reflecting it in the owning channel.
---@param InNewValue integer
function UMovieSceneScriptingFloatKey:SetTangentMode(InNewValue) end

---If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.
---@param InNewValue number
function UMovieSceneScriptingFloatKey:SetLeaveTangentWeight(InNewValue) end

---If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.
---@param InNewValue number
function UMovieSceneScriptingFloatKey:SetLeaveTangent(InNewValue) end

---Sets the interpolation mode for this key, reflecting it in the owning channel.
---@param InNewValue integer
function UMovieSceneScriptingFloatKey:SetInterpolationMode(InNewValue) end

---If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.
---@param InNewValue number
function UMovieSceneScriptingFloatKey:SetArriveTangentWeight(InNewValue) end

---If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.
---@param InNewValue number
function UMovieSceneScriptingFloatKey:SetArriveTangent(InNewValue) end

---Gets the value for this key from the owning channel.
---@return number
function UMovieSceneScriptingFloatKey:GetValue() end

---Gets the time for this key from the owning channel.
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FFrameTime
function UMovieSceneScriptingFloatKey:GetTime(TimeUnit) end

---If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key
---@return integer
function UMovieSceneScriptingFloatKey:GetTangentWeightMode() end

---Gets the tangent mode for this key from the owning channel.
---@return integer
function UMovieSceneScriptingFloatKey:GetTangentMode() end

---If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.
---@return number
function UMovieSceneScriptingFloatKey:GetLeaveTangentWeight() end

---If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key
---@return number
function UMovieSceneScriptingFloatKey:GetLeaveTangent() end

---Gets the interpolation mode for this key from the owning channel.
---@return integer
function UMovieSceneScriptingFloatKey:GetInterpolationMode() end

---If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.
---@return number
function UMovieSceneScriptingFloatKey:GetArriveTangentWeight() end

---If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key
---@return number
function UMovieSceneScriptingFloatKey:GetArriveTangent() end

