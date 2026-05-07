---Blueprint function library for the Async Message System
---@class UAsyncMessageSystemBlueprintLibrary : UBlueprintFunctionLibrary
local UAsyncMessageSystemBlueprintLibrary = {}

---Queues the given async message for broadcast the next time that this
---message system processes its message queue
---                                             to make it safe for listeners on other threads.
---@param WorldContextObject UObject
---@param MessageId FAsyncMessageId
---@param Payload FInstancedStruct
---@param DesiredEndpoint TScriptInterface_UAsyncMessageBindingEndpointInterface_
---@return boolean
function UAsyncMessageSystemBlueprintLibrary.QueueAsyncMessageForBroadcast(WorldContextObject, MessageId, Payload, DesiredEndpoint) end

---Gets the given message's callstack of when and where it was queued from native C++ code.
---Note: bShouldRecordQueueCallstackOnMessages must be enabled in the project settings for this to have accurate data
---@param Message FAsyncMessage
---@return string
function UAsyncMessageSystemBlueprintLibrary.GetMessageNativeQueueCallstack(Message) end

---Gets the given message's callstack of when and where it was queued from in blueprints/script
---Note: bShouldRecordQueueCallstackOnMessages must be enabled in the project settings for this to have accurate data
---@param Message FAsyncMessage
---@return string
function UAsyncMessageSystemBlueprintLibrary.GetMessageBlueprintScriptCallstack(Message) end

---Get the string representation of the given Async Message Id.
---@param MessageId FAsyncMessageId
---@return string
function UAsyncMessageSystemBlueprintLibrary.Conv_AsyncMessageIdToString(MessageId) end

