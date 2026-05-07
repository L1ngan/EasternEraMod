---The scene node represents a transform node in the scene.
---Scene nodes can have user-defined attributes. Use UInterchangeUserDefinedAttributesAPI to get and set user-defined attribute data.
---@class UInterchangeSceneNode : UInterchangeBaseNode
local UInterchangeSceneNode = {}

---Add the specified Material dependency to a specific slot name of this object.
---@param SlotName string
---@param MaterialDependencyUid string
---@return boolean
function UInterchangeSceneNode:SetSlotMaterialDependencyUid(SlotName, MaterialDependencyUid) end

---Set MorphTarget with given weight.
---@param MorphTargetName string
---@param Weight number
---@return boolean
function UInterchangeSceneNode:SetMorphTargetCurveWeight(MorphTargetName, Weight) end

---Set the Global Bind Pose Referenced for MeshUIDs.
---@param GlobalBindPoseReferenceForMeshUIDs TMap_string__FMatrix_
function UInterchangeSceneNode:SetGlobalBindPoseReferenceForMeshUIDs(GlobalBindPoseReferenceForMeshUIDs) end

---Set the local transform of the time-zero scene node.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param AttributeValue FTransform
---@param bResetCache boolean @[opt] 
---@return boolean
function UInterchangeSceneNode:SetCustomTimeZeroLocalTransform(BaseNodeContainer, AttributeValue, bResetCache) end

---Set the node pivot geometric offset.
---@param AttributeValue FTransform
---@return boolean
function UInterchangeSceneNode:SetCustomPivotNodeTransform(AttributeValue) end

---Set the default scene node local transform.
---The default transform is the local transform of the node (no bind pose, no time evaluation).
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param AttributeValue FTransform
---@param bResetCache boolean @[opt] 
---@return boolean
function UInterchangeSceneNode:SetCustomLocalTransform(BaseNodeContainer, AttributeValue, bResetCache) end

---Sets if Joint has Bind Pose. Automatic T0 usage will be configured in case if the Skeleton contanis at least 1 Joint without BindPose.
---@param bHasBindPose boolean
---@return boolean
function UInterchangeSceneNode:SetCustomHasBindPose(bHasBindPose) end

---Set the geometric offset. Any mesh attached to this scene node will be offset using this transform.
---@param AttributeValue FTransform
---@return boolean
function UInterchangeSceneNode:SetCustomGeometricTransform(AttributeValue) end

---Sets whether components spawned from this node should be visible
---@param bInIsVisible boolean
---@return boolean
function UInterchangeSceneNode:SetCustomComponentVisibility(bInIsVisible) end

---Set the local transform of the bind pose scene node.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param AttributeValue FTransform
---@param bResetCache boolean @[opt] 
---@return boolean
function UInterchangeSceneNode:SetCustomBindPoseLocalTransform(BaseNodeContainer, AttributeValue, bResetCache) end

---Add an asset for this scene node to instantiate.
---@param AttributeValue string
---@return boolean
function UInterchangeSceneNode:SetCustomAssetInstanceUid(AttributeValue) end

---Set the Animation Asset To Play by this Scene Node. Only relevant for SkeletalMeshActors (that is, SceneNodes that are instantiating Skeletal Meshes).
---@param AttributeValue string
---@return boolean
function UInterchangeSceneNode:SetCustomAnimationAssetUidToPlay(AttributeValue) end

---Sets whether actors spawned from this node should be visible
---@param bInIsVisible boolean
---@return boolean
function UInterchangeSceneNode:SetCustomActorVisibility(bInIsVisible) end

