---A Rule which can be part of a MetaHuman verification test suite
---@class UMetaHumanVerificationRuleBase : UObject
local UMetaHumanVerificationRuleBase = {}

---Applies the rule to the asset and updates the verification report
---@param ToVerify UObject
---@param Report UMetaHumanAssetReport
---@param Options FMetaHumansVerificationOptions
function UMetaHumanVerificationRuleBase:Verify(ToVerify, Report, Options) end

