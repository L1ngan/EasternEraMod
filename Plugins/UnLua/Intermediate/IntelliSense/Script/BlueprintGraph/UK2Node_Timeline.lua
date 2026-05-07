---@class UK2Node_Timeline : UK2Node
---@field public TimelineName string @The name of the timeline. Used to name ONLY the member variable (Component). To obtain the name of timeline template use UTimelineTemplate::TimelineVariableNameToTemplateName
---@field public bAutoPlay boolean @If the timeline is set to autoplay
---@field public TimelineGuid FGuid @Unique ID for the template we use, required to indentify the timeline after a paste
---@field public bLoop boolean @If the timeline is set to loop
---@field public bReplicated boolean @If the timeline is set to replicate
---@field public bIgnoreTimeDilation boolean @If the timeline should ignore global time dilation
local UK2Node_Timeline = {}

