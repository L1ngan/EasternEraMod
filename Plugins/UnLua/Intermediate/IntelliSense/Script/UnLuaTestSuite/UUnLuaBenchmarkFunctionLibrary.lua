---@class UUnLuaBenchmarkFunctionLibrary : UBlueprintFunctionLibrary
local UUnLuaBenchmarkFunctionLibrary = {}

function UUnLuaBenchmarkFunctionLibrary.StopTimer() end

function UUnLuaBenchmarkFunctionLibrary.Stop() end

---@param Title string
function UUnLuaBenchmarkFunctionLibrary.StartTimer(Title) end

---@param Title string
---@param N integer
function UUnLuaBenchmarkFunctionLibrary.Start(Title, N) end

