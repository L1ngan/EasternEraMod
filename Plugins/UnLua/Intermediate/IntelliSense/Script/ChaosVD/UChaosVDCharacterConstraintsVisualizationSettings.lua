---@class UChaosVDCharacterConstraintsVisualizationSettings : UChaosVDVisualizationSettingsObjectBase
---@field public bShowDebugText boolean @If true, any debug draw text available will be drawn
---@field public bAutoSelectConstraintFromSelectedParticle boolean @Color used for torque vector
---@field public DepthPriority integer @The depth priority used for while drawing data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible)
---@field public ForceScale number @Scale to apply to the force vector before draw it.
---@field public TorqueScale number @Scale to apply to the torque vector before draw it.
---@field public GeneralScale number @Scale to apply to anything that does not have a dedicated scale setting before draw it.
---@field public BaseLineThickness number @Line thickness to use as a base to calculate the different line thickness values used to debug draw the data.
---@field public NormalForceColor FColor @Color used for normal force vector
---@field public RadialForceColor FColor @Color used for radial force vector
---@field public TorqueColor FColor @Color used for torque vector
---@field private GlobalCharacterGroundConstraintDataVisualizationFlags integer @Set of flags to enable/disable visualization of specific character ground constraint data as debug draw
local UChaosVDCharacterConstraintsVisualizationSettings = {}

