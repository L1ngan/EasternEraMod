---FSkeletalMeshSkeletonModifier
---@class USkeletonModifier : UObject
---@field private SkeletalMesh TWeakObjectPtr<USkeletalMesh>
local USkeletonModifier = {}

---@param InSkeletalMesh USkeletalMesh
---@return boolean
function USkeletonModifier:SetSkeletalMesh(InSkeletalMesh) end

---Sets the bone the desired local transform
---@param InBoneName string
---@param InNewTransform FTransform
---@param bMoveChildren boolean
---@return boolean
function USkeletonModifier:SetBoneTransform(InBoneName, InNewTransform, bMoveChildren) end

---@param InBoneNames TArray_string_
---@param InNewTransforms TArray_FTransform_
---@param bMoveChildren boolean
---@return boolean
function USkeletonModifier:SetBonesTransforms(InBoneNames, InNewTransforms, bMoveChildren) end

---@param InOldBoneNames TArray_string_
---@param InNewBoneNames TArray_string_
---@return boolean
function USkeletonModifier:RenameBones(InOldBoneNames, InNewBoneNames) end

---Rename bones
---@param InOldBoneName string
---@param InNewBoneName string
---@return boolean
function USkeletonModifier:RenameBone(InOldBoneName, InNewBoneName) end

---@param InBoneNames TArray_string_
---@param bRemoveChildren boolean
---@return boolean
function USkeletonModifier:RemoveBones(InBoneNames, bRemoveChildren) end

---Remove a bone in the skeleton hierarchy
---@param InBoneName string
---@param bRemoveChildren boolean
---@return boolean
function USkeletonModifier:RemoveBone(InBoneName, bRemoveChildren) end

---@param InBoneNames TArray_string_
---@param InParentNames TArray_string_
---@return boolean
function USkeletonModifier:ParentBones(InBoneNames, InParentNames) end

---Parent bones
---@param InBoneName string
---@param InParentName string
---@return boolean
function USkeletonModifier:ParentBone(InBoneName, InParentName) end

---@param InBoneNames TArray_string_
---@param InOptions FOrientOptions @[opt] 
---@return boolean
function USkeletonModifier:OrientBones(InBoneNames, InOptions) end

---Align bones
---@param InBoneName string
---@param InOptions FOrientOptions @[opt] 
---@return boolean
function USkeletonModifier:OrientBone(InBoneName, InOptions) end

---@param InBonesName TArray_string_
---@param InOptions FMirrorOptions @[opt] 
---@return boolean
function USkeletonModifier:MirrorBones(InBonesName, InOptions) end

---Mirror bones
---@param InBoneName string
---@param InOptions FMirrorOptions @[opt] 
---@return boolean
function USkeletonModifier:MirrorBone(InBoneName, InOptions) end

---Get Parent Name
---@param InBoneName string
---@return string
function USkeletonModifier:GetParentName(InBoneName) end

---Get Children Names
---@param InBoneName string
---@param bRecursive boolean @[opt] 
---@return TArray_string_
function USkeletonModifier:GetChildrenNames(InBoneName, bRecursive) end

---Get Bone Transform
---@param InBoneName string
---@param bGlobal boolean @[opt] 
---@return FTransform
function USkeletonModifier:GetBoneTransform(InBoneName, bGlobal) end

---Get All Bone Names
---@return TArray_string_
function USkeletonModifier:GetAllBoneNames() end

---Actually applies the skeleton modifications to the skeletal mesh.
---@return boolean
function USkeletonModifier:CommitSkeletonToSkeletalMesh() end

---@param InBonesName TArray_string_
---@param InParentsName TArray_string_
---@param InTransforms TArray_FTransform_
---@return boolean
function USkeletonModifier:AddBones(InBonesName, InParentsName, InTransforms) end

---Creates a new bone in the skeleton hierarchy at desired transform
---@param InBoneName string
---@param InParentName string
---@param InTransform FTransform
---@return boolean
function USkeletonModifier:AddBone(InBoneName, InParentName, InTransform) end

