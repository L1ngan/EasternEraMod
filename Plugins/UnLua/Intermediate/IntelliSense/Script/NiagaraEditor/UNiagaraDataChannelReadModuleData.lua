---Helper class to display properties in the read data channel module wizard
---@class UNiagaraDataChannelReadModuleData : UObject
---@field public DataChannel UNiagaraDataChannelAsset @The source asset to read from
---@field public bReadCurrentFrame boolean @True if this reader will read the current frame's data. If false, we read the previous frame. Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.
---@field public bUpdateSourceDataEveryTick boolean @Whether this DI should request updated source data from the Data Channel each tick. Some Data Channels have multiple separate source data elements for things such as spatial subdivision. Each DI will request the correct one for it's owning system instance from the data channel. Depending on the data channel this could be an expensive search so we should avoid doing this every tick if possible.
---@field public bAutoTransformPositionData boolean @If true then position inputs are automatically transformed from world space to simulation space, so the read works correctly for localspace emitters.
local UNiagaraDataChannelReadModuleData = {}

