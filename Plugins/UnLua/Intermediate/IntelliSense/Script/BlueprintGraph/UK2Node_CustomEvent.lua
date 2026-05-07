---@class UK2Node_CustomEvent : UK2Node_Event
---@field public DeprecationMessage string @Optional message to display when the event is deprecated
---@field public bIsDeprecated boolean @Specifies that usage of this event has been deprecated
---@field public bCallInEditor boolean @Specifies that the event can be triggered in Editor
---@field private MetaData FKismetUserDeclaredFunctionMetadata @Custom event metadata that can be used for adding custom keywords
local UK2Node_CustomEvent = {}

