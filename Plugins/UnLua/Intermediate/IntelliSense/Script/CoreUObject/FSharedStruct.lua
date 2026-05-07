---FSharedStruct works similarly as a TSharedPtr<FInstancedStruct> but avoids the double pointer indirection.
---(One pointer for the FInstancedStruct and one pointer for the struct memory it is wrapping).
---Also note that because of its implementation, it is not possible for now to go from a struct reference or struct view back to a shared struct.
---This struct type is also convertible to a FStructView / FConstStructView, and like FInstancedStruct, it is the preferable way of passing it as a parameter.
---If the calling code would like to keep a shared pointer to the struct, you may pass the FSharedStruct as a parameter, but it is recommended to pass it as
---a "const FSharedStruct&" to limit the unnecessary recounting.
---A 'const FSharedStruct' cannot be made to point at another instance of a struct, whilst a vanilla FSharedStruct can.
---In either case, the shared struct memory /data is mutable.
---@class FSharedStruct
local FSharedStruct = {}
