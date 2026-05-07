---@class FPSCPool
---@field public FreeElements TArray<FPSCPoolElem> @Collection of all currently allocated, free items ready to be grabbed for use. TODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue.
local FPSCPool = {}
