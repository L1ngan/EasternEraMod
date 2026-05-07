---SparseVolumeTexture base interface to communicate with material graph and shader bindings.
---@class USparseVolumeTexture : UObject
local USparseVolumeTexture = {}

---@return integer
function USparseVolumeTexture:GetSizeZ() end

---@return integer
function USparseVolumeTexture:GetSizeY() end

---@return integer
function USparseVolumeTexture:GetSizeX() end

---@return integer
function USparseVolumeTexture:GetNumMipLevels() end

---@return integer
function USparseVolumeTexture:GetNumFrames() end

---@return FTransform
function USparseVolumeTexture:GetFrameTransform() end

