---The tool target manager converts input objects into tool targets- objects that
---can expose various interfaces that tools need to operate on them.
---Someday, the tool target manager may implement caching of targets.
---See the class comment for UToolTarget for more info.
---@class UToolTargetManager : UObject
---@field protected Factories TArray<UToolTargetFactory>
local UToolTargetManager = {}

