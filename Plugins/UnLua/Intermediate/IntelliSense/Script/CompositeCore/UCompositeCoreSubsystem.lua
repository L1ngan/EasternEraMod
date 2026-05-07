---Composite subsytem used as an interface to the (private) scene view extension.
---@class UCompositeCoreSubsystem : UTickableWorldSubsystem
local UCompositeCoreSubsystem = {}

---Unregister a single primitive from compositing.
---@param InPrimitiveComponent UPrimitiveComponent
function UCompositeCoreSubsystem:UnregisterPrimitive(InPrimitiveComponent) end

---Register a single primitive for compositing.
---@param InPrimitiveComponent UPrimitiveComponent
function UCompositeCoreSubsystem:RegisterPrimitive(InPrimitiveComponent) end

