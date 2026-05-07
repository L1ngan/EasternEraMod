---/
--- Base type for state stream handles. This code is not supposed to be used directly.
--- To create your new state stream you will need a handle dedicated to that state stream. Example:
---   USTRUCT(StateStreamHandle)
---   struct FFooHandle : public FStateStreamHandle
---   {
---      GENERATED_USTRUCT_BODY()
---   };
---@class FStateStreamHandle
local FStateStreamHandle = {}
