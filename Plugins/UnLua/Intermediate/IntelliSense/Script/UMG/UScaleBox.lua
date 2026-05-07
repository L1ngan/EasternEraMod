---Allows you to place content with a desired size and have it scale to meet the constraints placed on this box's alloted area.  If
---you needed to have a background image scale to fill an area but not become distorted with different aspect ratios, or if you need
---to auto fit some text to an area, this is the control for you.
---* Single Child
---* Aspect Ratio
---@class UScaleBox : UContentWidget
---@field public Stretch integer @The stretching rule to apply when content is stretched
---@field public StretchDirection integer @Controls in what direction content can be scaled
---@field public UserSpecifiedScale number @Optional scale that can be specified by the User. Used only for UserSpecified stretching.
---@field public IgnoreInheritedScale boolean @Optional bool to ignore the inherited scale. Applies inverse scaling to counteract parents before applying the local scale operation.
local UScaleBox = {}

---@param InUserSpecifiedScale number
function UScaleBox:SetUserSpecifiedScale(InUserSpecifiedScale) end

---@param InStretchDirection integer
function UScaleBox:SetStretchDirection(InStretchDirection) end

---@param InStretch integer
function UScaleBox:SetStretch(InStretch) end

---@param bInIgnoreInheritedScale boolean
function UScaleBox:SetIgnoreInheritedScale(bInIgnoreInheritedScale) end

