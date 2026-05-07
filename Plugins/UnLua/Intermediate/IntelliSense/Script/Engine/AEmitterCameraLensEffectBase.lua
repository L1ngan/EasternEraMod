---@class AEmitterCameraLensEffectBase : AEmitter
---@field protected PS_CameraEffect UParticleSystem @Particle System to use
---@field protected BaseCamera APlayerCameraManager @Camera this emitter is attached to, will be notified when emitter is destroyed
---@field protected RelativeTransform FTransform @Effect-to-camera transform to allow arbitrary placement of the particle system . Note the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size.
---@field public BaseFOV number @This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs
---@field public bAllowMultipleInstances boolean @true if multiple instances of this emitter can exist simultaneously, false otherwise.
---@field public bResetWhenRetriggered boolean @If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true
---@field public EmittersToTreatAsSame TArray<TSubclassOf<AActor>> @If an emitter class in this array is currently playing, do not play this effect. Useful for preventing multiple similar or expensive camera effects from playing simultaneously.
local AEmitterCameraLensEffectBase = {}

---@return UFXSystemComponent
function AEmitterCameraLensEffectBase:GetPrimaryParticleComponent() end

---@return TArray_UFXSystemComponent_
function AEmitterCameraLensEffectBase:GetParticleComponents() end

