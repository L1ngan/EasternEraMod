---@class UFXSystemComponent : UPrimitiveComponent
local UFXSystemComponent = {}

---Set a named vector instance parameter on this ParticleSystemComponent.
---Updates the parameter if it already exists, or creates a new entry if not.
---@param ParameterName string
---@param Param FVector
function UFXSystemComponent:SetVectorParameter(ParameterName, Param) end

---Sets whether we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.
---This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).
---When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.
---This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.
---@param bAutoManage boolean
function UFXSystemComponent:SetUseAutoManageAttachment(bAutoManage) end

---Change a named int parameter
---@param ParameterName string
---@param Param integer
function UFXSystemComponent:SetIntParameter(ParameterName, Param) end

---Change a named float parameter
---@param ParameterName string
---@param Param number
function UFXSystemComponent:SetFloatParameter(ParameterName, Param) end

---Enables / disables an emitter by halting spawning of new particles.
---You will still pay the cost of the emitter update.
---@param EmitterName string
---@param bNewEnableState boolean
function UFXSystemComponent:SetEmitterEnable(EmitterName, bNewEnableState) end

---Set a named color instance parameter on this ParticleSystemComponent.
---Updates the parameter if it already exists, or creates a new entry if not.
---@param ParameterName string
---@param Param FLinearColor
function UFXSystemComponent:SetColorParameter(ParameterName, Param) end

---Change a named boolean parameter, ParticleSystemComponent converts to float.
---@param ParameterName string
---@param Param boolean
function UFXSystemComponent:SetBoolParameter(ParameterName, Param) end

---Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.
---@param Parent USceneComponent
---@param SocketName string
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
function UFXSystemComponent:SetAutoAttachmentParameters(Parent, SocketName, LocationRule, RotationRule, ScaleRule) end

---Set a named actor instance parameter on this ParticleSystemComponent.
---Updates the parameter if it already exists, or creates a new entry if not.
---@param ParameterName string
---@param Param AActor
function UFXSystemComponent:SetActorParameter(ParameterName, Param) end

---Deactivates this system and releases it to the pool on completion.
---Usage of this PSC reference after this call is unsafe.
---You should clear out your references to it.
function UFXSystemComponent:ReleaseToPool() end

---Get the referenced FXSystem asset.
---@return UFXSystemAsset
function UFXSystemComponent:GetFXSystemAsset() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFXSystemComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFXSystemComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFXSystemComponent:AddAssetUserDataOfClass(InUserDataClass) end

