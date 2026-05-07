---A management struct containing all modules in the rig
---@class FModularRigModel
---@field public Modules TArray<FRigModuleReference>
---@field public Connections FModularRigConnections
---@field public Controller UObject
---@field public PreviousModulePaths TMap<FRigHierarchyModulePath, string> @remember what modules were called so we can recover.
local FModularRigModel = {}
