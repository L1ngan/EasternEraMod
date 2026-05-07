---Contains settings and working data shared among many Niagara systems that share some commonality of type, for example ImpactFX vs EnvironmentalFX.
---Main usage of effect types is to control scalability settings for a group of effects, setting visibility and cull reactions on a per-platform basis.
---Effect types can also be used for validation, checking that the content passes all the configured validation rule sets.
---The effect type is set in Niagara systems in the system properties.
---@class UNiagaraEffectType : UObject
---@field public bAllowCullingForLocalPlayers boolean @Controls whether or not culling is allowed for FX that are owned by, attached to or instigated by a locally controlled pawn.
---@field public UpdateFrequency ENiagaraScalabilityUpdateFrequency @How regularly effects of this type are checked for scalability.
---@field public CullReaction ENiagaraCullReaction @How effects of this type react when they fail the cull checks. Applied to all effects using this effect type and can not be overridden per effect.
---@field public SignificanceHandler UNiagaraSignificanceHandler @Used to determine the relative significance of FX in the scene which is used in other scalability systems such as instance count culling.
---@field public SystemScalabilitySettings FNiagaraSystemScalabilitySettingsArray
---@field public EmitterScalabilitySettings FNiagaraEmitterScalabilitySettingsArray
---@field public ValidationRules TArray<UNiagaraValidationRule> @A set of rules to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule.
---@field public ValidationRuleSets TArray<UNiagaraValidationRuleSet> @Array of reusable rule sets to apply when checking content. To create your own rules, write a custom class that extends UNiagaraValidationRule.
---@field private PerformanceBaselineController UNiagaraBaselineController @Controls generation of performance baseline data for this effect type.
---@field private PerfBaselineStats FNiagaraPerfBaselineStats @Performance data gathered from the Baseline System. These give artists a good idea of the perf to aim for in their own FX.
---@field private PerfBaselineVersion FGuid @Version guid at the time these baseline stats were generated. Allows us to invalidate perf baseline results if there are significant performance optimizations
local UNiagaraEffectType = {}

