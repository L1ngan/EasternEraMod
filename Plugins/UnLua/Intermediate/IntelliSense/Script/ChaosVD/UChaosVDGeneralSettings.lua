---General settings that controls how CVD behaves
---@class UChaosVDGeneralSettings : UChaosVDSettingsObjectBase
---@field public bTrimEmptyFrames boolean @If true, CVD will only load frames that have solver data in them - Only takes effect before loading a file
---@field public MaxGameThreadFramesToQueueNum integer @How many Game thread frames CVD should queue internally before making them available in the visualization and timeline controls - Only takes effect before loading a file
---@field public bStreamingSystemEnabled boolean @If true, CVD will only load collision geometry that is visible
---@field public StreamingBoxExtentSize number @Extent size of the box used for calculate what should be streamed in
---@field public bProcessPendingOperationsQueueInWorkerThread boolean @If set to true CVD will process any updates to the streaming accel structure in worker threads, in between streaming updates
---@field public bUpdateSceneOutlinerDuringPlayback boolean @If set to true CVD will keep the scene outliner up to date as the recording is played. If during the recording a significant amount of objects are loaded/unloaded, the performance impact will be significant enough to degrade the playback stability.
---@field public MaxConnectionRetries integer @How many times CVD will attempt to connect to a live trace or load from file session if the first attempt failed
local UChaosVDGeneralSettings = {}

