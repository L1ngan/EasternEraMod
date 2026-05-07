---Test object for edit condition property checks
---Note: Currently only bool functions are supported (Including static).
---remaining are not used because currently not supported by edit condition parser
---@class UEditConditionTestObject : UObject
---@field public BoolProperty boolean
---@field public EnumProperty EditConditionTestEnum
---@field public ByteEnumProperty integer
---@field public DoubleProperty number
---@field public IntegerProperty integer
---@field public UintBitfieldProperty boolean
---@field public UObjectPtr UObject
---@field public SoftClassPtr TSoftClassPtr<UObject>
---@field public WeakObjectPtr TWeakObjectPtr<UObject>
local UEditConditionTestObject = {}

---Used in test cases that should fail, should not be able to execute a void function in edit condition
function UEditConditionTestObject:VoidFunction() end

---Used in test cases that should fail, should not be able to execute a void function in edit condition
function UEditConditionTestObject:StaticVoidFunction() end

---@return TWeakObjectPtr_UObject_
function UEditConditionTestObject.StaticGetWeakObjectPtrFunction() end

---@return UObject
function UEditConditionTestObject.StaticGetUObjectPtrFunction() end

---@return integer
function UEditConditionTestObject.StaticGetUintBitfieldFunction() end

---@return TSoftClassPtr_UObject_
function UEditConditionTestObject.StaticGetSoftClassPtrFunction() end

---@return integer
function UEditConditionTestObject.StaticGetIntegerFunction() end

---@return EditConditionTestEnum
function UEditConditionTestObject.StaticGetEnumFunction() end

---@return number
function UEditConditionTestObject.StaticGetDoubleFunction() end

---@return integer
function UEditConditionTestObject.StaticGetByteEnumFunction() end

---@return boolean
function UEditConditionTestObject.StaticGetBoolFunction() end

---@return TWeakObjectPtr_UObject_
function UEditConditionTestObject:GetWeakObjectPtrFunction() end

---@return UObject
function UEditConditionTestObject:GetUObjectPtrFunction() end

---@return integer
function UEditConditionTestObject:GetUintBitfieldFunction() end

---@return TSoftClassPtr_UObject_
function UEditConditionTestObject:GetSoftClassPtrFunction() end

---@return integer
function UEditConditionTestObject:GetIntegerFunction() end

---@return EditConditionTestEnum
function UEditConditionTestObject:GetEnumFunction() end

---@return number
function UEditConditionTestObject:GetDoubleFunction() end

---@return integer
function UEditConditionTestObject:GetByteEnumFunction() end

---@return boolean
function UEditConditionTestObject:GetBoolFunction() end

