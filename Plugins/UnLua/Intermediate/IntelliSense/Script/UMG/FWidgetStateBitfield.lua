---Expensive to create wrapper for binary and enumerated widget states that supports
---FName-based interaction and dynamic states populated in an IWidgetStateNameMapper
---May be used to represent either a target widget state combination, or an actual widgets state
---All this does is cache the integer results of dynamic FName state lookup from an IWidgetStateNameMapper
---So it's prefertable to create these once and reuse. In particular, if broadcasting current state
---determine the correct bitfield to modify the existing state ahead of time. Save that bitfield and use it
---when performing state-modifications. Likewise when performing state tests, try to construct the relevant
---bitfield ahead of time & store that to later be compared against
---@class FWidgetStateBitfield
local FWidgetStateBitfield = {}
