---@class UNiagaraBakerSettings : UObject
---@field public StartSeconds number @This is the start time of the simulation where we begin the capture. I.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing.
---@field public DurationSeconds number @Duration in seconds to take the capture over.
---@field public FramesPerSecond integer @The frame rate to run the simulation at during capturing. This is only used for the preview view and calculating the number of ticks to execute as we capture the generated texture.
---@field public bLockToSimulationFrameRate boolean @Locks the playback to the simulation frame rate, i.e. no multi-tick.
---@field public bPreviewLooping boolean @Should the preview playback as looping or not.
---@field public FramesPerDimension FIntPoint @Number of frames in each dimension.
---@field public Outputs TArray<UNiagaraBakerOutput> @Array of outputs for the baker to generate.
---@field public CameraSettings TArray<FNiagaraBakerCameraSettings> @Camera Settings, will always be at least ENiagaraBakerViewMode::Num elements and those are fixed cameras.
---@field public CurrentCameraIndex integer @Active camera that we were saved with
---@field public BakeQualityLevel string @What quality level to use when baking the simulation, where None means use the current quality level.
---@field public bRenderComponentOnly boolean @Should we render just the component or the whole scene.
---@field public bPreviewLoopedOutput boolean @Should we preview the baked looped simulation if it has been generated, or the full baked sim
local UNiagaraBakerSettings = {}

