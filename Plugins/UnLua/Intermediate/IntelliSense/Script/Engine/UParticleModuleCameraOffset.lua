---@class UParticleModuleCameraOffset : UParticleModuleCameraBase
---@field public CameraOffset FRawDistributionFloat @The camera-relative offset to apply to sprite location
---@field public bSpawnTimeOnly boolean @If true, the offset will only be processed at spawn time
---@field public UpdateMethod integer @How to update the offset for this module. DirectSet - Set the value directly (overwrite any previous setting) Additive  - Add the offset of this module to the existing offset Scalar    - Scale the existing offset by the value of this module
local UParticleModuleCameraOffset = {}

