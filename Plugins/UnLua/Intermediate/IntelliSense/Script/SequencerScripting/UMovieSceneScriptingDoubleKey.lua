---Exposes a Sequencer double type key to Python/Blueprints.
---Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.
---@class UMovieSceneScriptingDoubleKey : UMovieSceneScriptingKey
local UMovieSceneScriptingDoubleKey = {}

---Sets the value for this key, reflecting it in the owning channel.
---@param InNewValue number
function UMovieSceneScriptingDoubleKey:SetValue(InNewValue) end

---Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.
---@param NewFrameNumber FFrameNumber
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingDoubleKey:SetTime(NewFrameNumber, SubFrame, TimeUnit) end

---If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.
---@param InNewValue integer
function UMovieSceneScriptingDoubleKey:SetTangentWeightMode(InNewValue) end

---Sets the tangent mode for this key, reflecting it in the owning channel.
---@param InNewValue integer
function UMovieSceneScriptingDoubleKey:SetTangentMode(InNewValue) end

---If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.
---@param InNewValue number
function UMovieSceneScriptingDoubleKey:SetLeaveTangentWeight(InNewValue) end

---If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.
---@param InNewValue number
function UMovieSceneScriptingDoubleKey:SetLeaveTangent(InNewValue) end

---Sets the interpolation mode for this key, reflecting it in the owning channel.
---@param InNewValue integer
function UMovieSceneScriptingDoubleKey:SetInterpolationMode(InNewValue) end

---If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.
---@param InNewValue number
function UMovieSceneScriptingDoubleKey:SetArriveTangentWeight(InNewValue) end

---If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.
---@param InNewValue number
function UMovieSceneScriptingDoubleKey:SetArriveTangent(InNewValue) end

---Gets the value for this key from the owning channel.
---@return number
function UMovieSceneScriptingDoubleKey:GetValue() end

---Gets the time for this key from the owning channel.
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FFrameTime
function UMovieSceneScriptingDoubleKey:GetTime(TimeUnit) end

---If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key
---@return integer
function UMovieSceneScriptingDoubleKey:GetTangentWeightMode() end

---Gets the tangent mode for this key from the owning channel.
---@return integer
function UMovieSceneScriptingDoubleKey:GetTangentMode() end

---If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.
---@return number
function UMovieSceneScriptingDoubleKey:GetLeaveTangentWeight() end

---If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key
---@return number
function UMovieSceneScriptingDoubleKey:GetLeaveTangent() end

---Gets the interpolation mode for this key from the owning channel.
---@return integer
function UMovieSceneScriptingDoubleKey:GetInterpolationMode() end

---If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.
---@return number
function UMovieSceneScriptingDoubleKey:GetArriveTangentWeight() end

---If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key
---@return number
function UMovieSceneScriptingDoubleKey:GetArriveTangent() end

