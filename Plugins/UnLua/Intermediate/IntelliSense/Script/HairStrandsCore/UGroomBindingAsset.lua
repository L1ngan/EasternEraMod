---Implements an asset that can be used to store binding information between a groom and a skeletal mesh
---@class UGroomBindingAsset : UObject
---@field private GroomBindingType EGroomBindingMeshType
---@field private Groom UGroomAsset
---@field private SourceSkeletalMesh USkeletalMesh
---@field private SourceMeshRequestedLOD integer
---@field private SourceMeshUsedLOD integer
---@field private TargetSkeletalMesh USkeletalMesh
---@field private TargetMeshRequestedMinLOD integer
---@field private TargetMeshUsedMinLOD integer
---@field private SourceGeometryCache UGeometryCache
---@field private TargetGeometryCache UGeometryCache
---@field private NumInterpolationPoints integer
---@field private MatchingSection integer
---@field private TargetBindingAttribute string
---@field private GroupInfos TArray<FGoomBindingGroupInfo>
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
local UGroomBindingAsset = {}

---@param InSkeletalMesh USkeletalMesh
function UGroomBindingAsset:SetTargetSkeletalMesh(InSkeletalMesh) end

---@param InTargetMeshUsedMinLOD integer
function UGroomBindingAsset:SetTargetMeshUsedMinLOD(InTargetMeshUsedMinLOD) end

---@param InTargetMeshRequestedMinLOD integer
function UGroomBindingAsset:SetTargetMeshRequestedMinLOD(InTargetMeshRequestedMinLOD) end

---@param InGeometryCache UGeometryCache
function UGroomBindingAsset:SetTargetGeometryCache(InGeometryCache) end

---@param InAttributeName string
function UGroomBindingAsset:SetTargetBindingAttribute(InAttributeName) end

---@param InSkeletalMesh USkeletalMesh
function UGroomBindingAsset:SetSourceSkeletalMesh(InSkeletalMesh) end

---@param InSourceMeshUsedLOD integer
function UGroomBindingAsset:SetSourceMeshUsedLOD(InSourceMeshUsedLOD) end

---@param InSourceMeshRequestedLOD integer
function UGroomBindingAsset:SetSourceMeshRequestedLOD(InSourceMeshRequestedLOD) end

---@param InGeometryCache UGeometryCache
function UGroomBindingAsset:SetSourceGeometryCache(InGeometryCache) end

---@param InNumInterpolationPoints integer
function UGroomBindingAsset:SetNumInterpolationPoints(InNumInterpolationPoints) end

---@param InMatchingSection integer
function UGroomBindingAsset:SetMatchingSection(InMatchingSection) end

---@param InGroupInfos TArray_FGoomBindingGroupInfo_
function UGroomBindingAsset:SetGroupInfos(InGroupInfos) end

---@param InGroomBindingType EGroomBindingMeshType
function UGroomBindingAsset:SetGroomBindingType(InGroomBindingType) end

---@param InGroom UGroomAsset
function UGroomBindingAsset:SetGroom(InGroom) end

---@return USkeletalMesh
function UGroomBindingAsset:GetTargetSkeletalMesh() end

---@return integer
function UGroomBindingAsset:GetTargetMeshUsedMinLOD() end

---@return integer
function UGroomBindingAsset:GetTargetMeshRequestedMinLOD() end

---@return UGeometryCache
function UGroomBindingAsset:GetTargetGeometryCache() end

---@return string
function UGroomBindingAsset:GetTargetBindingAttribute() end

---@return USkeletalMesh
function UGroomBindingAsset:GetSourceSkeletalMesh() end

---@return integer
function UGroomBindingAsset:GetSourceMeshUsedLOD() end

---@return integer
function UGroomBindingAsset:GetSourceMeshRequestedLOD() end

---@return UGeometryCache
function UGroomBindingAsset:GetSourceGeometryCache() end

---@return integer
function UGroomBindingAsset:GetNumInterpolationPoints() end

---@return integer
function UGroomBindingAsset:GetMatchingSection() end

---@return TArray_FGoomBindingGroupInfo_
function UGroomBindingAsset:GetGroupInfos() end

---@return EGroomBindingMeshType
function UGroomBindingAsset:GetGroomBindingType() end

---@return UGroomAsset
function UGroomBindingAsset:GetGroom() end

---Build/rebuild a binding asset.
---Avoid calling Build again while a build is already in progress on this asset, as this will
---cause the Game Thread to block until the earlier build is finished.
---Similarly, the Game Thread will block for a short time if a Groom Component is already using
---this binding asset, so if performance is critical avoid calling Build on bindings that are
---in use.
---@param CompletionDelegate Delegate
function UGroomBindingAsset:Build(CompletionDelegate) end

