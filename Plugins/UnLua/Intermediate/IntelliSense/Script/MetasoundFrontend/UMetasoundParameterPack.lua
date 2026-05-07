---Here is the UObject BlueprintType that can be used in c++ and blueprint code. It holds a FMetasoundParamStorage
---instance and can pass it along to the audio system's SetObjectParameter function via an AudioProxy.
---@class UMetasoundParameterPack : UObject
local UMetasoundParameterPack = {}

---@param ParameterName string
---@param OnlyIfExists boolean @[opt] 
---@return ESetParamResult
function UMetasoundParameterPack:SetTrigger(ParameterName, OnlyIfExists) end

---@param ParameterName string
---@param InValue string
---@param OnlyIfExists boolean @[opt] 
---@return ESetParamResult
function UMetasoundParameterPack:SetString(ParameterName, InValue, OnlyIfExists) end

---@param ParameterName string
---@param InValue integer
---@param OnlyIfExists boolean @[opt] 
---@return ESetParamResult
function UMetasoundParameterPack:SetInt(ParameterName, InValue, OnlyIfExists) end

---@param ParameterName string
---@param InValue number
---@param OnlyIfExists boolean @[opt] 
---@return ESetParamResult
function UMetasoundParameterPack:SetFloat(ParameterName, InValue, OnlyIfExists) end

---@param ParameterName string
---@param InValue boolean
---@param OnlyIfExists boolean @[opt] 
---@return ESetParamResult
function UMetasoundParameterPack:SetBool(ParameterName, InValue, OnlyIfExists) end

---@return UMetasoundParameterPack
function UMetasoundParameterPack.MakeMetasoundParameterPack() end

---@param ParameterName string
---@return boolean
function UMetasoundParameterPack:HasTrigger(ParameterName) end

---@param ParameterName string
---@return boolean
function UMetasoundParameterPack:HasString(ParameterName) end

---@param ParameterName string
---@return boolean
function UMetasoundParameterPack:HasInt(ParameterName) end

---@param ParameterName string
---@return boolean
function UMetasoundParameterPack:HasFloat(ParameterName) end

---@param ParameterName string
---@return boolean
function UMetasoundParameterPack:HasBool(ParameterName) end

---@param ParameterName string
---@param Result ESetParamResult @[out] 
---@return boolean
function UMetasoundParameterPack:GetTrigger(ParameterName, Result) end

---@param ParameterName string
---@param Result ESetParamResult @[out] 
---@return string
function UMetasoundParameterPack:GetString(ParameterName, Result) end

---@param ParameterName string
---@param Result ESetParamResult @[out] 
---@return integer
function UMetasoundParameterPack:GetInt(ParameterName, Result) end

---@param ParameterName string
---@param Result ESetParamResult @[out] 
---@return number
function UMetasoundParameterPack:GetFloat(ParameterName, Result) end

---@param ParameterName string
---@param Result ESetParamResult @[out] 
---@return boolean
function UMetasoundParameterPack:GetBool(ParameterName, Result) end

