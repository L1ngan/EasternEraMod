---Represents a streamable SparseVolumeTexture asset and serves as base class for UStaticSparseVolumeTexture and UAnimatedSparseVolumeTexture. It has an array of USparseVolumeTextureFrame.
---@class UStreamableSparseVolumeTexture : USparseVolumeTexture
---@field public VolumeResolution FIntVector
---@field public NumMipLevels integer
---@field public NumFrames integer
---@field public FormatA integer
---@field public FormatB integer
---@field public FallbackValueA FVector4f
---@field public FallbackValueB FVector4f
---@field public AddressX integer @The addressing mode to use for the X axis.
---@field public AddressY integer @The addressing mode to use for the Y axis.
---@field public AddressZ integer @The addressing mode to use for the Z axis.
---@field public bLocalDDCOnly boolean @If enabled, the SparseVolumeTexture is only going to use the local DDC. For certain assets it might be reasonable to also use the remote DDC, but for larger assets this will mean long up- and download times.
---@field public StreamingPoolSizeFactor number @The SVT streaming pool is sized such that it can hold the largest frame multiplied by this value. There should be some slack to allow for prefetching frames.
---@field public NumberOfPrefetchFrames integer @When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property controls how many frames to prefetch.
---@field public PrefetchPercentageStepSize number @When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property controls the size reduction in percent of each additional prefetched frames. A value of 20.0 would prefetch frame N+1 at 80%, N+2 at 60%, N+3 at 40% etc.
---@field public PrefetchPercentageBias number @When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property applies a bias in percent to how much data is prefetched for every frame. A value of 20.0 adds 20% to all prefetch percentages. So if PrefetchPercentageStepSize is set to 20.0, frame N+1 is prefetched at 80% + 20% = 100%, frame N+2 at 60% + 20% = 80%, N+3 at 40% + 20% = 60% etc.
---@field public AssetImportData UAssetImportData
---@field public AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected Frames TArray<USparseVolumeTextureFrame>
---@field protected VolumeBoundsMin FIntVector
---@field protected VolumeBoundsMax FIntVector
---@field protected InitState integer
local UStreamableSparseVolumeTexture = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UStreamableSparseVolumeTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UStreamableSparseVolumeTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UStreamableSparseVolumeTexture:AddAssetUserDataOfClass(InUserDataClass) end

