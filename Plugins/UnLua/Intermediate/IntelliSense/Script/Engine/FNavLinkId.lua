---NavLink Id type. Legacy Ids were generated using the incremental ID system which has been deprecated but will be supported for quite some time. The new system uses CityHash using GenerateUniqueId()
---Only NavLinks generated this way should have the most significant bit of the id set to 1.
---@class FNavLinkId
---@field private Id integer
local FNavLinkId = {}
