---* FInputRayHit is returned by various hit-test interface functions.
---* Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay
---@class FInputRayHit
---@field public bHit boolean @true if ray hit something, false otherwise
---@field public HitDepth number @distance along ray at which intersection occurred
---@field public HitNormal FVector @Normal at hit point, if available
---@field public bHasHitNormal boolean @True if HitNormal was set
---@field public HitIdentifier integer @Client-defined integer identifier for hit object/element/target/etc
---@field public HitObject TWeakObjectPtr<UObject> @Client-defined pointer for UObject-derived hit owners. HitOwner and HitObject should be set to the same pointer if the HitOwner derives from UObject.
local FInputRayHit = {}
