---Function library containing methods that should be hoisted onto FSequencerScriptingRanges
---@class USequencerScriptingRangeExtensions : UBlueprintFunctionLibrary
local USequencerScriptingRangeExtensions = {}

---Set the starting time for the specified range in seconds. Interpreted as the first valid time that is inside the range.
---@param Range FSequencerScriptingRange @[out] 
---@param Start number
function USequencerScriptingRangeExtensions.SetStartSeconds(Range, Start) end

---Set the starting frame for the specified range. Interpreted as the first valid frame that is inside the range.
---@param Range FSequencerScriptingRange @[out] 
---@param Start integer
function USequencerScriptingRangeExtensions.SetStartFrame(Range, Start) end

---Set the ending time for the specified range in seconds. Interpreted as the first time that is outside of the range.
---@param Range FSequencerScriptingRange @[out] 
---@param End number
function USequencerScriptingRangeExtensions.SetEndSeconds(Range, End) end

---Set the ending frame for the specified range. Interpreted as the first subsequent frame that is outside of the range.
---@param Range FSequencerScriptingRange @[out] 
---@param End integer
function USequencerScriptingRangeExtensions.SetEndFrame(Range, End) end

---Remove the start from this range, making it infinite
---@param Range FSequencerScriptingRange @[out] 
function USequencerScriptingRangeExtensions.RemoveStart(Range) end

---Remove the end from this range, making it infinite
---@param Range FSequencerScriptingRange @[out] 
function USequencerScriptingRangeExtensions.RemoveEnd(Range) end

---Check whether this range has a start
---@param Range FSequencerScriptingRange
---@return boolean
function USequencerScriptingRangeExtensions.HasStart(Range) end

---Check whether this range has an end
---@param Range FSequencerScriptingRange
---@return boolean
function USequencerScriptingRangeExtensions.HasEnd(Range) end

---Get the starting time for the specified range in seconds, if it has one. Defined as the first valid time that is inside the range.
---@param Range FSequencerScriptingRange
---@return number
function USequencerScriptingRangeExtensions.GetStartSeconds(Range) end

---Get the starting frame for the specified range, if it has one. Defined as the first valid frame that is inside the range.
---@param Range FSequencerScriptingRange
---@return integer
function USequencerScriptingRangeExtensions.GetStartFrame(Range) end

---Get the ending time for the specified range in seconds, if it has one. Defined as the first time that is outside of the range.
---@param Range FSequencerScriptingRange
---@return number
function USequencerScriptingRangeExtensions.GetEndSeconds(Range) end

---Get the ending frame for the specified range, if it has one. Defined as the first subsequent frame that is outside of the range.
---@param Range FSequencerScriptingRange
---@return integer
function USequencerScriptingRangeExtensions.GetEndFrame(Range) end

