---@class UGLTFExporter : UExporter
local UGLTFExporter = {}

---Export the specified object to a glTF file (.gltf or .glb)
---@param Object UObject
---@param FilePath string
---@param Options UGLTFExportOptions
---@param SelectedActors TSet_AActor_
---@param OutMessages FGLTFExportMessages @[out] 
---@return boolean
function UGLTFExporter.ExportToGLTF(Object, FilePath, Options, SelectedActors, OutMessages) end

