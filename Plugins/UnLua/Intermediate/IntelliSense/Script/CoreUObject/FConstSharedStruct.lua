---FConstSharedStruct is the same as the FSharedStruct but restricts the API to return a const struct type.
---A 'const FConstSharedStruct' cannot be made to point at another instance of a struct, whilst a vanilla FConstSharedStruct can.
---In either case, the struct data is immutable.
---See FSharedStruct for more information.
---@class FConstSharedStruct
local FConstSharedStruct = {}
