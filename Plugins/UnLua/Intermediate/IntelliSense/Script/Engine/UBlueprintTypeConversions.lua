---@class UBlueprintTypeConversions : UObject
local UBlueprintTypeConversions = {}

---@param InSet TSet_integer_
---@return TSet_integer_
function UBlueprintTypeConversions.ConvertSetType(InSet) end

---@param InMap TMap_integer__integer_
---@return TMap_integer__integer_
function UBlueprintTypeConversions.ConvertMapType(InMap) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFVector4fToFVector4d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFVector4dToFVector4f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFVector3fToFVector3d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFVector3dToFVector3f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFVector2fToFVector2d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFVector2dToFVector2f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFTransform3fToFTransform3d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFTransform3dToFTransform3f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFRotator3fToFRotator3d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFRotator3dToFRotator3f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFQuat4fToFQuat4d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFQuat4dToFQuat4f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFPlane4fToFPlane4d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFPlane4dToFPlane4f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFMatrix44fToFMatrix44d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFMatrix44dToFMatrix44f(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFBox2fToFBox2d(InFromData) end

---@param InFromData integer
---@return integer
function UBlueprintTypeConversions.ConvertFBox2dToFBox2f(InFromData) end

---Container conversions
---@param InArray TArray_integer_
---@return TArray_integer_
function UBlueprintTypeConversions.ConvertArrayType(InArray) end

