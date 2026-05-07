---Style info of an interface.
---@class FMetasoundFrontendInterfaceStyle
---@field public DefaultSortOrder TArray<integer> @Default vertex sort order, where array index mirrors array interface index and value is display sort index.
---@field public RequiredMembers TMap<string, string> @Map of member names with FText to be used as warnings if not hooked up
local FMetasoundFrontendInterfaceStyle = {}
