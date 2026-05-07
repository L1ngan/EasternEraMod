---@class UAnimationAsset : UObject
---@field private Skeleton USkeleton @Pointer to the Skeleton this asset can be played on .
---@field private MetaData TArray<UAnimMetaData> @Meta data that can be saved with the asset You can query by GetMetaData function
---@field public ParentAsset UAnimationAsset @Parent Asset, if set, you won't be able to edit any data in here but just mapping table During cooking, this data will be used to bake out to normal asset
---@field public ChildrenAssets TArray<UAnimationAsset> @note this is transient as they're added as they're loaded
---@field protected AssetMappingTable UAssetMappingTable @Asset mapping table when ParentAsset is set
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
---@field public PreviewPoseAsset UPoseAsset @The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset// @@todo: note that this doesn't retarget right now
---@field private PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh> @The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset
local UAnimationAsset = {}

---Sets or updates the preview skeletal mesh
---@param PreviewMesh USkeletalMesh
function UAnimationAsset:SetPreviewSkeletalMesh(PreviewMesh) end

---@return number
function UAnimationAsset:GetPlayLength() end

---Returns the first metadata of the specified class
---@param MetaDataClass TSubclassOf_UAnimMetaData_
---@return UAnimMetaData
function UAnimationAsset:FindMetaDataByClass(MetaDataClass) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimationAsset:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAnimationAsset:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimationAsset:AddAssetUserDataOfClass(InUserDataClass) end

