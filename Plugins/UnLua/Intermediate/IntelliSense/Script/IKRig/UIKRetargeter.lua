---@class UIKRetargeter : UObject
---@field private Version integer @incremented by any edits that require re-initialization
---@field private SourceIKRigAsset UIKRigDefinition @The rig to copy animation FROM.
---@field private SourcePreviewMesh TSoftObjectPtr<USkeletalMesh> @Optional. Override the Skeletal Mesh to copy animation from. Uses the preview mesh from the Source IK Rig asset by default.
---@field private TargetIKRigAsset UIKRigDefinition @The rig to copy animation TO. Note that this is only the default target IK Rig and ops can be setup to use other IK Rigs as desired.
---@field private TargetPreviewMesh TSoftObjectPtr<USkeletalMesh> @Optional. Override the Skeletal Mesh to preview the retarget on. Uses the preview mesh from the Target IK Rig asset by default.
---@field public TargetMeshOffset FVector @The offset applied to the target mesh in the editor viewport.
---@field public TargetMeshScale number @Scale the target mesh in the viewport for easier visualization next to the source.
---@field public SourceMeshOffset FVector @The offset applied to the source mesh in the editor viewport.
---@field public bIgnoreRootLockInPreview boolean @When true, animation sequences with "Force Root Lock" turned On will act as though it is Off. This affects only the preview in the retarget editor. Use ExportRootLockMode to control exported animation behavior. This setting has no effect on runtime retargeting where root motion is copied from the source component.
---@field public bDebugDraw boolean @Toggle debug drawing for retargeting in the viewport.
---@field public BoneDrawSize number @The visual size of the bones in the viewport (saved between sessions). This is set from the viewport Character>Bones menu
---@field public Controller UObject @The controller responsible for managing this asset's data (all editor mutation goes through this)
---@field private RetargetOps TArray<FInstancedStruct> @polymorphic stack of retargeting operations executed in serial fashion where output of prior operation is input to the next
---@field private Profiles TMap<string, FRetargetProfile> @settings profiles stored in this asset
---@field private CurrentProfile string
---@field private SourceRetargetPoses TMap<string, FIKRetargetPose> @The set of retarget poses for the SOURCE skeleton.
---@field private TargetRetargetPoses TMap<string, FIKRetargetPose> @The set of retarget poses for the TARGET skeleton.
---@field private CurrentSourceRetargetPose string @The current retarget pose to use for the SOURCE.
---@field private CurrentTargetRetargetPose string @The current retarget pose to use for the TARGET.
---@field private RetargetPoses TMap<string, FIKRetargetPose> @(OLD VERSION) Before retarget poses were stored for target AND source.
---@field private CurrentRetargetPose string
local UIKRetargeter = {}

---@param RetargetProfile FRetargetProfile @[out] 
---@param RootSettings FTargetRootSettings
function UIKRetargeter.SetRootSettingsInRetargetProfile(RetargetProfile, RootSettings) end

---Set the global settings in a retarget profile (will set bApplyGlobalSettings to true).
---@param RetargetProfile FRetargetProfile @[out] 
---@param GlobalSettings FRetargetGlobalSettings
function UIKRetargeter.SetGlobalSettingsInRetargetProfile(RetargetProfile, GlobalSettings) end

---@param RetargetProfile FRetargetProfile @[out] 
---@param SpeedPlantSettings FTargetChainSpeedPlantSettings
---@param TargetChainName string
function UIKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile(RetargetProfile, SpeedPlantSettings, TargetChainName) end

---@param RetargetProfile FRetargetProfile @[out] 
---@param ChainSettings FTargetChainSettings
---@param TargetChainName string
function UIKRetargeter.SetChainSettingsInRetargetProfile(RetargetProfile, ChainSettings, TargetChainName) end

---@param RetargetProfile FRetargetProfile @[out] 
---@param IKSettings FTargetChainIKSettings
---@param TargetChainName string
function UIKRetargeter.SetChainIKSettingsInRetargetProfile(RetargetProfile, IKSettings, TargetChainName) end

---@param RetargetProfile FRetargetProfile @[out] 
---@param FKSettings FTargetChainFKSettings
---@param TargetChainName string
function UIKRetargeter.SetChainFKSettingsInRetargetProfile(RetargetProfile, FKSettings, TargetChainName) end

---Returns true if the target IK Rig has been assigned
---@return boolean
function UIKRetargeter:HasTargetIKRig() end

---Returns true if the source IK Rig has been assigned
---@return boolean
function UIKRetargeter:HasSourceIKRig() end

---@param RetargetProfile FRetargetProfile @[out] 
---@return FTargetRootSettings
function UIKRetargeter.GetRootSettingsFromRetargetProfile(RetargetProfile) end

---@param RetargetAsset UIKRetargeter
---@param OptionalProfileName string
---@param OutSettings FTargetRootSettings @[out] 
function UIKRetargeter.GetRootSettingsFromRetargetAsset(RetargetAsset, OptionalProfileName, OutSettings) end

---@param RetargetProfile FRetargetProfile @[out] 
---@return FRetargetGlobalSettings
function UIKRetargeter.GetGlobalSettingsFromRetargetProfile(RetargetProfile) end

---@param RetargetAsset UIKRetargeter
---@param OptionalProfileName string
---@param OutSettings FRetargetGlobalSettings @[out] 
function UIKRetargeter.GetGlobalSettingsFromRetargetAsset(RetargetAsset, OptionalProfileName, OutSettings) end

---@param RetargetAsset UIKRetargeter
---@param IKGoalName string
---@return FTargetChainSettings
function UIKRetargeter.GetChainUsingGoalFromRetargetAsset(RetargetAsset, IKGoalName) end

---@param RetargetProfile FRetargetProfile @[out] 
---@param TargetChainName string
---@return FTargetChainSettings
function UIKRetargeter.GetChainSettingsFromRetargetProfile(RetargetProfile, TargetChainName) end

---@param RetargetAsset UIKRetargeter
---@param TargetChainName string
---@param OptionalProfileName string
---@return FTargetChainSettings
function UIKRetargeter.GetChainSettingsFromRetargetAsset(RetargetAsset, TargetChainName, OptionalProfileName) end

