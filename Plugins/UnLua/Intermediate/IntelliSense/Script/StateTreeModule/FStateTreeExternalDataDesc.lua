---Describes an external data. The data can point to a struct or object.
---The code that handles StateTree ticking is responsible for passing in the actually data, see FStateTreeExecutionContext.
---@class FStateTreeExternalDataDesc
---@field public Struct UStruct @Class or struct of the external data.
---@field public Name string @Name of the external data. Used only for bindable external data (enforced by the schema). External data linked explicitly by the nodes (i.e. LinkExternalData) are identified only by their type since they are used for unique instance of a given type.
---@field public Handle FStateTreeExternalDataHandle @Handle/Index to the StateTreeExecutionContext data views array
---@field public Requirement EStateTreeExternalDataRequirement @Describes if the data is required or not.
---@field public ID FGuid @Unique identifier. Used only for bindable external data.
local FStateTreeExternalDataDesc = {}
