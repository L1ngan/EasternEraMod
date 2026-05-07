---Base class for anim details proxies.
---Anim details proxies can handle a property bound in sequencer, and the related controls if the bound object uses a control rig.
---This is a rewrite of what was previously UControlRigControlsProxy in ControlRigEditor/Private/EditMode/ControlRigControlsProxy.h.
---@class UAnimDetailsProxyBase : UObject
---@field public DisplayName string @An overrideable display name for the control
---@field public Shape FRigUnit_HierarchyAddControl_ShapeSettings @Overrideable shape settings for the control
local UAnimDetailsProxyBase = {}

