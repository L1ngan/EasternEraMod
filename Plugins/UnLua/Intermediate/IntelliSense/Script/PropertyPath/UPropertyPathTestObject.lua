---@class UPropertyPathTestObject : UObject
---@field public Bool boolean
---@field public EnumOne integer
---@field public EnumTwo integer
---@field public EnumThree integer
---@field public EnumFour integer
---@field public Integer integer
---@field public String string
---@field public Float number
---@field public Struct FPropertyPathTestStruct
---@field public StructRef FPropertyPathTestStruct
---@field public StructConstRef FPropertyPathTestStruct
---@field public InnerObject UPropertyPathTestObject
local UPropertyPathTestObject = {}

---@param InStruct FPropertyPathTestStruct
function UPropertyPathTestObject:SetStructRef(InStruct) end

---@param InStruct FPropertyPathTestStruct
function UPropertyPathTestObject:SetStructConstRef(InStruct) end

---@param InStruct FPropertyPathTestStruct
function UPropertyPathTestObject:SetStruct(InStruct) end

---@param InFloat number
function UPropertyPathTestObject:SetFloat(InFloat) end

---@return FPropertyPathTestStruct
function UPropertyPathTestObject:GetStructRef() end

---@return FPropertyPathTestStruct
function UPropertyPathTestObject:GetStructConstRef() end

---@return FPropertyPathTestStruct
function UPropertyPathTestObject:GetStruct() end

---@return number
function UPropertyPathTestObject:GetFloat() end

