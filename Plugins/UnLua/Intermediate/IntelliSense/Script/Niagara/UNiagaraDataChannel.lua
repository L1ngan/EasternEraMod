---@class UNiagaraDataChannel : UObject
---@field private ChannelVariables TArray<FNiagaraDataChannelVariable> @The variables that define the data contained in this Data Channel.
---@field private bKeepPreviousFrameData boolean @If true, we keep our previous frame's data. This comes at a memory and performance cost but allows users to avoid tick order dependency by reading last frame's data. Some users will prefer a frame of latency to tick order dependency.
---@field private bEnforceTickGroupReadWriteOrder boolean @If true we ensure that all writes happen in or before the Tick Group specified in EndWriteTickGroup and that all reads happen in tick groups after this.
---@field private FinalWriteTickGroup integer @The final tick group that this data channel can be written to.
---@field private VersionGuid FGuid
local UNiagaraDataChannel = {}

