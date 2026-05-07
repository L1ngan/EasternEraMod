---@class FRigVMFunctionCompilationPropertyDescription
---@field public Name string @The name of the property to create
---@field public CPPType string @The complete CPP type to base a new property off of (for ex: 'TArray<TArray<FVector>>')
---@field public CPPTypeObject TSoftObjectPtr<UObject> @The tail CPP Type object, for example the UScriptStruct for a struct
---@field public DefaultValue string @The default value to use for this property (for example: '(((X=1.000000, Y=2.000000, Z=3.000000)))')
local FRigVMFunctionCompilationPropertyDescription = {}
