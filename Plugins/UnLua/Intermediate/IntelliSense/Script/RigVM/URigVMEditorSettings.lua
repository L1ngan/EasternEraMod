---Customize RigVM Rig Editor.
---@class URigVMEditorSettings : UDeveloperSettings
---@field public bAutoLinkMutableNodes boolean @When this is checked mutable nodes (nodes with an execute pin) will be hooked up automatically.
---@field public bEnableContextMenuTimeSlicing boolean @When the Blueprint graph context menu is invoked (e.g. by right-clicking in the graph or dragging off a pin), do not block the UI while populating the available actions list.
local URigVMEditorSettings = {}

