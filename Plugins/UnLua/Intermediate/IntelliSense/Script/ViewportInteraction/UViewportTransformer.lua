---@class UViewportTransformer : UObject
---@field protected ViewportWorldInteraction UViewportWorldInteraction @The viewport world interaction object we're registered with
local UViewportTransformer = {}

function UViewportTransformer:Shutdown() end

---
---@return boolean
function UViewportTransformer:ShouldCenterTransformGizmoPivot() end

---When ending drag
---@param Interactor UViewportInteractor
function UViewportTransformer:OnStopDragging(Interactor) end

---When starting to drag
---@param Interactor UViewportInteractor
function UViewportTransformer:OnStartDragging(Interactor) end

---@param InitViewportWorldInteraction UViewportWorldInteraction
function UViewportTransformer:Init(InitViewportWorldInteraction) end

---
---@return boolean
function UViewportTransformer:CanAlignToActors() end

