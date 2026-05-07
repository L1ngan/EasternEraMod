---An async action for binding a listener to a message. The user will call the
---"StartListeningForAsyncMessage" function from blueprints, which will create the async action object
---and an exec pin will be created for any BP Assignable delegates on this object (FAsyncMessageReceivedDelegate).
---Those delegates can then fire when the message is received, and we can allow users to specify their own tick groups upon binding as well.
---We expose this as an async proxy (ExposedAsyncProxy) because then you can easily call the "StopListeningForAsyncMessage" function
---to unbind the listener.
---If for some reason there is a failure when binding to the message, this async task will be immedately marked as being ready for destruction.
---@class UAsyncAction_ListenForAsyncMessage : UBlueprintAsyncActionBase
---@field public OnMessageReceived MulticastDelegate @Delegate which executes when the bound message that this async action is listening for is broadcast.
local UAsyncAction_ListenForAsyncMessage = {}

---Stops the given message handle from receiving any more messages.
function UAsyncAction_ListenForAsyncMessage:StopListeningForAsyncMessage() end

---Starts listening for an Async Message with the given ID during the given tick group.
---@param WorldContextObject UObject
---@param MessageId FAsyncMessageId
---@param DesiredEndpoint TScriptInterface_UAsyncMessageBindingEndpointInterface_
---@param TickGroup integer @[opt] 
---@return UAsyncAction_ListenForAsyncMessage
function UAsyncAction_ListenForAsyncMessage.StartListeningForAsyncMessage(WorldContextObject, MessageId, DesiredEndpoint, TickGroup) end

