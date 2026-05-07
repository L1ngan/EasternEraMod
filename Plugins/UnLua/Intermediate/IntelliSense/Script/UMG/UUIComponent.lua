---This is the base class to for UI Components that can be added to any UMG Widgets
---in UMG Designer.When initialized, it will pass the widget it's attached to.
---@class UUIComponent : UObject
---@field private Owner TWeakObjectPtr<UWidget>
local UUIComponent = {}

