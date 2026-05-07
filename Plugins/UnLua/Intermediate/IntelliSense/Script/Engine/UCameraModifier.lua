---A CameraModifier is a base class for objects that may adjust the final camera properties after
---being computed by the APlayerCameraManager (@@see ModifyCamera). A CameraModifier
---can be stateful, and is associated uniquely with a specific APlayerCameraManager.
---@class UCameraModifier : UObject
---@field public bDebug boolean @If true, enables certain debug visualization features.
---@field public bExclusive boolean @If true, no other modifiers of same priority allowed.
---@field public Priority integer @Priority value that determines the order in which modifiers are applied. 0 = highest priority, 255 = lowest.
---@field protected CameraOwner APlayerCameraManager @Camera this object is associated with.
---@field protected AlphaInTime number @When blending in, alpha proceeds from 0 to 1 over this time
---@field protected AlphaOutTime number @When blending out, alpha proceeds from 1 to 0 over this time
---@field protected Alpha number @Current blend alpha.
local UCameraModifier = {}

---@param InOwner AActor
function UCameraModifier:OnCameraOwnerDestroyed(InOwner) end

---
---@return boolean
function UCameraModifier:IsPendingDisable() end

---
---@return boolean
function UCameraModifier:IsDisabled() end

---
---@return AActor
function UCameraModifier:GetViewTarget() end

---Enables this modifier.
function UCameraModifier:EnableModifier() end

---Disables this modifier.
---@param bImmediate boolean @[opt] 
function UCameraModifier:DisableModifier(bImmediate) end

---Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's postprocess effects.
---Scaling by Alpha happens after this in code, so no need to deal with that in the blueprint.
---@param DeltaTime number
---@param PostProcessBlendWeight number @[out] 
---@param PostProcessSettings FPostProcessSettings @[out] 
function UCameraModifier:BlueprintModifyPostProcess(DeltaTime, PostProcessBlendWeight, PostProcessSettings) end

---Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's transform.
---Scaling by Alpha happens after this in code, so no need to deal with that in the blueprint.
---@param DeltaTime number
---@param ViewLocation FVector
---@param ViewRotation FRotator
---@param FOV number
---@param NewViewLocation FVector @[out] 
---@param NewViewRotation FRotator @[out] 
---@param NewFOV number @[out] 
function UCameraModifier:BlueprintModifyCamera(DeltaTime, ViewLocation, ViewRotation, FOV, NewViewLocation, NewViewRotation, NewFOV) end

