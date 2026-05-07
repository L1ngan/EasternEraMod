---UAudioAnalyzer
---UAudioAnalyzer performs analysis on an audio bus using specific settings and exposes the results via blueprints.
---Subclasses of UAudioAnalyzer must implement GetAnalyzerFactoryName() to associate
---the UAudioAnalyzer asset with an IAudioAnalyzerFactory implementation.
---To support blueprint access, subclasses can implement UFUNCTIONs to expose the data
---returned by GetResult().
---@class UAudioAnalyzer : UObject
---@field public AudioBus UAudioBus @The UAudioBus which is analyzed in real-time.
---@field private AudioAnalyzerSubsystem UAudioAnalyzerSubsystem @Audio analysis subsystem used with this audio analyzer
local UAudioAnalyzer = {}

---Stops analyzing audio.
---@param WorldContextObject UObject @[opt] 
function UAudioAnalyzer:StopAnalyzing(WorldContextObject) end

---Starts analyzing audio from the given audio bus. Optionally override the audio bus desired to analyze.
---@param WorldContextObject UObject
---@param AudioBusToAnalyze UAudioBus
function UAudioAnalyzer:StartAnalyzing(WorldContextObject, AudioBusToAnalyze) end

