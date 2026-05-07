---@class UChaosVDParticleVisualizationDebugDrawSettings : UChaosVDVisualizationSettingsObjectBase
---@field public bShowDebugText boolean
---@field public DepthPriority integer @The depth priority used for while drawing contact data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible)
---@field public VelocityScale number @Scale to apply to the Velocity vector before draw it. Unit is cm/s
---@field public AngularVelocityScale number @Scale to apply to the Angular Velocity vector before draw it. Unit is rad/s
---@field public AccelerationScale number @Scale to apply to the Acceleration vector before draw it. Unit is cm/s2
---@field public AngularAccelerationScale number @Scale to apply to the Angular Acceleration vector before draw it. Unit is rad/s2
---@field public LinearImpulseScale number @Scale to apply to the Linear Impulse vector before draw it. Unit is g.m/s
---@field public AngularImpulseScale number @Scale to apply to the Angular Impulse vector before draw it. Unit is g.m2/s
---@field public CenterOfMassRadius number @Radius to use when creating the sphere that will represent the center of mass location
---@field public bDrawTriMeshBVH boolean @Should a triangle mesh's BVH draw.
---@field public TriMeshBVHDrawLevel integer @What depth of a triangle mesh's BVH to draw. Level '-1' means draw everything.
---@field public ColorSettings FChaosParticleDataDebugDrawColors
---@field private ParticleDataVisualizationFlags integer @Set of flags to enable/disable visualization of specific particle data as debug draw
local UChaosVDParticleVisualizationDebugDrawSettings = {}

