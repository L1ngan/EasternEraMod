---Skinned mesh component that supports bone skinned mesh rendering.
---This class does not support animation.
---@class USkinnedMeshComponent : UMeshComponent
---@field public SkeletalMesh USkeletalMesh
---@field private SkinnedAsset USkinnedAsset
---@field public LeaderPoseComponent TWeakObjectPtr<USkinnedMeshComponent> @If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will use the component space transforms from the LeaderPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same skeleton within the same Actor.
---@field public SkinCacheUsage TArray<ESkinCacheUsage> @How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled
---@field protected bSetMeshDeformer boolean @If true, MeshDeformer will be used. If false, use the default mesh deformer on the SkeletalMesh.
---@field protected MeshDeformer UMeshDeformer @The mesh deformer to use. Set to None to disable the deformer on the SkeletalMesh. If no deformer is set from here or the SkeletalMesh, we fall back to the fixed function deformation, unless AlwaysUseMeshDeformer is on.
---@field protected bAlwaysUseMeshDeformer boolean @If true, and if no mesh deformer is set from here or the SkeletalMesh, fall back to the default deformer specified in the project settings, unless DefaultMode is set to "Never" in project settings
---@field protected MeshDeformerInstanceSettings UMeshDeformerInstanceSettings @Object containing instance settings for the bound MeshDeformer.
---@field protected MeshDeformerInstances FMeshDeformerInstanceSet @Object containing state for the bound MeshDeformer.
---@field public PhysicsAssetOverride UPhysicsAsset @PhysicsAsset is set in SkeletalMesh by default, but you can override with this value
---@field public ForcedLodModel integer
---@field public MinLodModel integer @This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on meshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them.
---@field public StreamingDistanceMultiplier number @Allows adjusting the desired streaming distance of streaming textures that uses UV 0. 1.0 is the default, whereas a higher value makes the textures stream in sooner from far away. A lower value (0.0-1.0) makes the textures stream in later (you have to be closer). Value can be < 0 (from legcay content, or code changes)
---@field public LODInfo TArray<FSkelMeshComponentLODInfo> @LOD array info. Each index will correspond to the LOD index *
---@field public VisibilityBasedAnimTickOption EVisibilityBasedAnimTickOption @* This is tick animation frequency option based on this component rendered or not or using montage *  You can change this default value in the INI file * Mostly related with performance
---@field public bOverrideMinLod boolean @Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh
---@field public bUseBoundsFromLeaderPoseComponent boolean @When true, we will just using the bounds from our LeaderPoseComponent.  This is useful for when we have a Mesh Parented to the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same bounds as parent.  We want to do no calculations in that case.
---@field public bIncludeComponentLocationIntoBounds boolean @If true, the Location of this Component will be included into its bounds calculation (this can be useful when using SMU_OnlyTickPoseWhenRendered on a character that moves away from the root and no bones are left near the origin of the component)
---@field public bForceWireframe boolean @Forces the mesh to draw in wireframe mode.
---@field public bDisplayBones boolean @Draw the skeleton hierarchy for this skel mesh.
---@field public bDisableMorphTarget boolean @Disable Morphtarget for this component.
---@field public bHideSkin boolean @Don't bother rendering the skin.
---@field public bPerBoneMotionBlur boolean @If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance).
---@field public bComponentUseFixedSkelBounds boolean @When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh.
---@field public bConsiderAllBodiesForBounds boolean @If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds.
---@field public bSyncAttachParentLOD boolean @If true, this component uses its parents LOD when attached if available ForcedLOD can override this change. By default, it will use parent LOD.
---@field public bCanHighlightSelectedSections boolean @Whether or not we can highlight selected sections - this should really only be done in the editor
---@field public bRecentlyRendered boolean @true if mesh has been recently rendered, false otherwise
---@field public bCastCapsuleDirectShadow boolean @Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights. This type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius. This flag will force bCastInsetShadow to be enabled. This flag is only used if CastShadow is true and if FirstPersonPrimitiveType is not set to FirstPerson.
---@field public bCastCapsuleIndirectShadow boolean @Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight). This flag is only used if CastShadow is true and if FirstPersonPrimitiveType is not set to FirstPerson.
---@field public bCPUSkinning boolean
---@field public bUseScreenRenderStateForUpdate boolean @If set, use the screen render flag instead of the default render flag when processing offscreen-rendering optimizations (such as VisibilityBasedAnimTickOption) that look to reduce animation work when the mesh is not rendered. Using this option can result in meshes that are occlusion culled ceasing to perform animation work. Note that this can however result in shadows not being animated when meshes are not directly visible.
---@field public bEnableUpdateRateOptimizations boolean @if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick() This allows to skip frames for performance. (For example based on visibility and size on screen).
---@field public bDisplayDebugUpdateRateOptimizations boolean @Enable on screen debugging of update rate optimization. Red = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames.
---@field public bRenderStatic boolean @If true, render as static in reference pose.
---@field public bIgnoreLeaderPoseComponentLOD boolean @Flag that when set will ensure UpdateLODStatus will not take the LeaderPoseComponent's current LOD in consideration when determining the correct LOD level (this requires LeaderPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing
---@field public bSortTriangles boolean @Enable dynamic sort mesh's triangles to remove ordering issue when rendered with a translucent material
---@field protected bCachedLocalBoundsUpToDate boolean @true when CachedLocalBounds is up to date.
---@field protected bCachedWorldSpaceBoundsUpToDate boolean
---@field private bForceMeshObjectUpdate boolean @If true, UpdateTransform will always result in a call to MeshObject->Update.
---@field protected bFollowerShouldTickPose boolean @If false, Follower components ShouldTickPose function will return false (default)
---@field public CapsuleIndirectShadowMinVisibility number @Controls how dark the capsule indirect shadow can be.
---@field protected CachedWorldOrLocalSpaceBounds FBoxSphereBounds @Bounds cached, so they're computed just once, either in local or worldspace depending on cvar 'a.CacheLocalSpaceBounds'.
---@field protected CachedWorldToLocalTransform FMatrix
local USkinnedMeshComponent = {}

