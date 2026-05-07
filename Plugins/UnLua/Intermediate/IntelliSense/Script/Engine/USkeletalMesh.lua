---SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.
---Skeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.
---The 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).
---@class USkeletalMesh : USkinnedAsset
---@field private SourceModels TArray<FSkeletalMeshSourceModel>
---@field public Skeleton USkeleton
---@field private ImportedBounds FBoxSphereBounds
---@field private ExtendedBounds FBoxSphereBounds
---@field protected PositiveBoundsExtension FVector
---@field protected NegativeBoundsExtension FVector
---@field public Materials TArray<FSkeletalMaterial>
---@field public SkelMirrorTable TArray<FBoneMirrorInfo>
---@field public NaniteSettings FMeshNaniteSettings @Settings related to building Nanite data.
---@field private LODInfo TArray<FSkeletalMeshLODInfo>
---@field public MinQualityLevelLOD FPerQualityLevelInt
---@field public MinLod FPerPlatformInt
---@field public DisableBelowMinLodStripping FPerPlatformBool
---@field public bOverrideLODStreamingSettings boolean
---@field public bSupportLODStreaming FPerPlatformBool
---@field public MaxNumStreamedLODs FPerPlatformInt
---@field public MaxNumOptionalLODs FPerPlatformInt
---@field public LODSettings USkeletalMeshLODSettings
---@field public DefaultAnimatingRig TSoftObjectPtr<UObject>
---@field public SkelMirrorAxis integer
---@field public SkelMirrorFlipAxis integer
---@field public bHasVertexColors boolean
---@field public bEnablePerPolyCollision boolean
---@field public VertexColorGuid FGuid
---@field public BodySetup UBodySetup
---@field public PhysicsAsset UPhysicsAsset
---@field public ShadowPhysicsAsset UPhysicsAsset
---@field public NodeMappingData TArray<UNodeMappingContainer>
---@field public AssetImportData UAssetImportData
---@field public ThumbnailInfo UThumbnailInfo
---@field public bHasCustomDefaultEditorCamera boolean
---@field public DefaultEditorCameraLocation FVector
---@field public DefaultEditorCameraRotation FRotator
---@field public DefaultEditorCameraLookAt FVector
---@field public DefaultEditorCameraOrthoZoom number
---@field public PreviewAttachedAssetContainer FPreviewAssetAttachContainer
---@field public bSupportRayTracing boolean
---@field public RayTracingMinLOD integer
---@field public ClothLODBiasMode EClothLODBiasMode
---@field public MorphTargets TArray<UMorphTarget>
---@field public FloorOffset number
---@field public BoneDrawSize number @The visual size of the bones in the viewport (saved between sessions). This is set from the viewport Character>Bones menu
---@field public PostProcessAnimBlueprint TSubclassOf<UAnimInstance>
---@field private PostProcessAnimBPLODThreshold integer @* Max LOD level that post-process anim graphs are evaluated. * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the post-process anim graph. * Setting it to -1 will always evaluate it and disable LODing.
---@field public MeshClothingAssets TArray<UClothingAssetBase>
---@field protected SamplingInfo FSkeletalMeshSamplingInfo
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected AssetUserDataEditorOnly TArray<UAssetUserData> @Array of user data stored with the asset
---@field private Sockets TArray<USkeletalMeshSocket> @Array of named socket locations, set up in editor and used as a shortcut instead of specifying everything explicitly to AttachComponent in the SkeletalMeshComponent.
---@field protected SkinWeightProfiles TArray<FSkinWeightProfileInfo>
---@field protected DefaultMeshDeformer UMeshDeformer
---@field protected TargetMeshDeformers UMeshDeformerCollection @Skeletal Mesh needs this collection of deformers to make sure it cooks any extra data required by these deformers
---@field protected OverlayMaterial UMaterialInterface
---@field protected OverlayMaterialMaxDrawDistance number
---@field protected ForwardAxis integer @Axis that the skeletal mesh is facing. Default is the Y axis. The facing axis represents the MeshDescription's orientation and is set on import. Therefore, if this property is modified elsewhere, the associated MeshDescription should be appropriately modified to reflect the new orientation.
local USkeletalMesh = {}

---@param InSkeleton USkeleton
function USkeletalMesh:SetSkeleton(InSkeleton) end

---Change the default overlay material max draw distance used by this mesh
---@param InMaxDrawDistance number
function USkeletalMesh:SetOverlayMaterialMaxDrawDistance(InMaxDrawDistance) end

---Change the default overlay material used by this mesh
---@param NewOverlayMaterial UMaterialInterface
function USkeletalMesh:SetOverlayMaterial(NewOverlayMaterial) end

---@param InMorphTargets TArray_UMorphTarget_
function USkeletalMesh:SetMorphTargets(InMorphTargets) end

---Allow to override min lod quality levels on a skeletalMesh and it Default value (-1 value for Default dont override its value).
---@param QualityLevelMinimumLODs TMap_EPerQualityLevels__integer_
---@param Default integer @[opt] 
function USkeletalMesh:SetMinLODForQualityLevels(QualityLevelMinimumLODs, Default) end

