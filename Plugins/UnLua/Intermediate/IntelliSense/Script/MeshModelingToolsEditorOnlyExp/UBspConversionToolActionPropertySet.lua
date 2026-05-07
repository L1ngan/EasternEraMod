---@class UBspConversionToolActionPropertySet : UInteractiveToolPropertySet
local UBspConversionToolActionPropertySet = {}

---Select all brushes that satisfy the current settings.
function UBspConversionToolActionPropertySet:SelectAllValidBrushes() end

---Deselect any currently selected volume brushes.
function UBspConversionToolActionPropertySet:DeselectVolumes() end

---Deselect any currently selected brushes that are not valid targets given current settings.
function UBspConversionToolActionPropertySet:DeselectNonValid() end

