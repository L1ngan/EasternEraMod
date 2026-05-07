---@class UDebugSkelMeshComponent : USkeletalMeshComponent
---@field public SkeletonDrawMode ESkeletonDrawMode @Global drawing mode for this skeleton. Depends on context of specific editor using the component.
---@field public bDrawMesh boolean @If true then the skeletal mesh associated with the component is drawn.
---@field public bShowBoneNames boolean @If true then the bone names associated with the skeletal mesh are displayed
---@field public bDrawBoneInfluences boolean @Bone influences viewing
---@field public bDrawMorphTargetVerts boolean @Morphtarget viewing
---@field public bDrawNormals boolean @Vertex normal viewing
---@field public bDrawTangents boolean @Vertex tangent viewing
---@field public bDrawBinormals boolean @Vertex binormal viewing
---@field public bDrawSockets boolean @Socket hit points viewing
---@field public bDrawAttributes boolean @Attribute visualization
---@field public bSkeletonSocketsVisible boolean @Skeleton sockets visible?
---@field public bMeshSocketsVisible boolean @Mesh sockets visible?
---@field public bDisplayRawAnimation boolean @Display raw animation bone transform
---@field public bDisplayNonRetargetedPose boolean @Display non retargeted animation pose
---@field public bDisplayAdditiveBasePose boolean @Display additive base bone transform
---@field public bDisplayBakedAnimation boolean @Display baked animation pose
---@field public bDisplaySourceAnimation boolean @Display source animation pose
---@field public bShowNotificationVisualizations boolean @Display Notification visualizations in viewport
---@field public bShowAssetUserDataVisualizations boolean @Display Metadata visualizations in viewport
---@field public bDisplayBound boolean @Display Bound *
---@field public bDisplayVertexColors boolean
---@field public WireframeMeshOverlayColor FLinearColor
---@field public RequestedProcessRootMotionMode EProcessRootMotionMode @Requested Process root motion mode, ProcessRootMotionMode gets set based on requested mode and what is supported.
---@field public ProcessRootMotionMode EProcessRootMotionMode @Process root motion mode
---@field public VisualizeRootMotionMode EVisualizeRootMotionMode
---@field public ConsumeRootMotionPreviousPlaybackTime number @Playback time last time ConsumeRootmotion was called
---@field public ConsumeRootMotionPreviousAdditiveAnimType integer
---@field public bShowClothData boolean
---@field public MinClothPropertyView number
---@field public MaxClothPropertyView number
---@field public ClothMeshOpacity number
---@field public bClothFlipNormal boolean
---@field public bClothCullBackface boolean
---@field public bRequiredBonesUpToDateDuringTick boolean
---@field public BonesOfInterest TArray<integer> @Array of bones to render bone weights for
---@field public MorphTargetOfInterests TArray<UMorphTarget> @Array of morphtargets to render verts for
---@field public SkelMaterials TArray<UMaterialInterface> @Array of materials to restore when not rendering blend weights
---@field public PreviewInstance UAnimPreviewInstance
---@field public SavedAnimScriptInstance UAnimInstance
---@field public bIsUsingInGameBounds boolean @Does this component use in game bounds or does it use bounds calculated from bones
---@field public bIsUsingPreSkinnedBounds boolean @Does this component use pre-skinned bounds? This overrides other bounds settings
---@field public bPerformSingleClothingTick boolean @Base skel mesh has support for suspending clothing, but single ticks are more of a debug feature when stepping through an animation So we control that using this flag
---@field public bPauseClothingSimulationWithAnim boolean
---@field public bTrackAttachedInstanceLOD boolean @Should the LOD of the debug mesh component track the LOD of the instance being debugged
local UDebugSkelMeshComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDebugSkelMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDebugSkelMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDebugSkelMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

