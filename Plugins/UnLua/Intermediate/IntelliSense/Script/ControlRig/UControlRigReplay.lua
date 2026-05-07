---@class UControlRigReplay : UObject
---@field public Description string
---@field public ControlRigObjectPath FSoftObjectPath
---@field public PreviewSkeletalMeshObjectPath FSoftObjectPath
---@field public InputTracks FControlRigReplayTracks
---@field public OutputTracks FControlRigReplayTracks
---@field public Tolerance number
---@field public bValidateHierarchyTopology boolean
---@field public bValidatePose boolean
---@field public bValidateMetadata boolean
---@field public bValidateVariables boolean
---@field public FramesToSkip TArray<integer>
---@field public EnableTest boolean
local UControlRigReplay = {}

---@return boolean
function UControlRigReplay:StopReplay() end

---@return boolean
function UControlRigReplay:StopRecording() end

---@param InControlRig UControlRig
---@param InMode EControlRigReplayPlaybackMode @[opt] 
---@return boolean
function UControlRigReplay:StartReplay(InControlRig, InMode) end

---@param InControlRig UControlRig
---@return boolean
function UControlRigReplay:StartRecording(InControlRig) end

---@param InMode EControlRigReplayPlaybackMode
function UControlRigReplay:SetPlaybackMode(InMode) end

---@return boolean
function UControlRigReplay:PauseReplay() end

---@return boolean
function UControlRigReplay:IsReplaying() end

---@return boolean
function UControlRigReplay:IsRecording() end

---@return boolean
function UControlRigReplay:IsPaused() end

---@return FVector2D
function UControlRigReplay:GetTimeRange() end

---@return EControlRigReplayPlaybackMode
function UControlRigReplay:GetPlaybackMode() end

---@param InDesiredPackagePath string
---@param InBlueprintPathName string
---@param InAssetClass TSubclassOf_UObject_
---@return UControlRigReplay
function UControlRigReplay.CreateNewAsset(InDesiredPackagePath, InBlueprintPathName, InAssetClass) end

