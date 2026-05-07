---@class FMediaPlayerRecordingSettings
---@field public bActive boolean @Whether this MediaPlayer is active and its event will be recorded when the 'Record' button is pressed.
---@field public bRecordMediaFrame boolean @Whether this MediaPlayer is active and the image frame will be recorded when the 'Record' button is pressed.
---@field public BaseFilename string @How to name each frame.
---@field public NumerationStyle EMediaPlayerRecordingNumerationStyle @How to numerate the filename.
---@field public ImageFormat EMediaPlayerRecordingImageFormat @The image format we wish to record to.
---@field public CompressionQuality integer @An image format specific compression setting. For EXRs, either 0 (Default) or 1 (Uncompressed) For PNGs & JPEGs, 0 (Default) or a value between 1 (worst quality, best compression) and 100 (best quality, worst compression)
---@field public bResetAlpha boolean @If the format support it, set the alpha to 1 (or 255).
local FMediaPlayerRecordingSettings = {}
