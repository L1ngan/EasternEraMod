---A component used to inspect sparse volume textures.
---@class USparseVolumeTextureViewerComponent : UPrimitiveComponent
---@field public SparseVolumeTexturePreview USparseVolumeTexture
---@field public Frame number
---@field public FrameRate number
---@field public bPlaying boolean
---@field public bLooping boolean
---@field public bReversePlayback boolean
---@field public bBlockingStreamingRequests boolean
---@field public bApplyPerFrameTransforms boolean
---@field public bPivotAtCentroid boolean
---@field public VoxelSize number
---@field public PreviewAttribute integer
---@field public MipLevel integer
---@field public Extinction number
local USparseVolumeTextureViewerComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USparseVolumeTextureViewerComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USparseVolumeTextureViewerComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USparseVolumeTextureViewerComponent:AddAssetUserDataOfClass(InUserDataClass) end

