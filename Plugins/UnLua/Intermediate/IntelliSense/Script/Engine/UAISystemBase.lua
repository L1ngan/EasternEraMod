---@class UAISystemBase : UObject
---@field private AISystemClassName FSoftClassPath @List of specific AI system class to create, can be game-specific
---@field private AISystemModuleName string @Name of a module used to spawn the AI system. If not empty, this module has to implement IAISystemModule
---@field private bInstantiateAISystemOnClient boolean @Whether the AI system class should be spawned when connecting as a client
local UAISystemBase = {}

