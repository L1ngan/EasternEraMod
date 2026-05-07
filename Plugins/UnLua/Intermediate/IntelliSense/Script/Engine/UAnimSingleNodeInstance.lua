---@class UAnimSingleNodeInstance : UAnimInstance
---@field public CurrentAsset UAnimationAsset @Current Asset being played *
---@field public PostEvaluateAnimEvent Delegate
local UAnimSingleNodeInstance = {}

function UAnimSingleNodeInstance:StopAnim() end

---@param bInReverse boolean
function UAnimSingleNodeInstance:SetReverse(bInReverse) end

---Set pose value
---@param PoseName string
---@param Value number
---@param bRemoveIfZero boolean
function UAnimSingleNodeInstance:SetPreviewCurveOverride(PoseName, Value, bRemoveIfZero) end

---@param InPosition number
---@param InPreviousTime number
---@param bFireNotifies boolean @[opt] 
function UAnimSingleNodeInstance:SetPositionWithPreviousTime(InPosition, InPreviousTime, bFireNotifies) end

---@param InPosition number
---@param bFireNotifies boolean @[opt] 
function UAnimSingleNodeInstance:SetPosition(InPosition, bFireNotifies) end

---@param InPlayRate number
function UAnimSingleNodeInstance:SetPlayRate(InPlayRate) end

---@param bIsPlaying boolean
function UAnimSingleNodeInstance:SetPlaying(bIsPlaying) end

---@param MirrorDataTable UMirrorDataTable
function UAnimSingleNodeInstance:SetMirrorDataTable(MirrorDataTable) end

---@param bIsLooping boolean
function UAnimSingleNodeInstance:SetLooping(bIsLooping) end

---@param InPosition FVector
function UAnimSingleNodeInstance:SetBlendSpacePosition(InPosition) end

---Set New Asset - calls InitializeAnimation, for now we need MeshComponent *
---@param NewAsset UAnimationAsset
---@param bIsLooping boolean @[opt] 
---@param InPlayRate number @[opt] 
function UAnimSingleNodeInstance:SetAnimationAsset(NewAsset, bIsLooping, InPlayRate) end

---For AnimSequence specific *
---@param bIsLooping boolean @[opt] 
---@param InPlayRate number @[opt] 
---@param InStartPosition number @[opt] 
function UAnimSingleNodeInstance:PlayAnim(bIsLooping, InPlayRate, InStartPosition) end

---@return UMirrorDataTable
function UAnimSingleNodeInstance:GetMirrorDataTable() end

---@return number
function UAnimSingleNodeInstance:GetLength() end

---Get the currently used asset
---@return UAnimationAsset
function UAnimSingleNodeInstance:GetAnimationAsset() end

