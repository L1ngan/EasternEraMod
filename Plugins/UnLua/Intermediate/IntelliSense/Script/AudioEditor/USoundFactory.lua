---@class USoundFactory : UFactory
---@field public bAutoCreateCue boolean @If enabled, a sound cue will automatically be created for the sound
---@field public bIncludeAttenuationNode boolean @If enabled, the created sound cue will include a attenuation node
---@field public bIncludeLoopingNode boolean @If enabled, the created sound cue will include a looping node
---@field public bIncludeModulatorNode boolean @If enabled, the created sound cue will include a modulator node
---@field public CueVolume number @The volume of the created sound cue
---@field public CuePackageSuffix string @If not empty, generated SoundCues will be placed in PackageCuePackageSuffix, but only if bAutoCreateCue is true
local USoundFactory = {}

