---A node which allows the user to build a set of arbitrary output types from an arbitrary set of input types by connecting their inner components.
---@class UNiagaraNodeConvert : UNiagaraNodeWithDynamicPins
---@field private AutowireSwizzle string @A swizzle string set externally to instruct the autowiring code.
---@field private AutowireMakeType FNiagaraTypeDefinition @A type def used when auto wiring up the convert node.
---@field private AutowireBreakType FNiagaraTypeDefinition
---@field private Connections TArray<FNiagaraConvertConnection> @The internal connections for this node.
---@field private bIsWiringShown boolean @Is the switcboard UI shown?
---@field private ExpandedItems TArray<FNiagaraConvertPinRecord> @Store of all sockets that are expanded.
local UNiagaraNodeConvert = {}

