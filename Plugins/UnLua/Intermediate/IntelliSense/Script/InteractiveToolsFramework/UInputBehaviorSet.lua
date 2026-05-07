---UInputBehaviorSet manages a set of UInputBehaviors, and provides various functions
---to query and forward events to the set. Tools and Widgets provide instances of this via
---IInputBehaviorSource, and UInputRouter collects and manages them (see comments there)
---Behaviors in the set each have a source pointer and group tag, which allows sets of
---behaviors to be managed together. For example one UInputBehaviorSet can be merged into
---another and removed later.
---@class UInputBehaviorSet : UObject
---@field protected Behaviors TArray<FBehaviorInfo> @Current set of known Behaviors
local UInputBehaviorSet = {}