---Sets the Animation Curve Type for the given CurveName (StepCurve or Curve). (Mostly used for tracking Custom Attributes' Animation Types)
---@param CurveName string
---@param AnimationCurveType EInterchangeAnimationPayLoadType
---@return boolean
function UInterchangeSceneNode:SetAnimationCurveTypeForCurveName(CurveName, AnimationCurveType) end

---@param SpecializedType string
---@return boolean
function UInterchangeSceneNode:RemoveSpecializedType(SpecializedType) end

---Remove the Material dependency associated with the given slot name from this object.
---@param SlotName string
---@return boolean
function UInterchangeSceneNode:RemoveSlotMaterialDependencyUid(SlotName) end

---@param SpecializedType string
---@return boolean
function UInterchangeSceneNode:IsSpecializedTypeContains(SpecializedType) end

---@param OutSpecializedTypes TArray_string_ @[out] 
function UInterchangeSceneNode:GetSpecializedTypes(OutSpecializedTypes) end

---Get the specialized type this scene node represents (for example, Joint or LODGroup).
---@return integer
function UInterchangeSceneNode:GetSpecializedTypeCount() end

---@param Index integer
---@param OutSpecializedType string @[out] 
function UInterchangeSceneNode:GetSpecializedType(Index, OutSpecializedType) end

---Retrieve the Material dependency for a given slot of this object.
---@param SlotName string
---@param OutMaterialDependency string @[out] 
---@return boolean
function UInterchangeSceneNode:GetSlotMaterialDependencyUid(SlotName, OutMaterialDependency) end

---Retrieve the correspondence table between slot names and assigned materials for this object.
---@param OutMaterialDependencies TMap_string__string_ @[out] 
function UInterchangeSceneNode:GetSlotMaterialDependencies(OutMaterialDependencies) end

---Get MorphTargets and their weights.
---@param OutMorphTargetCurveWeights TMap_string__number_ @[out] 
function UInterchangeSceneNode:GetMorphTargetCurveWeights(OutMorphTargetCurveWeights) end

---Get the Global Bind Pose Reference for given MeshUID.
---@param MeshUID string
---@param GlobalBindPoseReference FMatrix @[out] 
---@return boolean
function UInterchangeSceneNode:GetGlobalBindPoseReferenceForMeshUID(MeshUID, GlobalBindPoseReference) end

---Get the local transform of the time-zero scene node.
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomTimeZeroLocalTransform(AttributeValue) end

---Get the global transform of the time-zero scene node. This value is computed from the local transforms of all parent time-zero scene nodes.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param GlobalOffsetTransform FTransform
---@param AttributeValue FTransform @[out] 
---@param bForceRecache boolean @[opt] 
---@return boolean
function UInterchangeSceneNode:GetCustomTimeZeroGlobalTransform(BaseNodeContainer, GlobalOffsetTransform, AttributeValue, bForceRecache) end

---Get the node pivot geometric offset.
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomPivotNodeTransform(AttributeValue) end

---Get the default scene node local transform.
---The default transform is the local transform of the node (no bind pose, no time evaluation).
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomLocalTransform(AttributeValue) end

---Gets if the joint has BindPose (if the setter was used, otherwise returns with false and T0 evaluation presumes bHasBindPose==true).
---@param bHasBindPose boolean @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomHasBindPose(bHasBindPose) end

---Get the default scene node global transform. This value is computed from the local transforms of all parent scene nodes.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param GlobalOffsetTransform FTransform
---@param AttributeValue FTransform @[out] 
---@param bForceRecache boolean @[opt] 
---@return boolean
function UInterchangeSceneNode:GetCustomGlobalTransform(BaseNodeContainer, GlobalOffsetTransform, AttributeValue, bForceRecache) end

---Get the geometric offset. Any mesh attached to this scene node will be offset using this transform.
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomGeometricTransform(AttributeValue) end

---Gets whether components spawned from this node should be visible
---@param bOutIsVisible boolean @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomComponentVisibility(bOutIsVisible) end

---Get the local transform of the bind pose scene node.
---@param AttributeValue FTransform @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomBindPoseLocalTransform(AttributeValue) end

---Get the global transform of the bind pose scene node. This value is computed from the local transforms of all parent bind poses.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param GlobalOffsetTransform FTransform
---@param AttributeValue FTransform @[out] 
---@param bForceRecache boolean @[opt] 
---@return boolean
function UInterchangeSceneNode:GetCustomBindPoseGlobalTransform(BaseNodeContainer, GlobalOffsetTransform, AttributeValue, bForceRecache) end

---Get which asset, if any, a scene node is instantiating. Return false if the Attribute was not set previously.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomAssetInstanceUid(AttributeValue) end

---Get the Animation Asset To Play by this Scene Node.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomAnimationAssetUidToPlay(AttributeValue) end

---Gets whether actors spawned from this node should be visible
---@param bOutIsVisible boolean @[out] 
---@return boolean
function UInterchangeSceneNode:GetCustomActorVisibility(bOutIsVisible) end

---Gets the Animation Curve Type for the given CurveName.
---@param CurveName string
---@param OutCurveAnimationType EInterchangeAnimationPayLoadType @[out] 
---@return boolean
function UInterchangeSceneNode:GetAnimationCurveTypeForCurveName(CurveName, OutCurveAnimationType) end

---@param SpecializedType string
---@return boolean
function UInterchangeSceneNode:AddSpecializedType(SpecializedType) end

