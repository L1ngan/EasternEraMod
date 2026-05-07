---Class responsible for capturing scene data
---@class UMovieSceneCapture : UObject
---@field public ImageCaptureProtocolType FSoftClassPath @The type of capture protocol to use for image data
---@field public AudioCaptureProtocolType FSoftClassPath @The type of capture protocol to use for audio data.
---@field public ImageCaptureProtocol UMovieSceneImageCaptureProtocolBase @Capture protocol responsible for actually capturing frame data
---@field public AudioCaptureProtocol UMovieSceneAudioCaptureProtocolBase
---@field public Settings FMovieSceneCaptureSettings @Settings that define how to capture
---@field public bUseSeparateProcess boolean @Whether to capture the movie in a separate process or not
---@field public bCloseEditorWhenCaptureStarts boolean @When enabled, the editor will shutdown when the capture starts
---@field public AdditionalCommandLineArguments string @Additional command line arguments to pass to the external process when capturing
---@field public InheritedCommandLineArguments string @Command line arguments inherited from this process
local UMovieSceneCapture = {}

---@param ProtocolType TSubclassOf_UMovieSceneCaptureProtocolBase_
function UMovieSceneCapture:SetImageCaptureProtocolType(ProtocolType) end

---@param ProtocolType TSubclassOf_UMovieSceneCaptureProtocolBase_
function UMovieSceneCapture:SetAudioCaptureProtocolType(ProtocolType) end

---Access the capture protocol we are using
---@return UMovieSceneCaptureProtocolBase
function UMovieSceneCapture:GetImageCaptureProtocol() end

---@return UMovieSceneCaptureProtocolBase
function UMovieSceneCapture:GetAudioCaptureProtocol() end

