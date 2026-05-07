---FStateTreeBlueprintPropertyRef is a PropertyRef intended to be used in State Tree Blueprint nodes like tasks, conditions or evaluators, but also as a StateTree parameter.
---@class FStateTreeBlueprintPropertyRef : FStateTreePropertyRef
---@field private RefType EStateTreePropertyRefType @Specifies the type of property to reference
---@field private bIsRefToArray boolean @If specified, the reference is to an TArray<RefType>
---@field private bIsOptional boolean @If specified, the reference can be left unbound, otherwise the State Tree compiler report error if the reference is not bound.
---@field private TypeObject UObject @Specifies the type of property to reference together with RefType, used for Enums, Structs, Objects and Classes.
local FStateTreeBlueprintPropertyRef = {}
