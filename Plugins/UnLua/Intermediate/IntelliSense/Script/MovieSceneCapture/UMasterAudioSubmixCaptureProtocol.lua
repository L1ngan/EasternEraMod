---This is an experimental audio capture implementation which captures the final output from the master submix.
---This requires that your sequence can be played back in real-time (when rendering is disabled).
---If the sequence evaluation hitches the audio will become desynchronized due to their being more time passed
---in real time (platform time) than in the sequence itself.
---@class UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
---@field protected FileName string
local UMasterAudioSubmixCaptureProtocol = {}

