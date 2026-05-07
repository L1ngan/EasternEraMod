---Represents a frame in a SparseVolumeTexture sequence and owns the actual data needed for rendering. Is owned by a UStreamableSparseVolumeTexture object.
---@class USparseVolumeTextureFrame : USparseVolumeTexture
---@field private Owner USparseVolumeTexture
---@field private FrameIndex integer
---@field private Transform FTransform
local USparseVolumeTextureFrame = {}

