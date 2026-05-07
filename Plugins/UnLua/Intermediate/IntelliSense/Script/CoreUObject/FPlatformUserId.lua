---Handle that defines a local user on this platform.
---This used to be just a typedef int32 that was used interchangeably as ControllerId and LocalUserIndex.
---Moving forward these will be allocated by the platform application layer.
---Opaque struct for the FPlatformUserId struct defined in CoreMiscDefines.h
---@class FPlatformUserId
---@field private InternalId integer
local FPlatformUserId = {}