---Unset any MeshDeformer applied to this Component.
function USkinnedMeshComponent:UnsetMeshDeformer() end

---Unload a Skin Weight Profile's skin weight buffer (if created)
---@param InProfileName string
function USkinnedMeshComponent:UnloadSkinWeightProfile(InProfileName) end

---UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.
---Compared to HideBone By Index - This keeps track of list of bones and update when LOD changes
---@param BoneName string
function USkinnedMeshComponent:UnHideBoneByName(BoneName) end

---Transform a location/rotation from world space to bone relative space.
---This is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.
---@param BoneName string
---@param InPosition FVector
---@param InRotation FRotator
---@param OutPosition FVector @[out] 
---@param OutRotation FRotator @[out] 
function USkinnedMeshComponent:TransformToBoneSpace(BoneName, InPosition, InRotation, OutPosition, OutRotation) end

---Transform a location/rotation in bone relative space to world space.
---@param BoneName string
---@param InPosition FVector
---@param InRotation FRotator
---@param OutPosition FVector @[out] 
---@param OutRotation FRotator @[out] 
function USkinnedMeshComponent:TransformFromBoneSpace(BoneName, InPosition, InRotation, OutPosition, OutRotation) end

---Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.
---@param MaterialID integer
---@param SectionIndex integer
---@param bShow boolean
---@param LODIndex integer
function USkinnedMeshComponent:ShowMaterialSection(MaterialID, SectionIndex, bShow, LODIndex) end

---Clear any material visibility modifications made by ShowMaterialSection
---@param LODIndex integer
function USkinnedMeshComponent:ShowAllMaterialSections(LODIndex) end

---Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors.
---@param LODIndex integer
---@param VertexColors TArray_FLinearColor_
function USkinnedMeshComponent:SetVertexColorOverride_LinearColor(LODIndex, VertexColors) end

---Set up an override skin weight profile for this component on the given layer.
---The values from the secondary layer (if set to have a profile) are applied first, followed by the values from the primary layer.
---Since skin weight profiles are stored as sparse data, where only weight values different from the base are kept in storage, it's
---possible to set up layers such that they don't interfere with one another.
---@param InProfileName string
---@param InLayer ESkinWeightProfileLayer @[opt] 
---@return boolean
function USkinnedMeshComponent:SetSkinWeightProfile(InProfileName, InLayer) end

