---@class UStereoLayerShapeCylinder : UStereoLayerShape
---@field public Radius number @Radial size of the rendered stereo layer cylinder *
---@field public OverlayArc number @Arc angle for the stereo layer cylinder *
---@field public Height integer @Height of the stereo layer cylinder *
local UStereoLayerShapeCylinder = {}

---@param InRadius number
function UStereoLayerShapeCylinder:SetRadius(InRadius) end

---@param InOverlayArc number
function UStereoLayerShapeCylinder:SetOverlayArc(InOverlayArc) end

---@param InHeight integer
function UStereoLayerShapeCylinder:SetHeight(InHeight) end

