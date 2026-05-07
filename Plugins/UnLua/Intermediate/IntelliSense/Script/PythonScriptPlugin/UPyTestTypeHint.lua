---Used to verify if the generated Python stub is correctly type-hinted (if type hint is enabled). The stub is generated
---* in the project intermediate folder when the Python developer mode is enabled (Editor preferences). The type hints can
---* be checked in the stub itself or PythonScriptPlugin/Content/Python/test_type_hints.py can be loaded in a Python IDE that
---* supports type checking and look at the code to verify that there is not problems with the types.
---@class UPyTestTypeHint : UObject
---@field public BoolProp boolean @Check type hinted properties (setter/getter)
---@field public IntProp integer
---@field public FloatProp number
---@field public EnumProp EPyTestEnum
---@field public StringProp string
---@field public NameProp string
---@field public TextProp string
---@field public FieldPathProp Unknown
---@field public StructProp FPyTestStruct
---@field public ObjectProp UPyTestObject
---@field public StrArrayProp TArray<string>
---@field public NameArrayProp TArray<string>
---@field public TextArrayProp TArray<string>
---@field public ObjectArrayProp TArray<UObject>
---@field public SetProp TSet<string>
---@field public MapProp TMap<integer, string>
---@field public DelegateProp Delegate
---@field public MulticastDelegateProp MulticastDelegate
---@field public SlateTickDelegate Delegate @Members to facilitate testing particular Python API.
local UPyTestTypeHint = {}

---Check type hinted constants
---@return string
function UPyTestTypeHint.GetStringConst() end

---@return integer
function UPyTestTypeHint.GetIntConst() end

---@param InOutString string @[out] 
---@return integer
function UPyTestTypeHint.CheckTupleReturnType(InOutString) end

---@param Param1 string
---@param Param2 string @[opt] 
---@return string
function UPyTestTypeHint:CheckTextTypeHints(Param1, Param2) end

---@param Param1 FPyTestStruct
---@param Param2 FPyTestStruct @[opt] 
---@return FPyTestStruct
function UPyTestTypeHint:CheckStructTypeHints(Param1, Param2) end

---@param Param1 string
---@param Param2 string @[opt] 
---@return string
function UPyTestTypeHint:CheckStringTypeHints(Param1, Param2) end

---@param Param1 boolean
---@param Param2 integer
---@param Param3 number
---@param Param4 string
---@return boolean
function UPyTestTypeHint.CheckStaticFunction(Param1, Param2, Param3, Param4) end

---@param Param1 TSet_string_
---@param Param2 TSet_string_
---@param Param3 TSet_UObject_
---@return TSet_string_
function UPyTestTypeHint:CheckSetTypeHints(Param1, Param2, Param3) end

---@param Param1 UPyTestObject
---@param Param4 UPyTestObject @[opt] 
---@return UPyTestObject
function UPyTestTypeHint:CheckObjectTypeHints(Param1, Param4) end

---@param Param1 string
---@param Param2 string @[opt] 
---@return string
function UPyTestTypeHint:CheckNameTypeHints(Param1, Param2) end

---@param Param1 TMap_integer__string_
---@param Param2 TMap_integer__string_
---@param Param3 TMap_integer__string_
---@param Param4 TMap_integer__UObject_
---@return TMap_string__UObject_
function UPyTestTypeHint:CheckMapTypeHints(Param1, Param2, Param3, Param4) end

---@param Param1 integer
---@param Param2 integer @[opt] 
---@param Param3 integer @[opt] 
---@return integer
function UPyTestTypeHint:CheckIntegerTypeHints(Param1, Param2, Param3) end

---@param Param1 number
---@param Param2 number
---@param Param3 number @[opt] 
---@param Param4 number @[opt] 
---@return number
function UPyTestTypeHint:CheckFloatTypeHints(Param1, Param2, Param3, Param4) end

---@param Param1 Unknown
---@return Unknown
function UPyTestTypeHint:CheckFieldPathTypeHints(Param1) end

---@param Param1 EPyTestEnum
---@param Param2 EPyTestEnum @[opt] 
---@return EPyTestEnum
function UPyTestTypeHint:CheckEnumTypeHints(Param1, Param2) end

---@param Param1 Delegate
---@return Delegate
function UPyTestTypeHint:CheckDelegateTypeHints(Param1) end

---Check type hinted methods.
---@param bParam1 boolean
---@param bParam2 boolean @[opt] 
---@param bParam3 boolean @[opt] 
---@return boolean
function UPyTestTypeHint:CheckBoolTypeHints(bParam1, bParam2, bParam3) end

---@param Param1 TArray_string_
---@param Param2 TArray_string_
---@param Param3 TArray_string_
---@param Param4 TArray_UObject_
---@return TArray_string_
function UPyTestTypeHint:CheckArrayTypeHints(Param1, Param2, Param3, Param4) end

