---Simplified UStruct version of FParticleMassProps.
---Used to be able to show the values in the editor and allow changes via the Property Editor.
---@class FChaosVDParticleMassProps : FChaosVDWrapperDataBase
---@field public MCenterOfMass FVector
---@field public MRotationOfMass FQuat
---@field public MI FVector
---@field public MInvI FVector
---@field public MM number
---@field public MInvM number
local FChaosVDParticleMassProps = {}
