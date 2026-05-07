---These are properties that do not get enabled/disabled based on the action
---@class UPolyEditCommonProperties : UInteractiveToolPropertySet
---@field public bShowWireframe boolean
---@field public bShowSelectableCorners boolean
---@field public bGizmoVisible boolean @When true, allows the transform gizmo to be rendered
---@field public LocalFrameMode ELocalFrameMode @Determines whether, on selection changes, the gizmo's rotation is taken from the object transform, or from the geometry        elements selected. Only relevant with a local coordinate system and when rotation is not locked.
---@field public bLockRotation boolean @When true, keeps rotation of gizmo constant through selection changes and manipulations        (but not middle-click repositions). Only active with a local coordinate system.
---@field public bLocalCoordSystem boolean @This gets updated internally so that properties can respond to whether the coordinate system is set to local or global
local UPolyEditCommonProperties = {}

