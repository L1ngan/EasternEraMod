---@class FNiagaraModuleDependency
---@field public Id string @Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge')
---@field public Type ENiagaraModuleDependencyType @Whether the dependency belongs before or after this module
---@field public ScriptConstraint ENiagaraModuleDependencyScriptConstraint @Specifies constraints related to the source script a modules provides as dependency.
---@field public RequiredVersion string @Specifies the version constraint that module providing the dependency must fulfill. Example usages: '1.2' requires the exact version 1.2 of the source script '1.2+' requires at least version 1.2, but any higher version is also ok '1.2-2.0' requires any version between 1.2 and 2.0
---@field public OnlyEvaluateInScriptUsage integer @This property can limit where the dependency is evaluated. By default, the dependency is enforced in all script usages
---@field public Description string @Detailed description of the dependency
local FNiagaraModuleDependency = {}
