---Class that can create a FPostParamUpdaterProxy whose lifetime
---will be managed by the renderthread. This proxy will be given a
---Post buffer processor to update mid-frame.
---@class USlatePostBufferProcessorUpdater : UObject
---@field public bSkipBufferUpdate boolean @True implies we will skip the buffer update & only update the processor. Useful to reset params for processor runs next frame
local USlatePostBufferProcessorUpdater = {}

