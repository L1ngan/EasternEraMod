---This will be used to preserve values as far as possible when switching between analysis functions, so it contains all
---the parameters used by the engine functions. User defined can inherit from this and add their own - then the
---user-defined MakeCache function should replace any base class cache that is passed in with their own.
---@class UCachedAnalysisProperties : UObject
local UCachedAnalysisProperties = {}

