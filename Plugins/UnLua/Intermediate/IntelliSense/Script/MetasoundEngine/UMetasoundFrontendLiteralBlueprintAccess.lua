---Blueprint support for FMetasoundFrontendLiteral
---@class UMetasoundFrontendLiteralBlueprintAccess : UBlueprintFunctionLibrary
local UMetasoundFrontendLiteralBlueprintAccess = {}

---@param Literal FMetasoundFrontendLiteral
---@return EMetasoundFrontendLiteralType
function UMetasoundFrontendLiteralBlueprintAccess.GetType(Literal) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return string
function UMetasoundFrontendLiteralBlueprintAccess.GetStringValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_string_
function UMetasoundFrontendLiteralBlueprintAccess.GetStringArrayValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UObject
function UMetasoundFrontendLiteralBlueprintAccess.GetObjectValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_UObject_
function UMetasoundFrontendLiteralBlueprintAccess.GetObjectArrayValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return integer
function UMetasoundFrontendLiteralBlueprintAccess.GetIntValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_integer_
function UMetasoundFrontendLiteralBlueprintAccess.GetIntArrayValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return number
function UMetasoundFrontendLiteralBlueprintAccess.GetFloatValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_number_
function UMetasoundFrontendLiteralBlueprintAccess.GetFloatArrayValueFromLiteral(Literal, OutResult) end

---Value accessors
---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return boolean
function UMetasoundFrontendLiteralBlueprintAccess.GetBoolValueFromLiteral(Literal, OutResult) end

---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_boolean_
function UMetasoundFrontendLiteralBlueprintAccess.GetBoolArrayValueFromLiteral(Literal, OutResult) end

---@param Value string
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateStringMetaSoundLiteral(Value) end

---@param Value TArray_string_
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateStringArrayMetaSoundLiteral(Value) end

---@param Value UObject
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateObjectMetaSoundLiteral(Value) end

---@param Value TArray_UObject_
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateObjectArrayMetaSoundLiteral(Value) end

---@param Param FAudioParameter
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateMetaSoundLiteralFromParam(Param) end

---@param Value integer
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateIntMetaSoundLiteral(Value) end

---@param Value TArray_integer_
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateIntArrayMetaSoundLiteral(Value) end

---@param Value number
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateFloatMetaSoundLiteral(Value) end

---@param Value TArray_number_
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateFloatArrayMetaSoundLiteral(Value) end

---Literal creation
---@param Value boolean
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateBoolMetaSoundLiteral(Value) end

---@param Value TArray_boolean_
---@return FMetasoundFrontendLiteral
function UMetasoundFrontendLiteralBlueprintAccess.CreateBoolArrayMetaSoundLiteral(Value) end

---@param Literal FMetasoundFrontendLiteral
---@return string
function UMetasoundFrontendLiteralBlueprintAccess.Conv_MetaSoundLiteralToString(Literal) end

