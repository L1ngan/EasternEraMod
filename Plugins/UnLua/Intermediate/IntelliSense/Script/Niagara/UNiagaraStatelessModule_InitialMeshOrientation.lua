---Set the initial mesh orientation, directly, randomly or by orienting by axis
---@class UNiagaraStatelessModule_InitialMeshOrientation : UNiagaraStatelessModule
---@field public MeshOrientationMode ENSMInitialMeshOrientationMode
---@field public OrientationVector FNiagaraDistributionRangeVector3 @Establish an initial orientation around which to yaw, pitch, or roll. Can be overriden with any vector, for instance the normalized velocity vector, to accomplish more elaborate behavior.
---@field public MeshAxisToOrient FNiagaraDistributionRangeVector3 @This represents the Axis on which the model was first imported from your DCC package. This vector is then rotated in the direction of the Orientation Vector input. If your mesh was imported on a different axis than X forward, you can change it here.
---@field public Rotation FNiagaraDistributionRangeVector3 @Rotation in Degrees, this is applied after any other orientation is calculated and in the space of that orientation
local UNiagaraStatelessModule_InitialMeshOrientation = {}

