---Can convert struct data from custom structs containing LWC data such as FVector3d into struct data suitable for Niagara simulations and vice versa.
---@class FNiagaraLwcStructConverter
---@field private LWCSize integer
---@field private SWCSize integer
---@field private ConversionSteps TArray<FNiagaraStructConversionStep>
local FNiagaraLwcStructConverter = {}
