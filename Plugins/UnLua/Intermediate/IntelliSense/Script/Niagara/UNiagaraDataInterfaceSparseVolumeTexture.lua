---Data Interface allowing sampling of a sparse volume texture
---@class UNiagaraDataInterfaceSparseVolumeTexture : UNiagaraDataInterface
---@field public SparseVolumeTexture USparseVolumeTexture
---@field public SparseVolumeTextureUserParameter FNiagaraUserParameterBinding @When valid the user parameter is used as the texture rather than the one on the data interface
---@field public BlockingStreamingRequests boolean
local UNiagaraDataInterfaceSparseVolumeTexture = {}

