---Data about the floor for walking movement, used by CharacterMovementComponent.
---@class FFindFloorResult
---@field public bBlockingHit boolean @True if there was a blocking hit in the floor test that was NOT in initial penetration. The HitResult can give more info about other circumstances.
---@field public bWalkableFloor boolean @True if the hit found a valid walkable floor.
---@field public bLineTrace boolean @True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface).
---@field public FloorDist number @The distance to the floor, computed from the swept capsule trace.
---@field public LineDist number @The distance to the floor, computed from the trace. Only valid if bLineTrace is true.
---@field public HitResult FHitResult @Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point.
local FFindFloorResult = {}
