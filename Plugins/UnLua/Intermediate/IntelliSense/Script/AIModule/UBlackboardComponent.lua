---@class UBlackboardComponent : UActorComponent
---@field protected BrainComp UBrainComponent @cached behavior tree component
---@field protected DefaultBlackboardAsset UBlackboardData @data asset defining entries. Will be used as part of InitializeComponent     call provided BlackboardAsset hasn't been already set (via a InitializeBlackboard     call).
---@field protected BlackboardAsset UBlackboardData
---@field protected KeyInstances TArray<UBlackboardKeyType> @instanced keys with custom data allocations
local UBlackboardComponent = {}

---@param KeyName string
---@param VectorValue FVector
function UBlackboardComponent:SetValueAsVector(KeyName, VectorValue) end

---@param KeyName string
---@param StringValue string
function UBlackboardComponent:SetValueAsString(KeyName, StringValue) end

---@param KeyName string
---@param VectorValue FRotator
function UBlackboardComponent:SetValueAsRotator(KeyName, VectorValue) end

---@param KeyName string
---@param ObjectValue UObject
function UBlackboardComponent:SetValueAsObject(KeyName, ObjectValue) end

---@param KeyName string
---@param NameValue string
function UBlackboardComponent:SetValueAsName(KeyName, NameValue) end

---@param KeyName string
---@param IntValue integer
function UBlackboardComponent:SetValueAsInt(KeyName, IntValue) end

---@param KeyName string
---@param FloatValue number
function UBlackboardComponent:SetValueAsFloat(KeyName, FloatValue) end

---@param KeyName string
---@param EnumValue integer
function UBlackboardComponent:SetValueAsEnum(KeyName, EnumValue) end

---@param KeyName string
---@param ClassValue TSubclassOf_UObject_
function UBlackboardComponent:SetValueAsClass(KeyName, ClassValue) end

---@param KeyName string
---@param BoolValue boolean
function UBlackboardComponent:SetValueAsBool(KeyName, BoolValue) end

---If the vector value has been set (and not cleared), this function returns true (indicating that the value should be valid).  If it's not set, the vector value is invalid and this function will return false.  (Also returns false if the key specified does not hold a vector.)
---@param KeyName string
---@return boolean
function UBlackboardComponent:IsVectorValueSet(KeyName) end

---@param KeyName string
---@return FVector
function UBlackboardComponent:GetValueAsVector(KeyName) end

---@param KeyName string
---@return string
function UBlackboardComponent:GetValueAsString(KeyName) end

---@param KeyName string
---@return FRotator
function UBlackboardComponent:GetValueAsRotator(KeyName) end

---@param KeyName string
---@return UObject
function UBlackboardComponent:GetValueAsObject(KeyName) end

---@param KeyName string
---@return string
function UBlackboardComponent:GetValueAsName(KeyName) end

---@param KeyName string
---@return integer
function UBlackboardComponent:GetValueAsInt(KeyName) end

---@param KeyName string
---@return number
function UBlackboardComponent:GetValueAsFloat(KeyName) end

---@param KeyName string
---@return integer
function UBlackboardComponent:GetValueAsEnum(KeyName) end

---@param KeyName string
---@return TSubclassOf_UObject_
function UBlackboardComponent:GetValueAsClass(KeyName) end

---@param KeyName string
---@return boolean
function UBlackboardComponent:GetValueAsBool(KeyName) end

---return false if call failed (most probably no such entry in BB)
---@param KeyName string
---@param ResultRotation FRotator @[out] 
---@return boolean
function UBlackboardComponent:GetRotationFromEntry(KeyName, ResultRotation) end

---return false if call failed (most probably no such entry in BB)
---@param KeyName string
---@param ResultLocation FVector @[out] 
---@return boolean
function UBlackboardComponent:GetLocationFromEntry(KeyName, ResultLocation) end

---@param KeyName string
function UBlackboardComponent:ClearValue(KeyName) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBlackboardComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBlackboardComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBlackboardComponent:AddAssetUserDataOfClass(InUserDataClass) end

