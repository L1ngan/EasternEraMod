---@class USoundWave : USoundBase
---@field private CompressionQuality integer @Platform agnostic compression quality. 1..100 with 1 being best compression and 100 being best quality. ADPCM and PCM sound asset compression types ignore this parameter.
---@field public StreamingPriority integer
---@field public SampleRateQuality ESoundwaveSampleRateSettings @Determines the max sample rate to use if the platform enables "Resampling For Device" in project settings.      For example, if the platform enables Resampling For Device and specifies 32000 for High, then setting High here will      force the sound wave to be _at most_ 32000. Does nothing if Resampling For Device is disabled.
---@field public SoundGroup integer
---@field public bLooping boolean @If set, when played directly (not through a sound cue) the wave will be played looping.
---@field public bStreaming boolean @Here for legacy code.
---@field private bSeekableStreaming boolean @Deprecated compression type properties
---@field private bUseBinkAudio boolean
---@field private SoundAssetCompressionType ESoundAssetCompressionType @The compression type to use for the sound wave asset.
---@field public OverrideSoundToUseForAnalysis USoundWave @Specify a sound to use for the baked analysis. Will default to this USoundWave if not set.
---@field public TreatFileAsLoopingForAnalysis boolean @Whether or not we should treat the sound wave used for analysis (this or the override) as looping while performing analysis. A looping sound may include the end of the file for inclusion in analysis for envelope and FFT analysis.
---@field public bEnableBakedFFTAnalysis boolean @Whether or not to enable cook-time baked FFT analysis.
---@field public bEnableAmplitudeEnvelopeAnalysis boolean @Whether or not to enable cook-time amplitude envelope analysis.
---@field public FFTSize ESoundWaveFFTSize @The FFT window size to use for fft analysis.
---@field public FFTAnalysisFrameSize integer @How many audio frames analyze at a time.
---@field public FFTAnalysisAttackTime integer @Attack time in milliseconds of the spectral envelope follower.
---@field public FFTAnalysisReleaseTime integer @Release time in milliseconds of the spectral envelope follower.
---@field public EnvelopeFollowerFrameSize integer @How many audio frames to average a new envelope value. Larger values use less memory for audio envelope data but will result in lower envelope accuracy.
---@field public EnvelopeFollowerAttackTime integer @The attack time in milliseconds. Describes how quickly the envelope analyzer responds to increasing amplitudes.
---@field public EnvelopeFollowerReleaseTime integer @The release time in milliseconds. Describes how quickly the envelope analyzer responds to decreasing amplitudes.
---@field public ModulationSettings FSoundModulationDefaultRoutingSettings @Modulation Settings
---@field public FrequenciesToAnalyze TArray<number> @The frequencies (in hz) to analyze when doing baked FFT analysis.
---@field public CookedSpectralTimeData TArray<FSoundWaveSpectralTimeData> @The cooked spectral time data.
---@field public CookedEnvelopeTimeData TArray<FSoundWaveEnvelopeTimeData> @The cooked cooked envelope data.
---@field public bMature boolean @If set to true if this sound is considered to contain mature/adult content.
---@field public bManualWordWrap boolean @If set to true will disable automatic generation of line breaks - use if the subtitles have been split manually.
---@field public bSingleLine boolean @If set to true the subtitles display as a sequence of single lines as opposed to multiline.
---@field public bIsAmbisonics boolean @Whether or not this source is ambisonics file format. If set, sound always uses the 'Master Ambisonics Submix' as set in the 'Audio' category of Project Settings' and ignores submix if provided locally or in the referenced SoundClass.
---@field public LoadingBehavior ESoundWaveLoadingBehavior @Specifies how and when compressed audio data is loaded for asset if stream caching is enabled.
---@field public SizeOfFirstAudioChunkInSeconds FPerPlatformFloat @How much audio to add to First Audio Chunk (in seconds)
---@field public SubtitlePriority number @The priority of the subtitle.
---@field public Volume number @Playback volume of sound 0 to 1 - Default is 1.0.
---@field public Pitch number @Playback pitch for sound.
---@field public NumChannels integer @Number of channels of multichannel data; 1 or 2 for regular mono and stereo files
---@field public ChannelOffsets TArray<integer> @Offsets into the bulk data for the source wav data
---@field public ChannelSizes TArray<integer> @Sizes of the bulk data for the source wav data
---@field protected SampleRate integer @Cooked sample rate of the asset. Can be modified by sample rate override.
---@field protected ImportedSampleRate integer @Sample rate of the imported sound wave.
---@field protected CuePoints TArray<FSoundWaveCuePoint> @Cue point data parsed from the .wav file. Contains "Loop Regions" as cue points as well!
---@field protected CuePointOrigin ESoundWaveCuePointOrigin @Dictates whether to use the CuePoints and Loop Regions from the .wav file or from the waveform editor     Marker transformations during playback.
---@field public Subtitles TArray<FSubtitleCue> @Subtitle cues.
---@field public Comment string @Provides contextual information for the sound to the translator.
---@field public TimecodeInfo FSoundWaveTimecodeInfo @Information about the time-code from import, if available.
---@field public AssetImportData UAssetImportData
---@field protected Curves UCurveTable @Curves associated with this sound wave
---@field protected InternalCurves UCurveTable @Hold a reference to our internal curve so we can switch back to it if we want to
---@field protected bEnableCloudStreaming boolean @If enabled, this wave may be streamed from the cloud using the Opus format. Loading behavior must NOT be `Force Inline`. Requires a suitable support plugin to be installed.
---@field protected PlatformSettings TMap<FGuid, FSoundWaveCloudStreamingPlatformSettings> @Optionally disables cloud streaming per platform
---@field public Transformations TArray<UWaveformTransformationBase> @Waveform edits to be applied to this SoundWave on cook (editing transformations will trigger a cook) Transformations is a TArray because changing it to TSet will delete user data
local USoundWave = {}

---Procedurally set the compression type.
---@param InSoundAssetCompressionType ESoundAssetCompressionType
---@param bMarkDirty boolean @[opt] 
function USoundWave:SetSoundAssetCompressionType(InSoundAssetCompressionType, bMarkDirty) end

---Returns the sound's asset compression type.
---@return ESoundAssetCompressionType
function USoundWave:GetSoundAssetCompressionType() end

---Filters for the cue points that _are_ loop regions and returns those as a new array
---@return TArray_FSoundWaveCuePoint_
function USoundWave:GetLoopRegions() end

---Filters for the cue points that are _not_ loop regions and returns those as a new array
---@return TArray_FSoundWaveCuePoint_
function USoundWave:GetCuePoints() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundWave:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USoundWave:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USoundWave:AddAssetUserDataOfClass(InUserDataClass) end

