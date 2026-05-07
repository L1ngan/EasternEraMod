---A management struct containing graphs and controllers.
---@class FRigVMClient
---@field private DefaultSchemaClass TSubclassOf<URigVMSchema>
---@field private ControllerClass TSubclassOf<URigVMController>
---@field private Models TArray<URigVMGraph>
---@field private FunctionLibrary URigVMFunctionLibrary
---@field private Controllers TMap<FSoftObjectPath, URigVMController>
---@field private ActionStack URigVMActionStack
---@field private UndoRedoIndex integer
local FRigVMClient = {}
