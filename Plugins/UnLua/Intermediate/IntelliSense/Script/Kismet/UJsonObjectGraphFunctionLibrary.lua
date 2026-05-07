---@class UJsonObjectGraphFunctionLibrary : UBlueprintFunctionLibrary
local UJsonObjectGraphFunctionLibrary = {}

---! EXPERIMENTAL !
---Writes all objects in the provided object's package to a temporary file
---using the JsonObjectGraph format.
---@param Object UObject
---@param Label string
---@param Options FJsonStringifyOptions
---@param OutFilename string @[out] 
function UJsonObjectGraphFunctionLibrary.WritePackageToTempFile(Object, Label, Options, OutFilename) end

---! EXPERIMENTAL !
---Writes only the provided blueprint's Class and CDO to a temporary file
---using the JsonObjectGraph format. Always excludes editor only data.
---@param BP UBlueprint
---@param Label string
---@param Options FJsonStringifyOptions
---@param OutFilename string @[out] 
function UJsonObjectGraphFunctionLibrary.WriteBlueprintClassToTempFile(BP, Label, Options, OutFilename) end

---! EXPERIMENTAL !
---Writes the provided objects to a string output, using the JsonObjectGraph format. Reachable
---nested objects will be included automatically. Objects not within a root should be included in
---RootObjects if they want to be deeply represented in the result string
---Examples of invocation from python:
--- Print an object:
---     print( unreal.JsonObjectGraphFunctionLibrary.stringify([object], tuple()) )
--- Print a list objects:
---     print( unreal.JsonObjectGraphFunctionLibrary.stringify(objects, tuple()) )
--- Print an object's entire package:
---     print( unreal.JsonObjectGraphFunctionLibrary.stringify([unreal.EditorAssetLibrary.get_package_for_object(object)], tuple()) )
---@param RootObjects TArray_UObject_
---@param Options FJsonStringifyOptions
---@param ResultString string @[out] 
function UJsonObjectGraphFunctionLibrary.Stringify(RootObjects, Options, ResultString) end

