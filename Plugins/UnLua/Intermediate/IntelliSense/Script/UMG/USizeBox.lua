---A widget that allows you to specify the size it reports to have and desire.  Not all widgets report a desired size
---that you actually desire.  Wrapping them in a SizeBox lets you have the Size Box force them to be a particular size.
---* Single Child
---* Fixed Size
---@class USizeBox : UContentWidget
---@field public WidthOverride number @When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width.
---@field public HeightOverride number @When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height.
---@field public MinDesiredWidth number @When specified, will report the MinDesiredWidth if larger than the content's desired width.
---@field public MinDesiredHeight number @When specified, will report the MinDesiredHeight if larger than the content's desired height.
---@field public MaxDesiredWidth number @When specified, will report the MaxDesiredWidth if smaller than the content's desired width.
---@field public MaxDesiredHeight number @When specified, will report the MaxDesiredHeight if smaller than the content's desired height.
---@field public MinAspectRatio number
---@field public MaxAspectRatio number
---@field public bOverride_WidthOverride boolean
---@field public bOverride_HeightOverride boolean
---@field public bOverride_MinDesiredWidth boolean
---@field public bOverride_MinDesiredHeight boolean
---@field public bOverride_MaxDesiredWidth boolean
---@field public bOverride_MaxDesiredHeight boolean
---@field public bOverride_MinAspectRatio boolean
---@field public bOverride_MaxAspectRatio boolean
local USizeBox = {}

---When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width.
---@param InWidthOverride number
function USizeBox:SetWidthOverride(InWidthOverride) end

---When specified, will report the MinDesiredWidth if larger than the content's desired width.
---@param InMinDesiredWidth number
function USizeBox:SetMinDesiredWidth(InMinDesiredWidth) end

---When specified, will report the MinDesiredHeight if larger than the content's desired height.
---@param InMinDesiredHeight number
function USizeBox:SetMinDesiredHeight(InMinDesiredHeight) end

---@param InMinAspectRatio number
function USizeBox:SetMinAspectRatio(InMinAspectRatio) end

---When specified, will report the MaxDesiredWidth if smaller than the content's desired width.
---@param InMaxDesiredWidth number
function USizeBox:SetMaxDesiredWidth(InMaxDesiredWidth) end

---When specified, will report the MaxDesiredHeight if smaller than the content's desired height.
---@param InMaxDesiredHeight number
function USizeBox:SetMaxDesiredHeight(InMaxDesiredHeight) end

---@param InMaxAspectRatio number
function USizeBox:SetMaxAspectRatio(InMaxAspectRatio) end

---When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height.
---@param InHeightOverride number
function USizeBox:SetHeightOverride(InHeightOverride) end

function USizeBox:ClearWidthOverride() end

function USizeBox:ClearMinDesiredWidth() end

function USizeBox:ClearMinDesiredHeight() end

function USizeBox:ClearMinAspectRatio() end

function USizeBox:ClearMaxDesiredWidth() end

function USizeBox:ClearMaxDesiredHeight() end

function USizeBox:ClearMaxAspectRatio() end

function USizeBox:ClearHeightOverride() end

