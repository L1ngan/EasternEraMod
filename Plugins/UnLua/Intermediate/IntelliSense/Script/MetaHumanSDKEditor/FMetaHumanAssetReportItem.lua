---A line in a report representing some Info, a Warning or an Error. Can optionally reference a specific item or file. *
---@class FMetaHumanAssetReportItem
---@field public Message string @The message to display to the user
---@field public ProjectItem UObject @The relevant object (if any) in the project to which this message relates
---@field public SourceItem string @The file path (if any) to which this message relates
local FMetaHumanAssetReportItem = {}
