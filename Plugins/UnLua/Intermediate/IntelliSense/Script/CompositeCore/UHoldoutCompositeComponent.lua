---@class UHoldoutCompositeComponent : USceneComponent
---@field private bIsEnabled boolean @Whether or not the component activates the composite.
local UHoldoutCompositeComponent = {}

---Set the enabled state of the component.
---@param bInEnabled boolean
function UHoldoutCompositeComponent:SetEnabled(bInEnabled) end

---Get the enabled state of the component.
---@return boolean
function UHoldoutCompositeComponent:IsEnabled() end

