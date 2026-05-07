---Internal Blueprint function library for creating default values of the SetCameraParameter node above.
---@class UCameraRigParameterInteropLibrary : UBlueprintFunctionLibrary
local UCameraRigParameterInteropLibrary = {}

---@param Value FVector3f
---@return FVector3f
function UCameraRigParameterInteropLibrary.MakeLiteralVector3f(Value) end

---@param Value FVector2D
---@return FVector2D
function UCameraRigParameterInteropLibrary.MakeLiteralVector2D(Value) end

---@param Value FVector
---@return FVector
function UCameraRigParameterInteropLibrary.MakeLiteralVector(Value) end

---@param Value FRotator
---@return FRotator
function UCameraRigParameterInteropLibrary.MakeLiteralRotator(Value) end

---@param Value FLinearColor
---@return FLinearColor
function UCameraRigParameterInteropLibrary.MakeLiteralLinearColor(Value) end

