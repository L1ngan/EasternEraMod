---set this to something larger than 0 to profile N runs
---@class URigVMHost : UObject
---@field public VMRuntimeSettings FRigVMRuntimeSettings
---@field protected VM URigVM
---@field protected UserDefinedStructGuidToPathName TMap<string, FSoftObjectPath>
---@field protected UserDefinedEnumToPathName TMap<string, FSoftObjectPath>
---@field private UserDefinedTypesInUse TSet<UObject>
---@field public DrawContainer FRigVMDrawContainer
---@field public EventQueue TArray<string> @The event name used during an update
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected AssetUserDataEditorOnly TArray<UAssetUserData> @Array of user data stored with the asset
---@field private VMSnapshotBeforeExecution URigVM
---@field private SnapshotContext FRigVMExtendedExecuteContext
---@field private bIsInDebugMode boolean @The current execution mode
local URigVMHost = {}

---@param InEventName string
---@return boolean
function URigVMHost:SupportsEvent(InEventName) end

---Returns the value of a given variable as a string
---@param InVariableName string
---@param InValue string
---@return boolean
function URigVMHost:SetVariableFromString(InVariableName, InValue) end

---Set the current fps
---@param InFramesPerSecond number
function URigVMHost:SetFramesPerSecond(InFramesPerSecond) end

---Set the current delta time
---@param InDeltaTime number
function URigVMHost:SetDeltaTime(InDeltaTime) end

---Set the current absolute time
---@param InAbsoluteTime number
---@param InSetDeltaTimeZero boolean @[opt] 
function URigVMHost:SetAbsoluteTime(InAbsoluteTime, InSetDeltaTimeZero) end

---Set the current absolute and delta times
---@param InAbsoluteTime number
---@param InDeltaTime number
function URigVMHost:SetAbsoluteAndDeltaTime(InAbsoluteTime, InDeltaTime) end

---Requests to run an event once
---@param InEventName string
---@param InEventIndex integer @[opt] 
function URigVMHost:RequestRunOnceEvent(InEventName, InEventIndex) end

---Requests to perform an init during the next execution
function URigVMHost:RequestInit() end

---Removes an event running once
---@param InEventName string
---@return boolean
function URigVMHost:RemoveRunOnceEvent(InEventName) end

---Returns true if this host requires the VM memory to be initialized
---@return boolean
function URigVMHost:IsInitRequired() end

---@return URigVM
function URigVMHost:GetVM() end

---Returns the type of a given variable
---@param InVariableName string
---@return string
function URigVMHost:GetVariableType(InVariableName) end

---Returns the value of a given variable as a string
---@param InVariableName string
---@return string
function URigVMHost:GetVariableAsString(InVariableName) end

---@return TArray_string_
function URigVMHost:GetSupportedEvents() end

---Returns the names of variables accessible in scripting
---@return TArray_string_
function URigVMHost:GetScriptAccessibleVariables() end

---@return FRigVMExtendedExecuteContext
function URigVMHost:GetExtendedExecuteContext() end

---Gets the current delta time
---@return number
function URigVMHost:GetDeltaTime() end

---Returns the current frames per second (this may change over time)
---@return number
function URigVMHost:GetCurrentFramesPerSecond() end

---Gets the current absolute time
---@return number
function URigVMHost:GetAbsoluteTime() end

---@param Outer UObject
---@param OptionalClass TSubclassOf_URigVMHost_
---@return TArray_URigVMHost_
function URigVMHost.FindRigVMHosts(Outer, OptionalClass) end

---Execute a user defined event
---@param InEventName string
---@return boolean
function URigVMHost:ExecuteEvent(InEventName) end

---Execute
---@param InEventName string
---@return boolean
function URigVMHost:Execute(InEventName) end

---Is valid for execution
---@return boolean
function URigVMHost:CanExecute() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URigVMHost:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URigVMHost:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URigVMHost:AddAssetUserDataOfClass(InUserDataClass) end

