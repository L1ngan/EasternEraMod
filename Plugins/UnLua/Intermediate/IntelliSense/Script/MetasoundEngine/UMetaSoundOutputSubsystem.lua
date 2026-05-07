---Provides access to a playing Metasound generator's outputs
---@class UMetaSoundOutputSubsystem : UWorldSubsystem
local UMetaSoundOutputSubsystem = {}

---Watch an output on a Metasound playing on a given audio component.
---@param AudioComponent UAudioComponent
---@param OutputName string
---@param OnOutputValueChanged Delegate
---@param AnalyzerName string @[opt] 
---@param AnalyzerOutputName string @[opt] 
---@return boolean
function UMetaSoundOutputSubsystem:WatchOutput(AudioComponent, OutputName, OnOutputValueChanged, AnalyzerName, AnalyzerOutputName) end

---@param AudioComponent UAudioComponent
---@param OutputName string
---@param OnOutputValueChanged Delegate
---@param AnalyzerName string @[opt] 
---@param AnalyzerOutputName string @[opt] 
---@return boolean
function UMetaSoundOutputSubsystem:UnwatchOutput(AudioComponent, OutputName, OnOutputValueChanged, AnalyzerName, AnalyzerOutputName) end

