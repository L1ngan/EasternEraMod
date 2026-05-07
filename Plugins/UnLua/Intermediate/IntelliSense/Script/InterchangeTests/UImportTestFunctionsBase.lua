---This is the base class for any static class which provides test functions for an asset type.
---Note that test functions defined in derived classes must be defined as UFUNCTION(Exec)
---This ensures that default parameters are held as metadata.
---However these functions are in reality not designed to be called from the console.
---@class UImportTestFunctionsBase : UObject
local UImportTestFunctionsBase = {}

