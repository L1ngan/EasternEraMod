---@class UExporter : UObject
---@field public SupportedClass TSubclassOf<UObject> @Supported class of this exporter
---@field public ExportRootScope UObject @The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set Objects being exported that are contained within ExportRootScope will use just their name instead of a full path
---@field public FormatExtension TArray<string> @File extension to use for this exporter
---@field public FormatDescription TArray<string> @Descriptiong of the export format
---@field public PreferredFormatIndex integer @Index into FormatExtension/FormatDescription of the preferred export format.
---@field public TextIndent integer @Current indentation of spaces of the exported text
---@field public bText boolean @If true, this will export the data as text
---@field public bSelectedOnly boolean @If true, this will export only the selected objects
---@field public bForceFileOperations boolean @If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory)
---@field public ExportTask UAssetExportTask
local UExporter = {}

---Export the given object to file.  Overridden by script based exporters.
---@param Task UAssetExportTask
---@return boolean
function UExporter:ScriptRunAssetExportTask(Task) end

---Export the given objects to files.  Child classes do not override this, but they do provide an Export() function
---to do the resource-specific export work.
---@param ExportTasks TArray_UAssetExportTask_
---@return boolean
function UExporter.RunAssetExportTasks(ExportTasks) end

---Export the given object to file.  Child classes do not override this, but they do provide an Export() function
---to do the resource-specific export work.
---@param Task UAssetExportTask
---@return boolean
function UExporter.RunAssetExportTask(Task) end

