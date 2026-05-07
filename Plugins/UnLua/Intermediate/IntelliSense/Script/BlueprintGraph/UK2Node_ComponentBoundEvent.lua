---@class UK2Node_ComponentBoundEvent : UK2Node_Event
---@field public DelegatePropertyName string @Delegate property name that this event is associated with
---@field public DelegateOwnerClass TSubclassOf<UObject> @Delegate property's owner class that this event is associated with
---@field public ComponentPropertyName string @Name of property in Blueprint class that pointer to component we want to bind to
local UK2Node_ComponentBoundEvent = {}

