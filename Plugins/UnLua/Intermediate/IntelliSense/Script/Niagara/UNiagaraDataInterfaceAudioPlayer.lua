---This Data Interface can be used to play one-shot audio effects driven by particle data.
---@class UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface
---@field public SoundToPlay USoundBase @Reference to the audio asset to play
---@field public Attenuation USoundAttenuation @Optional sound attenuation setting to use
---@field public Concurrency USoundConcurrency @Optional sound concurrency setting to use
---@field public ParameterNames TArray<string> @A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio
---@field public ConfigurationUserParameter FNiagaraUserParameterBinding @If bound to a valid user parameter object of type UNiagaraDataInterfaceAudioPlayerSettings, then configured settings like sound attenuation are set via the user parameter. This allows the sound settings to be dynamically changed via blueprint or C++. Only used by persistent audio, one-shot audio ignores this option.
---@field public bLimitPlaysPerTick boolean
---@field public MaxPlaysPerTick integer @This sets the max number of sounds played each tick. If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest. The particles to discard when over the limit are *not* chosen in a deterministic way.
---@field public bStopWhenComponentIsDestroyed boolean @If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed.
---@field public bAllowLoopingOneShotSounds boolean @Playing looping sounds as persistent audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped.
---@field public bOnlyActiveDuringGameplay boolean @If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.
local UNiagaraDataInterfaceAudioPlayer = {}