---Allow override of skin weights on a per-component basis.
---@param LODIndex integer
---@param SkinWeights TArray_FSkelMeshSkinWeightInfo_
function USkinnedMeshComponent:SetSkinWeightOverride(LODIndex, SkinWeights) end

---Change the SkinnedAsset that is rendered for this Component. Will re-initialize the animation tree etc.
---@param NewMesh USkinnedAsset
---@param bReinitPose boolean @[opt] 
function USkinnedMeshComponent:SetSkinnedAssetAndUpdate(NewMesh, bReinitPose) end

---Set whether this skinned mesh should be rendered as static mesh in a reference pose
---@param bNewValue boolean
function USkinnedMeshComponent:SetRenderStatic(bNewValue) end

---Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function
---@param NewPhysicsAsset UPhysicsAsset
---@param bForceReInit boolean @[opt] 
function USkinnedMeshComponent:SetPhysicsAsset(NewPhysicsAsset, bForceReInit) end

---@param InNewMinLOD integer
function USkinnedMeshComponent:SetMinLOD(InNewMinLOD) end

---Change the MeshDeformer that is used for this Component.
---@param InMeshDeformer UMeshDeformer
function USkinnedMeshComponent:SetMeshDeformer(InMeshDeformer) end

---Set LeaderPoseComponent for this component
---@param NewLeaderBoneComponent USkinnedMeshComponent
---@param bForceUpdate boolean @[opt] 
---@param bInFollowerShouldTickPose boolean @[opt] 
function USkinnedMeshComponent:SetLeaderPoseComponent(NewLeaderBoneComponent, bForceUpdate, bInFollowerShouldTickPose) end

---Set ForcedLodModel of the mesh component
---@param InNewForcedLOD integer
function USkinnedMeshComponent:SetForcedLOD(InNewForcedLOD) end

---@param bNewValue boolean
function USkinnedMeshComponent:SetCastCapsuleIndirectShadow(bNewValue) end

---@param bNewValue boolean
function USkinnedMeshComponent:SetCastCapsuleDirectShadow(bNewValue) end

---@param NewValue number
function USkinnedMeshComponent:SetCapsuleIndirectShadowMinVisibility(NewValue) end

---Always use a MeshDeformer as long as one can be found in the project settings
---@param bShouldAlwaysUseMeshDeformer boolean
function USkinnedMeshComponent:SetAlwaysUseMeshDeformer(bShouldAlwaysUseMeshDeformer) end

---Override the Min LOD of the mesh component
---@param InNewMinLOD integer
function USkinnedMeshComponent:OverrideMinLOD(InNewMinLOD) end

---Check whether a skin weight profile is currently set on any layer.
---@return boolean
function USkinnedMeshComponent:IsUsingSkinWeightProfile() end

---Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection)
---@param MaterialID integer
---@param LODIndex integer
---@return boolean
function USkinnedMeshComponent:IsMaterialSectionShown(MaterialID, LODIndex) end

---Determines if the specified bone is hidden.
---@param BoneName string
---@return boolean
function USkinnedMeshComponent:IsBoneHiddenByName(BoneName) end

---Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.
---Compared to HideBone By Index - This keeps track of list of bones and update when LOD changes
---@param BoneName string
---@param PhysBodyOption integer
function USkinnedMeshComponent:HideBoneByName(BoneName, PhysBodyOption) end

---Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space
---First this function gets rotation of current, and rotation of ref pose in local space, and
---And gets twist/swing angle value from refpose aligned.
---@param BoneName string
---@param OutTwistAngle number @[out] 
---@param OutSwingAngle number @[out] 
---@return boolean
function USkinnedMeshComponent:GetTwistAndSwingAngleOfDeltaRotationFromRefPose(BoneName, OutTwistAngle, OutSwingAngle) end

---Returns bone name linked to a given named socket on the skeletal mesh component.
---If you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.
---@param InSocketName string
---@return string
function USkinnedMeshComponent:GetSocketBoneName(InSocketName) end

