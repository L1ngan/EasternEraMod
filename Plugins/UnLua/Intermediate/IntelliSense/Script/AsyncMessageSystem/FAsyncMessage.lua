---A single async message which has been queued for broadcasting, and listeners are
---interested in receiving the data from.
---Async Message Messages contain some data about when, where, and how the message was queued
---which make it possible to synchronize game state across multiple threads with messages.
---@class FAsyncMessage
---@field private MessageId FAsyncMessageId @The Async message Id which this message is a part of.
---@field private MessageSourceId FAsyncMessageId @The source of this message. This might be different from the "MessageId", because this could be a parent message which is being triggered by a child message. In that case, the "MessageId" would be the parent message, and the "MessageSourceId" would be the actual child message which had triggered. For example, if "message.colors.red" is a child message of "message.colors", then the "MessageId" would be "message.colors" and the MessageSourceId would be "message.colors.red". If the MessageSourceId and MessageId are the same value, then that means that this is the childmost message.
---@field private QueueTime number @The time at which this message was queued ( FApp::GetCurrentTime() )
---@field private PayloadCopy FInstancedStruct @A copy of the payload data that is created upon construction of this message. This data is copied in the constructor of this message when the message is queued in order to make the data thread safe to access. If you would like to have more control over the payload data and how it is synconized (for example if you have a costly payload type which would be too expensive to copy) then you could make your payload struct contain a simple pointer and handle synchronization yourself with critical sections. TODO: When we copy the payload data, have it use a custom linear allocator on the owning message system to make it faster to copy and more cache friendly to the message system to iterate messages.
local FAsyncMessage = {}
