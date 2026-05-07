---@class UDataTableFunctionLibrary : UBlueprintFunctionLibrary
local UDataTableFunctionLibrary = {}

---Removes the row with the provided name from a Data Table.
---@param DataTable UDataTable
---@param RowName string
function UDataTableFunctionLibrary.RemoveDataTableRow(DataTable, RowName) end

---Get the row struct used by the given Data Table, if any
---@param Table UDataTable
---@return UScriptStruct
function UDataTableFunctionLibrary.GetDataTableRowStruct(Table) end

---@param Table UDataTable
---@param OutRowNames TArray_string_ @[out] 
function UDataTableFunctionLibrary.GetDataTableRowNames(Table, OutRowNames) end

---Get a Row from a DataTable given a RowName
---@param Table UDataTable
---@param RowName string
---@param OutRow FTableRowBase @[out] 
---@return boolean
function UDataTableFunctionLibrary.GetDataTableRowFromName(Table, RowName, OutRow) end

---Get the name of each column in this Data Table.
---@param Table UDataTable
---@param OutColumnNames TArray_string_ @[out] 
function UDataTableFunctionLibrary.GetDataTableColumnNames(Table, OutColumnNames) end

---Get the raw property name of a data table column from its friendly export name.
---@param Table UDataTable
---@param ColumnExportName string
---@param OutColumnName string @[out] 
---@return boolean
function UDataTableFunctionLibrary.GetDataTableColumnNameFromExportName(Table, ColumnExportName, OutColumnName) end

---Get the friendly export name of each column in this Data Table.
---@param Table UDataTable
---@param OutExportColumnNames TArray_string_ @[out] 
function UDataTableFunctionLibrary.GetDataTableColumnExportNames(Table, OutExportColumnNames) end

---Export from the DataTable all the row for one column. Export it as string. The row name is not included.
---@param DataTable UDataTable
---@param PropertyName string
---@return TArray_string_
function UDataTableFunctionLibrary.GetDataTableColumnAsString(DataTable, PropertyName) end

---Empty and fill a Data Table from JSON string.
---@param DataTable UDataTable
---@param JSONString string
---@param ImportRowStruct UScriptStruct @[opt] 
---@return boolean
function UDataTableFunctionLibrary.FillDataTableFromJSONString(DataTable, JSONString, ImportRowStruct) end

---Empty and fill a Data Table from JSON file.
---@param DataTable UDataTable
---@param JSONFilePath string
---@param ImportRowStruct UScriptStruct @[opt] 
---@return boolean
function UDataTableFunctionLibrary.FillDataTableFromJSONFile(DataTable, JSONFilePath, ImportRowStruct) end

---Empty and fill a Data Table from CSV string.
---@param DataTable UDataTable
---@param CSVString string
---@param ImportRowStruct UScriptStruct @[opt] 
---@return boolean
function UDataTableFunctionLibrary.FillDataTableFromCSVString(DataTable, CSVString, ImportRowStruct) end

---Empty and fill a Data Table from CSV file.
---@param DataTable UDataTable
---@param CSVFilePath string
---@param ImportRowStruct UScriptStruct @[opt] 
---@return boolean
function UDataTableFunctionLibrary.FillDataTableFromCSVFile(DataTable, CSVFilePath, ImportRowStruct) end

---Export a Data Table to JSON string.
---@param DataTable UDataTable
---@param OutJSONString string @[out] 
---@return boolean
function UDataTableFunctionLibrary.ExportDataTableToJSONString(DataTable, OutJSONString) end

---Export a Data Table to JSON file.
---@param DataTable UDataTable
---@param JSONFilePath string
---@return boolean
function UDataTableFunctionLibrary.ExportDataTableToJSONFile(DataTable, JSONFilePath) end

---Export a Data Table to CSV string.
---@param DataTable UDataTable
---@param OutCSVString string @[out] 
---@return boolean
function UDataTableFunctionLibrary.ExportDataTableToCSVString(DataTable, OutCSVString) end

---Export a Data Table to CSV file.
---@param DataTable UDataTable
---@param CSVFilePath string
---@return boolean
function UDataTableFunctionLibrary.ExportDataTableToCSVFile(DataTable, CSVFilePath) end

---@param CurveTable UCurveTable
---@param RowName string
---@param InXY number
---@param OutResult integer @[out] 
---@param OutXY number @[out] 
---@param ContextString string
function UDataTableFunctionLibrary.EvaluateCurveTableRow(CurveTable, RowName, InXY, OutResult, OutXY, ContextString) end

---Returns whether or not Table contains a row named RowName
---@param Table UDataTable
---@param RowName string
---@return boolean
function UDataTableFunctionLibrary.DoesDataTableRowExist(Table, RowName) end

---Add a row to a Data Table with the provided name and data.
---@param DataTable UDataTable
---@param RowName string
---@param RowData FTableRowBase
function UDataTableFunctionLibrary.AddDataTableRow(DataTable, RowName, RowData) end



---@param P0 UDataTable 
---@param P1 string 
---@param P2 lightuserdata 
---@return boolean
function UDataTableFunctionLibrary.GetTableDataRowFromName(P0, P1, P2) end


---@param P0 UDataTable 
---@param P1 string 
---@param P2 lightuserdata 
---@return boolean
function UDataTableFunctionLibrary.GetDataTableRowFromName(P0, P1, P2) end
