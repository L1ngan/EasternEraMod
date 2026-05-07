---Data interface that allows you to read rows from data tables.
---You can read data either using a list of filtered row names, directly by index.
---@class UNiagaraDataInterfaceDataTable : UNiagaraDataInterface
---@field private DataTable UDataTable @Default DataTable to use can be overriden using the parameter binding.
---@field private FilteredRowNames TArray<string> @List of Row Names to read from the DataTable.
---@field private ObjectParameterBinding FNiagaraUserParameterBinding @Parameter binding that can be used to override the default table.
---@field private bCreateFilteredTable boolean
local UNiagaraDataInterfaceDataTable = {}

