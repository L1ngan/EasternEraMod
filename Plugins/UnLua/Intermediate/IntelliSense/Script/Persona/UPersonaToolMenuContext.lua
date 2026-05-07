---@class UPersonaToolMenuContext : UObject
local UPersonaToolMenuContext = {}

---Get the skeleton that we are editing
---@return USkeleton
function UPersonaToolMenuContext:GetSkeleton() end

---Get the preview component that we are using
---@return UDebugSkelMeshComponent
function UPersonaToolMenuContext:GetPreviewMeshComponent() end

---Get the skeletal mesh that we are editing
---@return USkeletalMesh
function UPersonaToolMenuContext:GetMesh() end

---Get the anim blueprint that we are editing
---@return UAnimBlueprint
function UPersonaToolMenuContext:GetAnimBlueprint() end

---Get the animation asset that we are editing
---@return UAnimationAsset
function UPersonaToolMenuContext:GetAnimationAsset() end

