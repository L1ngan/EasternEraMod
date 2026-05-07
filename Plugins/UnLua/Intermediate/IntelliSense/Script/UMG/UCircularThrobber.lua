---A throbber widget that orients images in a spinning circle.
---* No Children
---* Spinner Progress
---@class UCircularThrobber : UWidget
---@field public NumberOfPieces integer @How many pieces there are
---@field public Period number @The amount of time for a full circle (in seconds)
---@field public Radius number @The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius.
---@field public Image FSlateBrush @The throbber image.
---@field private bEnableRadius boolean
local UCircularThrobber = {}

---Sets the radius of the circle.
---@param InRadius number
function UCircularThrobber:SetRadius(InRadius) end

---Sets the amount of time for a full circle (in seconds).
---@param InPeriod number
function UCircularThrobber:SetPeriod(InPeriod) end

---Sets how many pieces there are.
---@param InNumberOfPieces integer
function UCircularThrobber:SetNumberOfPieces(InNumberOfPieces) end

