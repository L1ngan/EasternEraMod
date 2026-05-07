---@class UNiagaraDataChannelHandler : UObject
---@field protected DataChannel TWeakObjectPtr<UNiagaraDataChannel>
---@field protected Writer UNiagaraDataChannelWriter @Helper object allowing BP to write data in this channel.
---@field protected Reader UNiagaraDataChannelReader @Helper object allowing BP to read data in this channel.
local UNiagaraDataChannelHandler = {}

---@param UnsubscribeToken integer
function UNiagaraDataChannelHandler:UnsubscribeFromDataChannelUpdates(UnsubscribeToken) end

---The provided delegate will be called whenever new entries are added to the relevant data channel. This means the delegate can be called multiple times per tick.
---This is only relevant for data published to the game thread, so no gpu data or data that's only visible to niagara systems.
---@param UpdateDelegate Delegate
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param UnsubscribeToken integer @[out] 
function UNiagaraDataChannelHandler:SubscribeToDataChannelUpdates(UpdateDelegate, SearchParams, UnsubscribeToken) end

---@return UNiagaraDataChannelWriter
function UNiagaraDataChannelHandler:GetDataChannelWriter() end

---@return UNiagaraDataChannelReader
function UNiagaraDataChannelHandler:GetDataChannelReader() end

