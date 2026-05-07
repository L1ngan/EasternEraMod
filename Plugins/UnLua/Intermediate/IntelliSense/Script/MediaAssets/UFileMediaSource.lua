---@class UFileMediaSource : UBaseMediaSource
---@field public FilePath string @The path to the media file to be played.
---@field public PrecacheFile boolean @Load entire media file into memory and play from there (if possible).
local UFileMediaSource = {}

---Set the path to the media file that this source represents.
---Automatically converts full paths to media sources that reside in the
---Engine's or project's /Content/Movies directory into relative paths.
---@param Path string
function UFileMediaSource:SetFilePath(Path) end

