---@class UUnLuaTestFunctionLibrary : UBlueprintFunctionLibrary
local UUnLuaTestFunctionLibrary = {}

---@param Struct FUnLuaTestTableRow @[out] 
function UUnLuaTestFunctionLibrary.TestForIssue376(Struct) end

---@param InEnum integer @[opt] 
---@return boolean
function UUnLuaTestFunctionLibrary.TestForIssue331(InEnum) end

---@param Location FVector
---@param Rotation FRotator
---@param Vector2D FVector2D
---@param LinearColor FLinearColor @[opt] 
---@param Color FColor @[opt] 
---@return boolean
function UUnLuaTestFunctionLibrary.TestForIssue323(Location, Rotation, Vector2D, LinearColor, Color) end

---@param A string
---@param B integer
---@param Event Delegate
---@param Array TArray_FColor_
---@return integer
function UUnLuaTestFunctionLibrary.TestForIssue294(A, B, Event, Array) end

---@param A string
---@param B integer
---@param C TArray_FColor_
---@return integer
function UUnLuaTestFunctionLibrary.TestForIssue293(A, B, C) end

---@param A integer
---@param B integer @[out] 
---@param C integer @[out] 
---@return boolean
function UUnLuaTestFunctionLibrary.TestForBaseSpec2(A, B, C) end

---@param A integer
---@param B integer @[out] 
---@param C integer
---@param D string @[out] 
function UUnLuaTestFunctionLibrary.TestForBaseSpec1(A, B, C, D) end

