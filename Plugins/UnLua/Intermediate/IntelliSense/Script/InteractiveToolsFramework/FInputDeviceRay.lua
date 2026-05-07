---FInputDeviceRay represents a 3D ray created based on an input device.
---If the device is a 2D input device like a mouse, then the ray may
---have an associated 2D screen position.
---@class FInputDeviceRay
---@field public WorldRay FRay @3D ray in 3D scene, in world coordinates
---@field public bHas2D boolean @If true, WorldRay has 2D device position coordinates
---@field public ScreenPosition FVector2D @2D device position coordinates associated with the ray
local FInputDeviceRay = {}
