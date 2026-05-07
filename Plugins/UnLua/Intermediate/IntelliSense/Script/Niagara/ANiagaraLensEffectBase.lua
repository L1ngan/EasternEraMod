---Niagara equivalent of AEmitterCameraLensEffectBase.
---This class is supported by APlayerCameraManager (via ICameraLensEffectInterface) as a camera lens effect.
---@class ANiagaraLensEffectBase : ANiagaraActor
---@field protected DesiredRelativeTransform FTransform @Relative offset from the camera (where X is out from the camera) Might be changed slightly when the FOV is different than expected.
---@field protected BaseAuthoredFOV number @FOVs that differ from this may cause adjustments in positioning. This is the FOV which the effect was tested with.
---@field protected bAllowMultipleInstances boolean @Are multiple instances of the effect allowed? When disabled, a single instance of the effect may be retriggered!
---@field protected bResetWhenRetriggered boolean @When an instance of this effect is retriggered (because more than one instance is not allowed) should the particle system be explicitly reset? Activate(bReset = true);
---@field protected EmittersToTreatAsSame TArray<TSubclassOf<AActor>> @If an effect class in this array is currently playing, do not play this effect. Useful for preventing multiple similar or expensive camera effects from playing simultaneously.
---@field protected OwningCameraManager APlayerCameraManager
local ANiagaraLensEffectBase = {}

---@return UFXSystemComponent
function ANiagaraLensEffectBase:GetPrimaryParticleComponent() end

---@return TArray_UFXSystemComponent_
function ANiagaraLensEffectBase:GetParticleComponents() end

