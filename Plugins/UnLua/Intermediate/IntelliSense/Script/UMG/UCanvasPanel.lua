---The canvas panel is a designer friendly panel that allows widgets to be laid out at arbitrary
---locations, anchored and z-ordered with other children of the canvas.  The canvas is a great widget
---for manual layout, but bad when you want to procedurally just generate widgets and place them in a
---container (unless you want absolute layout).
---* Many Children
---* Absolute Layout
---* Anchors
---@class UCanvasPanel : UPanelWidget
local UCanvasPanel = {}

---@param Content UWidget
---@return UCanvasPanelSlot
function UCanvasPanel:AddChildToCanvas(Content) end

