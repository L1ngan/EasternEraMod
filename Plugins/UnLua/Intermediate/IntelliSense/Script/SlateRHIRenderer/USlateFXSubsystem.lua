---@class USlateFXSubsystem : UEngineSubsystem
---@field private SlatePostBufferProcessors TMap<ESlatePostRT, USlateRHIPostBufferProcessor> @Map of post RT buffer index to buffer processors, if they exist
local USlateFXSubsystem = {}

---Get post processor for a particular post buffer index, if it exists
---@param InPostBufferBit ESlatePostRT
---@return USlateRHIPostBufferProcessor
function USlateFXSubsystem:GetSlatePostProcessor(InPostBufferBit) end

