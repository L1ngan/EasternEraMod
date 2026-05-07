---Blueprint-facing interface to a FMetasoundGenerator on a UAudioComponent.
---@class UMetasoundGeneratorHandle : UObject
local UMetasoundGeneratorHandle = {}

---Watch an output value.
---@param OutputName string
---@param OnOutputValueChanged Delegate
---@param AnalyzerName string @[opt] 
---@param AnalyzerOutputName string @[opt] 
---@return boolean
function UMetasoundGeneratorHandle:WatchOutput(OutputName, OnOutputValueChanged, AnalyzerName, AnalyzerOutputName) end

function UMetasoundGeneratorHandle:UpdateWatchers() end

---Get the CPU usage as "fraction of real time" used to render this metasound.
---NOTE: The MetasoundSource asset MUST have had its EnableRenderTiming function called
---before the metasound is started!
---@return number
function UMetasoundGeneratorHandle:GetCPUCoreUtilization() end

---Enable the profiling of the MetaSound render for this playing instance. You
---must call this before calling "GetRuntimeCPUCoreUtilization" (below) or you will just
---get 0.0 back for core utilization.
---@param Enable boolean
function UMetasoundGeneratorHandle:EnableRuntimeRenderTiming(Enable) end

---@param OnComponent UAudioComponent
---@return UMetasoundGeneratorHandle
function UMetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle(OnComponent) end

---Makes a copy of the supplied parameter pack and passes it to the MetaSoundGenerator
---for asynchronous processing. IT ALSO caches this copy so that if the AudioComponent
---is virtualized the parameter pack will be sent again when/if the AudioComponent is
---"unvirtualized".
---@param Pack UMetasoundParameterPack
---@return boolean
function UMetasoundGeneratorHandle:ApplyParameterPack(Pack) end

