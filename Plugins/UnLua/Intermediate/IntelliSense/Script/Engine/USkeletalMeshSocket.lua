---@class USkeletalMeshSocket : UObject
---@field public SocketName string @Defines a named attachment location on the USkeletalMesh. These are set up in editor and used as a shortcut instead of specifying everything explicitly to AttachComponent in the SkeletalMeshComponent. The Outer of a SkeletalMeshSocket should always be the USkeletalMesh.
---@field public BoneName string
---@field public RelativeLocation FVector
---@field public RelativeRotation FRotator
---@field public RelativeScale FVector
---@field public bForceAlwaysAnimated boolean @If true then the hierarchy of bones this socket is attached to will always be           evaluated, even if it had previously been removed due to the current lod setting
local USkeletalMeshSocket = {}

---Change the sockets parent to a new bone. The skeleton is used to validate that the bone exists
---@param InSkeletalMesh USkeletalMesh
---@param InBoneName string
function USkeletalMeshSocket:SetSocketParent(InSkeletalMesh, InBoneName) end

---Sets the relative transform parameters of the socket to the given local FTransform
---@param InTransform FTransform
function USkeletalMeshSocket:SetSocketLocalTransform(InTransform) end

---Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal
---@param SkelComp USkeletalMeshComponent
---@param WorldLocation FVector
---@param WorldNormal FVector
function USkeletalMeshSocket:InitializeSocketFromLocation(SkelComp, WorldLocation, WorldNormal) end

---@param SkelComp USkeletalMeshComponent
---@return FVector
function USkeletalMeshSocket:GetSocketLocation(SkelComp) end

---returns FTransform of Socket local transform
---@return FTransform
function USkeletalMeshSocket:GetSocketLocalTransform() end

