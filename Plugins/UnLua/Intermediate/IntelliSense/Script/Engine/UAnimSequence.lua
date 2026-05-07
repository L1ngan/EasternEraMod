---@class UAnimSequence : UAnimSequenceBase
---@field public ImportFileFramerate number @The DCC framerate of the imported file. UI information only, unit are Hz
---@field public ImportResampleFramerate integer @The resample framerate that was computed during import. UI information only, unit are Hz
---@field protected NumFrames integer
---@field protected NumberOfKeys integer
---@field protected SamplingFrameRate FFrameRate
---@field protected RawDataGuid FGuid
---@field protected AnimationTrackNames TArray<string>
---@field public bAllowFrameStripping boolean @Allow frame stripping to be performed on this animation if the platform requests it Can be disabled if animation has high frequency movements that are being lost.
---@field public CompressionErrorThresholdScale number @Set a scale for error threshold on compression. This is useful if the animation will be played back at a different scale (e.g. if you know the animation will be played on an actor/component that is scaled up by a factor of 10, set this value to 10)
---@field public BoneCompressionSettings UAnimBoneCompressionSettings @The bone compression settings used to compress bones in this sequence.
---@field public CurveCompressionSettings UAnimCurveCompressionSettings @The curve compression settings used to compress curves in this sequence.
---@field public VariableFrameStrippingSettings UVariableFrameStrippingSettings
---@field public AdditiveAnimType integer @Additive animation type. *
---@field public RefPoseType integer @Additive refrerence pose type. Refer above enum type
---@field public RefFrameIndex integer @Additve reference frame if RefPoseType == AnimFrame *
---@field public RefPoseSeq UAnimSequence @Additive reference animation if it's relevant - i.e. AnimScaled or AnimFrame *
---@field public RetargetSource string @Base pose to use when retargeting
---@field public RetargetSourceAsset TSoftObjectPtr<USkeletalMesh>
---@field public RetargetSourceAssetReferencePose TArray<FTransform> @When using RetargetSourceAsset, use the post stored here
---@field public Interpolation EAnimInterpolationType @This defines how values between keys are calculated *
---@field public bEnableRootMotion boolean @If this is on, it will allow extracting of root motion *
---@field public RootMotionRootLock integer @Root Bone will be locked to that position when extracting root motion.*
---@field public bForceRootLock boolean @Force Root Bone Lock even if Root Motion is not enabled
---@field public bUseNormalizedRootMotionScale boolean @If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) *
---@field public bRootMotionSettingsCopiedFromMontage boolean @Have we copied root motion settings from an owning montage
---@field public CompressCommandletVersion integer @Saved version number with CompressAnimations commandlet. To help with doing it in multiple passes.
---@field public bDoNotOverrideCompression boolean @Do not attempt to override compression scheme when running CompressAnimations commandlet. Some high frequency animations are too sensitive and shouldn't be changed.
---@field public AssetImportData UAssetImportData @Importing data and options used for this mesh
---@field public StripAnimDataOnDedicatedServer EStripAnimDataOnDedicatedServerSettings @Enum used to decide whether we should strip animation data on dedicated server
---@field public AuthoredSyncMarkers TArray<FAnimSyncMarker> @Authored Sync markers
---@field protected PlatformTargetFrameRate FPerPlatformFrameRate
---@field protected TargetFrameRate FFrameRate
---@field protected NumberOfSampledKeys integer
---@field protected NumberOfSampledFrames integer
---@field private PerBoneCustomAttributeData TArray<FCustomAttributePerBoneData>
---@field protected AttributeCurves TMap<FAnimationAttributeIdentifier, FAttributeCurve>
local UAnimSequence = {}

---Update the retarget data pose from the source, if it exist, else clears the retarget data pose saved in RetargetSourceAssetReferencePose.
---Warning : This function calls LoadSynchronous at the retarget source asset soft object pointer, so it can not be used at PostLoad
function UAnimSequence:UpdateRetargetSourceAssetData() end

---Assigns the passed skeletal mesh to the retarget source
---@param InRetargetSourceAsset USkeletalMesh
function UAnimSequence:SetRetargetSourceAsset(InRetargetSourceAsset) end

---Returns the retarget source asset soft object pointer.
---@return TSoftObjectPtr_USkeletalMesh_
function UAnimSequence:GetRetargetSourceAsset() end

---Resets the retarget source asset
function UAnimSequence:ClearRetargetSourceAsset() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimSequence:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAnimSequence:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimSequence:AddAssetUserDataOfClass(InUserDataClass) end

