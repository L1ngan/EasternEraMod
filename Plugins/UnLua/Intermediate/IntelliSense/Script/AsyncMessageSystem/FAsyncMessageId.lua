---Represents a single message which can be bound to and queued in the async message system.
---This ID is what you use to bind to (listen for) messages which are being broadcast, as well as
---actually queue the message for broadcasting.
---Internally this is simply a FGameplayTag, which is how this Message's parent hierarchy is determined.
---@class FAsyncMessageId
---@field protected InternalMessageTag FGameplayTag @The FName which represents this async message ID
local FAsyncMessageId = {}
