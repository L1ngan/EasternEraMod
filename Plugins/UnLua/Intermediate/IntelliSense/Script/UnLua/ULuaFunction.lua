---@class ULuaFunction : UFunction
---@field private Overridden UFunction @#if UE_VERSION_OLDER_THAN(5, 1, 0)     UPROPERTY()     UFunction* Overridden; #else
local ULuaFunction = {}

