---A Throbber widget that shows several zooming circles in a row.
---@class UThrobber : UWidget
---@field public NumberOfPieces integer @How many pieces there are
---@field public bAnimateHorizontally boolean @Should the pieces animate horizontally?
---@field public bAnimateVertically boolean @Should the pieces animate vertically?
---@field public bAnimateOpacity boolean @Should the pieces animate their opacity?
---@field public Image FSlateBrush @The animated pieces.
local UThrobber = {}

---Sets how many pieces there are
---@param InNumberOfPieces integer
function UThrobber:SetNumberOfPieces(InNumberOfPieces) end

---Sets whether the pieces animate vertically.
---@param bInAnimateVertically boolean
function UThrobber:SetAnimateVertically(bInAnimateVertically) end

---Sets whether the pieces animate their opacity.
---@param bInAnimateOpacity boolean
function UThrobber:SetAnimateOpacity(bInAnimateOpacity) end

---Sets whether the pieces animate horizontally.
---@param bInAnimateHorizontally boolean
function UThrobber:SetAnimateHorizontally(bInAnimateHorizontally) end

