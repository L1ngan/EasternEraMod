---Contains an animation sequence of sprite frames
---@class UPaperFlipbook : UObject
---@field protected FramesPerSecond number @The nominal frame rate to play this flipbook animation back at
---@field protected KeyFrames TArray<FPaperFlipbookKeyFrame> @The set of key frames for this flipbook animation (each one has a duration and a sprite to display)
---@field protected DefaultMaterial UMaterialInterface @The material to use on a flipbook player instance if not overridden
---@field protected CollisionSource integer @Collision source
local UPaperFlipbook = {}

---Is the specified Index within the valid range of key frames?
---@param Index integer
---@return boolean
function UPaperFlipbook:IsValidKeyFrameIndex(Index) end

---Returns the total duration in seconds
---@return number
function UPaperFlipbook:GetTotalDuration() end

---Returns the sprite at the specified time (in seconds), or nullptr if none exists.
---When bClampToEnds is true, it will choose the first or last sprite if the time is out of range.
---@param Time number
---@param bClampToEnds boolean @[opt] 
---@return UPaperSprite
function UPaperFlipbook:GetSpriteAtTime(Time, bClampToEnds) end

---Returns the sprite at the specified keyframe index, or nullptr if none exists
---@param FrameIndex integer
---@return UPaperSprite
function UPaperFlipbook:GetSpriteAtFrame(FrameIndex) end

---Returns the number of key frames
---@return integer
function UPaperFlipbook:GetNumKeyFrames() end

---Returns the total number of frames
---@return integer
function UPaperFlipbook:GetNumFrames() end

---Returns the keyframe index that covers the specified time (in seconds), or INDEX_NONE if none exists.
---When bClampToEnds is true, it will choose the first or last keyframe if the time is out of range.
---@param Time number
---@param bClampToEnds boolean @[opt] 
---@return integer
function UPaperFlipbook:GetKeyFrameIndexAtTime(Time, bClampToEnds) end

