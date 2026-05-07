---Interface class between engine and OnlineSubsystem to remove dependencies between the two
---The real work is implemented in UOnlineEngineInterfaceImpl in OnlineSubsystemUtils
---The expectation is that this basic group of functions will not expand/change and that
---OnlineSubsystem can remain independent of the engine
---Games should not use this interface, use the OnlineSubsystem plugins directly
---Better functionality descriptions can be found in the OnlineSubsystem interfaces
---Adding code here is discouraged, there is probably a better way, talk to the OGS team
---@class UOnlineEngineInterface : UObject
local UOnlineEngineInterface = {}

