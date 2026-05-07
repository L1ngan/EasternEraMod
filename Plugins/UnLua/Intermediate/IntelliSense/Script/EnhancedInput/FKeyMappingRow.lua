---Stores all mappings bound to a single mapping name.
---Since a single mapping can have multiple bindings to it and this system should be Blueprint friendly,
---this needs to be a struct (blueprint don't support nested containers).
---@class FKeyMappingRow
---@field public Mappings TSet<FPlayerKeyMapping>
local FKeyMappingRow = {}
