---A collection of Rules which make up a verification test for a class of MetaHuman asset compatibility, for example
---groom compatibility, clothing compatibility, animation compatibility etc.
---@class UMetaHumanVerificationRuleCollection : UObject
---@field private Rules TArray<UMetaHumanVerificationRuleBase>
local UMetaHumanVerificationRuleCollection = {}

---Runs all registered rules against the Target. Compiles the results in OutReport.
---@param Target UObject
---@param Report UMetaHumanAssetReport
---@param Options FMetaHumansVerificationOptions
---@return UMetaHumanAssetReport
function UMetaHumanVerificationRuleCollection:ApplyAllRules(Target, Report, Options) end

---Adds a rule to this collection
---@param Rule UMetaHumanVerificationRuleBase
function UMetaHumanVerificationRuleCollection:AddVerificationRule(Rule) end

