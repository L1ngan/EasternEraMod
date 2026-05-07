---Description of a MetaHuman asset including verification status
---@class FMetaHumanAssetDescription
---@field public Name string @The display name for the Asset. Normally the name of the Root Asset.
---@field public AssetData FAssetData @The FAssetData describing the Root Asset
---@field public DependentPackages TArray<string> @A list of all the packages included in the asset
---@field public AssetType EMetaHumanAssetType @The asset type, i.e. Groom, Clothing, etc.
---@field public Details FMetaHumanAggregateDetails
---@field public TotalSize integer @The total size of all assets
---@field public VerificationReport UMetaHumanAssetReport @If present, the verification report for this Asset
local FMetaHumanAssetDescription = {}
