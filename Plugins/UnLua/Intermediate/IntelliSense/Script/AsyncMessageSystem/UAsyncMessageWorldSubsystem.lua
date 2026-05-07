---A world subsystem which will create a unique message system per-world
---and allow for easy access to the message system interface for gameplay code.
---An example of using the message system like this is:
---            TSharedPtr<FAsyncMessageSystemBase> Sys = UAsyncMessageWorldSubsystem::GetSharedMessageSystem(GetWorld());
---            Sys->QueueMessageForBroadcast(MessageToQueue, MessagePayloadToQueue);
---@class UAsyncMessageWorldSubsystem : UWorldSubsystem
local UAsyncMessageWorldSubsystem = {}

