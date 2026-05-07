---This is a Chaos spatial acceleration payload that can be used for spatial acceleration structures that are meant to only be used
---in external contexts. This provides safety as we aren't holding particle handles directly but rather going through the primitive component's
---physics object interface to grab them when needed.
---@class FExternalSpatialAccelerationPayload
local FExternalSpatialAccelerationPayload = {}