---@param InMeshClothingAssets TArray_UClothingAssetBase_
function USkeletalMesh:SetMeshClothingAssets(InMeshClothingAssets) end

---@param InMaterials TArray_FSkeletalMaterial_
function USkeletalMesh:SetMaterials(InMaterials) end

---@param InLODSettings USkeletalMeshLODSettings
function USkeletalMesh:SetLODSettings(InLODSettings) end

---@param InAnimatingRig TSoftObjectPtr_UObject_
function USkeletalMesh:SetDefaultAnimatingRig(InAnimatingRig) end

---Returns the number of sockets available. Both on this mesh and it's skeleton.
---@return integer
function USkeletalMesh:NumSockets() end

---Returns the list of all morph targets of this skeletal mesh
---@return TArray_string_
function USkeletalMesh:K2_GetAllMorphTargetNames() end

---Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true
---disabled sections will defer to correspond sections to see if they use cloth (non-cloth sections
---are disabled and another section added when cloth is enabled, using this flag allows for a check
---on the original section to succeed)
---@param InSectionIndex integer
---@param bCheckCorrespondingSections boolean @[opt] 
---@return boolean
function USkeletalMesh:IsSectionUsingCloth(InSectionIndex, bCheckCorrespondingSections) end

---Set the collection of mesh deformers that may be applied to this mesh. Skeletal Mesh use these deformers to determined if any extra data needs to be cooked
---@return UMeshDeformerCollection
function USkeletalMesh:GetTargetMeshDeformers() end

---Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons.
---@param Index integer
---@return USkeletalMeshSocket
function USkeletalMesh:GetSocketByIndex(Index) end

---USkinnedAsset interface.
---@return USkeleton
function USkeletalMesh:GetSkeleton() end

---USkinnedAsset interface.
---@return UPhysicsAsset
function USkeletalMesh:GetShadowPhysicsAsset() end

---USkinnedAsset interface.
---@return UPhysicsAsset
function USkeletalMesh:GetPhysicsAsset() end

---Get the default overlay material max draw distance used by this mesh
---@return number
function USkeletalMesh:GetOverlayMaterialMaxDrawDistance() end

---Get the default overlay material used by this mesh
---@return UMaterialInterface
function USkeletalMesh:GetOverlayMaterial() end

---@return TArray_UNodeMappingContainer_
function USkeletalMesh:GetNodeMappingData() end

---@param SourceAsset UBlueprint
---@return UNodeMappingContainer
function USkeletalMesh:GetNodeMappingContainer(SourceAsset) end

---NOTE: BP compiler doesn't support TObjectPtr as an argument type for UFUNCTION so this converting call is
---required. For many morphs, this can be expensive, since it needs to resolve _all_ TObjectPtrs and construct a new
---array for it.
---@return TArray_UMorphTarget_
function USkeletalMesh:GetMorphTargetsPtrConv() end

---@param QualityLevelMinimumLODs TMap_EPerQualityLevels__integer_ @[out] 
---@param Default integer @[out] 
function USkeletalMesh:GetMinLODForQualityLevels(QualityLevelMinimumLODs, Default) end

---@return TArray_UClothingAssetBase_
function USkeletalMesh:GetMeshClothingAssets() end

---USkinnedAsset interface.
---@return TArray_FSkeletalMaterial_
function USkeletalMesh:GetMaterials() end

---@return USkeletalMeshLODSettings
function USkeletalMesh:GetLODSettings() end

---Get the original imported bounds of the skel mesh
---@return FBoxSphereBounds
function USkeletalMesh:GetImportedBounds() end

---Return whether the mesh has vertex colors. USkinnedAsset interface.
---@return boolean
function USkeletalMesh:GetHasVertexColors() end

---Get the forward axis used by this mesh
---@return integer
function USkeletalMesh:GetForwardAxis() end

---Get the default mesh deformer used by this mesh. A mesh deformer is used to deform the skeletal mesh at runtime
---@return UMeshDeformer
function USkeletalMesh:GetDefaultMeshDeformer() end

---@return TSoftObjectPtr_UObject_
function USkeletalMesh:GetDefaultAnimatingRig() end

---Get the extended bounds of this mesh (imported bounds plus bounds extension). USkinnedAsset interface.
---@return FBoxSphereBounds
function USkeletalMesh:GetBounds() end

---Find a socket object in this SkeletalMesh by name.
---Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.
---Also returns the index for the socket allowing for future fast access via GetSocketByIndex()
---@param InSocketName string
---@param OutIndex integer @[out] 
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocketAndIndex(InSocketName, OutIndex) end

---Add a skeletal socket object to this SkeletalMesh, and optionally promotes it to USkeleton socket.
---@param InSocket USkeletalMeshSocket
---@param bAddToSkeleton boolean @[opt] 
function USkeletalMesh:AddSocket(InSocket, bAddToSkeleton) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkeletalMesh:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USkeletalMesh:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkeletalMesh:AddAssetUserDataOfClass(InUserDataClass) end

