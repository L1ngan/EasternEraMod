---Struct containing info needed to update a particular buffer
---@class FSlatePostBufferUpdateInfo
---@field public BufferToUpdate ESlatePostRT @Buffers that we should update, all of these buffers will be affected by 'bPerformDefaultPostBufferUpdate' if disabled
---@field public PostParamUpdater USlatePostBufferProcessorUpdater @Optional processor updater for buffer, used to update a processor within a frame
local FSlatePostBufferUpdateInfo = {}
