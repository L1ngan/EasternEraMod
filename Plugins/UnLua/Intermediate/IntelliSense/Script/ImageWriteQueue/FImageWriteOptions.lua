---Options specific to writing image files to disk
---@class FImageWriteOptions
---@field public Format EDesiredImageFormat @The desired output image format to write to disk
---@field public OnComplete Delegate @A callback to invoke when the image has been written, or there was an error
---@field public CompressionQuality integer @An image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100.
---@field public bOverwriteFile boolean @Whether to overwrite the image if it already exists
---@field public bAsync boolean @Whether to perform the writing asynchronously, or to block the game thread until it is complete
local FImageWriteOptions = {}
