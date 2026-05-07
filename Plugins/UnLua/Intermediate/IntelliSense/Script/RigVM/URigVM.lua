---The RigVM is the main object for evaluating FRigVMByteCode instructions.
---It combines the byte code, a list of required function pointers for
---execute instructions and required memory in one class.
---@class URigVM : UObject
---@field public LiteralMemoryStorage FRigVMMemoryStorageStruct
---@field public DefaultWorkMemoryStorage FRigVMMemoryStorageStruct
---@field public DefaultDebugMemoryStorage FRigVMMemoryStorageStruct
---@field public ByteCodeStorage FRigVMByteCode @The byte code of the VM
---@field private Instructions FRigVMInstructionArray
---@field private FunctionNamesStorage TArray<string>
---@field private Parameters TArray<FRigVMParameter>
---@field private CachedVMHash integer
local URigVM = {}

---@param InParameterName string
---@param InValue FVector2D
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueVector2D(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue FVector
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueVector(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue FTransform
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueTransform(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue string
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueString(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue FQuat
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueQuat(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue string
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueName(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue integer
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueInt(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue number
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueFloat(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue number
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueDouble(InParameterName, InValue, InArrayIndex) end

---@param InParameterName string
---@param InValue boolean
---@param InArrayIndex integer @[opt] 
function URigVM:SetParameterValueBool(InParameterName, InValue, InArrayIndex) end

---returns the statistics information
---@return FRigVMStatistics
function URigVM:GetStatistics() end

---Returns the name of a function given its index
---@param InFunctionIndex integer
---@return string
function URigVM:GetRigVMFunctionName(InFunctionIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return FVector2D
function URigVM:GetParameterValueVector2D(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return FVector
function URigVM:GetParameterValueVector(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return FTransform
function URigVM:GetParameterValueTransform(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return string
function URigVM:GetParameterValueString(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return FQuat
function URigVM:GetParameterValueQuat(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return string
function URigVM:GetParameterValueName(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return integer
function URigVM:GetParameterValueInt(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return number
function URigVM:GetParameterValueFloat(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return number
function URigVM:GetParameterValueDouble(InParameterName, InArrayIndex) end

---@param InParameterName string
---@param InArrayIndex integer @[opt] 
---@return boolean
function URigVM:GetParameterValueBool(InParameterName, InArrayIndex) end

---@param Context FRigVMExtendedExecuteContext @[out] 
---@param InEntryName string @[opt] 
---@return boolean
function URigVM:Execute(Context, InEntryName) end

---Add a function for execute instructions to this VM.
---Execute instructions can then refer to the function by index.
---@param InRigVMStruct UScriptStruct
---@param InMethodName string
---@return integer
function URigVM:AddRigVMFunction(InRigVMStruct, InMethodName) end

