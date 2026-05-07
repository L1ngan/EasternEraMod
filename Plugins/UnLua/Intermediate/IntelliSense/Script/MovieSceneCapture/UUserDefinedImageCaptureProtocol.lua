---A blueprintable capture protocol tailored to capturing and exporting frames as images
---@class UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
---@field public Format EDesiredImageFormat @The image format to save as
---@field public bEnableCompression boolean @Whether to save images with compression or not. Not supported for bitmaps.
---@field public CompressionQuality integer @The compression quality for the image type. For EXRs, 0 = Default ZIP compression, 1 = No compression, PNGs and JPEGs expect a value between 0 and 100
local UUserDefinedImageCaptureProtocol = {}

---* Generate a filename for the current frame using this protocol's file name formatter
---*
---* @@return A fully qualified file name for the current frame number
---@param PixelData FCapturedPixels
---@param StreamID FCapturedPixelsID
---@param FrameMetrics FFrameMetrics
---@param bCopyImageData boolean @[opt] 
function UUserDefinedImageCaptureProtocol:WriteImageToDisk(PixelData, StreamID, FrameMetrics, bCopyImageData) end

---* Generate a filename for the current frame using this protocol's file name formatter
---*
---* @@return A fully qualified file name for the current frame number
---@return string
function UUserDefinedImageCaptureProtocol:GenerateFilenameForCurrentFrame() end

---* Generate a filename for the specified buffer using this protocol's file name formatter
---*
---* @@param Buffer          The desired buffer to generate a filename for
---* @@param StreamID        The ID of the stream for this buffer (e.g. a composition pass name)
---* @@return A fully qualified file name
---@param Buffer UTexture
---@param StreamID FCapturedPixelsID
---@return string
function UUserDefinedImageCaptureProtocol:GenerateFilenameForBuffer(Buffer, StreamID) end