---Get the SkinnedAsset rendered for this mesh.
---@return USkinnedAsset
function USkinnedMeshComponent:GetSkinnedAsset() end

---@return USkeletalMesh
function USkinnedMeshComponent:GetSkeletalMesh_DEPRECATED() end

---Gets the local-space transform of a bone in the reference pose.
---@param BoneIndex integer
---@return FTransform
function USkinnedMeshComponent:GetRefPoseTransform(BoneIndex) end

---Gets the local-space position of a bone in the reference pose.
---@param BoneIndex integer
---@return FVector
function USkinnedMeshComponent:GetRefPosePosition(BoneIndex) end

---Get predicted LOD level. This value is usually calculated in UpdateLODStatus, but can be modified by skeletal mesh streaming.
---@return integer
function USkinnedMeshComponent:GetPredictedLODLevel() end

---Get Parent Bone of the input bone
---@param BoneName string
---@return string
function USkinnedMeshComponent:GetParentBone(BoneName) end

---Get the number of LODs on this component
---@return integer
function USkinnedMeshComponent:GetNumLODs() end

---Returns the number of bones in the skeleton.
---@return integer
function USkinnedMeshComponent:GetNumBones() end

---@return UMeshDeformerInstance
function USkinnedMeshComponent:GetMeshDeformerInstance() end

---Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD
---@return integer
function USkinnedMeshComponent:GetForcedLOD() end

---Get delta transform from reference pose based on BaseNode.
---This uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph
---@param BoneName string
---@param BaseName string @[opt] 
---@return FTransform
function USkinnedMeshComponent:GetDeltaTransformFromRefPose(BoneName, BaseName) end

---Return the name of the skin weight profile that is currently set on the given layer, otherwise returns 'None'
---@param InLayer ESkinWeightProfileLayer @[opt] 
---@return string
function USkinnedMeshComponent:GetCurrentSkinWeightProfileName(InLayer) end

---Return the names of the skin weight profiles for all the layers
---@return TArray_string_
function USkinnedMeshComponent:GetCurrentSkinWeightProfileLayerNames() end

---Get world-space bone transform.
---@param InBoneName string
---@param TransformSpace integer @[opt] 
---@return FTransform
function USkinnedMeshComponent:GetBoneTransform(InBoneName, TransformSpace) end

---Get Bone Name from index
---@param BoneIndex integer
---@return string
function USkinnedMeshComponent:GetBoneName(BoneIndex) end

---Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.
---@param BoneName string
---@return integer
function USkinnedMeshComponent:GetBoneIndex(BoneName) end

---Returns whether the component is set to always use a mesh deformer if one can be found in the project settings
---@return boolean
function USkinnedMeshComponent:GetAlwaysUseMeshDeformer() end

---finds the closest bone to the given location
---@param TestLocation FVector
---@param BoneLocation FVector @[out] 
---@param IgnoreScale number @[opt] 
---@param bRequirePhysicsAsset boolean @[opt] 
---@return string
function USkinnedMeshComponent:FindClosestBone_K2(TestLocation, BoneLocation, IgnoreScale, bRequirePhysicsAsset) end

---Clear any applied vertex color override
---@param LODIndex integer
function USkinnedMeshComponent:ClearVertexColorOverride(LODIndex) end

---Clear the skin weight profile from the given layer on this component, in case it is set. If no profile is set for the layer,
---then this call does nothing.
---@param InLayer ESkinWeightProfileLayer @[opt] 
function USkinnedMeshComponent:ClearSkinWeightProfile(InLayer) end

---Clear any applied skin weight override
---@param LODIndex integer
function USkinnedMeshComponent:ClearSkinWeightOverride(LODIndex) end

---Clear the skin Weight Profile from all layers on this component. If no profiles are set for any layer, then this call does nothing.
function USkinnedMeshComponent:ClearAllSkinWeightProfiles() end

---Tests if BoneName is child of (or equal to) ParentBoneName.
---Note - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child.
---@param BoneName string
---@param ParentBoneName string
---@return boolean
function USkinnedMeshComponent:BoneIsChildOf(BoneName, ParentBoneName) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkinnedMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USkinnedMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkinnedMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

