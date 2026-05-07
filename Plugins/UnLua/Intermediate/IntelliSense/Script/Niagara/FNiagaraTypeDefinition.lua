---@class FNiagaraTypeDefinition
---@field public ClassStructOrEnum UObject @Underlying type for this variable, use FUnderlyingType to determine type without casting This can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc. In occasional situations this may be a UClass when we're dealing with DataInterface etc.
---@field public UnderlyingType integer @See enumeration FUnderlyingType for possible values
---@field private Flags integer
local FNiagaraTypeDefinition = {}
