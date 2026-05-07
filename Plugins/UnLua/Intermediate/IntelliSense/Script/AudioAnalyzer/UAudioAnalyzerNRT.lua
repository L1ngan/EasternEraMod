---UAudioAnalyzerNRT
---UAudioAnalyzerNRT applies an analyzer to a sound using specific settings, stores the
---results and exposes them via blueprints.
---Subclasses of UAudioAnalyzerNRT must implement GetAnalyzerNRTFactoryName() to associate
---the UAudioAnalyzerNRT with an IAudioAnalyzerNRTFactory implementation.
---To support blueprint access, subclasses can implement UFUNCTIONs to expose the data
---returned by GetResult().
---@class UAudioAnalyzerNRT : UAudioAnalyzerAssetBase
---@field public Sound USoundWave @The USoundWave which is analyzed.
---@field public DurationInSeconds number @The duration of the analyzed audio in seconds.
local UAudioAnalyzerNRT = {}

---Performs the analaysis of the audio
function UAudioAnalyzerNRT:AnalyzeAudio() end

