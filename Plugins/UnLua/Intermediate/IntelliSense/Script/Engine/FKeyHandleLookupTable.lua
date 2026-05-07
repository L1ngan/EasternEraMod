---Lookup table that maps key handles to indices in an external data structure
---Maintains a map of key handle to last known index,
---and an array of optional key handles that's used to validate map entries.
---@class FKeyHandleLookupTable
local FKeyHandleLookupTable = {}
