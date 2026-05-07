---@class UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase
---@field public EmitterInfo FGPUSpriteEmitterInfo @Information for runtime simulation.
---@field public ResourceData FGPUSpriteResourceData @Data used to initialize runtime resources.
---@field public CameraMotionBlurAmount number @How much to stretch sprites based on camera motion blur.
---@field public bClearExistingParticlesOnInit boolean @When true, all existing partilces are cleared when the emitter is initialized.
local UParticleModuleTypeDataGpu = {}

