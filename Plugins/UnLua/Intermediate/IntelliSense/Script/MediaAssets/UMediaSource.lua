---Abstract base class for media sources.
---Media sources describe the location and/or settings of media objects that can
---be played in a media player, such as a video file on disk, a video stream on
---the internet, or a web cam attached to or built into the target device. The
---location is encoded as a media URL string, whose URI scheme and optional file
---extension will be used to locate a suitable media player.
---@class UMediaSource : UObject
---@field private ThumbnailImage UTexture @The thumbnail image.
---@field private MediaSourceRenderer UObject @Renders thumnbnails for us.
local UMediaSource = {}

---Validate the media source settings (must be implemented in child classes).
---@return boolean
function UMediaSource:Validate() end

---Set a string parameter to pass to the player.
---@param Key string
---@param Value string
function UMediaSource:SetMediaOptionString(Key, Value) end

---Set an integer64 parameter to pass to the player.
---@param Key string
---@param Value integer
function UMediaSource:SetMediaOptionInt64(Key, Value) end

---Set a float parameter to pass to the player.
---@param Key string
---@param Value number
function UMediaSource:SetMediaOptionFloat(Key, Value) end

---Set a boolean parameter to pass to the player.
---@param Key string
---@param Value boolean
function UMediaSource:SetMediaOptionBool(Key, Value) end

---Get the media source's URL string (must be implemented in child classes).
---@return string
function UMediaSource:GetUrl() end

