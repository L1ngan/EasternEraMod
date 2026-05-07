---Allows multiple animations to be blended between based on input parameters
---@class UBlendSpace : UAnimationAsset
---@field public bContainsRotationOffsetMeshSpaceSamples boolean @Indicates whether any samples have the flag to apply rotation offsets in mesh space
---@field public InterpolationParam FInterpolationParameter @Input Smoothing parameters for each input axis
---@field public AnalysisProperties UAnalysisProperties @Analysis properties for each axis. Note that these can be null. They will be created/set from FBlendSpaceDetails::HandleAnalysisFunctionChanged
---@field public TargetWeightInterpolationSpeedPerSec number @If greater than zero, this is the speed at which the sample weights are allowed to change. A speed of 1 means a sample weight can change from zero to one (or one to zero) in one second. A speed of 2 means that this would take half a second. This allows the Blend Space to switch to new parameters without going through intermediate states, effectively blending between where it was and where the new target is. For example, imagine we have a blend space for locomotion, moving left, forward and right. Now if you interpolate the inputs of the blend space itself, from one extreme to the other, you will go from left, to forward, to right. As an alternative, by setting this Sample Weight Speed to a value higher than zero, it will go directly from left to right, without going through moving forward first. Smaller values mean slower adjustments of the sample weights, and thus more smoothing. However, a value of zero disables this smoothing entirely.
---@field public bTargetWeightInterpolationEaseInOut boolean @If set then this eases in/out the sample weight adjustments, using the speed to determine how much smoothing to apply.
---@field public bAllowMeshSpaceBlending boolean @If set then blending is performed in mesh space if there are per-bone sample smoothing overrides. Note that mesh space blending is significantly more expensive (slower) than normal blending when the samples are regular animations (i.e. not additive animations that are already set to apply in mesh space), and is typically only useful if you want some parts of the skeleton to achieve a pose in mesh space faster or slower than others - for example to make the head move faster than the body/arms when aiming, so the character looks at the target slightly before aiming at it. Note also that blend space assets with additive/mesh space samples will always blend in mesh space, and also that enabling this option with blend space graphs producing additive/mesh space samples may cause undesired results.
---@field public bLoop boolean @The default looping behavior of this blend space. Asset players can override this
---@field public bAllowMarkerBasedSync boolean @Whether to allow marker based sync between the samples (it won't force sync if the markers don't exist)
---@field public bShouldMatchSyncPhases boolean @If true, all follower samples will pass the same amount of markers the leader sample has passed to match its sync phase. Otherwise, followers samples will only match their next valid sync position.
---@field public PreviewBasePose UAnimSequence @Preview Base pose for additive BlendSpace *
---@field public AnimLength number @This is the maximum length of any sample in the blendspace. *
---@field public NotifyTriggerMode integer @The current mode used by the BlendSpace to decide which animation notifies to fire. Valid options are:       - AllAnimations: All notify events will fire       - HighestWeightedAnimation: Notify events will only fire from the highest weighted animation       - None: No notify events will fire from any animations
---@field public bInterpolateUsingGrid boolean @If true then interpolation is done via a grid at runtime. If false the interpolation uses the triangulation.
---@field public PreferredTriangulationDirection EPreferredTriangulationDirection @Preferred edge direction when the triangulation has to make an arbitrary choice
---@field protected PerBoneBlendMode EBlendSpacePerBoneBlendMode @There are two ways to use per pone sample smoothing: Blend profiles and manually maintaining the per bone overrides.
---@field protected ManualPerBoneOverrides TArray<FPerBoneInterpolation> @Per bone sample smoothing settings, which affect the specified bone and all its descendants in the skeleton. These act as overrides to the global sample smoothing speed, which means the global sample smoothing speed does not affect these bones. Note that they also override each other - so a per-bone setting on the chest will not affect the hand if there is a per-bone setting on the arm.
---@field protected PerBoneBlendProfile FBlendSpaceBlendProfile @Reference to a blend profile of the corresponding skeleton to be used for per bone smoothing in case the per bone blend mode is set to use a blend profile.
---@field protected SampleIndexWithMarkers integer @Track index to get marker data from. Samples are tested for the suitability of marker based sync           during load and if we can use marker based sync we cache an index to a representative sample here
---@field protected SampleData TArray<FBlendSample> @Sample animation data
---@field protected GridSamples TArray<FEditorElement> @Grid samples, indexing scheme imposed by subclass
---@field protected BlendSpaceData FBlendSpaceData @Container for the runtime data, which could be line segments, triangulation or tetrahedrons
---@field protected BlendParameters FBlendParameter @Blend Parameters for each axis. *
---@field protected AxisToScaleAnimation integer @If you have input smoothing, this specifies the axis on which to scale the animation playback speed. E.g. for locomotion animation, the speed axis will scale the animation speed in order to make up the difference between the target and the result of blending the samples.
---@field protected DimensionIndices TArray<integer> @The order in which to use the dimensions in the data - e.g. [1, 2] means a 2D blend using Y and Z
local UBlendSpace = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBlendSpace:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBlendSpace:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBlendSpace:AddAssetUserDataOfClass(InUserDataClass) end

