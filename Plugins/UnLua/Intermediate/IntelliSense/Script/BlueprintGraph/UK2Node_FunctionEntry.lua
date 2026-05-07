---@class UK2Node_FunctionEntry : UK2Node_FunctionTerminator
---@field public CustomGeneratedFunctionName string @If specified, the function that is created for this entry point will have this name.  Otherwise, it will have the function signature's name
---@field public MetaData FKismetUserDeclaredFunctionMetadata @Function metadata
---@field public LocalVariables TArray<FBPVariableDescription> @Array of local variables to be added to generated function
---@field public bEnforceConstCorrectness boolean @Whether or not to enforce const-correctness for const function overrides
---@field protected ExtraFlags integer @Any extra flags that the function may need
local UK2Node_FunctionEntry = {}

