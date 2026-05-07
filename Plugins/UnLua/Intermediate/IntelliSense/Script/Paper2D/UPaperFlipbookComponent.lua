---@class UPaperFlipbookComponent : UMeshComponent
---@field protected SourceFlipbook UPaperFlipbook @Flipbook currently being played
---@field protected PlayRate number @Current play rate of the flipbook
---@field protected bLooping boolean @Whether the flipbook should loop when it reaches the end, or stop
---@field protected bReversePlayback boolean @If playback should move the current position backwards instead of forwards
---@field protected bPlaying boolean @Are we currently playing (moving Position)
---@field protected AccumulatedTime number @Current position in the timeline
---@field protected CachedFrameIndex integer @Last frame index calculated
---@field protected SpriteColor FLinearColor @Vertex color to apply to the frames
---@field protected CachedBodySetup UBodySetup @The cached body setup
---@field public OnFinishedPlaying MulticastDelegate @Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction)
local UPaperFlipbookComponent = {}

---Stop playback of flipbook
function UPaperFlipbookComponent:Stop() end

---Set color of the sprite
---@param NewColor FLinearColor
function UPaperFlipbookComponent:SetSpriteColor(NewColor) end

---Sets the new play rate for this flipbook
---@param NewRate number
function UPaperFlipbookComponent:SetPlayRate(NewRate) end

---Jump to a position in the flipbook (expressed in frames). If bFireEvents is true, event functions will fire, otherwise they will not.
---@param NewFramePosition integer
---@param bFireEvents boolean
function UPaperFlipbookComponent:SetPlaybackPositionInFrames(NewFramePosition, bFireEvents) end

---Jump to a position in the flipbook (expressed in seconds). If bFireEvents is true, event functions will fire, otherwise they will not.
---@param NewPosition number
---@param bFireEvents boolean
function UPaperFlipbookComponent:SetPlaybackPosition(NewPosition, bFireEvents) end

---Set the new playback position time to use
---@param NewTime number
function UPaperFlipbookComponent:SetNewTime(NewTime) end

---true means we should loop, false means we should not.
---@param bNewLooping boolean
function UPaperFlipbookComponent:SetLooping(bNewLooping) end

---Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook).
---@param NewFlipbook UPaperFlipbook
---@return boolean
function UPaperFlipbookComponent:SetFlipbook(NewFlipbook) end

---Start playback of flipbook in reverse from the end
function UPaperFlipbookComponent:ReverseFromEnd() end

---Start playback of flipbook in reverse
function UPaperFlipbookComponent:Reverse() end

---Start playback of flipbook from the start
function UPaperFlipbookComponent:PlayFromStart() end

---Start playback of flipbook
function UPaperFlipbookComponent:Play() end

---@param OldFlipbook UPaperFlipbook
function UPaperFlipbookComponent:OnRep_SourceFlipbook(OldFlipbook) end

---Get whether we are reversing or not
---@return boolean
function UPaperFlipbookComponent:IsReversing() end

---Get whether this flipbook is playing or not.
---@return boolean
function UPaperFlipbookComponent:IsPlaying() end

---Get whether we are looping or not
---@return boolean
function UPaperFlipbookComponent:IsLooping() end

---Returns the current color of the sprite
---@return FLinearColor
function UPaperFlipbookComponent:GetSpriteColor() end

---Get the current play rate for this flipbook
---@return number
function UPaperFlipbookComponent:GetPlayRate() end

---Get the current playback position (in frames) of the flipbook
---@return integer
function UPaperFlipbookComponent:GetPlaybackPositionInFrames() end

---Get the current playback position (in seconds) of the flipbook
---@return number
function UPaperFlipbookComponent:GetPlaybackPosition() end

---Get length of the flipbook (in frames)
---@return integer
function UPaperFlipbookComponent:GetFlipbookLengthInFrames() end

---Get length of the flipbook (in seconds)
---@return number
function UPaperFlipbookComponent:GetFlipbookLength() end

---Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second
---@return number
function UPaperFlipbookComponent:GetFlipbookFramerate() end

---Gets the flipbook used by this instance.
---@return UPaperFlipbook
function UPaperFlipbookComponent:GetFlipbook() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperFlipbookComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPaperFlipbookComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperFlipbookComponent:AddAssetUserDataOfClass(InUserDataClass) end

