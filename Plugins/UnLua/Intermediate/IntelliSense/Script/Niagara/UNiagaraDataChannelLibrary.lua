---A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel
---@class UNiagaraDataChannelLibrary : UBlueprintFunctionLibrary
local UNiagaraDataChannelLibrary = {}

---Writes a single element to a Niagara Data Channel. The element won't be immediately visible to readers, as it needs to be processed first. The earliest point it can be read is in the next tick group.
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param bVisibleToBlueprint boolean
---@param bVisibleToNiagaraCPU boolean
---@param bVisibleToNiagaraGPU boolean
function UNiagaraDataChannelLibrary.WriteToNiagaraDataChannelSingle(WorldContextObject, Channel, SearchParams, bVisibleToBlueprint, bVisibleToNiagaraCPU, bVisibleToNiagaraGPU) end

---Initializes and returns the Niagara Data Channel writer to write N elements to the given data channel.
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param Count integer
---@param bVisibleToGame boolean
---@param bVisibleToCPU boolean
---@param bVisibleToGPU boolean
---@param DebugSource string
---@return UNiagaraDataChannelWriter
function UNiagaraDataChannelLibrary.WriteToNiagaraDataChannel(WorldContextObject, Channel, SearchParams, Count, bVisibleToGame, bVisibleToCPU, bVisibleToGPU, DebugSource) end

---Removes a prior registration from a data channel
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param UnsubscribeToken integer
function UNiagaraDataChannelLibrary.UnsubscribeFromNiagaraDataChannel(WorldContextObject, Channel, UnsubscribeToken) end

---Subscribes to a single data channel and calls a delegate every times new data is written to the data channel.
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param UpdateDelegate Delegate
---@param UnsubscribeToken integer @[out] 
function UNiagaraDataChannelLibrary.SubscribeToNiagaraDataChannel(WorldContextObject, Channel, SearchParams, UpdateDelegate, UnsubscribeToken) end

---Reads a single entry from the given data channel, if possible.
---                                                             Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.
---                                                             Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param Index integer
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param bReadPreviousFrame boolean
---@param ReadResult ENiagartaDataChannelReadResult @[out] 
function UNiagaraDataChannelLibrary.ReadFromNiagaraDataChannelSingle(WorldContextObject, Channel, Index, SearchParams, bReadPreviousFrame, ReadResult) end

---Initializes and returns the Niagara Data Channel reader for the given data channel.
---                                                             Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.
---                                                             Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param bReadPreviousFrame boolean
---@return UNiagaraDataChannelReader
function UNiagaraDataChannelLibrary.ReadFromNiagaraDataChannel(WorldContextObject, Channel, SearchParams, bReadPreviousFrame) end

---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@return UNiagaraDataChannelHandler
function UNiagaraDataChannelLibrary.GetNiagaraDataChannel(WorldContextObject, Channel) end

---Returns the number of readable elements in the given data channel
---                                                             Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.
---                                                             Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.
---@param WorldContextObject UObject
---@param Channel UNiagaraDataChannelAsset
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param bReadPreviousFrame boolean
---@return integer
function UNiagaraDataChannelLibrary.GetDataChannelElementCount(WorldContextObject, Channel, SearchParams, bReadPreviousFrame) end

