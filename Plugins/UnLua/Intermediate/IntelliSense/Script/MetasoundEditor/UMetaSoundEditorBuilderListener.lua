---@class UMetaSoundEditorBuilderListener : UObject
---@field public OnGraphInputAddedDelegate MulticastDelegate
---@field public OnGraphInputDefaultChangedDelegate MulticastDelegate
---@field public OnRemovingGraphInputDelegate MulticastDelegate
---@field public OnGraphOutputAddedDelegate MulticastDelegate
---@field public OnRemovingGraphOutputDelegate MulticastDelegate
---@field public OnGraphInputDataTypeChangedDelegate MulticastDelegate
---@field public OnGraphOutputDataTypeChangedDelegate MulticastDelegate
---@field public OnGraphInputNameChangedDelegate MulticastDelegate
---@field public OnGraphOutputNameChangedDelegate MulticastDelegate
local UMetaSoundEditorBuilderListener = {}

function UMetaSoundEditorBuilderListener:RemoveAllDelegates() end

