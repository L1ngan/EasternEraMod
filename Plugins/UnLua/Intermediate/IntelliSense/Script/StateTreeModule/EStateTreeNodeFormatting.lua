---Enum describing in what format a text is expected to be returned.
---- Normal text should be used for values
---- Bold text should generally be used for actions, like name a of a task "<b>Play Animation</> {AnimName}".
---- Subdued should be generally used for secondary/structural information, like "{Left} <s>equals</> {Right}".
---@class EStateTreeNodeFormatting
---@field public RichText integer
---@field public Text integer
---@field public EStateTreeNodeFormatting_MAX integer
local EStateTreeNodeFormatting = {}
