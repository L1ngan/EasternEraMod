---A node that pushes the camera towards a "safe position" when it is colliding with
---the environment. By default, the "safe position" is the pivot of the camera (if any)
---or the position of the player pawn.
---@class UCollisionPushCameraNode : UCameraNode
---@field public SafePosition ECollisionSafePosition @How to compute the safe position.
---@field public CustomSafePosition FVector3dCameraVariableReference @An optional camera variable to query for a safe position. If null, or if the variable isn't set, fallback to the value defined by SafePosition.
---@field public SafePositionOffset FVector3dCameraParameter @World-space offset from the target to the line trace's end.
---@field public SafePositionOffsetSpace ECollisionSafePositionOffsetSpace @What space the safe position offset should be in.
---@field public EnableCollision FBooleanCameraVariableReference @An optional boolean camera variable that specifies whether collision should be enabled. When enabled/disabled, the collision push amount will interpolate as per the PushInterpolator and PullInterpolator.
---@field public CollisionSphereRadius FFloatCameraParameter @Radius of the sphere used for collision testing.
---@field public CollisionChannel integer @Collision channel to use for the line trace.
---@field public PushInterpolator UCameraValueInterpolator @The interpolation to use when pushing the camera towards the safe position.
---@field public PullInterpolator UCameraValueInterpolator @The interpolation to use when pulling the camera back to its ideal position.
---@field public bRunAsyncCollision boolean @Whether to run the collision asynchrnously. This is better for performance, but results in collision handling being one frame late.
local UCollisionPushCameraNode = {}

