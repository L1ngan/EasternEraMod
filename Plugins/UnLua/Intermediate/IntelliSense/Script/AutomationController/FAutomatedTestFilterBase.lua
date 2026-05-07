---* Describes a base filter for a test group.
---@class FAutomatedTestFilterBase
---@field public Contains string @String that the test must contain
---@field public MatchFromStart boolean @If true start matching from the start of the string, else anywhere
---@field public MatchFromEnd boolean @If true start matching from the end of the string, else anywhere
local FAutomatedTestFilterBase = {}
