---A filter used by the auto reimport manager to explicitly include/exclude files matching the specified wildcard
---@class FAutoReimportWildcard
---@field public Wildcard string @The wildcard filter as a string. Files that match this wildcard will be included/excluded according to the bInclude member
---@field public bInclude boolean @When true, files that match this wildcard will be included (if it doesn't fail any other filters), when false, matches will be excluded from the reimporter
local FAutoReimportWildcard = {}
