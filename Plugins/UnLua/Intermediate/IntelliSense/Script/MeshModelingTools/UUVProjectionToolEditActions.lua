---@class UUVProjectionToolEditActions : UInteractiveToolPropertySet
local UUVProjectionToolEditActions = {}

---Re-initialize the projection based on the UV Projection Initialization property
function UUVProjectionToolEditActions:Reset() end

---Automatically orient the projection and then automatically fit the UV Projection Dimensions
function UUVProjectionToolEditActions:AutoFitAlign() end

---Automatically fit the UV Projection Dimensions based on the current projection orientation
function UUVProjectionToolEditActions:AutoFit() end

