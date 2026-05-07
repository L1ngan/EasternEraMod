---This validation rule checks to see if you have exposed user data interfaces.
---@class UNiagaraValidationRule_UserDataInterfaces : UNiagaraValidationRule
---@field public bOnlyIncludeExposedUObjects boolean @Only include data interfaces that contain exposed UObject properties in them.
---@field public BannedDataInterfaces TArray<TSubclassOf<UNiagaraDataInterface>> @List data interfaces to validate against, if this list is empty all data interfaces will be included.
---@field public AllowDataInterfaces TArray<TSubclassOf<UNiagaraDataInterface>> @List data interfaces that we always allow.
---@field public Severity ENiagaraValidationSeverity @How do we want to repro the error in the stack
local UNiagaraValidationRule_UserDataInterfaces = {}

