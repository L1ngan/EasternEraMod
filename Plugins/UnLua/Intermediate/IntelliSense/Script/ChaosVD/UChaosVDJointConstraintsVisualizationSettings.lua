---@class UChaosVDJointConstraintsVisualizationSettings : UChaosVDVisualizationSettingsObjectBase
---@field public bShowDebugText boolean @If true, any debug draw text available will be drawn
---@field public DepthPriority integer @The depth priority used for while drawing data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible)
---@field public LinearImpulseScale number @Scale to apply to the Linear Impulse vector before draw it.
---@field public AngularImpulseScale number @Scale to apply to the Angular Impulse vector before draw it.
---@field public GeneralScale number @Scale to apply to anything that does not have a dedicated scale setting before draw it.
---@field public BaseLineThickness number @Line thickness to use as a base to calculate the different line thickness values used to debug draw the data.
---@field public CenterOfMassSize number @Size of the debug drawn Center Of Mass.
---@field public ConstraintAxisLength number @Size of the debug drawn if the Constraint Axis
---@field private GlobalJointsDataVisualizationFlags integer @Set of flags to enable/disable visualization of specific joint constraints data as debug draw
local UChaosVDJointConstraintsVisualizationSettings = {}

