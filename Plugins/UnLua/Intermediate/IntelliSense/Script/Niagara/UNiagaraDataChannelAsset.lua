---Niagara Data Channels are a system for communication between Niagara Systems and with game code/Blueprint.
---Data channel assets define the payload as well as some transfer settings.
---Niagara Systems can read from and write to data channels via data interfaces.
---Blueprint and C++ code can also read from and write to data channels using its API functions.
---@class UNiagaraDataChannelAsset : UObject
---@field private DataChannel UNiagaraDataChannel
---@field private CachedPreChangeDataChannel UNiagaraDataChannel @When changing data channel types we cache the old channel and attempt to copy over any common properties from one to the other.
local UNiagaraDataChannelAsset = {}

